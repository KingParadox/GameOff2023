// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseSoundBankCookedData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISEFILEHANDLER_WwiseSoundBankCookedData_generated_h
#error "WwiseSoundBankCookedData.generated.h already included, missing '#pragma once' in WwiseSoundBankCookedData.h"
#endif
#define WWISEFILEHANDLER_WwiseSoundBankCookedData_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<struct FWwiseSoundBankCookedData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h


#define FOREACH_ENUM_EWWISESOUNDBANKTYPE(op) \
	op(EWwiseSoundBankType::User) \
	op(EWwiseSoundBankType::Event) \
	op(EWwiseSoundBankType::Bus) 

enum class EWwiseSoundBankType : uint8;
template<> struct TIsUEnumClass<EWwiseSoundBankType> { enum { Value = true }; };
template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwiseSoundBankType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
