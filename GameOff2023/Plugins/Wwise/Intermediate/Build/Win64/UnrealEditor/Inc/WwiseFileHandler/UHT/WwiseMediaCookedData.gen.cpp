// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseMediaCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseMediaCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseMediaCookedData;
class UScriptStruct* FWwiseMediaCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseMediaCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("WwiseMediaCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.OuterSingleton;
}
template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<FWwiseMediaCookedData>()
{
	return FWwiseMediaCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediaId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MediaPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrefetchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrefetchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeviceMemory_MetaData[];
#endif
		static void NewProp_bDeviceMemory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeviceMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[];
#endif
		static void NewProp_bStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseMediaCookedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Short ID for the Media\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
		{ "ToolTip", "@brief Short ID for the Media" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseMediaCookedData, MediaId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaPathName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Path name relative to the platform's root.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
		{ "ToolTip", "@brief Path name relative to the platform's root." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaPathName = { "MediaPathName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseMediaCookedData, MediaPathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaPathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_PrefetchSize_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief How many bytes need to be retrieved at load-time. Only set if streaming.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
		{ "ToolTip", "@brief How many bytes need to be retrieved at load-time. Only set if streaming." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_PrefetchSize = { "PrefetchSize", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseMediaCookedData, PrefetchSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_PrefetchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_PrefetchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MemoryAlignment_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Alignment required to load the asset on device. Can be 0 if no particular requirements.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
		{ "ToolTip", "@brief Alignment required to load the asset on device. Can be 0 if no particular requirements." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MemoryAlignment = { "MemoryAlignment", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseMediaCookedData, MemoryAlignment), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MemoryAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MemoryAlignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief True if the asset needs to be loaded in a special memory zone on the device.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
		{ "ToolTip", "@brief True if the asset needs to be loaded in a special memory zone on the device." },
	};
#endif
	void Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory_SetBit(void* Obj)
	{
		((FWwiseMediaCookedData*)Obj)->bDeviceMemory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory = { "bDeviceMemory", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWwiseMediaCookedData), &Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief True if the asset should not be fully loaded in memory at load time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
		{ "ToolTip", "@brief True if the asset should not be fully loaded in memory at load time." },
	};
#endif
	void Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming_SetBit(void* Obj)
	{
		((FWwiseMediaCookedData*)Obj)->bStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming = { "bStreaming", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWwiseMediaCookedData), &Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseMediaCookedData, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_DebugName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_PrefetchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MemoryAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_DebugName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseFileHandler,
		nullptr,
		&NewStructOps,
		"WwiseMediaCookedData",
		sizeof(FWwiseMediaCookedData),
		alignof(FWwiseMediaCookedData),
		Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseMediaCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewStructOps, TEXT("WwiseMediaCookedData"), &Z_Registration_Info_UScriptStruct_WwiseMediaCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseMediaCookedData), 2741982261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_3452004120(TEXT("/Script/WwiseFileHandler"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
