// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseGroupValueCookedData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISERESOURCELOADER_WwiseGroupValueCookedData_generated_h
#error "WwiseGroupValueCookedData.generated.h already included, missing '#pragma once' in WwiseGroupValueCookedData.h"
#endif
#define WWISERESOURCELOADER_WwiseGroupValueCookedData_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<struct FWwiseGroupValueCookedData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h


#define FOREACH_ENUM_EWWISEGROUPTYPE(op) \
	op(EWwiseGroupType::Switch) \
	op(EWwiseGroupType::State) \
	op(EWwiseGroupType::Unknown) 

enum class EWwiseGroupType : uint8;
template<> struct TIsUEnumClass<EWwiseGroupType> { enum { Value = true }; };
template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseGroupType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
