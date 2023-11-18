// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/WwiseSharedLanguageId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSharedLanguageId() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedLanguageId();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId;
class UScriptStruct* FWwiseSharedLanguageId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedLanguageId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSharedLanguageId"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseSharedLanguageId>()
{
	return FWwiseSharedLanguageId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LanguageRequirement_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageRequirement_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LanguageRequirement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedLanguageId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedLanguageId>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedLanguageId.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement = { "LanguageRequirement", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSharedLanguageId, LanguageRequirement), Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement_MetaData)) }; // 3988255743
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewProp_LanguageRequirement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseSharedLanguageId",
		sizeof(FWwiseSharedLanguageId),
		alignof(FWwiseSharedLanguageId),
		Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedLanguageId()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h_Statics::ScriptStructInfo[] = {
		{ FWwiseSharedLanguageId::StaticStruct, Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewStructOps, TEXT("WwiseSharedLanguageId"), &Z_Registration_Info_UScriptStruct_WwiseSharedLanguageId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedLanguageId), 1817094082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h_1591276835(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
