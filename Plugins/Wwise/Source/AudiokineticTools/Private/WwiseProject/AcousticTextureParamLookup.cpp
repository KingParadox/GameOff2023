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

#include "AcousticTextureParamLookup.h"
#include "AkSettings.h"
#include "AkAcousticTexture.h"
#include "AkUnrealHelper.h"
#include "AssetManagement/AkAssetDatabase.h"
#include "IAudiokineticTools.h"
#include "Wwise/WwiseProjectDatabase.h"

void AkAcousticTextureParamLookup::LoadAllTextures()
{
	FWwiseProjectDatabase* ProjectDatabase = FWwiseProjectDatabase::Get();
	if (UNLIKELY(!ProjectDatabase))
	{
		UE_LOG(LogAudiokineticTools, Error, TEXT("LoadAllTextures: ProjectDatabase not loaded"));
		return;
	}

	const FWwiseDataStructureScopeLock DataStructure(*ProjectDatabase);
	const auto& AcousticTextures = DataStructure.GetAcousticTextures();

	if (AcousticTextures.Num() == 0)
	{
		return;
	}

	UAkSettings* AkSettings = GetMutableDefault<UAkSettings>();
	auto& AkAssetDatabase = AkAssetDatabase::Get();

	if (UNLIKELY(!AkSettings))
	{
		UE_LOG(LogAudiokineticTools, Error, TEXT("No AkSettings while loading Acoustic Textures"));
		return;
	}

	for (auto& AcousticTexture : AcousticTextures)
	{
		const FString& TextureName = AcousticTexture.Value.AcousticTextureName().ToString();
		float AbsorptionLow = AcousticTexture.Value.GetAcousticTexture()->AbsorptionLow;
		float AbsorptionMidLow = AcousticTexture.Value.GetAcousticTexture()->AbsorptionMidLow;
		float AbsorptionMidHigh = AcousticTexture.Value.GetAcousticTexture()->AbsorptionMidHigh;
		float AbsorptionHigh = AcousticTexture.Value.GetAcousticTexture()->AbsorptionHigh;

		uint32 TextureShortID = 0;
		FAssetData Texture;
		FGuid Id = AcousticTexture.Value.AcousticTextureGuid();
		if (LIKELY(AkAssetDatabase.FindFirstAsset(Id, Texture)))
		{
			const auto AcousticTextureAsset = Cast<UAkAcousticTexture>(Texture.GetAsset());
			if (LIKELY(AcousticTextureAsset))
			{
				TextureShortID = AcousticTextureAsset->GetShortID();

				UE_LOG(LogAudiokineticTools, VeryVerbose, TEXT("Properties for texture %s (%" PRIu32 "): Absorption High: %.0f%%, MidHigh: %.0f%%, MidLow: %.0f%%, Low: %.0f%%"),
					*TextureName, TextureShortID, AbsorptionHigh, AbsorptionMidHigh, AbsorptionMidLow, AbsorptionLow);
			}
			else
			{
				UE_LOG(LogAudiokineticTools, Error, TEXT("Invalid AkAcousticTexture for GUID %s (%s)"), *Id.ToString(), *TextureName);
			}
		}
		else
		{
			UE_LOG(LogAudiokineticTools, Log, TEXT("Properties for texture %s (No AkAcousticTexture): Absorption High: %.0f%%, MidHigh: %.0f%%, MidLow: %.0f%%, Low: %.0f%%"),
				*TextureName, AbsorptionHigh, AbsorptionMidHigh, AbsorptionMidLow, AbsorptionLow);
		}
		
		const FVector4 AbsorptionValues = FVector4(AbsorptionLow, AbsorptionMidLow, AbsorptionMidHigh, AbsorptionHigh) / 100.0f;

		AkSettings->SetAcousticTextureParams(Id,{AbsorptionValues, TextureShortID});
	}
}

void AkAcousticTextureParamLookup::UpdateParamsMap() const
{
	UAkSettings* AkSettings = GetMutableDefault<UAkSettings>();
	if (AkSettings != nullptr)
	{
		AkSettings->ClearTextureParamsMap();
		LoadAllTextures();
	}
}
