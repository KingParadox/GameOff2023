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

#include "Wwise/WwiseUnitTests.h"

#if WWISE_UNIT_TESTS
#include "Wwise/WwiseExecutionQueue.h"
#include <atomic>

WWISE_TEST_CASE(Concurrency_ExecutionQueue_Smoke, "Wwise::Concurrency::ExecutionQueue_Smoke", "[ApplicationContextMask][SmokeFilter]")
{
	SECTION("Static")
	{
		static_assert(std::is_constructible<FWwiseExecutionQueue>::value);
		static_assert(std::is_constructible<FWwiseExecutionQueue, ENamedThreads::Type>::value);
		static_assert(std::is_constructible<FWwiseExecutionQueue, FQueuedThreadPool*>::value);
		static_assert(std::is_constructible<FWwiseExecutionQueue, const TCHAR*>::value);
		static_assert(std::is_constructible<FWwiseExecutionQueue, const TCHAR*, EThreadPriority>::value);
		static_assert(std::is_constructible<FWwiseExecutionQueue, const TCHAR*, EThreadPriority, int32>::value);
		static_assert(!std::is_copy_constructible<FWwiseExecutionQueue>::value);
		static_assert(!std::is_move_constructible<FWwiseExecutionQueue>::value);
		static_assert(!std::is_copy_assignable<FWwiseExecutionQueue>::value);
		static_assert(!std::is_move_assignable<FWwiseExecutionQueue>::value);
	}

	SECTION("Instantiation")
	{
		FWwiseExecutionQueue NoParam;
		FWwiseExecutionQueue NamedThread(ENamedThreads::AnyThread);
		FWwiseExecutionQueue Pool(GThreadPool);
		FWwiseExecutionQueue NewPool(TEXT("New Execution Queue"));

		CHECK(NoParam.ThreadPool);
		CHECK(NoParam.NamedThread == ENamedThreads::UnusedAnchor);
		CHECK(NoParam.ThreadPool == FWwiseExecutionQueue::GetDefaultThreadPool());
		
		CHECK_FALSE(NamedThread.ThreadPool);
		CHECK_FALSE(NamedThread.NamedThread == ENamedThreads::UnusedAnchor);

		CHECK(Pool.NamedThread == ENamedThreads::UnusedAnchor);
		CHECK_FALSE(Pool.bOwnedPool);
		CHECK(Pool.ThreadPool);

		CHECK(NewPool.NamedThread == ENamedThreads::UnusedAnchor);
		CHECK(NewPool.bOwnedPool);
		CHECK(NewPool.ThreadPool);
		CHECK(NewPool.ThreadPool && NewPool.ThreadPool->GetNumThreads() == 1);
	}

	SECTION("Async At Destructor")
	{
		constexpr const int LoopCount = 10;
		std::atomic<int> Value{ 0 };
		{
			FWwiseExecutionQueue ExecutionQueue;
			for (int i = 0; i < LoopCount; ++i)
			{
				ExecutionQueue.Async([&Value]
				{
					++Value;
				});
			}
		}
		CHECK(Value.load() == LoopCount);
	}

	SECTION("AsyncWait")
	{
		constexpr const int LoopCount = 10;
		std::atomic<int> Value{ 0 };
		{
			const auto CurrentThreadId = FPlatformTLS::GetCurrentThreadId();
			FWwiseExecutionQueue ExecutionQueue;
			for (int i = 0; i < LoopCount; ++i)
			{
				ExecutionQueue.AsyncWait([&Value, CurrentThreadId]
				{
					CHECK_FALSE(CurrentThreadId == FPlatformTLS::GetCurrentThreadId());
					++Value;
				});
			}
			CHECK(Value.load() == LoopCount);
		}
	}

	SECTION("Async in order")
	{
		constexpr const int LoopCount = 10;
		std::atomic<int> Value{ 0 };
		{
			FWwiseExecutionQueue ExecutionQueue;
			for (int i = 0; i < LoopCount; ++i)
			{
				ExecutionQueue.Async([&Value, ShouldBe = i]
				{
					CHECK(Value++ == ShouldBe);
				});
			}
		}
		CHECK(Value.load() == LoopCount);
	}
}

WWISE_TEST_CASE(Concurrency_ExecutionQueue_Perf, "Wwise::Concurrency::ExecutionQueue_Perf", "[ApplicationContextMask][PerfFilter]")
{
	SECTION("AsyncAddingOpPerf")
	{
		const bool bReduceLogVerbosity = FWwiseExecutionQueue::Test::bReduceLogVerbosity;
		FWwiseExecutionQueue::Test::bReduceLogVerbosity = true;
		ON_SCOPE_EXIT { FWwiseExecutionQueue::Test::bReduceLogVerbosity = bReduceLogVerbosity; };

		constexpr const int LoopCount = 1000000;
		constexpr const int ExpectedUS = 600000;
		std::atomic<int> Value{ 0 };

		{
			FWwiseExecutionQueue ExecutionQueue;

			FDateTime StartTime = FDateTime::UtcNow();
			for (int i = 0; i < LoopCount; ++i)
			{
				ExecutionQueue.Async([&Value]
				{
					++Value;
				});
			}
			FTimespan Duration = FDateTime::UtcNow() - StartTime;
			WWISE_TEST_LOG("AsyncAddingOpPerf %dus < %dus", (int)Duration.GetTotalMicroseconds(), ExpectedUS);
			CHECK(Duration.GetTotalMicroseconds() < ExpectedUS);
		}
		CHECK(Value.load() == LoopCount);
	}

	SECTION("AsyncExecutionPerf")
	{
		const bool bReduceLogVerbosity = FWwiseExecutionQueue::Test::bReduceLogVerbosity;
		FWwiseExecutionQueue::Test::bReduceLogVerbosity = true;
		ON_SCOPE_EXIT { FWwiseExecutionQueue::Test::bReduceLogVerbosity = bReduceLogVerbosity; };
		
		constexpr const int LoopCount = 1000000;
		constexpr const int ExpectedUS = 400000;
		std::atomic<int> Value{ 0 };

		FDateTime StartTime;
		{
			FWwiseExecutionQueue ExecutionQueue;

			ExecutionQueue.AsyncWait([&ExecutionQueue, LoopCount, &Value]
			{
				for (int i = 0; i < LoopCount; ++i)
				{
					ExecutionQueue.Async([&Value]
					{
						++Value;
					});
				}
			});
			StartTime = FDateTime::UtcNow();
		}
		FTimespan Duration = FDateTime::UtcNow() - StartTime;
		WWISE_TEST_LOG("AsyncExecutionPerf %dus < %dus", (int)Duration.GetTotalMicroseconds(), ExpectedUS);
		CHECK(Value.load() == LoopCount);
		CHECK(Duration.GetTotalMicroseconds() < ExpectedUS);
	}
}

WWISE_TEST_CASE(Concurrency_ExecutionQueue, "Wwise::Concurrency::ExecutionQueue", "[ApplicationContextMask][ProductFilter]")
{

	SECTION("Close")
	{
		std::atomic<int> Value{ 0 };
		std::atomic<int> OpenedQueues{ 0 };
		constexpr const int RepeatLoop = 2;
		constexpr const int MainLoopCount = 2;
		constexpr const int SubLoopCount = 2;
		constexpr const int FinalLoopCount = 2;
		constexpr const int LoopCount = RepeatLoop * MainLoopCount * SubLoopCount * FinalLoopCount;

		for (int Repeat = 0; Repeat < RepeatLoop; ++Repeat)
		{
			FWwiseExecutionQueue MainExecutionQueue;
			FWwiseExecutionQueue* SubExecutionQueue = new FWwiseExecutionQueue;
			FWwiseExecutionQueue DeletionExecutionQueue;

			for (int i = 0; i < MainLoopCount; ++i)
			{
				MainExecutionQueue.Async([&Value, &OpenedQueues, SubExecutionQueue, &DeletionExecutionQueue, SubLoopCount, FinalLoopCount]
				{
					for (int i = 0; i < SubLoopCount; ++i)
					{
						SubExecutionQueue->Async([&Value, &OpenedQueues, &DeletionExecutionQueue, FinalLoopCount]
						{
							++OpenedQueues;
							auto ExecutionQueue = new FWwiseExecutionQueue;
							for (int i = 0; i < FinalLoopCount; ++i)
							{
								ExecutionQueue->Async([&Value]
								{
									++Value;
								});
							}
							DeletionExecutionQueue.Async([&OpenedQueues, ExecutionQueue]
							{
								delete ExecutionQueue;
								--OpenedQueues;
							});
						});
					}
				});
			}
			
			MainExecutionQueue.Close();
			SubExecutionQueue->AsyncWait([]{});
			SubExecutionQueue->CloseAndDelete();
		}
		CHECK(Value.load() == LoopCount);
		CHECK(OpenedQueues.load() == 0);
	}

	SECTION("Sleep on State Update")
	{
		const bool bMockSleepOnStateUpdate = FWwiseExecutionQueue::Test::bMockSleepOnStateUpdate;
		const bool bMockEngineDeletion = FWwiseExecutionQueue::Test::bMockEngineDeletion;
		FWwiseExecutionQueue::Test::bMockSleepOnStateUpdate = true;
		ON_SCOPE_EXIT
		{
			FWwiseExecutionQueue::Test::bMockSleepOnStateUpdate = bMockSleepOnStateUpdate;
			FWwiseExecutionQueue::Test::bMockEngineDeletion = bMockEngineDeletion;
		};
		
		std::atomic<int> Value{ 0 };
		constexpr const int RepeatLoop = 2;
		constexpr const int MainLoopCount = 2;
		constexpr const int SubLoopCount = 2;
		constexpr const int FinalLoopCount = 2;
		constexpr const int LoopCount = RepeatLoop * MainLoopCount * SubLoopCount * FinalLoopCount;

		for (int Repeat = 0; Repeat < RepeatLoop; ++Repeat)
		{
			FWwiseExecutionQueue MainExecutionQueue;
			FWwiseExecutionQueue SubExecutionQueue;
			FWwiseExecutionQueue DeletionExecutionQueue;

			for (int i = 0; i < MainLoopCount; ++i)
			{
				if (i == MainLoopCount - 1)
				{
					MainExecutionQueue.Async([]
					{
						FWwiseExecutionQueue::Test::bMockEngineDeletion = true;
					});
				}
				
				MainExecutionQueue.Async([&Value, &SubExecutionQueue, &DeletionExecutionQueue, SubLoopCount, FinalLoopCount]
				{
					for (int i = 0; i < SubLoopCount; ++i)
					{
						SubExecutionQueue.Async([&Value, &DeletionExecutionQueue, FinalLoopCount]
						{
							auto ExecutionQueue = new FWwiseExecutionQueue;
							for (int i = 0; i < FinalLoopCount; ++i)
							{
								ExecutionQueue->Async([&Value]
								{
									++Value;
								});
							}
							DeletionExecutionQueue.Async([ExecutionQueue]
							{
								delete ExecutionQueue;
							});
						});
					}
				});
			}
			
			MainExecutionQueue.Close();
			SubExecutionQueue.Close();
			DeletionExecutionQueue.Close();
			FWwiseExecutionQueue::Test::bMockEngineDeletion = false;
		}
		CHECK(Value.load() == LoopCount);
	}
	
	SECTION("Async at exit")
	{
		const bool bMockEngineDeletion = FWwiseExecutionQueue::Test::bMockEngineDeletion;
		FWwiseExecutionQueue::Test::bMockEngineDeletion = true;
		ON_SCOPE_EXIT { FWwiseExecutionQueue::Test::bMockEngineDeletion = bMockEngineDeletion; };
		
		constexpr const int LoopCount = 10;
		std::atomic<int> Value{ 0 };
		{
			FWwiseExecutionQueue ExecutionQueue;
			for (int i = 0; i < LoopCount; ++i)
			{
				ExecutionQueue.Async([&Value, ShouldBe = i]
				{
					CHECK(Value++ == ShouldBe);
				});
			}
		}
		CHECK(Value.load() == LoopCount);
	}

	SECTION("Async after exit")
	{
		const bool bMockEngineDeleted = FWwiseExecutionQueue::Test::bMockEngineDeleted;
		FWwiseExecutionQueue::Test::bMockEngineDeleted = true;
		ON_SCOPE_EXIT { FWwiseExecutionQueue::Test::bMockEngineDeleted = bMockEngineDeleted; };
		
		constexpr const int LoopCount = 10;
		std::atomic<int> Value{ 0 };
		{
			const auto CurrentThreadId = FPlatformTLS::GetCurrentThreadId();
			FWwiseExecutionQueue::Test::bMockEngineDeleted = true;
			FWwiseExecutionQueue ExecutionQueue;
			for (int i = 0; i < LoopCount; ++i)
			{
				ExecutionQueue.Async([&Value, ShouldBe = i, CurrentThreadId]
				{
					CHECK(CurrentThreadId == FPlatformTLS::GetCurrentThreadId());
					CHECK(Value++ == ShouldBe);
				});
			}
		}
		CHECK(Value.load() == LoopCount);
	}
}

WWISE_TEST_CASE(Concurrency_ExecutionQueue_Stress, "Wwise::Concurrency::ExecutionQueue_Stress", "[ApplicationContextMask][StressFilter]")
{
	SECTION("AsyncStress")
	{
		const bool bReduceLogVerbosity = FWwiseExecutionQueue::Test::bReduceLogVerbosity;
		FWwiseExecutionQueue::Test::bReduceLogVerbosity = true;
		ON_SCOPE_EXIT { FWwiseExecutionQueue::Test::bReduceLogVerbosity = bReduceLogVerbosity; };
		
		constexpr const int LoopCount = 2000000;
		constexpr const int MainLoopCount = 100;
		constexpr const int SubLoopCount = 100;
		constexpr const int FinalLoopCount = LoopCount / MainLoopCount / SubLoopCount;

		constexpr const int ExpectedUS = 1500000;

		FDateTime StartTime = FDateTime::UtcNow();
		{
			FWwiseExecutionQueue MainExecutionQueue;
			FWwiseExecutionQueue SubExecutionQueue;
			FWwiseExecutionQueue DeletionExecutionQueue;

			for (int i = 0; i < MainLoopCount; ++i)
			{
				MainExecutionQueue.Async([&SubExecutionQueue, &DeletionExecutionQueue, SubLoopCount, FinalLoopCount]
				{
					for (int i = 0; i < SubLoopCount; ++i)
					{
						SubExecutionQueue.Async([&DeletionExecutionQueue, FinalLoopCount]
						{
							auto ExecutionQueue = new FWwiseExecutionQueue;
							for (int i = 0; i < FinalLoopCount; ++i)
							{
								ExecutionQueue->Async([]
								{
								});
							}
							DeletionExecutionQueue.Async([ExecutionQueue]
							{
								delete ExecutionQueue;
							});
						});
					}
				});
			}
			
			MainExecutionQueue.Close();
			SubExecutionQueue.Close();
		}
		FTimespan Duration = FDateTime::UtcNow() - StartTime;
		WWISE_TEST_LOG("AsyncAddingOpPerf %dus < %dus", (int)Duration.GetTotalMicroseconds(), ExpectedUS);
		CHECK(Duration.GetTotalMicroseconds() < ExpectedUS);
	}

	SECTION("AsyncStress with Sleep")
	{
		const bool bReduceLogVerbosity = FWwiseExecutionQueue::Test::bReduceLogVerbosity;
		const bool bMockSleepOnStateUpdate = FWwiseExecutionQueue::Test::bMockSleepOnStateUpdate;
		FWwiseExecutionQueue::Test::bReduceLogVerbosity = true;
		FWwiseExecutionQueue::Test::bMockSleepOnStateUpdate = true;
		ON_SCOPE_EXIT
		{
			FWwiseExecutionQueue::Test::bReduceLogVerbosity = bReduceLogVerbosity;
			FWwiseExecutionQueue::Test::bMockSleepOnStateUpdate = bMockSleepOnStateUpdate;
		};
		
		constexpr const int LoopCount = 1000;
		constexpr const int MainLoopCount = 10;
		constexpr const int SubLoopCount = 10;
		constexpr const int FinalLoopCount = LoopCount / MainLoopCount / SubLoopCount;

		constexpr const int ExpectedUS = 15000;

		FDateTime StartTime = FDateTime::UtcNow();
		{
			FWwiseExecutionQueue MainExecutionQueue;
			FWwiseExecutionQueue SubExecutionQueue;
			FWwiseExecutionQueue DeletionExecutionQueue;

			for (int i = 0; i < MainLoopCount; ++i)
			{
				MainExecutionQueue.Async([&SubExecutionQueue, &DeletionExecutionQueue, SubLoopCount, FinalLoopCount]
				{
					for (int i = 0; i < SubLoopCount; ++i)
					{
						SubExecutionQueue.Async([&DeletionExecutionQueue, FinalLoopCount]
						{
							auto ExecutionQueue = new FWwiseExecutionQueue;
							for (int i = 0; i < FinalLoopCount; ++i)
							{
								ExecutionQueue->Async([]
								{
								});
							}
							DeletionExecutionQueue.Async([ExecutionQueue]
							{
								delete ExecutionQueue;
							});
						});
					}
				});
			}
			
			MainExecutionQueue.Close();
			SubExecutionQueue.Close();
		}
		FTimespan Duration = FDateTime::UtcNow() - StartTime;
		WWISE_TEST_LOG("AsyncAddingOpPerf %dus < %dus", (int)Duration.GetTotalMicroseconds(), ExpectedUS);
		CHECK(Duration.GetTotalMicroseconds() < ExpectedUS);
	}

	SECTION("AsyncStress at Exit")
	{
		const bool bReduceLogVerbosity = FWwiseExecutionQueue::Test::bReduceLogVerbosity;
		const bool bMockEngineDeletion = FWwiseExecutionQueue::Test::bMockEngineDeletion;
		const bool bMockEngineDeleted = FWwiseExecutionQueue::Test::bMockEngineDeleted;
		FWwiseExecutionQueue::Test::bReduceLogVerbosity = true;
		ON_SCOPE_EXIT
		{
			FWwiseExecutionQueue::Test::bReduceLogVerbosity = bReduceLogVerbosity;
			FWwiseExecutionQueue::Test::bMockEngineDeletion = bMockEngineDeletion;
			FWwiseExecutionQueue::Test::bMockEngineDeleted = bMockEngineDeleted;
		};

		
		constexpr const int LoopCount = 100000;
		constexpr const int MainLoopCount = 100;
		constexpr const int SubLoopCount = 100;
		constexpr const int FinalLoopCount = LoopCount / MainLoopCount / SubLoopCount;

		constexpr const int ExpectedUS = 1000000;

		FDateTime StartTime = FDateTime::UtcNow();
		{
			FWwiseExecutionQueue MainExecutionQueue;
			FWwiseExecutionQueue SubExecutionQueue;
			FWwiseExecutionQueue DeletionExecutionQueue;

			for (int i = 0; i < MainLoopCount; ++i)
			{
				MainExecutionQueue.Async([&SubExecutionQueue, &DeletionExecutionQueue, SubLoopCount, FinalLoopCount]
				{
					for (int i = 0; i < SubLoopCount; ++i)
					{
						SubExecutionQueue.Async([&DeletionExecutionQueue, FinalLoopCount]
						{
							auto ExecutionQueue = new FWwiseExecutionQueue;
							for (int i = 0; i < FinalLoopCount; ++i)
							{
								ExecutionQueue->Async([]
								{
								});
							}
							DeletionExecutionQueue.Async([ExecutionQueue]
							{
								delete ExecutionQueue;
							});
						});
					}
				});

				if (i == MainLoopCount / 3)
				{
					MainExecutionQueue.Async([]
					{
						FWwiseExecutionQueue::Test::bMockEngineDeletion = true;
					});
				}
			}
			MainExecutionQueue.Async([]
			{
				FWwiseExecutionQueue::Test::bMockEngineDeleted = true;
			});
		
			MainExecutionQueue.Close();
			SubExecutionQueue.Close();
		}

		FTimespan Duration = FDateTime::UtcNow() - StartTime;
		WWISE_TEST_LOG("AsyncAddingOpPerf %dus < %dus", (int)Duration.GetTotalMicroseconds(), ExpectedUS);
		CHECK(Duration.GetTotalMicroseconds() < ExpectedUS);
	}
}

#endif // WWISE_UNIT_TESTS