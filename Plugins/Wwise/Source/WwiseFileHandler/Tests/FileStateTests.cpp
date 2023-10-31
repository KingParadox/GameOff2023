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
#include "Wwise/WwiseFileState.h"
#include <atomic>

class FTestWwiseFileState : public FWwiseFileState
{
public:
	const TCHAR* GetManagingTypeName() const override final { return TEXT("Test"); }
	uint32 GetShortId() const override final { return ShortId; }

	FTestWwiseFileState(uint32 ShortId) :
		ShortId(ShortId)
	{}
	~FTestWwiseFileState() override { Term(); }

	void OpenFile(FOpenFileCallback&& InCallback) override
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([this, InCallback = MoveTemp(InCallback)]() mutable
		{
			if (bOpenFileSuccess)
			{
				OpenFileSucceeded(MoveTemp(InCallback));
			}
			else
			{
				OpenFileFailed(MoveTemp(InCallback));
			}
		});
	}
	
	void LoadInSoundEngine(FLoadInSoundEngineCallback&& InCallback) override
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([this, InCallback = MoveTemp(InCallback)]() mutable
		{
			if (bLoadInSoundEngineSuccess)
			{
				LoadInSoundEngineSucceeded(MoveTemp(InCallback));
			}
			else
			{
				LoadInSoundEngineFailed(MoveTemp(InCallback));
			}
		});
	}
	void UnloadFromSoundEngine(FUnloadFromSoundEngineCallback&& InCallback) override
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([this, InCallback = MoveTemp(InCallback)]() mutable
		{
			if (bUnloadFromSoundEngineDefer)
			{
				UnloadFromSoundEngineDefer(MoveTemp(InCallback));
			}
			else
			{
				UnloadFromSoundEngineDone(MoveTemp(InCallback));
			}
		});
	}
	void CloseFile(FCloseFileCallback&& InCallback) override
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([this, InCallback = MoveTemp(InCallback)]() mutable
		{
			if (bCloseFileDefer)
			{
				CloseFileDefer(MoveTemp(InCallback));
			}
			else
			{
				CloseFileDone(MoveTemp(InCallback));
			}
		});
	}

	enum class OptionalBool
	{
		False,
		True,
		Default
	};

	bool CanDelete() const override { return bCanDelete == OptionalBool::Default ? FWwiseFileState::CanDelete() : bCanDelete == OptionalBool::False ? false : true; }
	bool CanOpenFile() const override { return bCanOpenFile == OptionalBool::Default ? FWwiseFileState::CanOpenFile() : bCanOpenFile == OptionalBool::False ? false : true; }
	bool CanLoadInSoundEngine() const override { return bCanLoadInSoundEngine == OptionalBool::Default ? FWwiseFileState::CanLoadInSoundEngine() : bCanLoadInSoundEngine == OptionalBool::False ? false : true; }
	bool CanUnloadFromSoundEngine() const override { return bCanUnloadFromSoundEngine == OptionalBool::Default ? FWwiseFileState::CanUnloadFromSoundEngine() : bCanUnloadFromSoundEngine == OptionalBool::False ? false : true; }
	bool CanCloseFile() const override { return bCanCloseFile == OptionalBool::Default ? FWwiseFileState::CanCloseFile() : bCanCloseFile == OptionalBool::False ? false : true; }
	bool IsStreamedState() const override { return bIsStreamedState == OptionalBool::Default ? FWwiseFileState::IsStreamedState() : bIsStreamedState == OptionalBool::False ? false : true; }
	
	uint32 ShortId;
	bool bOpenFileSuccess{ true };
	bool bLoadInSoundEngineSuccess{ true };
	bool bUnloadFromSoundEngineDefer{ false };
	bool bCloseFileDefer{ false };

	OptionalBool bCanDelete{ OptionalBool::Default };
	OptionalBool bCanOpenFile{ OptionalBool::Default };
	OptionalBool bCanLoadInSoundEngine{ OptionalBool::Default };
	OptionalBool bCanUnloadFromSoundEngine{ OptionalBool::Default };
	OptionalBool bCanCloseFile{ OptionalBool::Default };
	OptionalBool bIsStreamedState{ OptionalBool::Default };
};

WWISE_TEST_CASE(FileHandler_FileState_Smoke, "Wwise::FileHandler::FileState_Smoke", "[ApplicationContextMask][SmokeFilter]")
{
	SECTION("Static")
	{
		static_assert(!std::is_constructible<FWwiseFileState>::value);
		static_assert(!std::is_copy_constructible<FWwiseFileState>::value);
		static_assert(!std::is_copy_assignable<FWwiseFileState>::value);
		static_assert(!std::is_move_constructible<FWwiseFileState>::value);
	}

	SECTION("Instantiation")
	{
		FTestWwiseFileState(0);
		FTestWwiseFileState(1);
		FTestWwiseFileState(2);
		FTestWwiseFileState(3);
	}

	SECTION("Loading Streaming File")
	{
		FEventRef Done;
		FTestWwiseFileState File(10);
		File.bIsStreamedState = FTestWwiseFileState::OptionalBool::True;

		bool bDeleted{ false };
		File.IncrementCountAsync(EWwiseFileStateOperationOrigin::Loading, [&File, &Done, &bDeleted](bool bResult) mutable
		{
			CHECK(bResult);
			CHECK(File.State == FWwiseFileState::EState::Opened);
			File.DecrementCountAsync(EWwiseFileStateOperationOrigin::Loading,
				[&File, &bDeleted](FWwiseFileState::FDecrementCountCallback&& Callback) mutable
				{
					CHECK(File.State == FWwiseFileState::EState::Closed);
					bDeleted = true;
					Callback();
				},
				[&Done, &bDeleted]() mutable
				{
					CHECK(bDeleted);
					Done->Trigger();
				});
		});
		CHECK(Done->Wait(10));
	}

	SECTION("Streaming File")
	{
		FEventRef Done;
		FTestWwiseFileState File(20);
		File.bIsStreamedState = FTestWwiseFileState::OptionalBool::True;
		
		bool bDeleted{ false };
		File.IncrementCountAsync(EWwiseFileStateOperationOrigin::Streaming, [&File, &Done, &bDeleted](bool bResult) mutable
		{
			CHECK(bResult);
			CHECK(File.State == FWwiseFileState::EState::Loaded);
			File.DecrementCountAsync(EWwiseFileStateOperationOrigin::Streaming,
				[&File, &bDeleted](FWwiseFileState::FDecrementCountCallback&& Callback) mutable
				{
					CHECK(File.State == FWwiseFileState::EState::Closed);
					bDeleted = true;
					Callback();
				},
				[&Done, &bDeleted]() mutable
				{
					CHECK(bDeleted);
					Done->Trigger();
				});
		});
		CHECK(Done->Wait(10));
	}

	SECTION("Delete in Decrement")
	{
		FEventRef Done;
		auto* File = new FTestWwiseFileState(30);

		bool bDeleted{ false };
		File->IncrementCountAsync(EWwiseFileStateOperationOrigin::Loading, [File, &Done, &bDeleted](bool bResult) mutable
		{
			CHECK(bResult);
			CHECK(File->State == FWwiseFileState::EState::Loaded);
			File->DecrementCountAsync(EWwiseFileStateOperationOrigin::Loading,
				[File, &bDeleted](FWwiseFileState::FDecrementCountCallback&& Callback) mutable
				{
					CHECK(File->State == FWwiseFileState::EState::Closed);
					delete File;
					bDeleted = true;
					Callback();
				},
				[&Done, &bDeleted]() mutable
				{
					CHECK(bDeleted);
					Done->Trigger();
				});
		});
		CHECK(Done->Wait(10));
	}

	SECTION("Ordered callbacks")
	{
		FEventRef Done;
		FTestWwiseFileState File(40);
		File.bIsStreamedState = FTestWwiseFileState::OptionalBool::True;

		int Order = 0;
		constexpr const int Count = 10;

		for (int NumOp = 0; NumOp < Count; ++NumOp)
		{
			File.IncrementCountAsync(EWwiseFileStateOperationOrigin::Loading, [NumOp, &Order](bool bResult) mutable
			{
				CHECK(NumOp*4+0 == Order);
				Order++;
			});
			File.DecrementCountAsync(EWwiseFileStateOperationOrigin::Loading,
				[](FWwiseFileState::FDecrementCountCallback&& Callback) mutable
				{
					Callback();
				},
				[NumOp, &Order]() mutable
				{
					CHECK(NumOp*4+1 == Order);
					Order++;
				});
			File.IncrementCountAsync(EWwiseFileStateOperationOrigin::Loading, [NumOp, &Order](bool bResult) mutable
			{
				CHECK(NumOp*4+2 == Order);
				Order++;
			});
			File.DecrementCountAsync(EWwiseFileStateOperationOrigin::Loading,
				[&Done](FWwiseFileState::FDecrementCountCallback&& Callback) mutable
				{
					Callback();
					Done->Trigger();
				},
				[NumOp, &Order]() mutable
				{
					CHECK(NumOp*4+3 == Order);
					Order++;
				});
		}
		CHECK(Done->Wait(100));
	}
}

WWISE_TEST_CASE(FileHandler_FileState, "Wwise::FileHandler::FileState", "[ApplicationContextMask][ProductFilter]")
{
	SECTION("Reloading Streaming File")
	{
		FEventRef Done;
		FTestWwiseFileState File(1000);
		File.bIsStreamedState = FTestWwiseFileState::OptionalBool::True;

		bool bDeleted{ false };
		bool bInitialDecrementDone{ false };
		File.IncrementCountAsync(EWwiseFileStateOperationOrigin::Loading, [&File, &bDeleted](bool bResult) mutable
		{
			CHECK(bResult);
			CHECK(File.State == FWwiseFileState::EState::Opened);
		});
		File.DecrementCountAsync(EWwiseFileStateOperationOrigin::Loading,
			[](FWwiseFileState::FDecrementCountCallback&& Callback) mutable
			{
				CHECK(false);
				Callback();
			},
			[&File, &bDeleted, &bInitialDecrementDone]() mutable
			{
				bInitialDecrementDone = true;
			});
		File.IncrementCountAsync(EWwiseFileStateOperationOrigin::Loading, [&File, &bDeleted](bool bResult) mutable
		{
			CHECK(bResult);
		});
		File.DecrementCountAsync(EWwiseFileStateOperationOrigin::Loading,
			[&File, &bDeleted](FWwiseFileState::FDecrementCountCallback&& Callback) mutable
			{
				CHECK(File.State == FWwiseFileState::EState::Closed);
				bDeleted = true;
				Callback();
			},
			[&Done, &bDeleted]() mutable
			{
				CHECK(bDeleted);
				Done->Trigger();
			});
		CHECK(Done->Wait(10));
		CHECK(bInitialDecrementDone);
	}

	SECTION("Restreaming File")
	{
		FEventRef Done;
		FTestWwiseFileState File(1010);
		File.bIsStreamedState = FTestWwiseFileState::OptionalBool::True;

		bool bDeleted{ false };
		bool bInitialDecrementDone{ false };
		File.IncrementCountAsync(EWwiseFileStateOperationOrigin::Streaming, [&File, &bDeleted](bool bResult) mutable
		{
		});
		File.DecrementCountAsync(EWwiseFileStateOperationOrigin::Streaming,
			[](FWwiseFileState::FDecrementCountCallback&& Callback) mutable
			{
				// Delete State should never be called, since the last one should delete our object 
				CHECK(false);
				Callback();
			},
			[&File, &bDeleted, &bInitialDecrementDone]() mutable
			{
				bInitialDecrementDone = true;
			});
		File.IncrementCountAsync(EWwiseFileStateOperationOrigin::Streaming, [&File, &bDeleted](bool bResult) mutable
		{
		});
		File.DecrementCountAsync(EWwiseFileStateOperationOrigin::Streaming,
			[&File, &bDeleted](FWwiseFileState::FDecrementCountCallback&& Callback) mutable
			{
				CHECK(File.State == FWwiseFileState::EState::Closed);
				bDeleted = true;
				Callback();
			},
			[&Done, &bDeleted]() mutable
			{
				CHECK(bDeleted);
				Done->Trigger();
			});
		CHECK(Done->Wait(10));
		CHECK(bInitialDecrementDone);
	}
}

/*
WWISE_TEST_CASE(FileHandler_FileState_Perf, "Wwise::FileHandler::FileState_Perf", "[ApplicationContextMask][PerfFilter]")
{
}
*/

WWISE_TEST_CASE(FileHandler_FileState_Stress, "Wwise::FileHandler::FileState_Stress", "[ApplicationContextMask][StressFilter]")
{
	SECTION("Stress Open and Streams")
	{
		constexpr const int StateCount = 10;
		constexpr const int LoadCount = 10;
		constexpr const int WiggleCount = 2;

		FEventRef Dones[StateCount];
		FTestWwiseFileState* Files[StateCount];
		for (int StateIter = 0; StateIter < StateCount; ++StateIter)
		{
			FEventRef& Done(Dones[StateIter]);
			Files[StateIter] = new FTestWwiseFileState(10000 + StateIter);
			FTestWwiseFileState& File = *Files[StateIter];
			File.bIsStreamedState = FTestWwiseFileState::OptionalBool::True;

			for (int LoadIter = 0; LoadIter < LoadCount; ++LoadIter)
			{
				const EWwiseFileStateOperationOrigin FirstOp = (StateIter&1)==0 ? EWwiseFileStateOperationOrigin::Loading : EWwiseFileStateOperationOrigin::Streaming;
				const EWwiseFileStateOperationOrigin SecondOp = (StateIter&1)==1 ? EWwiseFileStateOperationOrigin::Loading : EWwiseFileStateOperationOrigin::Streaming;
				FFunctionGraphTask::CreateAndDispatchWhenReady([Op = FirstOp, &Done, &File, WiggleCount]() mutable
				{
					for (int WiggleIter = 0; WiggleIter < WiggleCount; ++WiggleIter)
					{
						File.IncrementCountAsync(Op, [](bool){});
						File.DecrementCountAsync(Op, [](FWwiseFileState::FDecrementCountCallback&& InCallback){ InCallback(); }, []{});
					}
					File.IncrementCountAsync(Op, [Op, &Done, &File, WiggleCount](bool)
					{
						for (int WiggleIter = 0; WiggleIter < WiggleCount; ++WiggleIter)
						{
							File.DecrementCountAsync(Op, [](FWwiseFileState::FDecrementCountCallback&& InCallback){ InCallback(); }, []{});
							File.IncrementCountAsync(Op, [](bool){});
						}
						File.DecrementCountAsync(Op, [&Done](FWwiseFileState::FDecrementCountCallback&& InCallback)
						{
							Done->Trigger();
							InCallback();
						}, []{});
					});
				});
				FFunctionGraphTask::CreateAndDispatchWhenReady([Op = SecondOp, &Done, &File, WiggleCount]() mutable
				{
					for (int WiggleIter = 0; WiggleIter < WiggleCount; ++WiggleIter)
					{
						File.IncrementCountAsync(Op, [](bool){});
						File.DecrementCountAsync(Op, [](FWwiseFileState::FDecrementCountCallback&& InCallback){ InCallback(); }, []{});
					}
					File.IncrementCountAsync(Op, [Op, &Done, &File, WiggleCount](bool)
					{
						for (int WiggleIter = 0; WiggleIter < WiggleCount; ++WiggleIter)
						{
							File.DecrementCountAsync(Op, [](FWwiseFileState::FDecrementCountCallback&& InCallback){ InCallback(); }, []{});
							File.IncrementCountAsync(Op, [](bool){});
						}
						File.DecrementCountAsync(Op, [&Done](FWwiseFileState::FDecrementCountCallback&& InCallback)
						{
							Done->Trigger();
							InCallback();
						}, []{});
					});
				});
			}
		}

		for (int StateIter = 0; StateIter < StateCount; ++StateIter)
		{
			FEventRef& Done(Dones[StateIter]);
			FTestWwiseFileState* File = Files[StateIter];
		
			CHECK(Done->Wait(1000));
			delete File;
		}
	}	
}
#endif // WWISE_UNIT_TESTS