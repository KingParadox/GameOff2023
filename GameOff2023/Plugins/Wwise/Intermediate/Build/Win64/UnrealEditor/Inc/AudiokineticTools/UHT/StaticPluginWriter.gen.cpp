// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Private/AssetManagement/StaticPluginWriter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticPluginWriter() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkPluginInfo;
class UScriptStruct* FAkPluginInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkPluginInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkPluginInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPluginInfo, (UObject*)Z_Construct_UPackage__Script_AudiokineticTools(), TEXT("AkPluginInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkPluginInfo.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UScriptStruct* StaticStruct<FAkPluginInfo>()
{
	return FAkPluginInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkPluginInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PluginID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DLL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AssetManagement/StaticPluginWriter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPluginInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FAkPluginInfo" },
		{ "ModuleRelativePath", "Private/AssetManagement/StaticPluginWriter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkPluginInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData[] = {
		{ "Category", "FAkPluginInfo" },
		{ "ModuleRelativePath", "Private/AssetManagement/StaticPluginWriter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID = { "PluginID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkPluginInfo, PluginID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData[] = {
		{ "Category", "FAkPluginInfo" },
		{ "ModuleRelativePath", "Private/AssetManagement/StaticPluginWriter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL = { "DLL", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkPluginInfo, DLL), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
		nullptr,
		&NewStructOps,
		"AkPluginInfo",
		sizeof(FAkPluginInfo),
		alignof(FAkPluginInfo),
		Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AkPluginInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkPluginInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkPluginInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkPluginInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_StaticPluginWriter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_StaticPluginWriter_h_Statics::ScriptStructInfo[] = {
		{ FAkPluginInfo::StaticStruct, Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewStructOps, TEXT("AkPluginInfo"), &Z_Registration_Info_UScriptStruct_AkPluginInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkPluginInfo), 844300022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_StaticPluginWriter_h_147693710(TEXT("/Script/AudiokineticTools"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_StaticPluginWriter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_StaticPluginWriter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
