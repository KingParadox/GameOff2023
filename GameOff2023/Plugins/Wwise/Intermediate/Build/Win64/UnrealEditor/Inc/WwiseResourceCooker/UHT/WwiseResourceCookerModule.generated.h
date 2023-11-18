// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/WwiseResourceCookerModule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISERESOURCECOOKER_WwiseResourceCookerModule_generated_h
#error "WwiseResourceCookerModule.generated.h already included, missing '#pragma once' in WwiseResourceCookerModule.h"
#endif
#define WWISERESOURCECOOKER_WwiseResourceCookerModule_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h


#define FOREACH_ENUM_EWWISEEXPORTDEBUGNAMERULE(op) \
	op(EWwiseExportDebugNameRule::Release) \
	op(EWwiseExportDebugNameRule::Name) \
	op(EWwiseExportDebugNameRule::ObjectPath) 

enum class EWwiseExportDebugNameRule;
template<> struct TIsUEnumClass<EWwiseExportDebugNameRule> { enum { Value = true }; };
template<> WWISERESOURCECOOKER_API UEnum* StaticEnum<EWwiseExportDebugNameRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
