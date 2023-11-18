// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/WwisePlatformId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwisePlatformId() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwisePlatformId();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwisePlatformId;
class UScriptStruct* FWwisePlatformId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwisePlatformId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwisePlatformId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwisePlatformId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwisePlatformId"));
	}
	return Z_Registration_Info_UScriptStruct_WwisePlatformId.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwisePlatformId>()
{
	return FWwisePlatformId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwisePlatformId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathRelativeToGeneratedSoundBanks_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PathRelativeToGeneratedSoundBanks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceRootPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExternalSourceRootPath;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwisePlatformId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwisePlatformId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformGuid_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformGuid = { "PlatformGuid", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwisePlatformId, PlatformGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwisePlatformId, PlatformName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PathRelativeToGeneratedSoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PathRelativeToGeneratedSoundBanks = { "PathRelativeToGeneratedSoundBanks", nullptr, (EPropertyFlags)0x0010000800022801, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwisePlatformId, PathRelativeToGeneratedSoundBanks), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PathRelativeToGeneratedSoundBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PathRelativeToGeneratedSoundBanks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_ExternalSourceRootPath_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_ExternalSourceRootPath = { "ExternalSourceRootPath", nullptr, (EPropertyFlags)0x0010000800022801, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwisePlatformId, ExternalSourceRootPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_ExternalSourceRootPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_ExternalSourceRootPath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwisePlatformId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PlatformName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_PathRelativeToGeneratedSoundBanks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewProp_ExternalSourceRootPath,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwisePlatformId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwisePlatformId",
		sizeof(FWwisePlatformId),
		alignof(FWwisePlatformId),
		Z_Construct_UScriptStruct_FWwisePlatformId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwisePlatformId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwisePlatformId()
	{
		if (!Z_Registration_Info_UScriptStruct_WwisePlatformId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwisePlatformId.InnerSingleton, Z_Construct_UScriptStruct_FWwisePlatformId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwisePlatformId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwisePlatformId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwisePlatformId_h_Statics::ScriptStructInfo[] = {
		{ FWwisePlatformId::StaticStruct, Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewStructOps, TEXT("WwisePlatformId"), &Z_Registration_Info_UScriptStruct_WwisePlatformId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwisePlatformId), 4206770846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwisePlatformId_h_201854580(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwisePlatformId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwisePlatformId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
