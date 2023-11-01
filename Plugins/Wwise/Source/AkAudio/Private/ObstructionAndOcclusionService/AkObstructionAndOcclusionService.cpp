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

/*=============================================================================
AkObstructionAndOcclusionService.cpp:
=============================================================================*/

#include "ObstructionAndOcclusionService/AkObstructionAndOcclusionService.h"
#include "AkAudioDevice.h"
#include "AkComponent.h"
#include "AkSpatialAudioHelper.h"
#include "AkAcousticPortal.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Components/PrimitiveComponent.h"
#include "Async/Async.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"


#define AK_DEBUG_OCCLUSION_PRINT 0
#if AK_DEBUG_OCCLUSION_PRINT
static int framecounter = 0;
#endif

#define AK_DEBUG_OCCLUSION 0
#if AK_DEBUG_OCCLUSION
#include "DrawDebugHelpers.h"
#endif



FAkListenerObstructionAndOcclusion::FAkListenerObstructionAndOcclusion(float in_TargetValue, float in_CurrentValue)
	: CurrentValue(in_CurrentValue)
	, TargetValue(in_TargetValue)
	, Rate(0.0f)
{}

void FAkListenerObstructionAndOcclusion::SetTarget(float in_TargetValue)
{
	TargetValue = FMath::Clamp(in_TargetValue, 0.0f, 1.0f);

	const float UAkComponent_OCCLUSION_FADE_RATE = 2.0f; // from 0.0 to 1.0 in 0.5 seconds
	Rate = FMath::Sign(TargetValue - CurrentValue) * UAkComponent_OCCLUSION_FADE_RATE;
}

bool FAkListenerObstructionAndOcclusion::Update(float DeltaTime)
{
	auto OldValue = CurrentValue;
	if (OldValue != TargetValue)
	{
		const auto NewValue = OldValue + Rate * DeltaTime;
		if (OldValue > TargetValue)
			CurrentValue = FMath::Clamp(NewValue, TargetValue, OldValue);
		else
			CurrentValue = FMath::Clamp(NewValue, OldValue, TargetValue);

		check(CurrentValue >= 0.f && CurrentValue <= 1.f);
		return true;
	}

	return false;
}

bool FAkListenerObstructionAndOcclusion::ReachedTarget()
{
	return CurrentValue == TargetValue;
}

//=====================================================================================
// FAkListenerObstructionAndOcclusionPair
//=====================================================================================

FAkListenerObstructionAndOcclusionPair::FAkListenerObstructionAndOcclusionPair()
{
	SourceRayCollisions.AddZeroed(NUM_BOUNDING_BOX_TRACE_POINTS);
	ListenerRayCollisions.AddZeroed(NUM_BOUNDING_BOX_TRACE_POINTS);

	SourceTraceHandles.AddDefaulted(NUM_BOUNDING_BOX_TRACE_POINTS);
	ListenerTraceHandles.AddDefaulted(NUM_BOUNDING_BOX_TRACE_POINTS);
}

bool FAkListenerObstructionAndOcclusionPair::Update(float DeltaTime)
{
	if (CurrentCollisionCount != GetCollisionCount())
	{
		CurrentCollisionCount = GetCollisionCount();
		const float ratio = (float)CurrentCollisionCount / NUM_BOUNDING_BOX_TRACE_POINTS;
		Occ.SetTarget(ratio);
		Obs.SetTarget(ratio);
	}
	const bool bObsChanged = Obs.Update(DeltaTime);
	const bool bOccChanged = Occ.Update(DeltaTime);
	return bObsChanged || bOccChanged;
}

void FAkListenerObstructionAndOcclusionPair::Reset()
{
	for (int i = 0; i < NUM_BOUNDING_BOX_TRACE_POINTS; ++i)
	{
		SourceRayCollisions[i] = ListenerRayCollisions[i] = false;
	}
}

bool FAkListenerObstructionAndOcclusionPair::ReachedTarget()
{
	return Obs.ReachedTarget() && Occ.ReachedTarget();
}

void FAkListenerObstructionAndOcclusionPair::AsyncTraceFromSource(const FVector& SourcePosition, const FVector& EndPosition, int BoundingBoxPointIndex, ECollisionChannel CollisionChannel, UWorld* World, const FCollisionQueryParams& CollisionParams)
{
	ensure(BoundingBoxPointIndex < NUM_BOUNDING_BOX_TRACE_POINTS);
	// Check that we're not stacking another async trace on top of one that hasn't completed yet.
	if (!World->IsTraceHandleValid(SourceTraceHandles[BoundingBoxPointIndex], false))
	{
		SourceTraceHandles[BoundingBoxPointIndex] = World->AsyncLineTraceByChannel(EAsyncTraceType::Single, SourcePosition, EndPosition, CollisionChannel, CollisionParams);
	}
}
void FAkListenerObstructionAndOcclusionPair::AsyncTraceFromListener(const FVector& ListenerPosition, const FVector& EndPosition, int BoundingBoxPointIndex, ECollisionChannel CollisionChannel, UWorld* World, const FCollisionQueryParams& CollisionParams)
{
	ensure(BoundingBoxPointIndex < NUM_BOUNDING_BOX_TRACE_POINTS);
	// Check that we're not stacking another async trace on top of one that hasn't completed yet.
	if (!World->IsTraceHandleValid(ListenerTraceHandles[BoundingBoxPointIndex], false))
	{
		ListenerTraceHandles[BoundingBoxPointIndex] = World->AsyncLineTraceByChannel(EAsyncTraceType::Single, ListenerPosition, EndPosition, CollisionChannel, CollisionParams);
	}
}

int FAkListenerObstructionAndOcclusionPair::GetCollisionCount()
{
	int CollisionCount = 0;
	for (int i = 0; i < NUM_BOUNDING_BOX_TRACE_POINTS; ++i)
	{
		CollisionCount += (SourceRayCollisions[i] || ListenerRayCollisions[i]) ? 1 : 0;
	}
	return CollisionCount;
}

void FAkListenerObstructionAndOcclusionPair::CheckTraceResults(UWorld* World)
{
	CheckListenerTraceHandles(World);
	CheckSourceTraceHandles(World);
}

void FAkListenerObstructionAndOcclusionPair::CheckListenerTraceHandles(UWorld* World)
{
	for (int BoundingBoxPointIndex = 0; BoundingBoxPointIndex < NUM_BOUNDING_BOX_TRACE_POINTS; ++BoundingBoxPointIndex)
	{
		if (ListenerTraceHandles[BoundingBoxPointIndex]._Data.FrameNumber != 0)
		{
			FTraceDatum OutData;
			if (World->QueryTraceData(ListenerTraceHandles[BoundingBoxPointIndex], OutData))
			{
				ListenerTraceHandles[BoundingBoxPointIndex]._Data.FrameNumber = 0;
				ListenerRayCollisions[BoundingBoxPointIndex] = OutData.OutHits.Num() > 0;
			}
		}
	}
}

void FAkListenerObstructionAndOcclusionPair::CheckSourceTraceHandles(UWorld* World)
{
	for (int BoundingBoxPointIndex = 0; BoundingBoxPointIndex < NUM_BOUNDING_BOX_TRACE_POINTS; ++BoundingBoxPointIndex)
	{
		if (SourceTraceHandles[BoundingBoxPointIndex]._Data.FrameNumber != 0)
		{
			FTraceDatum OutData;
			if (World->QueryTraceData(SourceTraceHandles[BoundingBoxPointIndex], OutData))
			{
				SourceTraceHandles[BoundingBoxPointIndex]._Data.FrameNumber = 0;
				SourceRayCollisions[BoundingBoxPointIndex] = OutData.OutHits.Num() > 0;
			}
		}
	}
}

//=====================================================================================
// AkObstructionAndOcclusionService
//=====================================================================================

void AkObstructionAndOcclusionService::_Init(UWorld* in_world, float in_refreshInterval)
{
	if (in_refreshInterval > 0 && in_world != nullptr)
		LastObstructionAndOcclusionRefresh = in_world->GetTimeSeconds() + FMath::RandRange(0.0f, in_refreshInterval);
	else
		LastObstructionAndOcclusionRefresh = -1;

}

void AkObstructionAndOcclusionService::RefreshObstructionAndOcclusion(const UAkComponentSet& in_Listeners, const FVector& SourcePosition, const AActor* Actor, AkRoomID RoomID, ECollisionChannel in_collisionChannel, const float DeltaTime, float OcclusionRefreshInterval)
{
	auto AudioDevice = FAkAudioDevice::Get();

	// Fade the active occlusions
	bool StillClearingObsOcc = false;
	for (auto It = ListenerInfoMap.CreateIterator(); It; ++It)
	{
		AkGameObjectID Listener = It->Key;

		if (in_Listeners.Find((UAkComponent*)Listener) == nullptr)
		{
			It.RemoveCurrent();
			continue;
		}

		FAkListenerObstructionAndOcclusionPair& ObsOccPair = It->Value;
		ObsOccPair.CheckTraceResults(Actor->GetWorld());
		if (ObsOccPair.Update(DeltaTime) && AudioDevice)
		{
			SetObstructionAndOcclusion(Listener, ObsOccPair.Obs.CurrentValue);
		}

		if (ClearingObstructionAndOcclusion)
		{
			StillClearingObsOcc |= !ObsOccPair.ReachedTarget();
		}
	}

	if (ClearingObstructionAndOcclusion)
	{
		ClearingObstructionAndOcclusion = StillClearingObsOcc;
		return;
	}

	// Compute occlusion only when needed.
	// Have to have "LastObstructionAndOcclusionRefresh == -1" because GetWorld() might return nullptr in UAkComponent's constructor,
	// preventing us from initializing it to something smart.
	const UWorld* CurrentWorld = Actor ? Actor->GetWorld() : nullptr;
	if (CurrentWorld)
	{
		float CurrentTime = CurrentWorld->GetTimeSeconds();
		if (CurrentTime < LastObstructionAndOcclusionRefresh && LastObstructionAndOcclusionRefresh - CurrentTime > OcclusionRefreshInterval)
		{
			// Occlusion refresh interval was made shorter since the last refresh, we need to re-distribute the next random calculation
			LastObstructionAndOcclusionRefresh = CurrentTime + FMath::RandRange(0.0f, OcclusionRefreshInterval);
		}

		if (LastObstructionAndOcclusionRefresh == -1 || (CurrentTime - LastObstructionAndOcclusionRefresh) >= OcclusionRefreshInterval)
		{
			LastObstructionAndOcclusionRefresh = CurrentTime;
			for (auto& Listener : in_Listeners)
			{
				auto& MapEntry = ListenerInfoMap.FindOrAdd(Listener->GetAkGameObjectID());
				MapEntry.Position = Listener->GetPosition();
			}
			CalculateObstructionAndOcclusionValues(in_Listeners, SourcePosition, Actor, RoomID, in_collisionChannel);
		}
	}
}

void AkObstructionAndOcclusionService::CalculateObstructionAndOcclusionValues(const UAkComponentSet& in_Listeners, const FVector& SourcePosition, const AActor* Actor, AkRoomID RoomID, ECollisionChannel in_collisionChannel, bool bAsync /* = true */)
{
	auto CurrentWorld = Actor->GetWorld();
	if (!CurrentWorld)
		return;

	static const FName NAME_SoundOcclusion = TEXT("SoundOcclusion");
	FCollisionQueryParams CollisionParams(NAME_SoundOcclusion, true, Actor);
	auto PlayerController = GEngine->GetFirstLocalPlayerController(CurrentWorld);
	if (PlayerController)
		CollisionParams.AddIgnoredActor(PlayerController->GetPawn());

	for (auto& Listener : in_Listeners)
	{
		if (RoomID != Listener->GetSpatialAudioRoom())
			continue;

		auto MapEntry = ListenerInfoMap.Find(Listener->GetAkGameObjectID());
		if (MapEntry == nullptr)
			continue;

		const FVector ListenerPosition = MapEntry->Position;

		FHitResult OutHit;
		const bool bNowOccluded = CurrentWorld->LineTraceSingleByChannel(OutHit, SourcePosition, ListenerPosition, in_collisionChannel, CollisionParams);

		if (bNowOccluded)
		{
			FBox BoundingBox;
			AActor* HitActor = AkSpatialAudioHelper::GetActorFromHitResult(OutHit);
			if (HitActor)
			{
				BoundingBox = HitActor->GetComponentsBoundingBox();
			}
			else if (OutHit.Component.IsValid())
			{
				BoundingBox = OutHit.Component->Bounds.GetBox();
			}
			// Translate the impact point to the bounding box of the obstacle
			const FVector Points[] =
			{
				FVector(OutHit.ImpactPoint.X, BoundingBox.Min.Y, BoundingBox.Min.Z),
				FVector(OutHit.ImpactPoint.X, BoundingBox.Min.Y, BoundingBox.Max.Z),
				FVector(OutHit.ImpactPoint.X, BoundingBox.Max.Y, BoundingBox.Min.Z),
				FVector(OutHit.ImpactPoint.X, BoundingBox.Max.Y, BoundingBox.Max.Z),

				FVector(BoundingBox.Min.X, OutHit.ImpactPoint.Y, BoundingBox.Min.Z),
				FVector(BoundingBox.Min.X, OutHit.ImpactPoint.Y, BoundingBox.Max.Z),
				FVector(BoundingBox.Max.X, OutHit.ImpactPoint.Y, BoundingBox.Min.Z),
				FVector(BoundingBox.Max.X, OutHit.ImpactPoint.Y, BoundingBox.Max.Z),

				FVector(BoundingBox.Min.X, BoundingBox.Min.Y, OutHit.ImpactPoint.Z),
				FVector(BoundingBox.Min.X, BoundingBox.Max.Y, OutHit.ImpactPoint.Z),
				FVector(BoundingBox.Max.X, BoundingBox.Min.Y, OutHit.ImpactPoint.Z),
				FVector(BoundingBox.Max.X, BoundingBox.Max.Y, OutHit.ImpactPoint.Z)
			};

			if (bAsync)
			{
				for (int PointIndex = 0; PointIndex < NUM_BOUNDING_BOX_TRACE_POINTS; ++PointIndex)
				{
					auto Point = Points[PointIndex];
					MapEntry->AsyncTraceFromListener(ListenerPosition, Point, PointIndex, in_collisionChannel, CurrentWorld, CollisionParams);
					MapEntry->AsyncTraceFromSource(SourcePosition, Point, PointIndex, in_collisionChannel, CurrentWorld, CollisionParams);
				}
			}
			else
			{
				// Compute the number of "second order paths" that are also obstructed. This will allow us to approximate
				// "how obstructed" the source is.
				int32 NumObstructedPaths = 0;
				for (const auto& Point : Points)
				{
					if (CurrentWorld->LineTraceSingleByChannel(OutHit, ListenerPosition, Point, in_collisionChannel, CollisionParams) ||
						CurrentWorld->LineTraceSingleByChannel(OutHit, SourcePosition, Point, in_collisionChannel, CollisionParams))
						++NumObstructedPaths;
				}
				// Modulate occlusion by blocked secondary paths. 
				const float ratio = (float)NumObstructedPaths / NUM_BOUNDING_BOX_TRACE_POINTS;
				MapEntry->Occ.SetTarget(ratio);
				MapEntry->Obs.SetTarget(ratio);
			}

#if AK_DEBUG_OCCLUSION
			check(IsInGameThread());
			// Draw bounding box and "second order paths"
			//UE_LOG(LogAkAudio, Log, TEXT("Target Occlusion level: %f"), ListenerOcclusionInfo[ListenerIdx].TargetValue);
			FlushPersistentDebugLines(CurrentWorld);
			FlushDebugStrings(CurrentWorld);
			DrawDebugBox(CurrentWorld, BoundingBox.GetCenter(), BoundingBox.GetExtent(), FColor::White, false, 4);
			DrawDebugPoint(CurrentWorld, ListenerPosition, 10.0f, FColor(0, 255, 0), false, 4);
			DrawDebugPoint(CurrentWorld, SourcePosition, 10.0f, FColor(0, 255, 0), false, 4);
			DrawDebugPoint(CurrentWorld, OutHit.ImpactPoint, 10.0f, FColor(0, 255, 0), false, 4);

			for (int32 i = 0; i < NUM_BOUNDING_BOX_TRACE_POINTS; i++)
			{
				DrawDebugPoint(CurrentWorld, Points[i], 10.0f, FColor(255, 255, 0), false, 4);
				DrawDebugString(CurrentWorld, Points[i], FString::Printf(TEXT("%d"), i), nullptr, FColor::White, 4);
				DrawDebugLine(CurrentWorld, Points[i], ListenerPosition, FColor::Cyan, false, 4);
				DrawDebugLine(CurrentWorld, Points[i], SourcePosition, FColor::Cyan, false, 4);
			}
			FColor LineColor = FColor::MakeRedToGreenColorFromScalar(1.0f - MapEntry->Occ.TargetValue);
			DrawDebugLine(CurrentWorld, ListenerPosition, SourcePosition, LineColor, false, 4);
#endif // AK_DEBUG_OCCLUSION
		}
		else
		{
			MapEntry->Occ.SetTarget(0.0f);
			MapEntry->Obs.SetTarget(0.0f);
			MapEntry->Reset();
		}
	}
}

void AkObstructionAndOcclusionService::SetObstructionAndOcclusion(const UAkComponentSet& in_Listeners, AkRoomID RoomID)
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (!AkAudioDevice)
		return;

	for (auto& Listener : in_Listeners)
	{
		if (RoomID != Listener->GetSpatialAudioRoom())
			continue;

		auto MapEntry = ListenerInfoMap.Find(Listener->GetAkGameObjectID());

		if (MapEntry == nullptr)
			continue;

		MapEntry->Occ.CurrentValue = MapEntry->Occ.TargetValue;
		SetObstructionAndOcclusion(Listener->GetAkGameObjectID(), MapEntry->Obs.CurrentValue/*, Occlusion.CurrentValue*/);
	}
}

void AkObstructionAndOcclusionService::ClearOcclusionValues()
{
	ClearingObstructionAndOcclusion = false;

	for (auto& ListenerPack : ListenerInfoMap)
	{
		FAkListenerObstructionAndOcclusionPair& Pair = ListenerPack.Value;
		Pair.Occ.SetTarget(0.0f);
		Pair.Obs.SetTarget(0.0f);
		ClearingObstructionAndOcclusion |= !Pair.ReachedTarget();
	}
}

void AkObstructionAndOcclusionService::Tick(const UAkComponentSet& in_Listeners, const FVector& SourcePosition, const AActor* Actor, AkRoomID RoomID, ECollisionChannel in_collisionChannel, float DeltaTime, float OcclusionRefreshInterval)
{
	// Check Occlusion/Obstruction, if enabled
	if (OcclusionRefreshInterval > 0.0f || ClearingObstructionAndOcclusion)
	{
		RefreshObstructionAndOcclusion(in_Listeners, SourcePosition, Actor, RoomID, in_collisionChannel, DeltaTime, OcclusionRefreshInterval);
	}
	else if (OcclusionRefreshInterval != PreviousRefreshInterval)
	{
		// Reset the occlusion obstruction pairs so that the occlusion is correctly recalculated.
		for (auto& ListenerPack : ListenerInfoMap)
		{
			FAkListenerObstructionAndOcclusionPair& Pair = ListenerPack.Value;
			Pair.Reset();
		}
		if (OcclusionRefreshInterval <= 0.0f)
			ClearOcclusionValues();
	}
	PreviousRefreshInterval = OcclusionRefreshInterval;
}

void AkObstructionAndOcclusionService::UpdateObstructionAndOcclusion(const UAkComponentSet& in_Listeners, const FVector& SourcePosition, const AActor* Actor, AkRoomID RoomID, ECollisionChannel in_collisionChannel, float OcclusionRefreshInterval)
{
	if ((OcclusionRefreshInterval > 0.f || ClearingObstructionAndOcclusion) && Actor)
	{
		for (auto& Listener : in_Listeners)
		{
			auto& MapEntry = ListenerInfoMap.FindOrAdd(Listener->GetAkGameObjectID());
			MapEntry.Position = Listener->GetPosition();
		}
		CalculateObstructionAndOcclusionValues(in_Listeners, SourcePosition, Actor, RoomID, in_collisionChannel, false);
		for (auto& ListenerPair : ListenerInfoMap)
		{
			ListenerPair.Value.Obs.CurrentValue = ListenerPair.Value.Obs.TargetValue;
			ListenerPair.Value.Occ.CurrentValue = ListenerPair.Value.Occ.TargetValue;
		}
		SetObstructionAndOcclusion(in_Listeners, RoomID);
	}
}

