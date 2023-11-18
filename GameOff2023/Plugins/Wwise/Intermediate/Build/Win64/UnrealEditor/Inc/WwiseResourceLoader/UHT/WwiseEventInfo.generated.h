// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Info/WwiseEventInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISERESOURCELOADER_WwiseEventInfo_generated_h
#error "WwiseEventInfo.generated.h already included, missing '#pragma once' in WwiseEventInfo.h"
#endif
#define WWISERESOURCELOADER_WwiseEventInfo_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWwiseEventInfo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWwiseObjectInfo Super;


template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<struct FWwiseEventInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h


#define FOREACH_ENUM_EWWISEEVENTSWITCHCONTAINERLOADING(op) \
	op(EWwiseEventSwitchContainerLoading::AlwaysLoad) \
	op(EWwiseEventSwitchContainerLoading::LoadOnReference) 

enum class EWwiseEventSwitchContainerLoading : uint8;
template<> struct TIsUEnumClass<EWwiseEventSwitchContainerLoading> { enum { Value = true }; };
template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseEventSwitchContainerLoading>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
