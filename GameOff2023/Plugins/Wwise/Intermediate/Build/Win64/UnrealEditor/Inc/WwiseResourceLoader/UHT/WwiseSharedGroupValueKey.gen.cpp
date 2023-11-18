// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/WwiseSharedGroupValueKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSharedGroupValueKey() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey;
class UScriptStruct* FWwiseSharedGroupValueKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSharedGroupValueKey"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseSharedGroupValueKey>()
{
	return FWwiseSharedGroupValueKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedGroupValueKey.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedGroupValueKey>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseSharedGroupValueKey",
		sizeof(FWwiseSharedGroupValueKey),
		alignof(FWwiseSharedGroupValueKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h_Statics::ScriptStructInfo[] = {
		{ FWwiseSharedGroupValueKey::StaticStruct, Z_Construct_UScriptStruct_FWwiseSharedGroupValueKey_Statics::NewStructOps, TEXT("WwiseSharedGroupValueKey"), &Z_Registration_Info_UScriptStruct_WwiseSharedGroupValueKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedGroupValueKey), 4124003405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h_3677080539(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedGroupValueKey_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
