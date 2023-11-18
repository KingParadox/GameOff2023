// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../WwiseSoundEngine/Public/AkUnrealHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkUnrealHelper() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseSoundEngine();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt32Wrapper();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt64Wrapper();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkUInt64Wrapper;
class UScriptStruct* FAkUInt64Wrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUInt64Wrapper, (UObject*)Z_Construct_UPackage__Script_WwiseSoundEngine(), TEXT("AkUInt64Wrapper"));
	}
	return Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.OuterSingleton;
}
template<> WWISESOUNDENGINE_API UScriptStruct* StaticStruct<FAkUInt64Wrapper>()
{
	return FAkUInt64Wrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt64Value_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_UInt64Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkUint64" },
		{ "ModuleRelativePath", "Public/AkUnrealHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUInt64Wrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value_MetaData[] = {
		{ "Category", "Value" },
		{ "DisplayName", "UInt64 Value" },
		{ "ModuleRelativePath", "Public/AkUnrealHelper.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value = { "UInt64Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkUInt64Wrapper, UInt64Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSoundEngine,
		nullptr,
		&NewStructOps,
		"AkUInt64Wrapper",
		sizeof(FAkUInt64Wrapper),
		alignof(FAkUInt64Wrapper),
		Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkUInt64Wrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.InnerSingleton, Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkUInt32Wrapper;
class UScriptStruct* FAkUInt32Wrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUInt32Wrapper, (UObject*)Z_Construct_UPackage__Script_WwiseSoundEngine(), TEXT("AkUInt32Wrapper"));
	}
	return Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.OuterSingleton;
}
template<> WWISESOUNDENGINE_API UScriptStruct* StaticStruct<FAkUInt32Wrapper>()
{
	return FAkUInt32Wrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt32Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UInt32Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkUInt32" },
		{ "ModuleRelativePath", "Public/AkUnrealHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUInt32Wrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value_MetaData[] = {
		{ "Category", "Value" },
		{ "DisplayName", "UInt32 Value" },
		{ "ModuleRelativePath", "Public/AkUnrealHelper.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value = { "UInt32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkUInt32Wrapper, UInt32Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSoundEngine,
		nullptr,
		&NewStructOps,
		"AkUInt32Wrapper",
		sizeof(FAkUInt32Wrapper),
		alignof(FAkUInt32Wrapper),
		Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkUInt32Wrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.InnerSingleton, Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkOutputDeviceID>() == std::is_polymorphic<FAkUInt64Wrapper>(), "USTRUCT FAkOutputDeviceID cannot be polymorphic unless super FAkUInt64Wrapper is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkOutputDeviceID;
class UScriptStruct* FAkOutputDeviceID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkOutputDeviceID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkOutputDeviceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutputDeviceID, (UObject*)Z_Construct_UPackage__Script_WwiseSoundEngine(), TEXT("AkOutputDeviceID"));
	}
	return Z_Registration_Info_UScriptStruct_AkOutputDeviceID.OuterSingleton;
}
template<> WWISESOUNDENGINE_API UScriptStruct* StaticStruct<FAkOutputDeviceID>()
{
	return FAkOutputDeviceID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkOutputDeviceID" },
		{ "ModuleRelativePath", "Public/AkUnrealHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutputDeviceID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSoundEngine,
		Z_Construct_UScriptStruct_FAkUInt64Wrapper,
		&NewStructOps,
		"AkOutputDeviceID",
		sizeof(FAkOutputDeviceID),
		alignof(FAkOutputDeviceID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID()
	{
		if (!Z_Registration_Info_UScriptStruct_AkOutputDeviceID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkOutputDeviceID.InnerSingleton, Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkOutputDeviceID.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkUniqueID>() == std::is_polymorphic<FAkUInt32Wrapper>(), "USTRUCT FAkUniqueID cannot be polymorphic unless super FAkUInt32Wrapper is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkUniqueID;
class UScriptStruct* FAkUniqueID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkUniqueID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkUniqueID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUniqueID, (UObject*)Z_Construct_UPackage__Script_WwiseSoundEngine(), TEXT("AkUniqueID"));
	}
	return Z_Registration_Info_UScriptStruct_AkUniqueID.OuterSingleton;
}
template<> WWISESOUNDENGINE_API UScriptStruct* StaticStruct<FAkUniqueID>()
{
	return FAkUniqueID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkUniqueID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUniqueID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkUniqueID" },
		{ "ModuleRelativePath", "Public/AkUnrealHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkUniqueID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUniqueID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkUniqueID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSoundEngine,
		Z_Construct_UScriptStruct_FAkUInt32Wrapper,
		&NewStructOps,
		"AkUniqueID",
		sizeof(FAkUniqueID),
		alignof(FAkUniqueID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUniqueID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUniqueID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID()
	{
		if (!Z_Registration_Info_UScriptStruct_AkUniqueID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkUniqueID.InnerSingleton, Z_Construct_UScriptStruct_FAkUniqueID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkUniqueID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSoundEngine_Public_AkUnrealHelper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSoundEngine_Public_AkUnrealHelper_h_Statics::ScriptStructInfo[] = {
		{ FAkUInt64Wrapper::StaticStruct, Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewStructOps, TEXT("AkUInt64Wrapper"), &Z_Registration_Info_UScriptStruct_AkUInt64Wrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUInt64Wrapper), 3965303931U) },
		{ FAkUInt32Wrapper::StaticStruct, Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewStructOps, TEXT("AkUInt32Wrapper"), &Z_Registration_Info_UScriptStruct_AkUInt32Wrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUInt32Wrapper), 2984314346U) },
		{ FAkOutputDeviceID::StaticStruct, Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewStructOps, TEXT("AkOutputDeviceID"), &Z_Registration_Info_UScriptStruct_AkOutputDeviceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkOutputDeviceID), 2295798285U) },
		{ FAkUniqueID::StaticStruct, Z_Construct_UScriptStruct_FAkUniqueID_Statics::NewStructOps, TEXT("AkUniqueID"), &Z_Registration_Info_UScriptStruct_AkUniqueID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUniqueID), 2187982974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSoundEngine_Public_AkUnrealHelper_h_2853257341(TEXT("/Script/WwiseSoundEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSoundEngine_Public_AkUnrealHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSoundEngine_Public_AkUnrealHelper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
