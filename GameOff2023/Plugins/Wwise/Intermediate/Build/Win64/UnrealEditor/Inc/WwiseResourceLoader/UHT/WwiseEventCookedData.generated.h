// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseEventCookedData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISERESOURCELOADER_WwiseEventCookedData_generated_h
#error "WwiseEventCookedData.generated.h already included, missing '#pragma once' in WwiseEventCookedData.h"
#endif
#define WWISERESOURCELOADER_WwiseEventCookedData_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<struct FWwiseEventCookedData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h


#define FOREACH_ENUM_EWWISEEVENTDESTROYOPTIONS(op) \
	op(EWwiseEventDestroyOptions::StopEventOnDestroy) \
	op(EWwiseEventDestroyOptions::WaitForEventEnd) 

enum class EWwiseEventDestroyOptions : uint8;
template<> struct TIsUEnumClass<EWwiseEventDestroyOptions> { enum { Value = true }; };
template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseEventDestroyOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
