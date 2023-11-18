// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseGroupValueInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseGroupValueInfo() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FWwiseGroupValueInfo>() == std::is_polymorphic<FWwiseObjectInfo>(), "USTRUCT FWwiseGroupValueInfo cannot be polymorphic unless super FWwiseObjectInfo is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseGroupValueInfo;
class UScriptStruct* FWwiseGroupValueInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseGroupValueInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseGroupValueInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseGroupValueInfo, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseGroupValueInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseGroupValueInfo.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseGroupValueInfo>()
{
	return FWwiseGroupValueInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupShortId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_GroupShortId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
		{ "DisplayName", "GroupValue Info" },
		{ "HasNativeBreak", "/Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary:BreakStruct" },
		{ "HasNativeMake", "/Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary:MakeStruct" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseGroupValueInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseGroupValueInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewProp_GroupShortId_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseGroupValueInfo.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseGroupValueInfo, GroupShortId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewProp_GroupShortId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewProp_GroupShortId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewProp_GroupShortId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		Z_Construct_UScriptStruct_FWwiseObjectInfo,
		&NewStructOps,
		"WwiseGroupValueInfo",
		sizeof(FWwiseGroupValueInfo),
		alignof(FWwiseGroupValueInfo),
		Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseGroupValueInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseGroupValueInfo.InnerSingleton, Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseGroupValueInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h_Statics::ScriptStructInfo[] = {
		{ FWwiseGroupValueInfo::StaticStruct, Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewStructOps, TEXT("WwiseGroupValueInfo"), &Z_Registration_Info_UScriptStruct_WwiseGroupValueInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseGroupValueInfo), 1546907427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h_63634874(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
