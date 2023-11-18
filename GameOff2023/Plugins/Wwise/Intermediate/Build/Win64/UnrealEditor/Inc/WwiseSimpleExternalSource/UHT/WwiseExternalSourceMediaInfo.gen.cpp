// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSimpleExternalSource/Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceMediaInfo() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource();
	WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FWwiseExternalSourceMediaInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseExternalSourceMediaInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo;
class UScriptStruct* FWwiseExternalSourceMediaInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo, (UObject*)Z_Construct_UPackage__Script_WwiseSimpleExternalSource(), TEXT("WwiseExternalSourceMediaInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.OuterSingleton;
}
template<> WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* StaticStruct<FWwiseExternalSourceMediaInfo>()
{
	return FWwiseExternalSourceMediaInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceMediaInfoId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalSourceMediaInfoId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MediaName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CodecID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CodecID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStreamed_MetaData[];
#endif
		static void NewProp_bIsStreamed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStreamed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeviceMemory_MetaData[];
#endif
		static void NewProp_bUseDeviceMemory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeviceMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrefetchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrefetchSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Contains the necessary info package and load an external source media\n//There should be one entry for each external source media in the project \n" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
		{ "ToolTip", "Contains the necessary info package and load an external source media\nThere should be one entry for each external source media in the project" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseExternalSourceMediaInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_ExternalSourceMediaInfoId_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_ExternalSourceMediaInfoId = { "ExternalSourceMediaInfoId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, ExternalSourceMediaInfoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_ExternalSourceMediaInfoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_ExternalSourceMediaInfoId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MediaName_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, MediaName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MediaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MediaName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_CodecID_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_CodecID = { "CodecID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, CodecID), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_CodecID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_CodecID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed_SetBit(void* Obj)
	{
		((FWwiseExternalSourceMediaInfo*)Obj)->bIsStreamed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed = { "bIsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWwiseExternalSourceMediaInfo), &Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory_SetBit(void* Obj)
	{
		((FWwiseExternalSourceMediaInfo*)Obj)->bUseDeviceMemory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory = { "bUseDeviceMemory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWwiseExternalSourceMediaInfo), &Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MemoryAlignment_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MemoryAlignment = { "MemoryAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, MemoryAlignment), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MemoryAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MemoryAlignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_PrefetchSize_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_PrefetchSize = { "PrefetchSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, PrefetchSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_PrefetchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_PrefetchSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_ExternalSourceMediaInfoId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MediaName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_CodecID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bIsStreamed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_bUseDeviceMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_MemoryAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewProp_PrefetchSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WwiseExternalSourceMediaInfo",
		sizeof(FWwiseExternalSourceMediaInfo),
		alignof(FWwiseExternalSourceMediaInfo),
		Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.InnerSingleton, Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h_Statics::ScriptStructInfo[] = {
		{ FWwiseExternalSourceMediaInfo::StaticStruct, Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewStructOps, TEXT("WwiseExternalSourceMediaInfo"), &Z_Registration_Info_UScriptStruct_WwiseExternalSourceMediaInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseExternalSourceMediaInfo), 458296830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h_3077336077(TEXT("/Script/WwiseSimpleExternalSource"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
