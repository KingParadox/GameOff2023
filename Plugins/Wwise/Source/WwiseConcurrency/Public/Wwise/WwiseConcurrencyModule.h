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

#include "Modules/ModuleManager.h"
#include "Misc/ConfigCacheIni.h"

#include "AkInclude.h"

class FQueuedThreadPool;
class FWwiseGlobalCallbacks;

class IWwiseConcurrencyModule : public IModuleInterface
{
public:
	static FName GetModuleName()
	{
		static const FName ModuleName = GetModuleNameFromConfig();
		return ModuleName;
	}

	/**
	 * Checks to see if this module is loaded and ready.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded(GetModuleName());
	}

	static IWwiseConcurrencyModule* GetModule()
	{
		const auto ModuleName = GetModuleName();
		if (ModuleName.IsNone())
		{
			return nullptr;
		}

		FModuleManager& ModuleManager = FModuleManager::Get();
		IWwiseConcurrencyModule* Result = ModuleManager.GetModulePtr<IWwiseConcurrencyModule>(ModuleName);
		if (UNLIKELY(!Result))
		{
			if (UNLIKELY(IsEngineExitRequested()))
			{
				UE_LOG(LogLoad, Verbose, TEXT("Skipping reloading missing WwiseConcurrency module: Exiting."));
			}
			else if (UNLIKELY(!IsInGameThread()))
			{
				UE_LOG(LogLoad, Warning, TEXT("Skipping loading missing WwiseConcurrency module: Not in game thread"));
			}
			else
			{
				UE_LOG(LogLoad, Log, TEXT("Loading WwiseConcurrency module: %s"), *ModuleName.GetPlainNameString());
				Result = ModuleManager.LoadModulePtr<IWwiseConcurrencyModule>(ModuleName);
				if (UNLIKELY(!Result))
				{
					UE_LOG(LogLoad, Fatal, TEXT("Could not load WwiseConcurrency module: %s not found"), *ModuleName.GetPlainNameString());
				}
			}
		}

		return Result;
	}

	virtual FQueuedThreadPool* GetExecutionQueueThreadPool() = 0;
	virtual FWwiseGlobalCallbacks* GetGlobalCallbacks() = 0;

private:
	static inline FName GetModuleNameFromConfig()
	{
		FString ModuleName = TEXT("WwiseConcurrency");
		GConfig->GetString(TEXT("Audio"), TEXT("WwiseConcurrencyModuleName"), ModuleName, GEngineIni);
		return FName(ModuleName);
	}
};
