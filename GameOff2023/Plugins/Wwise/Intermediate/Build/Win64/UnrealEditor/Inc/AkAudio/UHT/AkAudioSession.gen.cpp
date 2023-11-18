// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InitializationSettings/AkAudioSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioSession() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionCategory;
	static UEnum* EAkAudioSessionCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAudioSessionCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionCategory"));
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionCategory.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategory>()
	{
		return EAkAudioSessionCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enumerators[] = {
		{ "EAkAudioSessionCategory::Ambient", (int64)EAkAudioSessionCategory::Ambient },
		{ "EAkAudioSessionCategory::SoloAmbient", (int64)EAkAudioSessionCategory::SoloAmbient },
		{ "EAkAudioSessionCategory::PlayAndRecord", (int64)EAkAudioSessionCategory::PlayAndRecord },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enum_MetaDataParams[] = {
		{ "Ambient.Name", "EAkAudioSessionCategory::Ambient" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "PlayAndRecord.Name", "EAkAudioSessionCategory::PlayAndRecord" },
		{ "SoloAmbient.Name", "EAkAudioSessionCategory::SoloAmbient" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAudioSessionCategory",
		"EAkAudioSessionCategory",
		Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionCategory.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionCategory.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions;
	static UEnum* EAkAudioSessionCategoryOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionCategoryOptions"));
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>()
	{
		return EAkAudioSessionCategoryOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enumerators[] = {
		{ "EAkAudioSessionCategoryOptions::MixWithOthers", (int64)EAkAudioSessionCategoryOptions::MixWithOthers },
		{ "EAkAudioSessionCategoryOptions::DuckOthers", (int64)EAkAudioSessionCategoryOptions::DuckOthers },
		{ "EAkAudioSessionCategoryOptions::AllowBluetooth", (int64)EAkAudioSessionCategoryOptions::AllowBluetooth },
		{ "EAkAudioSessionCategoryOptions::DefaultToSpeaker", (int64)EAkAudioSessionCategoryOptions::DefaultToSpeaker },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enum_MetaDataParams[] = {
		{ "AllowBluetooth.Name", "EAkAudioSessionCategoryOptions::AllowBluetooth" },
		{ "Bitmask", "" },
		{ "DefaultToSpeaker.Name", "EAkAudioSessionCategoryOptions::DefaultToSpeaker" },
		{ "DuckOthers.Name", "EAkAudioSessionCategoryOptions::DuckOthers" },
		{ "MixWithOthers.Name", "EAkAudioSessionCategoryOptions::MixWithOthers" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAudioSessionCategoryOptions",
		"EAkAudioSessionCategoryOptions",
		Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioSessionMode;
	static UEnum* EAkAudioSessionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAudioSessionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionMode"));
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionMode.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionMode>()
	{
		return EAkAudioSessionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enumerators[] = {
		{ "EAkAudioSessionMode::Default", (int64)EAkAudioSessionMode::Default },
		{ "EAkAudioSessionMode::VoiceChat", (int64)EAkAudioSessionMode::VoiceChat },
		{ "EAkAudioSessionMode::GameChat", (int64)EAkAudioSessionMode::GameChat },
		{ "EAkAudioSessionMode::VideoRecording", (int64)EAkAudioSessionMode::VideoRecording },
		{ "EAkAudioSessionMode::Measurement", (int64)EAkAudioSessionMode::Measurement },
		{ "EAkAudioSessionMode::MoviePlayback", (int64)EAkAudioSessionMode::MoviePlayback },
		{ "EAkAudioSessionMode::VideoChat", (int64)EAkAudioSessionMode::VideoChat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "EAkAudioSessionMode::Default" },
		{ "GameChat.Name", "EAkAudioSessionMode::GameChat" },
		{ "Measurement.Name", "EAkAudioSessionMode::Measurement" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "MoviePlayback.Name", "EAkAudioSessionMode::MoviePlayback" },
		{ "VideoChat.Name", "EAkAudioSessionMode::VideoChat" },
		{ "VideoRecording.Name", "EAkAudioSessionMode::VideoRecording" },
		{ "VoiceChat.Name", "EAkAudioSessionMode::VoiceChat" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAudioSessionMode",
		"EAkAudioSessionMode",
		Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioSessionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioSessionMode.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAudioSessionMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAudioSession;
class UScriptStruct* FAkAudioSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAudioSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAudioSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioSession, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAudioSession"));
	}
	return Z_Registration_Info_UScriptStruct_AkAudioSession.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAudioSession>()
{
	return FAkAudioSession::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAudioSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AudioSessionCategory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategoryOptions_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioSessionCategoryOptions;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AudioSessionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAudioSession>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "ToolTip", "The IDs of the iOS audio session categories, useful for defining app-level audio behaviours such as inter-app audio mixing policies and audio routing behaviours.These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session categories." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory = { "AudioSessionCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategory), Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData)) }; // 2785587367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkAudioSessionCategoryOptions" },
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "ToolTip", "The IDs of the iOS audio session category options, used for customizing the audio session category features. These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session category options." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions = { "AudioSessionCategoryOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategoryOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "ToolTip", "The IDs of the iOS audio session modes, used for customizing the audio session for typical app types. These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session category options." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode = { "AudioSessionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkAudioSession, AudioSessionMode), Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData)) }; // 4282906222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAudioSession",
		sizeof(FAkAudioSession),
		alignof(FAkAudioSession),
		Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAudioSession.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAudioSession.InnerSingleton, Z_Construct_UScriptStruct_FAkAudioSession_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAudioSession.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::EnumInfo[] = {
		{ EAkAudioSessionCategory_StaticEnum, TEXT("EAkAudioSessionCategory"), &Z_Registration_Info_UEnum_EAkAudioSessionCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2785587367U) },
		{ EAkAudioSessionCategoryOptions_StaticEnum, TEXT("EAkAudioSessionCategoryOptions"), &Z_Registration_Info_UEnum_EAkAudioSessionCategoryOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2523366028U) },
		{ EAkAudioSessionMode_StaticEnum, TEXT("EAkAudioSessionMode"), &Z_Registration_Info_UEnum_EAkAudioSessionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4282906222U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::ScriptStructInfo[] = {
		{ FAkAudioSession::StaticStruct, Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewStructOps, TEXT("AkAudioSession"), &Z_Registration_Info_UScriptStruct_AkAudioSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAudioSession), 810293321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_33472939(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
