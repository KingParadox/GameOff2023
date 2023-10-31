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
IAkObstructionAndOcclusionService.cpp:
=============================================================================*/

#include "ObstructionAndOcclusionService/AkComponentObstructionAndOcclusionService.h"
#include "ObstructionAndOcclusionService/AkObstructionAndOcclusionService.h"
#include "AkAudioDevice.h"
#include "AkComponent.h"
#include "Engine/World.h"

void AkComponentObstructionAndOcclusionService::Init(UAkComponent* in_akComponent, float in_refreshInterval)
{
	_Init(in_akComponent->GetWorld(), in_refreshInterval);
	AssociatedComponent = in_akComponent;
}

void AkComponentObstructionAndOcclusionService::SetObstructionAndOcclusion(AkGameObjectID ListenerId, float Value)
{
	FAkAudioDevice* AkAudioDevice = FAkAudioDevice::Get();
	if (AkAudioDevice)
	{
		AkGameObjectID gameObjId = AssociatedComponent->GetAkGameObjectID();
		bool bUsingRooms = AkAudioDevice->UsingSpatialAudioRooms(AssociatedComponent->GetWorld());

		if (bUsingRooms)
		{
			AkAudioDevice->SetObjectObstructionAndOcclusion(gameObjId, ListenerId, Value, 0.0f);
		}
		else // if (!bUsingRooms)
		{
			AkAudioDevice->SetObjectObstructionAndOcclusion(gameObjId, ListenerId, 0.0f, Value);
		}
	}
}