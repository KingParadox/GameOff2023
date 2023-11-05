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

#include "Wwise/WwiseFileState.h"
#include "Wwise/Stats/AsyncStats.h"

#include <inttypes.h>

#include "Wwise/WwiseStreamableFileStateInfo.h"

FWwiseFileState::~FWwiseFileState()
{
	SCOPED_WWISEFILEHANDLER_EVENT_3(TEXT("FWwiseFileState::~FWwiseFileState"));
	UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::~FWwiseFileState %p (dtor)"), this);
	UE_CLOG(FileStateExecutionQueue, LogWwiseFileHandler, Error, TEXT("Closing the File State without closing the execution queue."));
	if (LoadCount > 0)
	{
		UE_LOG(LogWwiseFileHandler, Error, TEXT("Deleting FWwiseFileState %p with LoadCount still active!"), this);
	}
}

void FWwiseFileState::IncrementCountAsync(EWwiseFileStateOperationOrigin InOperationOrigin,
	FIncrementCountCallback&& InCallback)
{
	SCOPED_WWISEFILEHANDLER_EVENT_4(TEXT("FWwiseFileState::IncrementCountAsync"));
	if (UNLIKELY(!FileStateExecutionQueue))
	{
		UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::IncrementCountAsync on a termed asset! Failing immediately!"));
		return InCallback(false);
	}

	FWwiseAsyncCycleCounter OpCycleCounter(GET_STATID(STAT_WwiseFileHandlerStateOperationLatency));
	
	++OpenedInstances;
	AsyncOp([this, InOperationOrigin, OpCycleCounter = MoveTemp(OpCycleCounter), InCallback = MoveTemp(InCallback)]() mutable
	{
		SCOPED_WWISEFILEHANDLER_EVENT_4(TEXT("FWwiseFileState::IncrementCountAsync Async"));
		INC_DWORD_STAT(STAT_WwiseFileHandlerStateOperationsBeingProcessed);
		UE_CLOG(CreationOpOrder == 0, LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountAsync %p %s %" PRIu32 ": Initial loading."), this, GetManagingTypeName(), GetShortId());

		const auto CurrentOpOrder = CreationOpOrder++;
		IncrementCount(InOperationOrigin, CurrentOpOrder, [OpCycleCounter = MoveTemp(OpCycleCounter), InCallback = MoveTemp(InCallback), CurrentOpOrder](bool bInResult) mutable
		{
			IncrementCountAsyncDone(MoveTemp(OpCycleCounter), MoveTemp(InCallback), bInResult);
		});
	});
}

void FWwiseFileState::IncrementCountAsyncDone(FWwiseAsyncCycleCounter&& InOpCycleCounter, FIncrementCountCallback&& InCallback, bool bInResult)
{
	SCOPED_WWISEFILEHANDLER_EVENT_4(TEXT("FWwiseFileState::IncrementCountAsync Callback"));
	InOpCycleCounter.Stop();
	DEC_DWORD_STAT(STAT_WwiseFileHandlerStateOperationsBeingProcessed);
	InCallback(bInResult);
}

void FWwiseFileState::DecrementCountAsync(EWwiseFileStateOperationOrigin InOperationOrigin,
	FDeleteFileStateFunction&& InDeleteState, FDecrementCountCallback&& InCallback)
{
	SCOPED_WWISEFILEHANDLER_EVENT_4(TEXT("FWwiseFileState::DecrementCountAsync"));
	if (UNLIKELY(!FileStateExecutionQueue))
	{
		UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::DecrementCountAsync on a termed asset! Failing immediately!"));
		return InCallback();
	}

	FWwiseAsyncCycleCounter OpCycleCounter(GET_STATID(STAT_WwiseFileHandlerStateOperationLatency));
	
	AsyncOp([this, InOperationOrigin, OpCycleCounter = MoveTemp(OpCycleCounter), InDeleteState = MoveTemp(InDeleteState), InCallback = MoveTemp(InCallback)]() mutable
	{
		SCOPED_WWISEFILEHANDLER_EVENT_4(TEXT("FWwiseFileState::DecrementCountAsync Async"));
		INC_DWORD_STAT(STAT_WwiseFileHandlerStateOperationsBeingProcessed);
		const auto CurrentOpOrder = CreationOpOrder++;
		DecrementCount(InOperationOrigin, CurrentOpOrder, MoveTemp(InDeleteState), [OpCycleCounter = MoveTemp(OpCycleCounter), InCallback = MoveTemp(InCallback), CurrentOpOrder]() mutable
		{
			DecrementCountAsyncDone(MoveTemp(OpCycleCounter), MoveTemp(InCallback));
		});
	});
}

void FWwiseFileState::DecrementCountAsyncDone(FWwiseAsyncCycleCounter&& InOpCycleCounter, FDecrementCountCallback&& InCallback)
{
	SCOPED_WWISEFILEHANDLER_EVENT_4(TEXT("FWwiseFileState::DecrementCountAsyncDone Callback"));
	InOpCycleCounter.Stop();
	DEC_DWORD_STAT(STAT_WwiseFileHandlerStateOperationsBeingProcessed);
	InCallback();
}

bool FWwiseFileState::CanDelete() const
{
	return OpenedInstances.load() == 0 && State == EState::Closed && LoadCount == 0;
}

FWwiseFileState::FWwiseFileState():
	LoadCount(0),
	StreamingCount(0),
	State(EState::Closed)
{
	UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::FWwiseFileState %p (ctor)"), this);
}

void FWwiseFileState::Term()
{
	SCOPED_WWISEFILEHANDLER_EVENT_3(TEXT("FWwiseFileState::Term"));
	if (UNLIKELY(!FileStateExecutionQueue))
	{
		UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::Term %p %s %" PRIu32 " already Term!"), this, GetManagingTypeName(), GetShortId());
		return;
	}
	if (UNLIKELY(OpenedInstances.load() > 0))
	{
		UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::Term %p %s %" PRIu32 ": Terminating with activate states."), this, GetManagingTypeName(), GetShortId());
	}
	UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::Term %p %s %" PRIu32 ": Terminating."), this, GetManagingTypeName(), GetShortId());
	UE_CLOG(!IsEngineExitRequested() && UNLIKELY(State != EState::Closed), LogWwiseFileHandler, Warning, TEXT("FWwiseFileState::Term %s State: Term unclosed file state %" PRIu32 ". Leaking."), GetManagingTypeName(), GetShortId());
	UE_CLOG(IsEngineExitRequested() && State != EState::Closed, LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::Term %s State: Term unclosed file state %" PRIu32 " at exit. Leaking."), GetManagingTypeName(), GetShortId());
	UE_CLOG(LoadCount != 0, LogWwiseFileHandler, Log, TEXT("FWwiseFileState::Term %p %s %" PRIu32 " when there are still %d load count"), this, GetManagingTypeName(), GetShortId(), LoadCount);

	FileStateExecutionQueue->CloseAndDelete(); FileStateExecutionQueue = nullptr;
}

void FWwiseFileState::IncrementCount(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
                                     FIncrementCountCallback&& InCallback)
{
	IncrementLoadCount(InOperationOrigin);

	IncrementCountOpen(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));
}

void FWwiseFileState::IncrementCountOpen(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
	FIncrementCountCallback&& InCallback)
{
	SCOPED_WWISEFILEHANDLER_EVENT_F_3(TEXT("FWwiseFileState::IncrementCountOpen %s"), GetManagingTypeName());
	if (IsBusy())
	{
		if (State == EState::Closing)
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountOpen %s %" PRIu32 ": Closing -> WillReopen"),
				GetManagingTypeName(), GetShortId());
			State = EState::WillReopen;
		}

		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountOpen %s %" PRIu32 ": Deferred."),
			GetManagingTypeName(), GetShortId());
		AsyncOpLater([this, InOperationOrigin, InCurrentOpOrder, InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::IncrementCountOpen %s Busy"), GetManagingTypeName());
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountOpen %s %" PRIu32 ": Retrying open"),
							GetManagingTypeName(), GetShortId());
			IncrementCountOpen(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));			// Call ourselves back
		});
		return;
	}

	if (State == EState::CanReopen)
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountOpen %s %" PRIu32 ": CanReopen -> Closed (post-close)"),
						GetManagingTypeName(), GetShortId());
		State = EState::Closed;
	}

	if (State == EState::Opening)
	{
		// We are currently opening asynchronously. We must wait for that operation to be initially done, so we can keep on processing this.
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountOpen %s %" PRIu32 ": Waiting for deferred Opening file."),
			GetManagingTypeName(), GetShortId());
		AsyncOp([this, InOperationOrigin, InCurrentOpOrder, InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::IncrementCountOpen %s Opening"), GetManagingTypeName());
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountOpen %s %" PRIu32 ": Retrying open"),
							GetManagingTypeName(), GetShortId());
			IncrementCountOpen(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));			// Call ourselves back
		});
		return;
	}

	if (!CanOpenFile())
	{
		IncrementCountLoad(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));					// Continue
		return;
	}

	UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountOpen %s %" PRIu32 ": Closed -> Opening"),
					GetManagingTypeName(), GetShortId());
	check(State == EState::Closed);
	State = EState::Opening;

	OpenFile([this, InOperationOrigin, InCurrentOpOrder, InCallback = MoveTemp(InCallback)]() mutable
	{
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::IncrementCountOpen %s OpenFile"), GetManagingTypeName());
		IncrementCountLoad(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));
	});
}

void FWwiseFileState::IncrementCountLoad(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
	FIncrementCountCallback&& InCallback)
{
	SCOPED_WWISEFILEHANDLER_EVENT_F_3(TEXT("FWwiseFileState::IncrementCountLoad %s"), GetManagingTypeName());
	if (IsBusy())
	{
		if (State == EState::Unloading)
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountLoad %s %" PRIu32 ": Unloading -> WillReload"),
							GetManagingTypeName(), GetShortId());
			State = EState::WillReload;
		}
		else if (State == EState::Closing)
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountLoad %s %" PRIu32 ": Closing -> WillReopen"),
							GetManagingTypeName(), GetShortId());
			State = EState::WillReopen;
		}

		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountLoad %s %" PRIu32 ": Deferred."),
			GetManagingTypeName(), GetShortId());
		AsyncOpLater([this, InOperationOrigin, InCurrentOpOrder, InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::IncrementCountLoad %s Busy"), GetManagingTypeName());
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountLoad %s %" PRIu32 ": Retrying open"),
							GetManagingTypeName(), GetShortId());
			IncrementCountOpen(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));			// Restart the op from start
		});
		return;
	}

	if (State == EState::CanReload)
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountLoad %s %" PRIu32 ": CanReload -> Opened (post-unload)"),
						GetManagingTypeName(), GetShortId());
		State = EState::Opened;
	}

	if (State == EState::Loading)
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountLoad %s %" PRIu32 ": Waiting for deferred Loading file."),
			GetManagingTypeName(), GetShortId());
		AsyncOp([this, InOperationOrigin, InCurrentOpOrder, InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::IncrementCountLoad %s Loading"), GetManagingTypeName());
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountLoad %s %" PRIu32 ": Retrying load"),
				GetManagingTypeName(), GetShortId());
			IncrementCountLoad(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));			// Call ourselves back
		});
		return;
	}

	if (!CanLoadInSoundEngine())
	{
		IncrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));					// Continue
		return;
	}

	UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountLoad %s %" PRIu32 ": Opened -> Loading"),
					GetManagingTypeName(), GetShortId());
	State = EState::Loading;

	LoadInSoundEngine([this, InOperationOrigin, InCurrentOpOrder, InCallback = MoveTemp(InCallback)]() mutable
	{
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::IncrementCountLoad %s LoadInSoundEngine"), GetManagingTypeName());
		IncrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));
	});
}

void FWwiseFileState::IncrementCountDone(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
	FIncrementCountCallback&& InCallback)
{
	SCOPED_WWISEFILEHANDLER_EVENT_F_3(TEXT("FWwiseFileState::IncrementCountDone %s"), GetManagingTypeName());
	
	UE_CLOG(UNLIKELY(InCurrentOpOrder < DoneOpOrder), LogWwiseFileHandler, Error, TEXT("FWwiseFileState::IncrementCountDone %s %" PRIu32 ": CurrentOpOrder %d < DoneOpOrder %d"),
		GetManagingTypeName(), GetShortId(), InCurrentOpOrder, DoneOpOrder);
	
	if (UNLIKELY(IsBusy()))
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountDone %s %" PRIu32 ": Deferred."),
				GetManagingTypeName(), GetShortId());
		AsyncOpLater([this, InOperationOrigin, InCurrentOpOrder, InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::IncrementCountDone %s Busy"), GetManagingTypeName());
			IncrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));
		});
		return;
	}

	ProcessLaterOpQueue();
	
	if (UNLIKELY(InCurrentOpOrder > DoneOpOrder))
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountDone %s %" PRIu32 ": Done incrementing. Out of Order callback. Waiting for our turn (remaining %d)."),
				GetManagingTypeName(), GetShortId(), InCurrentOpOrder-DoneOpOrder);
		AsyncOpLater([this, InOperationOrigin, InCurrentOpOrder, InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::IncrementCountDone %s Async"), GetManagingTypeName());
			IncrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InCallback));
		});
		return;
	}

	++DoneOpOrder;
	bool bResult;
	if (InOperationOrigin == EWwiseFileStateOperationOrigin::Streaming)
	{
		bResult = (State == EState::Loaded);
		if (UNLIKELY(!bResult))
		{
			UE_CLOG(CanLoadInSoundEngine(), LogWwiseFileHandler, Warning, TEXT("FWwiseFileState::IncrementCountDone %s %" PRIu32 ": Could not load file for streaming."),
				GetManagingTypeName(), GetShortId());
			UE_CLOG(!CanLoadInSoundEngine(), LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountDone %s %" PRIu32 ": Streaming request aborted before load done."),
				GetManagingTypeName(), GetShortId());
		}
	}
	else
	{
		bResult = (State == EState::Loaded)
			|| (State == EState::Opened && !CanLoadInSoundEngine())
			|| (State == EState::Closed && !CanOpenFile());
		if (UNLIKELY(!bResult))
		{
			UE_LOG(LogWwiseFileHandler, Warning, TEXT("FWwiseFileState::IncrementCountDone %s %" PRIu32 ": Could not open file for asset loading. [State:%d CanLoad:%s CanOpen:%s]"),
				GetManagingTypeName(), GetShortId(),
				(int)State, CanLoadInSoundEngine() ? TEXT("true"):TEXT("false"), CanOpenFile() ? TEXT("true"):TEXT("false"));
		}
	}

	UE_CLOG(LIKELY(bResult), LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementCountDone %s %" PRIu32 ": Done incrementing."),
		GetManagingTypeName(), GetShortId());
	{
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::IncrementCountDone %s Callback"), GetManagingTypeName());
		InCallback(bResult);
	}
}

void FWwiseFileState::DecrementCount(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
                                  FDeleteFileStateFunction&& InDeleteState, FDecrementCountCallback&& InCallback)
{
	if (UNLIKELY(LoadCount == 0))
	{
		UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::DecrementCount %s %" PRIu32 ": File State is already closed."), GetManagingTypeName(), GetShortId());
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::DecrementCount %s Callback"), GetManagingTypeName());
		InCallback();
		return;
	}

	DecrementLoadCount(InOperationOrigin);

	DecrementCountUnload(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));
}

void FWwiseFileState::DecrementCountUnload(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
	FDeleteFileStateFunction&& InDeleteState, FDecrementCountCallback&& InCallback)
{
	SCOPED_WWISEFILEHANDLER_EVENT_F_3(TEXT("FWwiseFileState::DecrementCountUnload %s"), GetManagingTypeName());
	if (IsBusy())
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountUnload %s %" PRIu32 ": UnloadFromSoundEngine deferred."),
			GetManagingTypeName(), GetShortId());
		AsyncOpLater([this, InOperationOrigin, InCurrentOpOrder, InDeleteState = MoveTemp(InDeleteState), InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::DecrementCountUnload %s Busy"), GetManagingTypeName());
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountUnload %s %" PRIu32 ": Retrying unload"),
							GetManagingTypeName(), GetShortId());
			DecrementCountUnload(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));			// Call ourselves back
		});
		return;
	}

	if (!CanUnloadFromSoundEngine())
	{
		DecrementCountClose(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));					// Continue
		return;
	}

	UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountUnload %s %" PRIu32 ": -> Unloading"),
					GetManagingTypeName(), GetShortId());
	State = EState::Unloading;

	UnloadFromSoundEngine([this, InOperationOrigin, InCurrentOpOrder, InDeleteState = MoveTemp(InDeleteState), InCallback = MoveTemp(InCallback)](EResult InDefer) mutable
	{
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::DecrementCountUnload %s UnloadFromSoundEngine"), GetManagingTypeName());
		DecrementCountUnloadCallback(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback), InDefer);
	});
}

void FWwiseFileState::DecrementCountUnloadCallback(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
	FDeleteFileStateFunction&& InDeleteState, FDecrementCountCallback&& InCallback, EResult InDefer)
{
	SCOPED_WWISEFILEHANDLER_EVENT_F_3(TEXT("FWwiseFileState::DecrementCountUnloadCallback %s"), GetManagingTypeName());

	if (LIKELY(InDefer == EResult::Done))
	{
		DecrementCountClose(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));				// Continue
		return;
	}

	UE_LOG(LogWwiseFileHandler, Verbose, TEXT("FWwiseFileState::DecrementCountUnloadCallback %s %" PRIu32 ": Processing deferred Unload."),
		GetManagingTypeName(), GetShortId());
	
	if (UNLIKELY(State == EState::WillReload))
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountUnloadCallback %s %" PRIu32 ": Another user needs this to be kept loaded."),
				GetManagingTypeName(), GetShortId());
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountUnloadCallback %s %" PRIu32 ": WillReload -> Loaded"),
						GetManagingTypeName(), GetShortId());
		State = EState::Loaded;
		DecrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));		// Skip all
	}
	else if (UNLIKELY(State != EState::Unloading))
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountUnloadCallback %s %" PRIu32 ": State got changed. Not unloading anymore."),
				GetManagingTypeName(), GetShortId());
		DecrementCountClose(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));		// Continue
	}
	else
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountUnloadCallback %s %" PRIu32 ": Unloading -> Loaded (retry)"),
						GetManagingTypeName(), GetShortId());
		State = EState::Loaded;
		DecrementCountUnload(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));		// Call ourselves back
	}
}

void FWwiseFileState::DecrementCountClose(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
                                          FDeleteFileStateFunction&& InDeleteState, FDecrementCountCallback&& InCallback)
{
	SCOPED_WWISEFILEHANDLER_EVENT_F_3(TEXT("FWwiseFileState::DecrementCountClose %s"), GetManagingTypeName());
	if (IsBusy())
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountClose %s %" PRIu32 ": CloseFile deferred."),
			GetManagingTypeName(), GetShortId());
		AsyncOpLater([this, InOperationOrigin, InCurrentOpOrder, InDeleteState = MoveTemp(InDeleteState), InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::DecrementCountClose %s Busy"), GetManagingTypeName());
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountClose %s %" PRIu32 ": Retrying close"),
							GetManagingTypeName(), GetShortId());
			DecrementCountClose(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));			// Call ourselves back
		});
		return;
	}

	if (!CanCloseFile())
	{
		DecrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));					// Continue
		return;
	}

	UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountClose %s %" PRIu32 ": -> Closing"),
					GetManagingTypeName(), GetShortId());
	State = EState::Closing;

	CloseFile([this, InOperationOrigin, InCurrentOpOrder, InDeleteState = MoveTemp(InDeleteState), InCallback = MoveTemp(InCallback)](EResult InDefer) mutable
	{
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::DecrementCountClose %s CloseFile"), GetManagingTypeName());
		DecrementCountUnloadCallback(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback), InDefer);
	});
}

void FWwiseFileState::DecrementCountCloseCallback(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
	FDeleteFileStateFunction&& InDeleteState, FDecrementCountCallback&& InCallback, EResult InDefer)
{
	SCOPED_WWISEFILEHANDLER_EVENT_F_3(TEXT("FWwiseFileState::DecrementCountCloseCallback %s"), GetManagingTypeName());
	if (LIKELY(InDefer == EResult::Done))
	{
		DecrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));				// Continue
		return;
	}

	UE_LOG(LogWwiseFileHandler, Verbose, TEXT("FWwiseFileState::DecrementCountCloseCallback %s %" PRIu32 ": Processing deferred Close."),
		GetManagingTypeName(), GetShortId());
	
	if (UNLIKELY(State == EState::WillReopen))
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountCloseCallback %s %" PRIu32 ": Another user needs this to be kept open."),
				GetManagingTypeName(), GetShortId());
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountCloseCallback %s %" PRIu32 ": WillReopen -> Opened"),
						GetManagingTypeName(), GetShortId());
		State = EState::Opened;
		DecrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));		// Skip all
	}
	else if (UNLIKELY(State != EState::Closing))
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountCloseCallback %s %" PRIu32 ": State got changed. Not closing anymore."),
				GetManagingTypeName(), GetShortId());
		DecrementCountClose(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));		// Continue
	}
	else
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountCloseCallback %s %" PRIu32 ": Closing -> Opened (retry)"),
						GetManagingTypeName(), GetShortId());
		State = EState::Opened;
		DecrementCountClose(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));		// Call ourselves back
	}
}

void FWwiseFileState::DecrementCountDone(EWwiseFileStateOperationOrigin InOperationOrigin, int InCurrentOpOrder,
                                         FDeleteFileStateFunction&& InDeleteState, FDecrementCountCallback&& InCallback)
{
	SCOPED_WWISEFILEHANDLER_EVENT_F_3(TEXT("FWwiseFileState::DecrementCountDone %s"), GetManagingTypeName());

	UE_CLOG(UNLIKELY(InCurrentOpOrder < DoneOpOrder), LogWwiseFileHandler, Error, TEXT("FWwiseFileState::DecrementCountDone %s %" PRIu32 ": CurrentOpOrder %d < DoneOpOrder %d"),
		GetManagingTypeName(), GetShortId(), InCurrentOpOrder, DoneOpOrder);
	
	if (UNLIKELY(IsBusy()))
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountDone %s %" PRIu32 ": Deferred."),
				GetManagingTypeName(), GetShortId());
		AsyncOpLater([this, InOperationOrigin, InCurrentOpOrder, InDeleteState = MoveTemp(InDeleteState), InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::DecrementCountDone %s Busy"), GetManagingTypeName());
			DecrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));
		});
		return;
	}

	ProcessLaterOpQueue();
	
	if (UNLIKELY(InCurrentOpOrder > DoneOpOrder))
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountDone %s %" PRIu32 ": Done decrementing. Out of Order callback. Waiting for our turn (remaining %d)."),
				GetManagingTypeName(), GetShortId(), InCurrentOpOrder-DoneOpOrder);
		AsyncOpLater([this, InOperationOrigin, InCurrentOpOrder, InDeleteState = MoveTemp(InDeleteState), InCallback = MoveTemp(InCallback)]() mutable
		{
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::DecrementCountDone %s Async"), GetManagingTypeName());
			DecrementCountDone(InOperationOrigin, InCurrentOpOrder, MoveTemp(InDeleteState), MoveTemp(InCallback));
		});
		return;
	}

	++DoneOpOrder;
	--OpenedInstances;
	if (CanDelete())
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountDone %s %" PRIu32 ": Done decrementing. Deleting state."),
				GetManagingTypeName(), GetShortId());
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::DecrementCountDone %s Delete"), GetManagingTypeName());
		InDeleteState(MoveTemp(InCallback));
	}
	else
	{
		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementCountDone %s %" PRIu32 ": Done decrementing."),
				GetManagingTypeName(), GetShortId());
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::DecrementCountDone %s Callback"), GetManagingTypeName());
		InCallback();
	}
}

void FWwiseFileState::IncrementLoadCount(EWwiseFileStateOperationOrigin InOperationOrigin)
{
	const bool bIncrementStreamingCount = (InOperationOrigin == EWwiseFileStateOperationOrigin::Streaming);

	if (bIncrementStreamingCount) ++StreamingCount;
	++LoadCount;

	UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::IncrementLoadCount %s %" PRIu32 ": ++LoadCount %d %sStreamingCount %d"),
	       GetManagingTypeName(), GetShortId(), LoadCount, bIncrementStreamingCount ? TEXT("++") : TEXT(""), StreamingCount);
}

bool FWwiseFileState::CanOpenFile() const
{
	return State == EState::Closed && LoadCount > 0;
}

void FWwiseFileState::OpenFileSucceeded(FOpenFileCallback&& InCallback)
{
	AsyncOp([this, InCallback = MoveTemp(InCallback)]() mutable
	{
		if (UNLIKELY(State != EState::Opening))
		{
			UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::OpenFileSucceeded: Succeeded opening %s %" PRIu32 " while not in Opening state"), GetManagingTypeName(), GetShortId());
		}
		else
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::OpenFileSucceeded %s %" PRIu32 ": Opening -> Opened"), GetManagingTypeName(), GetShortId());
			State = EState::Opened;
		}
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::OpenFileSucceeded %s Callback"), GetManagingTypeName());
		InCallback();
	});
}

void FWwiseFileState::OpenFileFailed(FOpenFileCallback&& InCallback)
{
	AsyncOp([this, InCallback = MoveTemp(InCallback)]() mutable
	{
		INC_DWORD_STAT(STAT_WwiseFileHandlerTotalErrorCount);
		if (UNLIKELY(State != EState::Opening))
		{
			UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::OpenFileFailed: Failed opening %s %" PRIu32 " while not in Opening state"), GetManagingTypeName(), GetShortId());
		}
		else
		{
			UE_LOG(LogWwiseFileHandler, Warning, TEXT("FWwiseFileState::OpenFileFailed %s %" PRIu32 ": Opening Failed -> Closed"), GetManagingTypeName(), GetShortId());
			State = EState::Closed;
		}
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::OpenFileFailed %s Callback"), GetManagingTypeName());
		InCallback();
	});
}

bool FWwiseFileState::CanLoadInSoundEngine() const
{
	return State == EState::Opened && (!IsStreamedState() || StreamingCount > 0);
}

void FWwiseFileState::LoadInSoundEngineSucceeded(FLoadInSoundEngineCallback&& InCallback)
{
	AsyncOp([this, InCallback = MoveTemp(InCallback)]() mutable
	{
		if (UNLIKELY(State != EState::Loading))
		{
			UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::LoadInSoundEngineSucceeded: Succeeded loading %s %" PRIu32 " while not in Loading state"), GetManagingTypeName(), GetShortId());
		}
		else
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::LoadInSoundEngineSucceeded %s %" PRIu32 ": Loading -> Loaded"), GetManagingTypeName(), GetShortId());
			State = EState::Loaded;
		}
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::LoadInSoundEngineSucceeded %s Callback"), GetManagingTypeName());
		InCallback();
	});
}

void FWwiseFileState::LoadInSoundEngineFailed(FLoadInSoundEngineCallback&& InCallback)
{
	AsyncOp([this, InCallback = MoveTemp(InCallback)]() mutable
	{
		INC_DWORD_STAT(STAT_WwiseFileHandlerTotalErrorCount);
		if (UNLIKELY(State != EState::Loading))
		{
			UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::LoadInSoundEngineFailed: Failed loading %s %" PRIu32 " while not in Loading state"), GetManagingTypeName(), GetShortId());
		}
		else
		{
			UE_LOG(LogWwiseFileHandler, Warning, TEXT("FWwiseFileState::LoadInSoundEngineFailed %s %" PRIu32 ": Loading Failed -> Opened"), GetManagingTypeName(), GetShortId());
			State = EState::Opened;
		}
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::LoadInSoundEngineFailed %s Callback"), GetManagingTypeName());
		InCallback();
	});
}

void FWwiseFileState::DecrementLoadCount(EWwiseFileStateOperationOrigin InOperationOrigin)
{
	const bool bDecrementStreamingCount = (InOperationOrigin == EWwiseFileStateOperationOrigin::Streaming);

	if (bDecrementStreamingCount) --StreamingCount;
	--LoadCount;

	UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::DecrementLoadCount %s %" PRIu32 ": --LoadCount %d %sStreamingCount %d"),
	       GetManagingTypeName(), GetShortId(), LoadCount, bDecrementStreamingCount ? TEXT("--") : TEXT(""), StreamingCount);
}

bool FWwiseFileState::CanUnloadFromSoundEngine() const
{
	return State == EState::Loaded && ((IsStreamedState() && StreamingCount == 0) || (!IsStreamedState() && LoadCount == 0));
}

void FWwiseFileState::UnloadFromSoundEngineDone(FUnloadFromSoundEngineCallback&& InCallback)
{
	AsyncOp([this, InCallback = MoveTemp(InCallback)]() mutable
	{
		if (UNLIKELY(State != EState::Unloading && State != EState::WillReload))
		{
			UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::UnloadFromSoundEngineDone: Done unloading %s %" PRIu32 " while not in Unloading state"), GetManagingTypeName(), GetShortId());
		}
		else if (LIKELY(State == EState::Unloading))
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::UnloadFromSoundEngineDone %s %" PRIu32 ": Unloading -> Opened"), GetManagingTypeName(), GetShortId());
			State = EState::Opened;
		}
		else
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::UnloadFromSoundEngineDone %s %" PRIu32 ": WillReload -> CanReload"), GetManagingTypeName(), GetShortId());
			State = EState::CanReload;
			ProcessLaterOpQueue();
		}
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::UnloadFromSoundEngineDone %s Callback"), GetManagingTypeName());
		InCallback(EResult::Done);
	});
}

void FWwiseFileState::UnloadFromSoundEngineToClosedFile(FUnloadFromSoundEngineCallback&& InCallback)
{
	AsyncOp([this, InCallback = MoveTemp(InCallback)]() mutable
	{
		if (UNLIKELY(State != EState::Unloading && State != EState::WillReload))
		{
			UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::UnloadFromSoundEngineToClosedFile: Done unloading %s %" PRIu32 " while not in Unloading state"), GetManagingTypeName(), GetShortId());
		}
		else if (LIKELY(State == EState::Unloading))
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::UnloadFromSoundEngineToClosedFile %s %" PRIu32 ": Unloading -...-> Closed"), GetManagingTypeName(), GetShortId());
			State = EState::Closed;
		}
		else
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::UnloadFromSoundEngineToClosedFile %s %" PRIu32 ": WillReload -> CanReload -> CanReopen"), GetManagingTypeName(), GetShortId());
			State = EState::CanReopen;
			ProcessLaterOpQueue();
		}
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::UnloadFromSoundEngineToClosedFile %s Callback"), GetManagingTypeName());
		InCallback(EResult::Done);
	});
}

void FWwiseFileState::UnloadFromSoundEngineDefer(FUnloadFromSoundEngineCallback&& InCallback)
{
	AsyncOp([this, InCallback = MoveTemp(InCallback)]() mutable
	{
		if (UNLIKELY(State != EState::Unloading && State != EState::WillReload))
		{
			UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::UnloadFromSoundEngineDefer %s %" PRIu32 ": Deferring unloading while not in Unloading state"), GetManagingTypeName(), GetShortId());
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::UnloadFromSoundEngineDefer %s Callback"), GetManagingTypeName());
			InCallback(EResult::Done);
			return;
		}
		if (UNLIKELY(State == EState::WillReload))
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::UnloadFromSoundEngineDefer %s %" PRIu32 ": WillReload -> Loaded"), GetManagingTypeName(), GetShortId());
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::UnloadFromSoundEngineDefer %s Callback"), GetManagingTypeName());
			State = EState::Loaded;
			InCallback(EResult::Done);
			return;
		}

		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::UnloadFromSoundEngineDefer %s %" PRIu32 ": Deferring Unload"), GetManagingTypeName(), GetShortId());
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::UnloadFromSoundEngineDefer %s Callback"), GetManagingTypeName());
		InCallback(EResult::Deferred);
	});
}

bool FWwiseFileState::CanCloseFile() const
{
	return State == EState::Opened && LoadCount == 0;
}

void FWwiseFileState::CloseFileDone(FCloseFileCallback&& InCallback)
{
	AsyncOp([this, InCallback = MoveTemp(InCallback)]() mutable
	{
		if (UNLIKELY(State != EState::Closing && State != EState::WillReopen))
		{
			UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::CloseFileDone %s %" PRIu32 ": Done closing while not in Closing state"), GetManagingTypeName(), GetShortId());
		}
		else if (LIKELY(State == EState::Closing))
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::CloseFileDone %s %" PRIu32 ": Closing -> Closed"), GetManagingTypeName(), GetShortId());
			State = EState::Closed;
		}
		else
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::CloseFileDone %s %" PRIu32 ": WillReopen -> CanReopen"), GetManagingTypeName(), GetShortId());
			State = EState::CanReopen;
			ProcessLaterOpQueue();
		}
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::CloseFileDone %s Callback"), GetManagingTypeName());
		InCallback(EResult::Done);
	});
}

void FWwiseFileState::CloseFileDefer(FCloseFileCallback&& InCallback)
{
	AsyncOp([this, InCallback = MoveTemp(InCallback)]() mutable
	{
		if (UNLIKELY(State != EState::Closing && State != EState::WillReopen))
		{
			UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::CloseFileDefer %s %" PRIu32 ": Deferring closing while not in Closing state"), GetManagingTypeName(), GetShortId());
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::CloseFileDefer %s Callback"), GetManagingTypeName());
			InCallback(EResult::Done);
			return;
		}
		if (UNLIKELY(State == EState::WillReopen))
		{
			UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::CloseFileDefer %s %" PRIu32 ": WillReopen -> Opened"), GetManagingTypeName(), GetShortId());
			State = EState::Opened;
			SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::CloseFileDefer %s Callback"), GetManagingTypeName());
			InCallback(EResult::Done);
			return;
		}

		UE_LOG(LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::CloseFileDefer %s %" PRIu32 ": Deferring Close"), GetManagingTypeName(), GetShortId());
		SCOPED_WWISEFILEHANDLER_EVENT_F_4(TEXT("FWwiseFileState::CloseFileDefer %s Callback"), GetManagingTypeName());
		InCallback(EResult::Deferred);
	});
}

bool FWwiseFileState::IsBusy() const
{
	switch (State)
	{
	case EState::Opening:
	case EState::Loading:
	case EState::Unloading:
	case EState::Closing:
	case EState::WillReload:
	case EState::WillReopen:
		return true;
	default:
		return false;
	}
}

void FWwiseFileState::AsyncOp(FBasicFunction&& Fct)
{
	if (UNLIKELY(!FileStateExecutionQueue))
	{
		UE_LOG(LogWwiseFileHandler, Error, TEXT("FWwiseFileState::AsyncOp %s %" PRIu32 ": Doing async op on terminated state"), GetManagingTypeName(), GetShortId());
		return Fct();
	}
	FileStateExecutionQueue->Async(MoveTemp(Fct));
}

void FWwiseFileState::AsyncOpLater(FBasicFunction&& Fct)
{
	LaterOpQueue.Enqueue(MoveTemp(Fct));
}

void FWwiseFileState::ProcessLaterOpQueue()
{
	int Count = 0;
	FBasicFunction Fct;
	while (LaterOpQueue.Dequeue(Fct))
	{
		++Count;
		AsyncOp(MoveTemp(Fct));
	}
	UE_CLOG(Count > 0, LogWwiseFileHandler, VeryVerbose, TEXT("FWwiseFileState::ProcessLaterOpQueue %s %" PRIu32 ": Added back %d operations to be executed."),  GetManagingTypeName(), GetShortId(), Count);
}
