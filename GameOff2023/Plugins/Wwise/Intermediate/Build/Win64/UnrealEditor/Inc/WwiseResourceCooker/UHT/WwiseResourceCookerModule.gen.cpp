// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceCooker/Public/Wwise/WwiseResourceCookerModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseResourceCookerModule() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceCooker();
	WWISERESOURCECOOKER_API UEnum* Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseExportDebugNameRule;
	static UEnum* EWwiseExportDebugNameRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule, (UObject*)Z_Construct_UPackage__Script_WwiseResourceCooker(), TEXT("EWwiseExportDebugNameRule"));
		}
		return Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.OuterSingleton;
	}
	template<> WWISERESOURCECOOKER_API UEnum* StaticEnum<EWwiseExportDebugNameRule>()
	{
		return EWwiseExportDebugNameRule_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enumerators[] = {
		{ "EWwiseExportDebugNameRule::Release", (int64)EWwiseExportDebugNameRule::Release },
		{ "EWwiseExportDebugNameRule::Name", (int64)EWwiseExportDebugNameRule::Name },
		{ "EWwiseExportDebugNameRule::ObjectPath", (int64)EWwiseExportDebugNameRule::ObjectPath },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseResourceCookerModule.h" },
		{ "Name.Name", "EWwiseExportDebugNameRule::Name" },
		{ "ObjectPath.Name", "EWwiseExportDebugNameRule::ObjectPath" },
		{ "Release.Name", "EWwiseExportDebugNameRule::Release" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceCooker,
		nullptr,
		"EWwiseExportDebugNameRule",
		"EWwiseExportDebugNameRule",
		Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule()
	{
		if (!Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.InnerSingleton, Z_Construct_UEnum_WwiseResourceCooker_EWwiseExportDebugNameRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseExportDebugNameRule.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h_Statics::EnumInfo[] = {
		{ EWwiseExportDebugNameRule_StaticEnum, TEXT("EWwiseExportDebugNameRule"), &Z_Registration_Info_UEnum_EWwiseExportDebugNameRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1478404901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h_806282031(TEXT("/Script/WwiseResourceCooker"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceCooker_Public_Wwise_WwiseResourceCookerModule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
