// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseLanguageCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseLanguageCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
	WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseLanguageRequirement;
	static UEnum* EWwiseLanguageRequirement_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseLanguageRequirement.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseLanguageRequirement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("EWwiseLanguageRequirement"));
		}
		return Z_Registration_Info_UEnum_EWwiseLanguageRequirement.OuterSingleton;
	}
	template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwiseLanguageRequirement>()
	{
		return EWwiseLanguageRequirement_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enumerators[] = {
		{ "EWwiseLanguageRequirement::IsDefault", (int64)EWwiseLanguageRequirement::IsDefault },
		{ "EWwiseLanguageRequirement::IsOptional", (int64)EWwiseLanguageRequirement::IsOptional },
		{ "EWwiseLanguageRequirement::SFX", (int64)EWwiseLanguageRequirement::SFX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsDefault.Name", "EWwiseLanguageRequirement::IsDefault" },
		{ "IsOptional.Name", "EWwiseLanguageRequirement::IsOptional" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
		{ "SFX.Name", "EWwiseLanguageRequirement::SFX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseFileHandler,
		nullptr,
		"EWwiseLanguageRequirement",
		"EWwiseLanguageRequirement",
		Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement()
	{
		if (!Z_Registration_Info_UEnum_EWwiseLanguageRequirement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseLanguageRequirement.InnerSingleton, Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseLanguageRequirement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData;
class UScriptStruct* FWwiseLanguageCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLanguageCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("WwiseLanguageCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.OuterSingleton;
}
template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<FWwiseLanguageCookedData>()
{
	return FWwiseLanguageCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LanguageId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LanguageName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LanguageRequirement_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageRequirement_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LanguageRequirement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLanguageCookedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Short ID for the Language\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
		{ "ToolTip", "@brief Short ID for the Language" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseLanguageCookedData, LanguageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Language name as set in Wwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
		{ "ToolTip", "@brief Language name as set in Wwise" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName = { "LanguageName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseLanguageCookedData, LanguageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Is this language the default in Wwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
		{ "ToolTip", "@brief Is this language the default in Wwise" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement = { "LanguageRequirement", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseLanguageCookedData, LanguageRequirement), Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_MetaData)) }; // 3988255743
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewProp_LanguageRequirement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseFileHandler,
		nullptr,
		&NewStructOps,
		"WwiseLanguageCookedData",
		sizeof(FWwiseLanguageCookedData),
		alignof(FWwiseLanguageCookedData),
		Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_Statics::EnumInfo[] = {
		{ EWwiseLanguageRequirement_StaticEnum, TEXT("EWwiseLanguageRequirement"), &Z_Registration_Info_UEnum_EWwiseLanguageRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3988255743U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseLanguageCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewStructOps, TEXT("WwiseLanguageCookedData"), &Z_Registration_Info_UScriptStruct_WwiseLanguageCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLanguageCookedData), 3154816641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_1814099457(TEXT("/Script/WwiseFileHandler"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
