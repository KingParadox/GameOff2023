// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseObjectInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseObjectInfo;
class UScriptStruct* FWwiseObjectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseObjectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseObjectInfo, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseObjectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseObjectInfo.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseObjectInfo>()
{
	return FWwiseObjectInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseShortId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_WwiseShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WwiseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardCodedSoundBankShortId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HardCodedSoundBankShortId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
		{ "DisplayName", "Wwise Object Info" },
		{ "HasNativeBreak", "/Script/WwiseResourceLoader.WwiseObjectInfoLibrary:BreakStruct" },
		{ "HasNativeMake", "/Script/WwiseResourceLoader.WwiseObjectInfoLibrary:MakeStruct" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseObjectInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseGuid_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseObjectInfo, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseShortId_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseObjectInfo, WwiseShortId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseShortId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseShortId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseName_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseObjectInfo, WwiseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_HardCodedSoundBankShortId_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseObjectInfo, HardCodedSoundBankShortId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_HardCodedSoundBankShortId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_HardCodedSoundBankShortId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_WwiseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewProp_HardCodedSoundBankShortId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseObjectInfo",
		sizeof(FWwiseObjectInfo),
		alignof(FWwiseObjectInfo),
		Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseObjectInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseObjectInfo.InnerSingleton, Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseObjectInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h_Statics::ScriptStructInfo[] = {
		{ FWwiseObjectInfo::StaticStruct, Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewStructOps, TEXT("WwiseObjectInfo"), &Z_Registration_Info_UScriptStruct_WwiseObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseObjectInfo), 3645774004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h_973302378(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
