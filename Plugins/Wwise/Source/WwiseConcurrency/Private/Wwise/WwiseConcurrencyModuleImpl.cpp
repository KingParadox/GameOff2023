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

#include "Wwise/WwiseConcurrencyModuleImpl.h"

#include "Wwise/WwiseGlobalCallbacks.h"
#include "Wwise/Stats/Concurrency.h"

IMPLEMENT_MODULE(FWwiseConcurrencyModule, WwiseConcurrency)

FWwiseConcurrencyModule::FWwiseConcurrencyModule()
{
}

void FWwiseConcurrencyModule::StartupModule()
{
	UE_LOG(LogWwiseConcurrency, Display, TEXT("Initializing default Concurrency."));
	ExecutionQueueLock.WriteLock();
	if (!ExecutionQueueThreadPool)
	{
		InitializeExecutionQueueThreadPool();
	}
	ExecutionQueueLock.WriteUnlock();

	GlobalCallbacksLock.WriteLock();
	if (!GlobalCallbacks)
	{
		InitializeGlobalCallbacks();
	}
	GlobalCallbacksLock.WriteUnlock();

	IWwiseConcurrencyModule::StartupModule();
}

void FWwiseConcurrencyModule::ShutdownModule()
{
	UE_LOG(LogWwiseConcurrency, Display, TEXT("Shutting down default Concurrency."));
	GlobalCallbacksLock.WriteLock();
	TerminateGlobalCallbacks();
	GlobalCallbacksLock.WriteUnlock();

	ExecutionQueueLock.WriteLock();
	TerminateExecutionQueueThreadPool();
	ExecutionQueueLock.WriteUnlock();

	IWwiseConcurrencyModule::ShutdownModule();
}

FQueuedThreadPool* FWwiseConcurrencyModule::GetExecutionQueueThreadPool()
{
	ExecutionQueueLock.ReadLock();
	if (LIKELY(ExecutionQueueThreadPool))
	{
		ExecutionQueueLock.ReadUnlock();
		return ExecutionQueueThreadPool;
	}

	ExecutionQueueLock.ReadUnlock();
	ExecutionQueueLock.WriteLock();
	if (UNLIKELY(ExecutionQueueThreadPool))
	{
		ExecutionQueueLock.WriteUnlock();
		return ExecutionQueueThreadPool;
	}

	InitializeExecutionQueueThreadPool();
	ExecutionQueueLock.WriteUnlock();
	return ExecutionQueueThreadPool;
}

FWwiseGlobalCallbacks* FWwiseConcurrencyModule::GetGlobalCallbacks()
{
	GlobalCallbacksLock.ReadLock();
	if (LIKELY(GlobalCallbacks))
	{
		GlobalCallbacksLock.ReadUnlock();
		return GlobalCallbacks;
	}

	GlobalCallbacksLock.ReadUnlock();
	GlobalCallbacksLock.WriteLock();
	if (UNLIKELY(GlobalCallbacks))
	{
		GlobalCallbacksLock.WriteUnlock();
		return GlobalCallbacks;
	}

	InitializeGlobalCallbacks();
	GlobalCallbacksLock.WriteUnlock();
	return GlobalCallbacks;
}

int32 FWwiseConcurrencyModule::NumberOfExecutionQueueThreadsToSpawn()
{
	if (UNLIKELY(!FPlatformProcess::SupportsMultithreading()))
	{
		return 1;
	}

	static constexpr int32 ClampMin = 2;
	static constexpr int32 ClampMax = 8;

	// Unreal Platform gives a curated value based on the possible number of cores available. Some platforms have 3, some have 13.
	// In our case, we don't want that many threads, don't want to tax systems, but don't want the app to wait for us.
	// A square root gives a good correlation for most, and for everyone else, it's possible to override this class.
	// 4 cores = 2 threads, 9 cores = 3 threads, 16 cores = 4 threads.
	const auto PlatformWorkersToSpawn = FPlatformMisc::NumberOfWorkerThreadsToSpawn();
	const auto WorkersToSpawn = FMath::Sqrt(static_cast<float>(PlatformWorkersToSpawn));
	return FMath::Min(ClampMax, FMath::Max(ClampMin, static_cast<int32>(WorkersToSpawn)));
}

void FWwiseConcurrencyModule::InitializeExecutionQueueThreadPool()
{
	static constexpr int32 StackSize = 128 * 1024;

	ExecutionQueueThreadPool = FQueuedThreadPool::Allocate();
	const int32 NumThreadsInThreadPool = NumberOfExecutionQueueThreadsToSpawn();
	verify(ExecutionQueueThreadPool->Create(NumThreadsInThreadPool, StackSize, TPri_Normal, TEXT("Wwise ExecutionQueue Pool")));
}

void FWwiseConcurrencyModule::InitializeGlobalCallbacks()
{
	if (!ExecutionQueueThreadPool)
	{
		InitializeExecutionQueueThreadPool();
	}
	GlobalCallbacks = new FWwiseGlobalCallbacks;
	// GlobalCallbacks->Initialize(); Initialization requires memory allocation that is only available in AkInitializationSettings.
}

void FWwiseConcurrencyModule::TerminateExecutionQueueThreadPool()
{
	if (ExecutionQueueThreadPool)
	{
		ExecutionQueueThreadPool->Destroy();
		ExecutionQueueThreadPool = nullptr;
	}
}

void FWwiseConcurrencyModule::TerminateGlobalCallbacks()
{
	if (GlobalCallbacks)
	{
		GlobalCallbacks->Terminate();
		delete GlobalCallbacks;
		GlobalCallbacks = nullptr;
	}
}

