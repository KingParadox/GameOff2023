// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseSoundBankCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSoundBankCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
	WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseSoundBankType;
	static UEnum* EWwiseSoundBankType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseSoundBankType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseSoundBankType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("EWwiseSoundBankType"));
		}
		return Z_Registration_Info_UEnum_EWwiseSoundBankType.OuterSingleton;
	}
	template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwiseSoundBankType>()
	{
		return EWwiseSoundBankType_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enumerators[] = {
		{ "EWwiseSoundBankType::User", (int64)EWwiseSoundBankType::User },
		{ "EWwiseSoundBankType::Event", (int64)EWwiseSoundBankType::Event },
		{ "EWwiseSoundBankType::Bus", (int64)EWwiseSoundBankType::Bus },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bus.Name", "EWwiseSoundBankType::Bus" },
		{ "Event.Comment", "// = AKCODECID_BANK,\n" },
		{ "Event.Name", "EWwiseSoundBankType::Event" },
		{ "Event.ToolTip", "= AKCODECID_BANK," },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "User.Name", "EWwiseSoundBankType::User" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseFileHandler,
		nullptr,
		"EWwiseSoundBankType",
		"EWwiseSoundBankType",
		Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType()
	{
		if (!Z_Registration_Info_UEnum_EWwiseSoundBankType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseSoundBankType.InnerSingleton, Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseSoundBankType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData;
class UScriptStruct* FWwiseSoundBankCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("WwiseSoundBankCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.OuterSingleton;
}
template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<FWwiseSoundBankCookedData>()
{
	return FWwiseSoundBankCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SoundBankId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankPathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SoundBankPathName;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContainsMedia_MetaData[];
#endif
		static void NewProp_bContainsMedia_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContainsMedia;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundBankType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundBankType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Required data to load a SoundBank\n*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "ToolTip", "@brief Required data to load a SoundBank" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSoundBankCookedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Short ID for the SoundBank.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "ToolTip", "@brief Short ID for the SoundBank." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSoundBankCookedData, SoundBankId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankPathName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Path name relative to the platform's root.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "ToolTip", "@brief Path name relative to the platform's root." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankPathName = { "SoundBankPathName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSoundBankCookedData, SoundBankPathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankPathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_MemoryAlignment_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Alignment required to load the SoundBank on device. Can be 0 if no particular requirements.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "ToolTip", "@brief Alignment required to load the SoundBank on device. Can be 0 if no particular requirements." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_MemoryAlignment = { "MemoryAlignment", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSoundBankCookedData, MemoryAlignment), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_MemoryAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_MemoryAlignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bDeviceMemory_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief True if the SoundBank needs to be loaded in a special memory zone on the device.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "ToolTip", "@brief True if the SoundBank needs to be loaded in a special memory zone on the device." },
	};
#endif
	void Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bDeviceMemory_SetBit(void* Obj)
	{
		((FWwiseSoundBankCookedData*)Obj)->bDeviceMemory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bDeviceMemory = { "bDeviceMemory", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWwiseSoundBankCookedData), &Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bDeviceMemory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bDeviceMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bDeviceMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief True if the SoundBank contains media or media parts. False means a data-only SoundBank.\n\x09 *\n\x09 * Useful to load the SoundBank as a copy instead of keeping it Memory-mapped, as the SoundEngine will decode\n\x09 * data from the SoundBank, and has no use for the file itself.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "ToolTip", "@brief True if the SoundBank contains media or media parts. False means a data-only SoundBank.\n\nUseful to load the SoundBank as a copy instead of keeping it Memory-mapped, as the SoundEngine will decode\ndata from the SoundBank, and has no use for the file itself." },
	};
#endif
	void Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia_SetBit(void* Obj)
	{
		((FWwiseSoundBankCookedData*)Obj)->bContainsMedia = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia = { "bContainsMedia", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWwiseSoundBankCookedData), &Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief User-created SoundBank, Event Auto-defined SoundBank, or Bus Auto-defined SoundBank.\n\x09 *\n\x09 * Useful for loading by file name.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "ToolTip", "@brief User-created SoundBank, Event Auto-defined SoundBank, or Bus Auto-defined SoundBank.\n\nUseful for loading by file name." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType = { "SoundBankType", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSoundBankCookedData, SoundBankType), Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType_MetaData)) }; // 2218929904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseSoundBankCookedData, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_DebugName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_MemoryAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bDeviceMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_bContainsMedia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_SoundBankType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewProp_DebugName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseFileHandler,
		nullptr,
		&NewStructOps,
		"WwiseSoundBankCookedData",
		sizeof(FWwiseSoundBankCookedData),
		alignof(FWwiseSoundBankCookedData),
		Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::EnumInfo[] = {
		{ EWwiseSoundBankType_StaticEnum, TEXT("EWwiseSoundBankType"), &Z_Registration_Info_UEnum_EWwiseSoundBankType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2218929904U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseSoundBankCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewStructOps, TEXT("WwiseSoundBankCookedData"), &Z_Registration_Info_UScriptStruct_WwiseSoundBankCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSoundBankCookedData), 3822265621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_1990073377(TEXT("/Script/WwiseFileHandler"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
