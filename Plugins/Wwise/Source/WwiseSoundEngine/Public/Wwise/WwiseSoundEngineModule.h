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

#pragma once

#include "Wwise/WwiseSoundEngineVersionModule.h"
#include "Modules/ModuleManager.h"

class FWwiseGlobalCallbacks;

class IWwiseSoundEngineModule : public IModuleInterface
{
public:
	static WWISESOUNDENGINE_API IWwiseCommAPI* Comm;
	static WWISESOUNDENGINE_API IWwiseMemoryMgrAPI* MemoryMgr;
	static WWISESOUNDENGINE_API IWwiseMonitorAPI* Monitor;
	static WWISESOUNDENGINE_API IWwiseMusicEngineAPI* MusicEngine;
	static WWISESOUNDENGINE_API IWwiseSoundEngineAPI* SoundEngine;
	static WWISESOUNDENGINE_API IWwiseSpatialAudioAPI* SpatialAudio;
	static WWISESOUNDENGINE_API IWwiseStreamMgrAPI* StreamMgr;

	static WWISESOUNDENGINE_API IWwisePlatformAPI* Platform;
	static WWISESOUNDENGINE_API IWAAPI* WAAPI;

	static WWISESOUNDENGINE_API IWwiseSoundEngineVersionModule* VersionInterface;

	/**
	 * Checks to see if this module and the appropriate Sound Engine API are loaded and ready.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded(TEXT("WwiseSoundEngine"));
	}

	static void ForceLoadModule()
	{
		FModuleManager& ModuleManager = FModuleManager::Get();
		if (!IsAvailable())
		{
			if (IsEngineExitRequested())
			{
				UE_LOG(LogLoad, Verbose, TEXT("Skipping reloading missing WwiseSoundEngine: Exiting."));
			}
			else if (!IsInGameThread())
			{
				UE_LOG(LogLoad, Warning, TEXT("Skipping loading missing WwiseSoundEngine: Not in game thread"));
			}
			else
			{
				ModuleManager.LoadModule("WwiseSoundEngine");
			}
		}
	}
};

class WWISESOUNDENGINE_API FWwiseSoundEngineModule : public IWwiseSoundEngineModule
{
	void StartupModule() override;
	void ShutdownModule() override;
	static void DeleteInterface();
};
