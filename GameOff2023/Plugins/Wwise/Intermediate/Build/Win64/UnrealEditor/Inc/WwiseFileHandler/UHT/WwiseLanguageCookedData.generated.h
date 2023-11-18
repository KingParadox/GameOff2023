// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseLanguageCookedData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISEFILEHANDLER_WwiseLanguageCookedData_generated_h
#error "WwiseLanguageCookedData.generated.h already included, missing '#pragma once' in WwiseLanguageCookedData.h"
#endif
#define WWISEFILEHANDLER_WwiseLanguageCookedData_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<struct FWwiseLanguageCookedData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h


#define FOREACH_ENUM_EWWISELANGUAGEREQUIREMENT(op) \
	op(EWwiseLanguageRequirement::IsDefault) \
	op(EWwiseLanguageRequirement::IsOptional) \
	op(EWwiseLanguageRequirement::SFX) 

enum class EWwiseLanguageRequirement : uint8;
template<> struct TIsUEnumClass<EWwiseLanguageRequirement> { enum { Value = true }; };
template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwiseLanguageRequirement>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
