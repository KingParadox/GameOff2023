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
#include "Wwise/WwiseFuture.h"
#include <atomic>

WWISE_TEST_CASE(Concurrency_Future_Smoke, "Wwise::Concurrency::Future_Smoke", "[ApplicationContextMask][SmokeFilter]")
{
	SECTION("Static")
	{
		static_assert(std::is_constructible<TWwisePromise<void>>::value);
		static_assert(std::is_constructible<TWwiseFuture<void>>::value);
		static_assert(std::is_constructible<TWwiseSharedFuture<void>>::value);
		static_assert(std::is_constructible<TWwiseSharedFuture<void>, TWwiseFuture<void>&&>::value);
		static_assert(std::is_constructible<TWwisePromise<int>>::value);
		static_assert(std::is_constructible<TWwiseFuture<int>>::value);
		static_assert(std::is_constructible<TWwiseSharedFuture<int>>::value);
		static_assert(std::is_constructible<TWwiseSharedFuture<int>, TWwiseFuture<int>&&>::value);
		static_assert(std::is_constructible<TWwisePromise<int&>>::value);
		static_assert(std::is_constructible<TWwiseFuture<int&>>::value);
		static_assert(std::is_constructible<TWwiseSharedFuture<int&>>::value);
		static_assert(!std::is_constructible<TWwiseSharedFuture<int&>, TWwiseFuture<int&>&&>::value);

		static_assert(!std::is_copy_constructible<TWwisePromise<void>>::value);
		static_assert(std::is_move_constructible<TWwisePromise<void>>::value);
		static_assert(!std::is_copy_constructible<TWwiseFuture<void>>::value);
		static_assert(std::is_move_constructible<TWwiseFuture<void>>::value);
		static_assert(std::is_copy_constructible<TWwiseSharedFuture<void>>::value);
		static_assert(std::is_move_constructible<TWwiseSharedFuture<void>>::value);
	}

	SECTION("Basic Operations")
	{
		TWwisePromise<void> VoidPromise;
		TWwisePromise<int> IntPromise;
		TWwisePromise<int&> IntRefPromise;

		TWwiseFuture<void> UninitVoidFuture;
		TWwiseFuture<int> UninitIntFuture;
		TWwiseFuture<int&> UninitIntRefFuture;

		TWwiseFuture<void> VoidFuture( VoidPromise.GetFuture() );
		TWwiseFuture<int> IntFuture( IntPromise.GetFuture() );
		TWwiseFuture<int&> IntRefFuture( IntRefPromise.GetFuture() );

		CHECK(!UninitVoidFuture.IsValid());
		CHECK(!UninitIntFuture.IsValid());
		CHECK(!UninitIntRefFuture.IsValid());
		CHECK(VoidFuture.IsValid());
		CHECK(IntFuture.IsValid());
		CHECK(IntRefFuture.IsValid());

		CHECK(!VoidFuture.IsReady());
		CHECK(!IntFuture.IsReady());
		CHECK(!IntRefFuture.IsReady());

		int Value = 1;
		VoidPromise.SetValue();
		IntPromise.SetValue(1);
		IntRefPromise.SetValue(Value);

		CHECK(VoidFuture.IsReady());
		CHECK(IntFuture.IsReady());
		CHECK(IntRefFuture.IsReady());
	}

	SECTION("Shared Basic Operations")
	{
		TWwisePromise<void> VoidPromise;
		TWwisePromise<int> IntPromise;
		TWwisePromise<int&> IntRefPromise;

		TWwiseFuture<void> UninitVoidFuture;
		TWwiseFuture<int> UninitIntFuture;
		TWwiseFuture<int&> UninitIntRefFuture;

		TWwiseFuture<void> VoidFuture( VoidPromise.GetFuture() );
		TWwiseFuture<int> IntFuture( IntPromise.GetFuture() );
		TWwiseFuture<int&> IntRefFuture( IntRefPromise.GetFuture() );

		TWwiseSharedFuture<void> UninitSharedVoidFuture;
		TWwiseSharedFuture<int> UninitSharedIntFuture;
		TWwiseSharedFuture<int&> UninitSharedIntRefFuture;
		TWwiseSharedFuture<void> UninitSharedVoidFuture2( MoveTemp(UninitVoidFuture) );
		TWwiseSharedFuture<int> UninitSharedIntFuture2( MoveTemp(UninitIntFuture) );

		TWwiseSharedFuture<void> SharedVoidFuture( VoidFuture.Share() );
		TWwiseSharedFuture<int> SharedIntFuture( IntFuture.Share() );
		//TWwiseSharedFuture<int&> SharedIntRefFuture( IntRefFuture.Share() );
		auto SharedVoidFuture2( SharedVoidFuture );
		auto SharedIntFuture2( SharedIntFuture );
		//auto SharedIntRefFuture2( SharedIntRefFuture );

		CHECK(!UninitVoidFuture.IsValid());
		CHECK(!UninitIntFuture.IsValid());
		CHECK(!UninitIntRefFuture.IsValid());
		CHECK(!VoidFuture.IsValid());
		CHECK(!IntFuture.IsValid());
		CHECK(IntRefFuture.IsValid());
		CHECK(!UninitSharedVoidFuture.IsValid());
		CHECK(!UninitSharedIntFuture.IsValid());
		CHECK(!UninitSharedIntRefFuture.IsValid());
		CHECK(!UninitSharedVoidFuture2.IsValid());
		CHECK(!UninitSharedIntFuture2.IsValid());

		CHECK(SharedVoidFuture.IsValid());
		CHECK(SharedIntFuture.IsValid());
		//CHECK(SharedIntRefFuture.IsValid());

		CHECK(!SharedVoidFuture.IsReady());
		CHECK(!SharedIntFuture.IsReady());
		//CHECK(!SharedIntRefFuture.IsReady());

		int Value = 1;
		VoidPromise.SetValue();
		IntPromise.SetValue(1);
		IntRefPromise.SetValue(Value);

		CHECK(SharedVoidFuture.IsReady());
		CHECK(SharedIntFuture.IsReady());
		//CHECK(SharedIntRefFuture.IsReady());
		CHECK(SharedVoidFuture2.IsReady());
		CHECK(SharedIntFuture2.IsReady());
		//CHECK(SharedIntRefFuture2.IsReady());
	}

	SECTION("Next")
	{
		bool bDone = false;
		TWwisePromise<void> VoidPromise;
		auto VoidFuture( VoidPromise.GetFuture() );
		auto NewFuture( VoidFuture.Next([&bDone](int)
		{
			bDone = true;
		}));
		CHECK(!VoidFuture.IsValid());
		CHECK(NewFuture.IsValid());
	
		VoidPromise.EmplaceValue();
		CHECK(bDone);
		CHECK(NewFuture.IsReady());
	}

	SECTION("Next Already Emplaced")
	{
		bool bDone = false;
		TWwisePromise<void> VoidPromise;
		VoidPromise.EmplaceValue();
		
		auto VoidFuture( VoidPromise.GetFuture() );
		auto NewFuture( VoidFuture.Next([&bDone](int)
		{
			bDone = true;
		}));
		CHECK(!VoidFuture.IsValid());
		CHECK(NewFuture.IsValid());
	
		CHECK(bDone);
		CHECK(NewFuture.IsReady());
	}

	SECTION("Then")
	{
		bool bDone = false;
		TWwisePromise<void> VoidPromise;
		auto VoidFuture( VoidPromise.GetFuture() );
		auto NewFuture( VoidFuture.Then([&bDone](TWwiseFuture<int> Future) mutable
		{
			Future.Get();
			CHECK(Future.IsReady());
			bDone = true;
		}));
		CHECK(!VoidFuture.IsValid());
		CHECK(NewFuture.IsValid());

		VoidPromise.EmplaceValue();
		CHECK(bDone);
		CHECK(NewFuture.IsReady());
	}

	SECTION("Then Already Emplaced")
	{
		bool bDone = false;
		TWwisePromise<void> VoidPromise;
		VoidPromise.EmplaceValue();

		auto VoidFuture( VoidPromise.GetFuture() );
		auto NewFuture( VoidFuture.Then([&bDone](TWwiseFuture<int> Future) mutable
		{
			Future.Get();
			CHECK(Future.IsReady());
			bDone = true;
		}));
		CHECK(!VoidFuture.IsValid());
		CHECK(NewFuture.IsValid());

		CHECK(bDone);
		CHECK(NewFuture.IsReady());
	}
}

/*
WWISE_TEST_CASE(Concurrency_Future, "Wwise::Concurrency::Future", "[ApplicationContextMask][ProductFilter]")
{
}
*/

/*
WWISE_TEST_CASE(Concurrency_Future_Perf, "Wwise::Concurrency::Future_Perf", "[ApplicationContextMask][PerfFilter]")
{
}
*/

void Multithreaded_Then_Future_Op(TWwiseFuture<int>&& Future, FEventRef& Event, int Num)
{
	FFunctionGraphTask::CreateAndDispatchWhenReady([Future = MoveTemp(Future), &Event, Num]() mutable
	{
		Future.Get();

		if (Num <= 0)
		{
			Event->Trigger();
			return;
		}
		
		Future.Then([&Event, Num](TWwiseFuture<int> Future) mutable
		{
			Multithreaded_Then_Future_Op(MoveTemp(Future), Event, Num - 1);
		});
	});
};


WWISE_TEST_CASE(Concurrency_Future_Stress, "Wwise::Concurrency::Future_Stress", "[ApplicationContextMask][StressFilter]")
{
	SECTION("Multithreaded Then Future")
	{
		static constexpr const auto Count = 50;

		FEventRef Events[Count];
		
		for (int Num = 0; Num < Count; ++Num)
		{
			TWwisePromise<int> Promise;
			auto Future( Promise.GetFuture() );
			auto& Event(Events[Num]);

			if ( Num & 0 )
			{
				Promise.EmplaceValue(1);
			}

			Multithreaded_Then_Future_Op(MoveTemp(Future), Event, Num);
			
			if (!( Num & 0 ))
			{
				CHECK(! Events[Num]->Wait(1) );
				Promise.EmplaceValue(1);
			}
		}

		for (int Num = 0; Num < Count; ++Num)
		{
			CHECK(Events[Num]->Wait(100));
		}
	}

	SECTION("Multithreaded Promise Wait")
	{
		static constexpr const auto Count = 2000;

		TWwiseFuture<int> Futures[Count];
		FEventRef Events[Count];
		
		for (int Num = 0; Num < Count; ++Num)
		{
			TWwisePromise<int> Promise;
			Futures[Num] = Promise.GetFuture();

			FFunctionGraphTask::CreateAndDispatchWhenReady([Future = &Futures[Num], Event = &Events[Num]]() mutable
			{
				CHECK(Future->WaitFor(FTimespan::FromMilliseconds(100)));
				if (Future->IsReady())
				{
					CHECK(Future->Get());
				}
				Event->Get()->Trigger();
			});			

			FFunctionGraphTask::CreateAndDispatchWhenReady([Promise = MoveTemp(Promise)]() mutable
			{
				Promise.EmplaceValue(1);
			});
		}

		for (int Num = 0; Num < Count; ++Num)
		{
			CHECK(Events[Num]->Wait(FTimespan::FromMilliseconds(200)));
		}
	}
}

#endif // WWISE_UNIT_TESTS