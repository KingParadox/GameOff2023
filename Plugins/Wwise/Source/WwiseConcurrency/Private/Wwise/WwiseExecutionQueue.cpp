/*******************************************************************************
The content of this file includes portions of the proprietary AUDIOKINETIC Wwise
Technology released in source code form as part of the game integration package.
The content of this file may not be used without valid licenses to the
AUDIOKINETIC Wwise Technology.
Note that the use of the game engine is subject to the Unreal(R) Engine End User
License Agreement at https://www.unrealengine.com/en-US/eula/unreal
 
License Usage
 
Licensees holding valid licenses to the AUDIOKINETIC Wwise Technology may use
this file in accordance with the end user license agreement provided with the
software or, alternatively, in accordance with the terms contained
in a written agreement between you and Audiokinetic Inc.
Copyright (c) 2023 Audiokinetic Inc.
*******************************************************************************/

#include "Wwise/WwiseExecutionQueue.h"
#include "Async/TaskGraphInterfaces.h"
#include "HAL/Event.h"
#include "Misc/IQueuedWork.h"
#include "Wwise/WwiseConcurrencyModule.h"
#include "Wwise/Stats/AsyncStats.h"
#include "Wwise/Stats/Concurrency.h"

#include <inttypes.h>

const bool FWwiseExecutionQueue::Test::bExtremelyVerbose{ false };
WWISE_EXECUTIONQUEUE_TEST_CONST bool FWwiseExecutionQueue::Test::bMockEngineDeletion{ false };
WWISE_EXECUTIONQUEUE_TEST_CONST bool FWwiseExecutionQueue::Test::bMockEngineDeleted{ false };
WWISE_EXECUTIONQUEUE_TEST_CONST bool FWwiseExecutionQueue::Test::bMockSleepOnStateUpdate{ false };
WWISE_EXECUTIONQUEUE_TEST_CONST bool FWwiseExecutionQueue::Test::bReduceLogVerbosity{ false };

class FWwiseExecutionQueue::ExecutionQueuePoolTask
	: public IQueuedWork
{
public:
	ExecutionQueuePoolTask(TUniqueFunction<void()>&& InFunction)
		: Function(MoveTemp(InFunction))
	{ }

public:
	virtual void DoThreadedWork() override
	{
		Function();
		delete this;
	}

	virtual void Abandon() override
	{
	}

private:
	TUniqueFunction<void()> Function;
};


FWwiseExecutionQueue::FWwiseExecutionQueue(ENamedThreads::Type InNamedThread) :
	NamedThread(InNamedThread),
	ThreadPool(nullptr),
	bOwnedPool(false)
{
	ASYNC_INC_DWORD_STAT(STAT_WwiseExecutionQueues);
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue (%p) [%" PRIi32 "]: Creating in named thread %d"), this, FPlatformTLS::GetCurrentThreadId(), (int)InNamedThread);
}

FWwiseExecutionQueue::FWwiseExecutionQueue(FQueuedThreadPool* InThreadPool) :
	NamedThread(ENamedThreads::UnusedAnchor),
	ThreadPool(InThreadPool ? InThreadPool : GetDefaultThreadPool()),
	bOwnedPool(false)
{
	ASYNC_INC_DWORD_STAT(STAT_WwiseExecutionQueues);
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue (%p) [%" PRIi32 "]: Creating in thread pool %p"), this, FPlatformTLS::GetCurrentThreadId(), InThreadPool);
}

FWwiseExecutionQueue::FWwiseExecutionQueue(const TCHAR* InThreadName, EThreadPriority InThreadPriority, int32 InStackSize) :
	NamedThread(ENamedThreads::UnusedAnchor),
	ThreadPool(FQueuedThreadPool::Allocate()),
	bOwnedPool(true)
{
	ASYNC_INC_DWORD_STAT(STAT_WwiseExecutionQueues);
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue (%p) [%" PRIi32 "]: Creating new thread pool %p named %s"), this, FPlatformTLS::GetCurrentThreadId(), ThreadPool, InThreadName);
	verify(ThreadPool->Create(1, InStackSize, InThreadPriority, InThreadName));
}

FWwiseExecutionQueue::~FWwiseExecutionQueue()
{
	UE_CLOG(UNLIKELY(bDeleteOnceClosed && WorkerState.Load(EMemoryOrder::SequentiallyConsistent) != EWorkerState::Closed), LogWwiseConcurrency, Fatal, TEXT("Deleting FWwiseExectionQueue twice!"));

	Close();
	if (bOwnedPool)
	{
		delete ThreadPool;
	}
	ASYNC_DEC_DWORD_STAT(STAT_WwiseExecutionQueues);
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::~FWwiseExecutionQueue (%p) [%" PRIi32 "]: Deleted Execution Queue"), this, FPlatformTLS::GetCurrentThreadId());
}

void FWwiseExecutionQueue::Async(FBasicFunction&& InFunction)
{
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::Async (%p) [%" PRIi32 "]: Enqueuing async function %p"), this, FPlatformTLS::GetCurrentThreadId(), (intptr_t&)InFunction);
	if (UNLIKELY(IsBeingClosed() || !OpQueue.Enqueue(MoveTemp(InFunction))))
	{
		ASYNC_INC_DWORD_STAT(STAT_WwiseExecutionQueueAsyncCalls);
		UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::Async (%p) [%" PRIi32 "]: Executing async function %p"), this, FPlatformTLS::GetCurrentThreadId(), (intptr_t&)InFunction);
		InFunction();
		return;
	}
	StartWorkerIfNeeded();
}

void FWwiseExecutionQueue::AsyncAlways(FBasicFunction&& InFunction)
{
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::AsyncAlways (%p) [%" PRIi32 "]: Enqueuing async always function %p"), this, FPlatformTLS::GetCurrentThreadId(), (intptr_t&)InFunction);
	Async([this, CallerThreadId = FPlatformTLS::GetCurrentThreadId(), InFunction = MoveTemp(InFunction)]() mutable
	{
		if (CallerThreadId == FPlatformTLS::GetCurrentThreadId())
		{
			FFunctionGraphTask::CreateAndDispatchWhenReady([this, InFunction = MoveTemp(InFunction)]
			{
				UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::AsyncAlways (%p) [%" PRIi32 "]: Executing function %p in TaskGraph"), this, FPlatformTLS::GetCurrentThreadId(), (intptr_t&)InFunction);
				InFunction();
			});
		}
		else
		{
			UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::AsyncAlways (%p) [%" PRIi32 "]: Executing function %p in worker thread"), this, FPlatformTLS::GetCurrentThreadId(), (intptr_t&)InFunction);
			InFunction();
		}
	});
}

void FWwiseExecutionQueue::AsyncWait(FBasicFunction&& InFunction)
{
	SCOPED_WWISECONCURRENCY_EVENT_4(TEXT("FWwiseExecutionQueue::AsyncWait"));
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::AsyncWait (%p) [%" PRIi32 "]: Enqueuing async wait function %p"), this, FPlatformTLS::GetCurrentThreadId(), (intptr_t&)InFunction);
	FEventRef Event(EEventMode::ManualReset);
	if (UNLIKELY(IsBeingClosed() || !OpQueue.Enqueue([this, &Event, &InFunction] {
		ASYNC_INC_DWORD_STAT(STAT_WwiseExecutionQueueAsyncWaitCalls);
		UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::AsyncWait (%p) [%" PRIi32 "]: Executing async wait function %p"), this, FPlatformTLS::GetCurrentThreadId(), (intptr_t&)InFunction);
		InFunction();
		Event->Trigger();
	})))
	{
		UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::AsyncWait (%p) [%" PRIi32 "]: Executing async wait function %p synchronously!"), this, FPlatformTLS::GetCurrentThreadId(), (intptr_t&)InFunction);
		InFunction();
		return;
	}
	StartWorkerIfNeeded();
	Event->Wait();
}

void FWwiseExecutionQueue::Close()
{
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::Close (%p) [%" PRIi32 "]: Closing"), this, FPlatformTLS::GetCurrentThreadId());
	if (IsBeingClosed())
	{
		return;
	}

	AsyncWait([this]
	{
		TrySetRunningWorkerToClosing();
	});

	auto State = WorkerState.Load(EMemoryOrder::Relaxed);
	if (State != EWorkerState::Closed)
	{
		SCOPED_WWISECONCURRENCY_EVENT_4(TEXT("FWwiseExecutionQueue::Close Waiting"));
		UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::Close (%p) [%" PRIi32 "]: Waiting for Closed"), this, FPlatformTLS::GetCurrentThreadId());
		while (State != EWorkerState::Closed)
		{
			FPlatformProcess::Yield();
			State = WorkerState.Load(EMemoryOrder::Relaxed);
		}
	}
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::Close (%p) [%" PRIi32 "]: Done Closing"), this, FPlatformTLS::GetCurrentThreadId());
}

void FWwiseExecutionQueue::CloseAndDelete()
{
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::Close (%p) [%" PRIi32 "]: Closing and Request Deleting"), this, FPlatformTLS::GetCurrentThreadId());
	bDeleteOnceClosed = true;
	FEvent* CloseAndDeleteFunctionReturned = FPlatformProcess::GetSynchEventFromPool();		// We must wait for the Async to be done before the Worker thread can "delete this".
	
	Async([CloseAndDeleteFunctionReturned, this]
	{
		if (CloseAndDeleteFunctionReturned)
		{
			CloseAndDeleteFunctionReturned->Wait();
			FPlatformProcess::ReturnSynchEventToPool(CloseAndDeleteFunctionReturned);
		}
		else
		{
			FPlatformProcess::Yield();
		}
		TrySetRunningWorkerToClosing();
	});
	if (CloseAndDeleteFunctionReturned)
	{
		CloseAndDeleteFunctionReturned->Trigger();
	}
}

bool FWwiseExecutionQueue::IsBeingClosed() const
{
	const auto State = WorkerState.Load(EMemoryOrder::Relaxed);
	return UNLIKELY(State == EWorkerState::Closed || State == EWorkerState::Closing);
}

bool FWwiseExecutionQueue::IsClosed() const
{
	const auto State = WorkerState.Load(EMemoryOrder::Relaxed);
	return State == EWorkerState::Closed;
}

FQueuedThreadPool* FWwiseExecutionQueue::GetDefaultThreadPool()
{
	auto* ConcurrencyModule = IWwiseConcurrencyModule::GetModule();
	if (UNLIKELY(!ConcurrencyModule))
	{
		return nullptr;
	}
	return ConcurrencyModule->GetExecutionQueueThreadPool();
}

void FWwiseExecutionQueue::StartWorkerIfNeeded()
{
	if (!TrySetRunningWorkerToAddOp() && TrySetStoppedWorkerToRunning())
	{
		if (UNLIKELY(!IWwiseConcurrencyModule::GetModule() || Test::bMockEngineDeletion || Test::bMockEngineDeleted))
		{
			if (UNLIKELY(!FTaskGraphInterface::IsRunning() || Test::bMockEngineDeleted))
			{
				UE_CLOG(!Test::bMockEngineDeleted, LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::StartWorkerIfNeeded (%p) [%" PRIi32 "]: No Task Graph. Do tasks now"), this, FPlatformTLS::GetCurrentThreadId());
				Work();
			}
			else
			{
				UE_CLOG(!Test::bMockEngineDeletion, LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::StartWorkerIfNeeded (%p) [%" PRIi32 "]: Concurrency is not available. Starting new worker thread on Task Graph"), this, FPlatformTLS::GetCurrentThreadId());
				FFunctionGraphTask::CreateAndDispatchWhenReady([this]
				{
					Work();
				});
			}
		}
		else if (ThreadPool)
		{
			UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::StartWorkerIfNeeded (%p) [%" PRIi32 "]: Starting new worker thread on thread pool %p"), this, FPlatformTLS::GetCurrentThreadId(), ThreadPool);
			ThreadPool->AddQueuedWork(new ExecutionQueuePoolTask([this]
			{
				Work();
			}));
		}
		else
		{
			UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::StartWorkerIfNeeded (%p) [%" PRIi32 "]: Starting new worker thread on named thread %d"), this, FPlatformTLS::GetCurrentThreadId(), (int)NamedThread);
			FFunctionGraphTask::CreateAndDispatchWhenReady([this]
			{
				Work();
			}, TStatId{}, nullptr, NamedThread);
		}
	}
}

void FWwiseExecutionQueue::Work()
{
	SCOPED_WWISECONCURRENCY_EVENT_4(TEXT("FWwiseExecutionQueue::Work"));
	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::Work (%p) [%" PRIi32 "]: Started worker."), this, FPlatformTLS::GetCurrentThreadId());

	do
	{
		ProcessWork();
	}
	while (KeepWorking());
}

bool FWwiseExecutionQueue::KeepWorking()
{
	const auto CurrentThreadId = FPlatformTLS::GetCurrentThreadId();
	const auto bDeleteOnceClosedCopy = this->bDeleteOnceClosed;

	if (LIKELY(TrySetRunningWorkerToStopped()))
	{
		UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::KeepWorking (%p) [%" PRIi32 "]: Stopped worker."), this, CurrentThreadId);
		// We don't have any more operations queued. Done.
		// Don't execute operations here, as the Execution Queue might be deleted here.
		return false;
	}
	else if (LIKELY(TrySetClosingWorkerToClosed()))
	{
		// We were exiting and we don't have operations anymore. Immediately return, as our worker is not valid at this point.
		// Don't do any operations here!

		if (bDeleteOnceClosedCopy)		// We use a copy since the deletion might've already occurred
		{
			FFunctionGraphTask::CreateAndDispatchWhenReady([this]
			{
				SCOPED_WWISECONCURRENCY_EVENT_4(TEXT("FWwiseExecutionQueue::KeepWorking DeleteOnceClosed"));
				UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue::KeepWorking (%p) [%" PRIi32 "]: Auto deleting on Any Thread"), this, FPlatformTLS::GetCurrentThreadId());
				delete this;
			}, TStatId{}, nullptr, ENamedThreads::GameThread);
		}
		return false;
	}

	// Error cases
	else if (UNLIKELY(WorkerState.Load() == EWorkerState::Closed))
	{
		UE_LOG(LogWwiseConcurrency, Error, TEXT("FWwiseExecutionQueue::KeepWorking (%p) [%" PRIi32 "]: Worker is closed, but we are still looping."), this, CurrentThreadId);
		return false;
	}
	else if (UNLIKELY(WorkerState.Load() == EWorkerState::Stopped))
	{
		UE_LOG(LogWwiseConcurrency, Error, TEXT("FWwiseExecutionQueue::KeepWorking (%p) [%" PRIi32 "]: Worker is stopped, but we haven't stopped it ourselves."), this, CurrentThreadId);
		return false;
	}

	// Keep running (AddOp)
	return true;
}

void FWwiseExecutionQueue::ProcessWork()
{
	TrySetAddOpWorkerToRunning();
	FBasicFunction Op;
	while (OpQueue.Dequeue(Op))
	{
		Op();
	}
}

bool FWwiseExecutionQueue::TrySetStoppedWorkerToRunning()
{
	return TryStateUpdate(EWorkerState::Stopped, EWorkerState::Running);

}

bool FWwiseExecutionQueue::TrySetRunningWorkerToStopped()
{
	return TryStateUpdate(EWorkerState::Running, EWorkerState::Stopped);
}

bool FWwiseExecutionQueue::TrySetRunningWorkerToAddOp()
{
	return TryStateUpdate(EWorkerState::Running, EWorkerState::AddOp);
}

bool FWwiseExecutionQueue::TrySetAddOpWorkerToRunning()
{
	return TryStateUpdate(EWorkerState::AddOp, EWorkerState::Running);
}

bool FWwiseExecutionQueue::TrySetRunningWorkerToClosing()
{
	return TryStateUpdate(EWorkerState::Running, EWorkerState::Closing)
		|| TryStateUpdate(EWorkerState::AddOp, EWorkerState::Closing)
		|| TryStateUpdate(EWorkerState::Stopped, EWorkerState::Closing);
	// Warning: Try not to do operations past this method returning "true". There's a slight chance "this" might be deleted!
}

bool FWwiseExecutionQueue::TrySetClosingWorkerToClosed()
{
	return TryStateUpdate(EWorkerState::Closing, EWorkerState::Closed);
	// Warning: NEVER do operations past this method returning "true". "this" is probably deleted!
}

const TCHAR* FWwiseExecutionQueue::StateName(EWorkerState State)
{
	switch (State)
	{
	case EWorkerState::Stopped: return TEXT("Stopped");
	case EWorkerState::Running: return TEXT("Running");
	case EWorkerState::AddOp: return TEXT("AddOp");
	case EWorkerState::Closing: return TEXT("Closing");
	case EWorkerState::Closed: return TEXT("Closed");
	default: return TEXT("UNKNOWN");
	}
}

bool FWwiseExecutionQueue::TryStateUpdate(EWorkerState NeededState, EWorkerState WantedState)
{
	EWorkerState PreviousState = NeededState;
	bool bResult = WorkerState.CompareExchange(PreviousState, WantedState);
	bResult = bResult && PreviousState == NeededState;

	UE_CLOG(Test::IsExtremelyVerbose(), LogWwiseConcurrency, VeryVerbose, TEXT("FWwiseExecutionQueue (%p) [%" PRIi32 "]: %s %s [%s -> %s] %s %s"), this, FPlatformTLS::GetCurrentThreadId(),
		StateName(PreviousState),
		bResult ? TEXT("==>") : TEXT("XX>"),
		StateName(NeededState), StateName(WantedState),
		bResult ? TEXT("==>") : TEXT("XX>"),
		bResult ? StateName(WantedState) : StateName(PreviousState));

	if (UNLIKELY(Test::bMockSleepOnStateUpdate))
	{
		FPlatformProcess::Sleep(0.0001f);
	}
	return bResult;
}
