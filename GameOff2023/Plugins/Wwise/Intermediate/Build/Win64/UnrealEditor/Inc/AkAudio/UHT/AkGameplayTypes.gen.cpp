// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGameplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameplayTypes() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkCodecId();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioContext();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkResult();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAudioContext;
	static UEnum* EAkAudioContext_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioContext.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAudioContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioContext, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioContext"));
		}
		return Z_Registration_Info_UEnum_EAkAudioContext.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioContext>()
	{
		return EAkAudioContext_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enumerators[] = {
		{ "EAkAudioContext::Foreign", (int64)EAkAudioContext::Foreign },
		{ "EAkAudioContext::GameplayAudio", (int64)EAkAudioContext::GameplayAudio },
		{ "EAkAudioContext::EditorAudio", (int64)EAkAudioContext::EditorAudio },
		{ "EAkAudioContext::AlwaysActive", (int64)EAkAudioContext::AlwaysActive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysActive.Comment", "// Editor sounds (e.g. UI)\n" },
		{ "AlwaysActive.Name", "EAkAudioContext::AlwaysActive" },
		{ "AlwaysActive.ToolTip", "Editor sounds (e.g. UI)" },
		{ "BlueprintType", "true" },
		{ "EditorAudio.Comment", "// Sounds playing during gameplay, simulation, PIE, etc.\n" },
		{ "EditorAudio.Name", "EAkAudioContext::EditorAudio" },
		{ "EditorAudio.ToolTip", "Sounds playing during gameplay, simulation, PIE, etc." },
		{ "Foreign.Name", "EAkAudioContext::Foreign" },
		{ "GameplayAudio.Comment", "// Sounds unrelated to gameplay or editor\n" },
		{ "GameplayAudio.Name", "EAkAudioContext::GameplayAudio" },
		{ "GameplayAudio.ToolTip", "Sounds unrelated to gameplay or editor" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAudioContext",
		"EAkAudioContext",
		Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioContext()
	{
		if (!Z_Registration_Info_UEnum_EAkAudioContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAudioContext.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAudioContext.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_PanningRule;
	static UEnum* PanningRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_PanningRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_PanningRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_PanningRule, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("PanningRule"));
		}
		return Z_Registration_Info_UEnum_PanningRule.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<PanningRule>()
	{
		return PanningRule_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_PanningRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enumerators[] = {
		{ "PanningRule::PanningRule_Speakers", (int64)PanningRule::PanningRule_Speakers },
		{ "PanningRule::PanningRule_Headphones", (int64)PanningRule::PanningRule_Headphones },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "PanningRule_Headphones.Comment", "///< Left and right positioned 60 degrees apart (by default - see AK::SoundEngine::GetSpeakerAngles()).\n" },
		{ "PanningRule_Headphones.Name", "PanningRule::PanningRule_Headphones" },
		{ "PanningRule_Headphones.ToolTip", "< Left and right positioned 60 degrees apart (by default - see AK::SoundEngine::GetSpeakerAngles())." },
		{ "PanningRule_Speakers.Name", "PanningRule::PanningRule_Speakers" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_PanningRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"PanningRule",
		"PanningRule",
		Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_PanningRule()
	{
		if (!Z_Registration_Info_UEnum_PanningRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PanningRule.InnerSingleton, Z_Construct_UEnum_AkAudio_PanningRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_PanningRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkAcousticPortalState;
	static UEnum* AkAcousticPortalState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkAcousticPortalState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkAcousticPortalState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkAcousticPortalState, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticPortalState"));
		}
		return Z_Registration_Info_UEnum_AkAcousticPortalState.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkAcousticPortalState>()
	{
		return AkAcousticPortalState_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enumerators[] = {
		{ "AkAcousticPortalState::Closed", (int64)AkAcousticPortalState::Closed },
		{ "AkAcousticPortalState::Open", (int64)AkAcousticPortalState::Open },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Closed.Name", "AkAcousticPortalState::Closed" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "Open.Name", "AkAcousticPortalState::Open" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkAcousticPortalState",
		"AkAcousticPortalState",
		Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState()
	{
		if (!Z_Registration_Info_UEnum_AkAcousticPortalState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkAcousticPortalState.InnerSingleton, Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkAcousticPortalState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkChannelConfiguration;
	static UEnum* AkChannelConfiguration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkChannelConfiguration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkChannelConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkChannelConfiguration, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkChannelConfiguration"));
		}
		return Z_Registration_Info_UEnum_AkChannelConfiguration.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkChannelConfiguration>()
	{
		return AkChannelConfiguration_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enumerators[] = {
		{ "AkChannelConfiguration::Ak_Parent", (int64)AkChannelConfiguration::Ak_Parent },
		{ "AkChannelConfiguration::Ak_MainMix", (int64)AkChannelConfiguration::Ak_MainMix },
		{ "AkChannelConfiguration::Ak_Passthrough", (int64)AkChannelConfiguration::Ak_Passthrough },
		{ "AkChannelConfiguration::Ak_LFE", (int64)AkChannelConfiguration::Ak_LFE },
		{ "AkChannelConfiguration::AK_Audio_Objects", (int64)AkChannelConfiguration::AK_Audio_Objects },
		{ "AkChannelConfiguration::Ak_1_0", (int64)AkChannelConfiguration::Ak_1_0 },
		{ "AkChannelConfiguration::Ak_2_0", (int64)AkChannelConfiguration::Ak_2_0 },
		{ "AkChannelConfiguration::Ak_2_1", (int64)AkChannelConfiguration::Ak_2_1 },
		{ "AkChannelConfiguration::Ak_3_0", (int64)AkChannelConfiguration::Ak_3_0 },
		{ "AkChannelConfiguration::Ak_3_1", (int64)AkChannelConfiguration::Ak_3_1 },
		{ "AkChannelConfiguration::Ak_4_0", (int64)AkChannelConfiguration::Ak_4_0 },
		{ "AkChannelConfiguration::Ak_4_1", (int64)AkChannelConfiguration::Ak_4_1 },
		{ "AkChannelConfiguration::Ak_5_0", (int64)AkChannelConfiguration::Ak_5_0 },
		{ "AkChannelConfiguration::Ak_5_1", (int64)AkChannelConfiguration::Ak_5_1 },
		{ "AkChannelConfiguration::Ak_7_1", (int64)AkChannelConfiguration::Ak_7_1 },
		{ "AkChannelConfiguration::Ak_5_1_2", (int64)AkChannelConfiguration::Ak_5_1_2 },
		{ "AkChannelConfiguration::Ak_7_1_2", (int64)AkChannelConfiguration::Ak_7_1_2 },
		{ "AkChannelConfiguration::Ak_7_1_4", (int64)AkChannelConfiguration::Ak_7_1_4 },
		{ "AkChannelConfiguration::Ak_Auro_9_1", (int64)AkChannelConfiguration::Ak_Auro_9_1 },
		{ "AkChannelConfiguration::Ak_Auro_10_1", (int64)AkChannelConfiguration::Ak_Auro_10_1 },
		{ "AkChannelConfiguration::Ak_Auro_11_1", (int64)AkChannelConfiguration::Ak_Auro_11_1 },
		{ "AkChannelConfiguration::Ak_Auro_13_1", (int64)AkChannelConfiguration::Ak_Auro_13_1 },
		{ "AkChannelConfiguration::Ak_Ambisonics_1st_order", (int64)AkChannelConfiguration::Ak_Ambisonics_1st_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_2nd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_2nd_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_3rd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_3rd_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_4th_order", (int64)AkChannelConfiguration::Ak_Ambisonics_4th_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_5th_order", (int64)AkChannelConfiguration::Ak_Ambisonics_5th_order },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enum_MetaDataParams[] = {
		{ "Ak_1_0.Name", "AkChannelConfiguration::Ak_1_0" },
		{ "Ak_2_0.Name", "AkChannelConfiguration::Ak_2_0" },
		{ "Ak_2_1.Name", "AkChannelConfiguration::Ak_2_1" },
		{ "Ak_3_0.Name", "AkChannelConfiguration::Ak_3_0" },
		{ "Ak_3_1.Name", "AkChannelConfiguration::Ak_3_1" },
		{ "Ak_4_0.Name", "AkChannelConfiguration::Ak_4_0" },
		{ "Ak_4_1.Name", "AkChannelConfiguration::Ak_4_1" },
		{ "Ak_5_0.Name", "AkChannelConfiguration::Ak_5_0" },
		{ "Ak_5_1.Name", "AkChannelConfiguration::Ak_5_1" },
		{ "Ak_5_1_2.Name", "AkChannelConfiguration::Ak_5_1_2" },
		{ "Ak_7_1.Name", "AkChannelConfiguration::Ak_7_1" },
		{ "Ak_7_1_2.Name", "AkChannelConfiguration::Ak_7_1_2" },
		{ "Ak_7_1_4.Name", "AkChannelConfiguration::Ak_7_1_4" },
		{ "Ak_Ambisonics_1st_order.Name", "AkChannelConfiguration::Ak_Ambisonics_1st_order" },
		{ "Ak_Ambisonics_2nd_order.Name", "AkChannelConfiguration::Ak_Ambisonics_2nd_order" },
		{ "Ak_Ambisonics_3rd_order.Name", "AkChannelConfiguration::Ak_Ambisonics_3rd_order" },
		{ "Ak_Ambisonics_4th_order.Name", "AkChannelConfiguration::Ak_Ambisonics_4th_order" },
		{ "Ak_Ambisonics_5th_order.Name", "AkChannelConfiguration::Ak_Ambisonics_5th_order" },
		{ "AK_Audio_Objects.Name", "AkChannelConfiguration::AK_Audio_Objects" },
		{ "Ak_Auro_10_1.Name", "AkChannelConfiguration::Ak_Auro_10_1" },
		{ "Ak_Auro_11_1.Name", "AkChannelConfiguration::Ak_Auro_11_1" },
		{ "Ak_Auro_13_1.Name", "AkChannelConfiguration::Ak_Auro_13_1" },
		{ "Ak_Auro_9_1.Name", "AkChannelConfiguration::Ak_Auro_9_1" },
		{ "Ak_LFE.Name", "AkChannelConfiguration::Ak_LFE" },
		{ "Ak_MainMix.Name", "AkChannelConfiguration::Ak_MainMix" },
		{ "Ak_Parent.Name", "AkChannelConfiguration::Ak_Parent" },
		{ "Ak_Passthrough.Name", "AkChannelConfiguration::Ak_Passthrough" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkChannelConfiguration",
		"AkChannelConfiguration",
		Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration()
	{
		if (!Z_Registration_Info_UEnum_AkChannelConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkChannelConfiguration.InnerSingleton, Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkChannelConfiguration.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkSpeakerConfiguration;
	static UEnum* AkSpeakerConfiguration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkSpeakerConfiguration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkSpeakerConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSpeakerConfiguration"));
		}
		return Z_Registration_Info_UEnum_AkSpeakerConfiguration.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkSpeakerConfiguration>()
	{
		return AkSpeakerConfiguration_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enumerators[] = {
		{ "AkSpeakerConfiguration::Ak_Speaker_Front_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Front_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Front_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Low_Frequency", (int64)AkSpeakerConfiguration::Ak_Speaker_Low_Frequency },
		{ "AkSpeakerConfiguration::Ak_Speaker_Back_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Back_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Back_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Side_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Side_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Side_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Side_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Top", (int64)AkSpeakerConfiguration::Ak_Speaker_Top },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enum_MetaDataParams[] = {
		{ "Ak_Speaker_Back_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Center" },
		{ "Ak_Speaker_Back_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Left" },
		{ "Ak_Speaker_Back_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Right" },
		{ "Ak_Speaker_Front_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Center" },
		{ "Ak_Speaker_Front_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Left" },
		{ "Ak_Speaker_Front_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Right" },
		{ "Ak_Speaker_Height_Back_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center" },
		{ "Ak_Speaker_Height_Back_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left" },
		{ "Ak_Speaker_Height_Back_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right" },
		{ "Ak_Speaker_Height_Front_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center" },
		{ "Ak_Speaker_Height_Front_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left" },
		{ "Ak_Speaker_Height_Front_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right" },
		{ "Ak_Speaker_Low_Frequency.Name", "AkSpeakerConfiguration::Ak_Speaker_Low_Frequency" },
		{ "Ak_Speaker_Side_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Side_Left" },
		{ "Ak_Speaker_Side_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Side_Right" },
		{ "Ak_Speaker_Top.Name", "AkSpeakerConfiguration::Ak_Speaker_Top" },
		{ "Bitflags", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkSpeakerConfiguration",
		"AkSpeakerConfiguration",
		Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration()
	{
		if (!Z_Registration_Info_UEnum_AkSpeakerConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkSpeakerConfiguration.InnerSingleton, Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkSpeakerConfiguration.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkMultiPositionType;
	static UEnum* AkMultiPositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkMultiPositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkMultiPositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMultiPositionType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMultiPositionType"));
		}
		return Z_Registration_Info_UEnum_AkMultiPositionType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkMultiPositionType>()
	{
		return AkMultiPositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enumerators[] = {
		{ "AkMultiPositionType::SingleSource", (int64)AkMultiPositionType::SingleSource },
		{ "AkMultiPositionType::MultiSources", (int64)AkMultiPositionType::MultiSources },
		{ "AkMultiPositionType::MultiDirections", (int64)AkMultiPositionType::MultiDirections },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "MultiDirections.Comment", "//AK::SoundEngine::MultiPositionType_MultiSources,\n" },
		{ "MultiDirections.Name", "AkMultiPositionType::MultiDirections" },
		{ "MultiDirections.ToolTip", "AK::SoundEngine::MultiPositionType_MultiSources," },
		{ "MultiSources.Comment", "//AK::SoundEngine::MultiPositionType_SingleSource,\n" },
		{ "MultiSources.Name", "AkMultiPositionType::MultiSources" },
		{ "MultiSources.ToolTip", "AK::SoundEngine::MultiPositionType_SingleSource," },
		{ "SingleSource.Name", "AkMultiPositionType::SingleSource" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkMultiPositionType",
		"AkMultiPositionType",
		Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType()
	{
		if (!Z_Registration_Info_UEnum_AkMultiPositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkMultiPositionType.InnerSingleton, Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkMultiPositionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkActionOnEventType;
	static UEnum* AkActionOnEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkActionOnEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkActionOnEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkActionOnEventType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkActionOnEventType"));
		}
		return Z_Registration_Info_UEnum_AkActionOnEventType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkActionOnEventType>()
	{
		return AkActionOnEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enumerators[] = {
		{ "AkActionOnEventType::Stop", (int64)AkActionOnEventType::Stop },
		{ "AkActionOnEventType::Pause", (int64)AkActionOnEventType::Pause },
		{ "AkActionOnEventType::Resume", (int64)AkActionOnEventType::Resume },
		{ "AkActionOnEventType::Break", (int64)AkActionOnEventType::Break },
		{ "AkActionOnEventType::ReleaseEnvelope", (int64)AkActionOnEventType::ReleaseEnvelope },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Break.Comment", "// AK::SoundEngine::AkActionOnEventType_Break\n" },
		{ "Break.Name", "AkActionOnEventType::Break" },
		{ "Break.ToolTip", "AK::SoundEngine::AkActionOnEventType_Break" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "Pause.Comment", "// AK::SoundEngine::AkActionOnEventType_Pause\n" },
		{ "Pause.Name", "AkActionOnEventType::Pause" },
		{ "Pause.ToolTip", "AK::SoundEngine::AkActionOnEventType_Pause" },
		{ "ReleaseEnvelope.Comment", "// AK::SoundEngine::AkActionOnEventType_ReleaseEnvelope\n" },
		{ "ReleaseEnvelope.Name", "AkActionOnEventType::ReleaseEnvelope" },
		{ "ReleaseEnvelope.ToolTip", "AK::SoundEngine::AkActionOnEventType_ReleaseEnvelope" },
		{ "Resume.Comment", "// AK::SoundEngine::AkActionOnEventType_Resume\n" },
		{ "Resume.Name", "AkActionOnEventType::Resume" },
		{ "Resume.ToolTip", "AK::SoundEngine::AkActionOnEventType_Resume" },
		{ "Stop.Comment", "// AK::SoundEngine::AkActionOnEventType_Stop\n" },
		{ "Stop.Name", "AkActionOnEventType::Stop" },
		{ "Stop.ToolTip", "AK::SoundEngine::AkActionOnEventType_Stop" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkActionOnEventType",
		"AkActionOnEventType",
		Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType()
	{
		if (!Z_Registration_Info_UEnum_AkActionOnEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkActionOnEventType.InnerSingleton, Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkActionOnEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkCurveInterpolation;
	static UEnum* EAkCurveInterpolation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkCurveInterpolation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkCurveInterpolation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCurveInterpolation"));
		}
		return Z_Registration_Info_UEnum_EAkCurveInterpolation.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCurveInterpolation>()
	{
		return EAkCurveInterpolation_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enumerators[] = {
		{ "EAkCurveInterpolation::Log3", (int64)EAkCurveInterpolation::Log3 },
		{ "EAkCurveInterpolation::Sine", (int64)EAkCurveInterpolation::Sine },
		{ "EAkCurveInterpolation::Log1", (int64)EAkCurveInterpolation::Log1 },
		{ "EAkCurveInterpolation::InvSCurve", (int64)EAkCurveInterpolation::InvSCurve },
		{ "EAkCurveInterpolation::Linear", (int64)EAkCurveInterpolation::Linear },
		{ "EAkCurveInterpolation::SCurve", (int64)EAkCurveInterpolation::SCurve },
		{ "EAkCurveInterpolation::Exp1", (int64)EAkCurveInterpolation::Exp1 },
		{ "EAkCurveInterpolation::SineRecip", (int64)EAkCurveInterpolation::SineRecip },
		{ "EAkCurveInterpolation::Exp3", (int64)EAkCurveInterpolation::Exp3 },
		{ "EAkCurveInterpolation::LastFadeCurve", (int64)EAkCurveInterpolation::LastFadeCurve },
		{ "EAkCurveInterpolation::Constant", (int64)EAkCurveInterpolation::Constant },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Constant.Comment", "// Constant ( not valid for fading values )\n" },
		{ "Constant.Name", "EAkCurveInterpolation::Constant" },
		{ "Constant.ToolTip", "Constant ( not valid for fading values )" },
		{ "Exp1.Comment", "// Exp1\n" },
		{ "Exp1.Name", "EAkCurveInterpolation::Exp1" },
		{ "Exp1.ToolTip", "Exp1" },
		{ "Exp3.Comment", "// Exp3\n" },
		{ "Exp3.Name", "EAkCurveInterpolation::Exp3" },
		{ "Exp3.ToolTip", "Exp3" },
		{ "InvSCurve.Comment", "// Inversed S Curve\n" },
		{ "InvSCurve.Name", "EAkCurveInterpolation::InvSCurve" },
		{ "InvSCurve.ToolTip", "Inversed S Curve" },
		{ "LastFadeCurve.Comment", "// Update this value to reflect last curve available for fades\n" },
		{ "LastFadeCurve.Name", "EAkCurveInterpolation::LastFadeCurve" },
		{ "LastFadeCurve.ToolTip", "Update this value to reflect last curve available for fades" },
		{ "Linear.Comment", "// Linear (Default)\n" },
		{ "Linear.Name", "EAkCurveInterpolation::Linear" },
		{ "Linear.ToolTip", "Linear (Default)" },
		{ "Log1.Comment", "// Log1\n" },
		{ "Log1.Name", "EAkCurveInterpolation::Log1" },
		{ "Log1.ToolTip", "Log1" },
		{ "Log3.Comment", "// Log3\n" },
		{ "Log3.Name", "EAkCurveInterpolation::Log3" },
		{ "Log3.ToolTip", "Log3" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "SCurve.Comment", "// S Curve\n" },
		{ "SCurve.Name", "EAkCurveInterpolation::SCurve" },
		{ "SCurve.ToolTip", "S Curve" },
		{ "Sine.Comment", "// Sine\n" },
		{ "Sine.Name", "EAkCurveInterpolation::Sine" },
		{ "Sine.ToolTip", "Sine" },
		{ "SineRecip.Comment", "// Reciprocal of sine curve\n" },
		{ "SineRecip.Name", "EAkCurveInterpolation::SineRecip" },
		{ "SineRecip.ToolTip", "Reciprocal of sine curve" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkCurveInterpolation",
		"EAkCurveInterpolation",
		Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation()
	{
		if (!Z_Registration_Info_UEnum_EAkCurveInterpolation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkCurveInterpolation.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkCurveInterpolation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkResult;
	static UEnum* EAkResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkResult, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkResult"));
		}
		return Z_Registration_Info_UEnum_EAkResult.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkResult>()
	{
		return EAkResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enumerators[] = {
		{ "EAkResult::NotImplemented", (int64)EAkResult::NotImplemented },
		{ "EAkResult::Success", (int64)EAkResult::Success },
		{ "EAkResult::Fail", (int64)EAkResult::Fail },
		{ "EAkResult::PartialSuccess", (int64)EAkResult::PartialSuccess },
		{ "EAkResult::NotCompatible", (int64)EAkResult::NotCompatible },
		{ "EAkResult::AlreadyConnected", (int64)EAkResult::AlreadyConnected },
		{ "EAkResult::InvalidFile", (int64)EAkResult::InvalidFile },
		{ "EAkResult::AudioFileHeaderTooLarge", (int64)EAkResult::AudioFileHeaderTooLarge },
		{ "EAkResult::MaxReached", (int64)EAkResult::MaxReached },
		{ "EAkResult::InvalidID", (int64)EAkResult::InvalidID },
		{ "EAkResult::IDNotFound", (int64)EAkResult::IDNotFound },
		{ "EAkResult::InvalidInstanceID", (int64)EAkResult::InvalidInstanceID },
		{ "EAkResult::NoMoreData", (int64)EAkResult::NoMoreData },
		{ "EAkResult::InvalidStateGroup", (int64)EAkResult::InvalidStateGroup },
		{ "EAkResult::ChildAlreadyHasAParent", (int64)EAkResult::ChildAlreadyHasAParent },
		{ "EAkResult::InvalidLanguage", (int64)EAkResult::InvalidLanguage },
		{ "EAkResult::CannotAddItseflAsAChild", (int64)EAkResult::CannotAddItseflAsAChild },
		{ "EAkResult::InvalidParameter", (int64)EAkResult::InvalidParameter },
		{ "EAkResult::ElementAlreadyInList", (int64)EAkResult::ElementAlreadyInList },
		{ "EAkResult::PathNotFound", (int64)EAkResult::PathNotFound },
		{ "EAkResult::PathNoVertices", (int64)EAkResult::PathNoVertices },
		{ "EAkResult::PathNotRunning", (int64)EAkResult::PathNotRunning },
		{ "EAkResult::PathNotPaused", (int64)EAkResult::PathNotPaused },
		{ "EAkResult::PathNodeAlreadyInList", (int64)EAkResult::PathNodeAlreadyInList },
		{ "EAkResult::PathNodeNotInList", (int64)EAkResult::PathNodeNotInList },
		{ "EAkResult::DataNeeded", (int64)EAkResult::DataNeeded },
		{ "EAkResult::NoDataNeeded", (int64)EAkResult::NoDataNeeded },
		{ "EAkResult::DataReady", (int64)EAkResult::DataReady },
		{ "EAkResult::NoDataReady", (int64)EAkResult::NoDataReady },
		{ "EAkResult::InsufficientMemory", (int64)EAkResult::InsufficientMemory },
		{ "EAkResult::Cancelled", (int64)EAkResult::Cancelled },
		{ "EAkResult::UnknownBankID", (int64)EAkResult::UnknownBankID },
		{ "EAkResult::BankReadError", (int64)EAkResult::BankReadError },
		{ "EAkResult::InvalidSwitchType", (int64)EAkResult::InvalidSwitchType },
		{ "EAkResult::FormatNotReady", (int64)EAkResult::FormatNotReady },
		{ "EAkResult::WrongBankVersion", (int64)EAkResult::WrongBankVersion },
		{ "EAkResult::FileNotFound", (int64)EAkResult::FileNotFound },
		{ "EAkResult::DeviceNotReady", (int64)EAkResult::DeviceNotReady },
		{ "EAkResult::BankAlreadyLoaded", (int64)EAkResult::BankAlreadyLoaded },
		{ "EAkResult::RenderedFX", (int64)EAkResult::RenderedFX },
		{ "EAkResult::ProcessNeeded", (int64)EAkResult::ProcessNeeded },
		{ "EAkResult::ProcessDone", (int64)EAkResult::ProcessDone },
		{ "EAkResult::MemManagerNotInitialized", (int64)EAkResult::MemManagerNotInitialized },
		{ "EAkResult::StreamMgrNotInitialized", (int64)EAkResult::StreamMgrNotInitialized },
		{ "EAkResult::SSEInstructionsNotSupported", (int64)EAkResult::SSEInstructionsNotSupported },
		{ "EAkResult::Busy", (int64)EAkResult::Busy },
		{ "EAkResult::UnsupportedChannelConfig", (int64)EAkResult::UnsupportedChannelConfig },
		{ "EAkResult::PluginMediaNotAvailable", (int64)EAkResult::PluginMediaNotAvailable },
		{ "EAkResult::MustBeVirtualized", (int64)EAkResult::MustBeVirtualized },
		{ "EAkResult::CommandTooLarge", (int64)EAkResult::CommandTooLarge },
		{ "EAkResult::RejectedByFilter", (int64)EAkResult::RejectedByFilter },
		{ "EAkResult::InvalidCustomPlatformName", (int64)EAkResult::InvalidCustomPlatformName },
		{ "EAkResult::DLLCannotLoad", (int64)EAkResult::DLLCannotLoad },
		{ "EAkResult::DLLPathNotFound", (int64)EAkResult::DLLPathNotFound },
		{ "EAkResult::NoJavaVM", (int64)EAkResult::NoJavaVM },
		{ "EAkResult::OpenSLError", (int64)EAkResult::OpenSLError },
		{ "EAkResult::PluginNotRegistered", (int64)EAkResult::PluginNotRegistered },
		{ "EAkResult::DataAlignmentError", (int64)EAkResult::DataAlignmentError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enum_MetaDataParams[] = {
		{ "AlreadyConnected.Name", "EAkResult::AlreadyConnected" },
		{ "AlreadyConnected.ToolTip", "The stream is already connected to another node." },
		{ "AudioFileHeaderTooLarge.Name", "EAkResult::AudioFileHeaderTooLarge" },
		{ "AudioFileHeaderTooLarge.ToolTip", "The file header is too large." },
		{ "BankAlreadyLoaded.Name", "EAkResult::BankAlreadyLoaded" },
		{ "BankAlreadyLoaded.ToolTip", "The bank load failed because the bank is already loaded." },
		{ "BankReadError.Name", "EAkResult::BankReadError" },
		{ "BankReadError.ToolTip", "Error while reading a bank." },
		{ "BlueprintType", "true" },
		{ "Busy.Name", "EAkResult::Busy" },
		{ "Busy.ToolTip", "The system is busy and could not process the request." },
		{ "Cancelled.Name", "EAkResult::Cancelled" },
		{ "Cancelled.ToolTip", "The requested action was cancelled (not an error)." },
		{ "CannotAddItseflAsAChild.DisplayName", "Cannot Add Itself As A Child" },
		{ "CannotAddItseflAsAChild.Name", "EAkResult::CannotAddItseflAsAChild" },
		{ "CannotAddItseflAsAChild.ToolTip", "It is not possible to add itself as its own child." },
		{ "ChildAlreadyHasAParent.DisplayName", "Child Already Has A Parent" },
		{ "ChildAlreadyHasAParent.Name", "EAkResult::ChildAlreadyHasAParent" },
		{ "ChildAlreadyHasAParent.ToolTip", "The child already has a parent." },
		{ "CommandTooLarge.Name", "EAkResult::CommandTooLarge" },
		{ "CommandTooLarge.ToolTip", "SDK command is too large to fit in the command queue." },
		{ "DataAlignmentError.Name", "EAkResult::DataAlignmentError" },
		{ "DataAlignmentError.ToolTip", "A pointer to audio data was not aligned to the platform's required alignment (check AkTypes.h in the platform-specific folder)." },
		{ "DataNeeded.Name", "EAkResult::DataNeeded" },
		{ "DataNeeded.ToolTip", "The consumer needs more." },
		{ "DataReady.Name", "EAkResult::DataReady" },
		{ "DataReady.ToolTip", "The provider has available data." },
		{ "DeviceNotReady.Name", "EAkResult::DeviceNotReady" },
		{ "DeviceNotReady.ToolTip", "IO device not ready (may be because the tray is open)." },
		{ "DLLCannotLoad.Name", "EAkResult::DLLCannotLoad" },
		{ "DLLCannotLoad.ToolTip", "Plugin DLL could not be loaded, either because it is not found or one dependency is missing." },
		{ "DLLPathNotFound.Name", "EAkResult::DLLPathNotFound" },
		{ "DLLPathNotFound.ToolTip", "Plugin DLL search path could not be found." },
		{ "ElementAlreadyInList.Name", "EAkResult::ElementAlreadyInList" },
		{ "ElementAlreadyInList.ToolTip", "The item could not be added because it was already in the list." },
		{ "Fail.Name", "EAkResult::Fail" },
		{ "Fail.ToolTip", "The operation failed." },
		{ "FileNotFound.Name", "EAkResult::FileNotFound" },
		{ "FileNotFound.ToolTip", "File not found." },
		{ "FormatNotReady.Name", "EAkResult::FormatNotReady" },
		{ "FormatNotReady.ToolTip", "Source format not known yet." },
		{ "IDNotFound.DisplayName", "ID Not Found" },
		{ "IDNotFound.Name", "EAkResult::IDNotFound" },
		{ "IDNotFound.ToolTip", "The ID was not found." },
		{ "InsufficientMemory.Name", "EAkResult::InsufficientMemory" },
		{ "InsufficientMemory.ToolTip", "Memory error." },
		{ "InvalidCustomPlatformName.Name", "EAkResult::InvalidCustomPlatformName" },
		{ "InvalidCustomPlatformName.ToolTip", "Detecting incompatibility between Custom platform of banks and custom platform of connected application." },
		{ "InvalidFile.Name", "EAkResult::InvalidFile" },
		{ "InvalidFile.ToolTip", "An unexpected value causes the file to be invalid." },
		{ "InvalidID.Name", "EAkResult::InvalidID" },
		{ "InvalidID.ToolTip", "The ID is invalid." },
		{ "InvalidInstanceID.Name", "EAkResult::InvalidInstanceID" },
		{ "InvalidInstanceID.ToolTip", "The InstanceID is invalid." },
		{ "InvalidLanguage.Name", "EAkResult::InvalidLanguage" },
		{ "InvalidLanguage.ToolTip", "The language is invalid (applies to the Low-Level I/O)." },
		{ "InvalidParameter.Name", "EAkResult::InvalidParameter" },
		{ "InvalidParameter.ToolTip", "Something is not within bounds." },
		{ "InvalidStateGroup.Name", "EAkResult::InvalidStateGroup" },
		{ "InvalidStateGroup.ToolTip", "The StateGroup is not a valid channel." },
		{ "InvalidSwitchType.Name", "EAkResult::InvalidSwitchType" },
		{ "InvalidSwitchType.ToolTip", "Invalid switch type (used with the switch container)" },
		{ "MaxReached.Name", "EAkResult::MaxReached" },
		{ "MaxReached.ToolTip", "The maximum was reached." },
		{ "MemManagerNotInitialized.Name", "EAkResult::MemManagerNotInitialized" },
		{ "MemManagerNotInitialized.ToolTip", "The memory manager should have been initialized at this point." },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "MustBeVirtualized.Name", "EAkResult::MustBeVirtualized" },
		{ "MustBeVirtualized.ToolTip", "Sound was Not Allowed to play." },
		{ "NoDataNeeded.Name", "EAkResult::NoDataNeeded" },
		{ "NoDataNeeded.ToolTip", "The consumer does not need more." },
		{ "NoDataReady.Name", "EAkResult::NoDataReady" },
		{ "NoDataReady.ToolTip", "The provider does not have available data." },
		{ "NoJavaVM.Name", "EAkResult::NoJavaVM" },
		{ "NoJavaVM.ToolTip", "No Java VM provided in AkInitSettings." },
		{ "NoMoreData.Name", "EAkResult::NoMoreData" },
		{ "NoMoreData.ToolTip", "No more data is available from the source." },
		{ "NotCompatible.Name", "EAkResult::NotCompatible" },
		{ "NotCompatible.ToolTip", "Incompatible formats." },
		{ "NotImplemented.Name", "EAkResult::NotImplemented" },
		{ "NotImplemented.ToolTip", "This feature is not implemented." },
		{ "OpenSLError.Name", "EAkResult::OpenSLError" },
		{ "OpenSLError.ToolTip", "OpenSL returned an error.  Check error log for more details." },
		{ "PartialSuccess.Name", "EAkResult::PartialSuccess" },
		{ "PartialSuccess.ToolTip", "The operation succeeded partially." },
		{ "PathNodeAlreadyInList.Name", "EAkResult::PathNodeAlreadyInList" },
		{ "PathNodeAlreadyInList.ToolTip", "This path is already there." },
		{ "PathNodeNotInList.Name", "EAkResult::PathNodeNotInList" },
		{ "PathNodeNotInList.ToolTip", "This path is not there." },
		{ "PathNotFound.Name", "EAkResult::PathNotFound" },
		{ "PathNotFound.ToolTip", "This path is not known." },
		{ "PathNotPaused.Name", "EAkResult::PathNotPaused" },
		{ "PathNotPaused.ToolTip", "Only a paused path can be resumed." },
		{ "PathNotRunning.Name", "EAkResult::PathNotRunning" },
		{ "PathNotRunning.ToolTip", "Only a running path can be paused." },
		{ "PathNoVertices.Name", "EAkResult::PathNoVertices" },
		{ "PathNoVertices.ToolTip", "Stuff in vertices before trying to start it." },
		{ "PluginMediaNotAvailable.Name", "EAkResult::PluginMediaNotAvailable" },
		{ "PluginMediaNotAvailable.ToolTip", "Plugin media is not available for effect." },
		{ "PluginNotRegistered.Name", "EAkResult::PluginNotRegistered" },
		{ "PluginNotRegistered.ToolTip", "Plugin is not registered.  Make sure to implement a AK::PluginRegistration class for it and use AK_STATIC_LINK_PLUGIN in the game binary." },
		{ "ProcessDone.Name", "EAkResult::ProcessDone" },
		{ "ProcessDone.ToolTip", "The executed routine has finished its execution." },
		{ "ProcessNeeded.Name", "EAkResult::ProcessNeeded" },
		{ "ProcessNeeded.ToolTip", "A routine needs to be executed on some CPU." },
		{ "RejectedByFilter.Name", "EAkResult::RejectedByFilter" },
		{ "RejectedByFilter.ToolTip", "A play request was rejected due to the MIDI filter parameters." },
		{ "RenderedFX.Name", "EAkResult::RenderedFX" },
		{ "RenderedFX.ToolTip", "The effect on the node is rendered." },
		{ "SSEInstructionsNotSupported.Name", "EAkResult::SSEInstructionsNotSupported" },
		{ "SSEInstructionsNotSupported.ToolTip", "The machine does not support SSE instructions (required on PC)." },
		{ "StreamMgrNotInitialized.Name", "EAkResult::StreamMgrNotInitialized" },
		{ "StreamMgrNotInitialized.ToolTip", "The stream manager should have been initialized at this point." },
		{ "Success.Name", "EAkResult::Success" },
		{ "Success.ToolTip", "The operation was successful." },
		{ "UnknownBankID.Name", "EAkResult::UnknownBankID" },
		{ "UnknownBankID.ToolTip", "Trying to load a bank using an ID which is not defined." },
		{ "UnsupportedChannelConfig.Name", "EAkResult::UnsupportedChannelConfig" },
		{ "UnsupportedChannelConfig.ToolTip", "Channel configuration is not supported in the current execution context." },
		{ "WrongBankVersion.Name", "EAkResult::WrongBankVersion" },
		{ "WrongBankVersion.ToolTip", "The bank version is not compatible with the current bank reader." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkResult",
		"EAkResult",
		Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkResult()
	{
		if (!Z_Registration_Info_UEnum_EAkResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkResult.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkCallbackType;
	static UEnum* EAkCallbackType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkCallbackType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkCallbackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCallbackType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCallbackType"));
		}
		return Z_Registration_Info_UEnum_EAkCallbackType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCallbackType>()
	{
		return EAkCallbackType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enumerators[] = {
		{ "EAkCallbackType::EndOfEvent", (int64)EAkCallbackType::EndOfEvent },
		{ "EAkCallbackType::Marker", (int64)EAkCallbackType::Marker },
		{ "EAkCallbackType::Duration", (int64)EAkCallbackType::Duration },
		{ "EAkCallbackType::Starvation", (int64)EAkCallbackType::Starvation },
		{ "EAkCallbackType::MusicPlayStarted", (int64)EAkCallbackType::MusicPlayStarted },
		{ "EAkCallbackType::MusicSyncBeat", (int64)EAkCallbackType::MusicSyncBeat },
		{ "EAkCallbackType::MusicSyncBar", (int64)EAkCallbackType::MusicSyncBar },
		{ "EAkCallbackType::MusicSyncEntry", (int64)EAkCallbackType::MusicSyncEntry },
		{ "EAkCallbackType::MusicSyncExit", (int64)EAkCallbackType::MusicSyncExit },
		{ "EAkCallbackType::MusicSyncGrid", (int64)EAkCallbackType::MusicSyncGrid },
		{ "EAkCallbackType::MusicSyncUserCue", (int64)EAkCallbackType::MusicSyncUserCue },
		{ "EAkCallbackType::MusicSyncPoint", (int64)EAkCallbackType::MusicSyncPoint },
		{ "EAkCallbackType::MIDIEvent", (int64)EAkCallbackType::MIDIEvent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enum_MetaDataParams[] = {
		{ "Bitmask", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*=============================================================================\n\nBegin - Ak Callback Blueprint classes and structures. Known limitations:\n- AkDynamicSequenceItemCallbackInfo is not exposed because Dynamic sequences are not part of this integration\n- AkSpeakerVolumeMatrixCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n- AkMusicPlaylistCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n\n=============================================================================*//// Type of callback. Used as a bitfield in methods AK::SoundEngine::PostEvent() and AK::SoundEngine::DynamicSequence::Open().\n" },
		{ "Duration.Name", "EAkCallbackType::Duration" },
		{ "Duration.ToolTip", "Callback triggered when the duration of the sound is known by the sound engine. AkCallbackInfo can be cast to AkDurationCallbackInfo." },
		{ "EndOfEvent.Name", "EAkCallbackType::EndOfEvent" },
		{ "EndOfEvent.ToolTip", "Callback triggered when reaching the end of an event. AkCallbackInfo can be cast to AkEventCallbackInfo." },
		{ "Marker.Name", "EAkCallbackType::Marker" },
		{ "Marker.ToolTip", "Callback triggered when encountering a marker during playback. AkCallbackInfo can be cast to AkMarkerCallbackInfo." },
		{ "MIDIEvent.Name", "EAkCallbackType::MIDIEvent" },
		{ "MIDIEvent.ToolTip", "Enable notifications for MIDI events. AkCallbackInfo can be cast to AkMIDIEventCallbackInfo." },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "MusicPlayStarted.Name", "EAkCallbackType::MusicPlayStarted" },
		{ "MusicPlayStarted.ToolTip", "Callback triggered when a Play or Seek command has been executed (Seek commands are issued from AK::SoundEngine::SeekOnEvent()). Applies to objects of the Interactive-Music Hierarchy only. AkCallbackInfo can be cast to AkEventCallbackInfo." },
		{ "MusicSyncBar.Name", "EAkCallbackType::MusicSyncBar" },
		{ "MusicSyncBar.ToolTip", "Enable notifications on Music Bar. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncBeat.Name", "EAkCallbackType::MusicSyncBeat" },
		{ "MusicSyncBeat.ToolTip", "Enable notifications on Music Beat. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncEntry.Name", "EAkCallbackType::MusicSyncEntry" },
		{ "MusicSyncEntry.ToolTip", "Enable notifications on Music Entry Cue. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncExit.Name", "EAkCallbackType::MusicSyncExit" },
		{ "MusicSyncExit.ToolTip", "Enable notifications on Music Exit Cue. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncGrid.Name", "EAkCallbackType::MusicSyncGrid" },
		{ "MusicSyncGrid.ToolTip", "Enable notifications on Music Grid. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncPoint.Name", "EAkCallbackType::MusicSyncPoint" },
		{ "MusicSyncPoint.ToolTip", "Enable notifications on Music switch transition synchronization point. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncUserCue.Name", "EAkCallbackType::MusicSyncUserCue" },
		{ "MusicSyncUserCue.ToolTip", "Enable notifications on Music Custom Cue. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "Starvation.Name", "EAkCallbackType::Starvation" },
		{ "Starvation.ToolTip", "Callback triggered when playback skips a frame due to stream starvation. AkCallbackInfo can be cast to AkEventCallbackInfo." },
		{ "ToolTip", "Begin - Ak Callback Blueprint classes and structures. Known limitations:\n- AkDynamicSequenceItemCallbackInfo is not exposed because Dynamic sequences are not part of this integration\n- AkSpeakerVolumeMatrixCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n- AkMusicPlaylistCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n\n=============================================================================/// Type of callback. Used as a bitfield in methods AK::SoundEngine::PostEvent() and AK::SoundEngine::DynamicSequence::Open()." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkCallbackType",
		"EAkCallbackType",
		Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType()
	{
		if (!Z_Registration_Info_UEnum_EAkCallbackType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkCallbackType.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkCallbackType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTPCValueType;
	static UEnum* ERTPCValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTPCValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTPCValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_ERTPCValueType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("ERTPCValueType"));
		}
		return Z_Registration_Info_UEnum_ERTPCValueType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<ERTPCValueType>()
	{
		return ERTPCValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enumerators[] = {
		{ "ERTPCValueType::Default", (int64)ERTPCValueType::Default },
		{ "ERTPCValueType::Global", (int64)ERTPCValueType::Global },
		{ "ERTPCValueType::GameObject", (int64)ERTPCValueType::GameObject },
		{ "ERTPCValueType::PlayingID", (int64)ERTPCValueType::PlayingID },
		{ "ERTPCValueType::Unavailable", (int64)ERTPCValueType::Unavailable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "// Need to set hard-coded 0, or else UHT complains.\n" },
		{ "Default.Name", "ERTPCValueType::Default" },
		{ "Default.ToolTip", "Need to set hard-coded 0, or else UHT complains." },
		{ "GameObject.Comment", "///< The value is the Global RTPC.\n" },
		{ "GameObject.Name", "ERTPCValueType::GameObject" },
		{ "GameObject.ToolTip", "< The value is the Global RTPC." },
		{ "Global.Comment", "///< The value is the Default RTPC.\n" },
		{ "Global.Name", "ERTPCValueType::Global" },
		{ "Global.ToolTip", "< The value is the Default RTPC." },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "PlayingID.Comment", "///< The value is the game object specific RTPC.\n" },
		{ "PlayingID.Name", "ERTPCValueType::PlayingID" },
		{ "PlayingID.ToolTip", "< The value is the game object specific RTPC." },
		{ "Unavailable.Comment", "///< The value is the playing ID specific RTPC.\n" },
		{ "Unavailable.Name", "ERTPCValueType::Unavailable" },
		{ "Unavailable.ToolTip", "< The value is the playing ID specific RTPC." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"ERTPCValueType",
		"ERTPCValueType",
		Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType()
	{
		if (!Z_Registration_Info_UEnum_ERTPCValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTPCValueType.InnerSingleton, Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTPCValueType.InnerSingleton;
	}
	void UAkCallbackInfo::StaticRegisterNativesUAkCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkCallbackInfo);
	UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister()
	{
		return UAkCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Callback information structure used as base for all notifications handled by \\ref AkCallbackFunc.\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n" },
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Callback information structure used as base for all notifications handled by \\ref AkCallbackFunc.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkCallbackInfo, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCallbackInfo_Statics::NewProp_AkComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkCallbackInfo_Statics::ClassParams = {
		&UAkCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkCallbackInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkCallbackInfo>()
	{
		return UAkCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkCallbackInfo);
	UAkCallbackInfo::~UAkCallbackInfo() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkChannelMask;
class UScriptStruct* FAkChannelMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkChannelMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkChannelMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkChannelMask, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkChannelMask"));
	}
	return Z_Registration_Info_UScriptStruct_AkChannelMask.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkChannelMask>()
{
	return FAkChannelMask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkChannelMask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkChannelMask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkChannelMask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.AkSpeakerConfiguration" },
		{ "Category", "Channel Mask" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkChannelMask, ChannelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkChannelMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkChannelMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkChannelMask",
		sizeof(FAkChannelMask),
		alignof(FAkChannelMask),
		Z_Construct_UScriptStruct_FAkChannelMask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkChannelMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkChannelMask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkChannelMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask()
	{
		if (!Z_Registration_Info_UScriptStruct_AkChannelMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkChannelMask.InnerSingleton, Z_Construct_UScriptStruct_FAkChannelMask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkChannelMask.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkOutputSettings;
class UScriptStruct* FAkOutputSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkOutputSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkOutputSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutputSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkOutputSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkOutputSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkOutputSettings>()
{
	return FAkOutputSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkOutputSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioDeviceShareSetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdDevice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IdDevice;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PanRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutputSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName = { "AudioDeviceShareSetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkOutputSettings, AudioDeviceShareSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice = { "IdDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkOutputSettings, IdDevice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "DisplayName", "PanningRule" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule = { "PanRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkOutputSettings, PanRule), Z_Construct_UEnum_AkAudio_PanningRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_MetaData)) }; // 2538757133
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig = { "ChannelConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkOutputSettings, ChannelConfig), Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_MetaData)) }; // 2631469996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkOutputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceShareSetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkOutputSettings",
		sizeof(FAkOutputSettings),
		alignof(FAkOutputSettings),
		Z_Construct_UScriptStruct_FAkOutputSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkOutputSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkOutputSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkOutputSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkOutputSettings.InnerSingleton;
	}
	void UAkEventCallbackInfo::StaticRegisterNativesUAkEventCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkEventCallbackInfo);
	UClass* Z_Construct_UClass_UAkEventCallbackInfo_NoRegister()
	{
		return UAkEventCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkEventCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EventID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkEventCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEventCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Callback information structure corresponding to \\ref AK_EndOfEvent, \\ref AK_MusicPlayStarted and \\ref AK_Starvation.\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n" },
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Callback information structure corresponding to \\ref AK_EndOfEvent, \\ref AK_MusicPlayStarted and \\ref AK_Starvation.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|AkEvent" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkEventCallbackInfo, PlayingID), METADATA_PARAMS(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|AkEvent" },
		{ "Comment", "///< Playing ID of Event, returned by PostEvent()\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Playing ID of Event, returned by PostEvent()" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkEventCallbackInfo, EventID), METADATA_PARAMS(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkEventCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkEventCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEventCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkEventCallbackInfo_Statics::ClassParams = {
		&UAkEventCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkEventCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkEventCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkEventCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkEventCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEventCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkEventCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkEventCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkEventCallbackInfo>()
	{
		return UAkEventCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkEventCallbackInfo);
	UAkEventCallbackInfo::~UAkEventCallbackInfo() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkMidiEventType;
	static UEnum* EAkMidiEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkMidiEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkMidiEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkMidiEventType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkMidiEventType"));
		}
		return Z_Registration_Info_UEnum_EAkMidiEventType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkMidiEventType>()
	{
		return EAkMidiEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enumerators[] = {
		{ "EAkMidiEventType::AkMidiEventTypeInvalid", (int64)EAkMidiEventType::AkMidiEventTypeInvalid },
		{ "EAkMidiEventType::AkMidiEventTypeNoteOff", (int64)EAkMidiEventType::AkMidiEventTypeNoteOff },
		{ "EAkMidiEventType::AkMidiEventTypeNoteOn", (int64)EAkMidiEventType::AkMidiEventTypeNoteOn },
		{ "EAkMidiEventType::AkMidiEventTypeNoteAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeNoteAftertouch },
		{ "EAkMidiEventType::AkMidiEventTypeController", (int64)EAkMidiEventType::AkMidiEventTypeController },
		{ "EAkMidiEventType::AkMidiEventTypeProgramChange", (int64)EAkMidiEventType::AkMidiEventTypeProgramChange },
		{ "EAkMidiEventType::AkMidiEventTypeChannelAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeChannelAftertouch },
		{ "EAkMidiEventType::AkMidiEventTypePitchBend", (int64)EAkMidiEventType::AkMidiEventTypePitchBend },
		{ "EAkMidiEventType::AkMidiEventTypeSysex", (int64)EAkMidiEventType::AkMidiEventTypeSysex },
		{ "EAkMidiEventType::AkMidiEventTypeEscape", (int64)EAkMidiEventType::AkMidiEventTypeEscape },
		{ "EAkMidiEventType::AkMidiEventTypeMeta", (int64)EAkMidiEventType::AkMidiEventTypeMeta },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enum_MetaDataParams[] = {
		{ "AkMidiEventTypeChannelAftertouch.Name", "EAkMidiEventType::AkMidiEventTypeChannelAftertouch" },
		{ "AkMidiEventTypeController.Name", "EAkMidiEventType::AkMidiEventTypeController" },
		{ "AkMidiEventTypeEscape.Name", "EAkMidiEventType::AkMidiEventTypeEscape" },
		{ "AkMidiEventTypeInvalid.Comment", "// Need to set hard-coded 0, or else UHT complains.\n" },
		{ "AkMidiEventTypeInvalid.Name", "EAkMidiEventType::AkMidiEventTypeInvalid" },
		{ "AkMidiEventTypeInvalid.ToolTip", "Need to set hard-coded 0, or else UHT complains." },
		{ "AkMidiEventTypeMeta.Name", "EAkMidiEventType::AkMidiEventTypeMeta" },
		{ "AkMidiEventTypeNoteAftertouch.Name", "EAkMidiEventType::AkMidiEventTypeNoteAftertouch" },
		{ "AkMidiEventTypeNoteOff.Name", "EAkMidiEventType::AkMidiEventTypeNoteOff" },
		{ "AkMidiEventTypeNoteOn.Name", "EAkMidiEventType::AkMidiEventTypeNoteOn" },
		{ "AkMidiEventTypePitchBend.Name", "EAkMidiEventType::AkMidiEventTypePitchBend" },
		{ "AkMidiEventTypeProgramChange.Name", "EAkMidiEventType::AkMidiEventTypeProgramChange" },
		{ "AkMidiEventTypeSysex.Name", "EAkMidiEventType::AkMidiEventTypeSysex" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkMidiEventType",
		"EAkMidiEventType",
		Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType()
	{
		if (!Z_Registration_Info_UEnum_EAkMidiEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkMidiEventType.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkMidiEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkMidiCcValues;
	static UEnum* EAkMidiCcValues_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkMidiCcValues.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkMidiCcValues.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkMidiCcValues, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkMidiCcValues"));
		}
		return Z_Registration_Info_UEnum_EAkMidiCcValues.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkMidiCcValues>()
	{
		return EAkMidiCcValues_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enumerators[] = {
		{ "EAkMidiCcValues::AkMidiCcBankSelectCoarse", (int64)EAkMidiCcValues::AkMidiCcBankSelectCoarse },
		{ "EAkMidiCcValues::AkMidiCcModWheelCoarse", (int64)EAkMidiCcValues::AkMidiCcModWheelCoarse },
		{ "EAkMidiCcValues::AkMidiCcBreathCtrlCoarse", (int64)EAkMidiCcValues::AkMidiCcBreathCtrlCoarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl3Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl3Coarse },
		{ "EAkMidiCcValues::AkMidiCcFootPedalCoarse", (int64)EAkMidiCcValues::AkMidiCcFootPedalCoarse },
		{ "EAkMidiCcValues::AkMidiCcPortamentoCoarse", (int64)EAkMidiCcValues::AkMidiCcPortamentoCoarse },
		{ "EAkMidiCcValues::AkMidiCcDataEntryCoarse", (int64)EAkMidiCcValues::AkMidiCcDataEntryCoarse },
		{ "EAkMidiCcValues::AkMidiCcVolumeCoarse", (int64)EAkMidiCcValues::AkMidiCcVolumeCoarse },
		{ "EAkMidiCcValues::AkMidiCcBalanceCoarse", (int64)EAkMidiCcValues::AkMidiCcBalanceCoarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl9Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl9Coarse },
		{ "EAkMidiCcValues::AkMidiCcPanPositionCoarse", (int64)EAkMidiCcValues::AkMidiCcPanPositionCoarse },
		{ "EAkMidiCcValues::AkMidiCcExpressionCoarse", (int64)EAkMidiCcValues::AkMidiCcExpressionCoarse },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl14Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl14Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl15Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl15Coarse },
		{ "EAkMidiCcValues::AkMidiCcGenSlider1", (int64)EAkMidiCcValues::AkMidiCcGenSlider1 },
		{ "EAkMidiCcValues::AkMidiCcGenSlider2", (int64)EAkMidiCcValues::AkMidiCcGenSlider2 },
		{ "EAkMidiCcValues::AkMidiCcGenSlider3", (int64)EAkMidiCcValues::AkMidiCcGenSlider3 },
		{ "EAkMidiCcValues::AkMidiCcGenSlider4", (int64)EAkMidiCcValues::AkMidiCcGenSlider4 },
		{ "EAkMidiCcValues::AkMidiCcCtrl20Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl20Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl21Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl21Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl22Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl22Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl23Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl23Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl24Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl24Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl25Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl25Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl26Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl26Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl27Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl27Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl28Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl28Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl29Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl29Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl30Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl30Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl31Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl31Coarse },
		{ "EAkMidiCcValues::AkMidiCcBankSelectFine", (int64)EAkMidiCcValues::AkMidiCcBankSelectFine },
		{ "EAkMidiCcValues::AkMidiCcModWheelFine", (int64)EAkMidiCcValues::AkMidiCcModWheelFine },
		{ "EAkMidiCcValues::AkMidiCcBreathCtrlFine", (int64)EAkMidiCcValues::AkMidiCcBreathCtrlFine },
		{ "EAkMidiCcValues::AkMidiCcCtrl3Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl3Fine },
		{ "EAkMidiCcValues::AkMidiCcFootPedalFine", (int64)EAkMidiCcValues::AkMidiCcFootPedalFine },
		{ "EAkMidiCcValues::AkMidiCcPortamentoFine", (int64)EAkMidiCcValues::AkMidiCcPortamentoFine },
		{ "EAkMidiCcValues::AkMidiCcDataEntryFine", (int64)EAkMidiCcValues::AkMidiCcDataEntryFine },
		{ "EAkMidiCcValues::AkMidiCcVolumeFine", (int64)EAkMidiCcValues::AkMidiCcVolumeFine },
		{ "EAkMidiCcValues::AkMidiCcBalanceFine", (int64)EAkMidiCcValues::AkMidiCcBalanceFine },
		{ "EAkMidiCcValues::AkMidiCcCtrl9Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl9Fine },
		{ "EAkMidiCcValues::AkMidiCcPanPositionFine", (int64)EAkMidiCcValues::AkMidiCcPanPositionFine },
		{ "EAkMidiCcValues::AkMidiCcExpressionFine", (int64)EAkMidiCcValues::AkMidiCcExpressionFine },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl1Fine", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl1Fine },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl2Fine", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl2Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl14Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl14Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl15Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl15Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl20Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl20Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl21Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl21Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl22Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl22Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl23Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl23Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl24Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl24Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl25Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl25Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl26Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl26Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl27Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl27Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl28Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl28Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl29Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl29Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl30Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl30Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl31Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl31Fine },
		{ "EAkMidiCcValues::AkMidiCcHoldPedal", (int64)EAkMidiCcValues::AkMidiCcHoldPedal },
		{ "EAkMidiCcValues::AkMidiCcPortamentoOnOff", (int64)EAkMidiCcValues::AkMidiCcPortamentoOnOff },
		{ "EAkMidiCcValues::AkMidiCcSustenutoPedal", (int64)EAkMidiCcValues::AkMidiCcSustenutoPedal },
		{ "EAkMidiCcValues::AkMidiCcSoftPedal", (int64)EAkMidiCcValues::AkMidiCcSoftPedal },
		{ "EAkMidiCcValues::AkMidiCcLegatoPedal", (int64)EAkMidiCcValues::AkMidiCcLegatoPedal },
		{ "EAkMidiCcValues::AkMidiCcHoldPedal2", (int64)EAkMidiCcValues::AkMidiCcHoldPedal2 },
		{ "EAkMidiCcValues::AkMidiCcSoundVariation", (int64)EAkMidiCcValues::AkMidiCcSoundVariation },
		{ "EAkMidiCcValues::AkMidiCcSoundTimbre", (int64)EAkMidiCcValues::AkMidiCcSoundTimbre },
		{ "EAkMidiCcValues::AkMidiCcSoundReleaseTime", (int64)EAkMidiCcValues::AkMidiCcSoundReleaseTime },
		{ "EAkMidiCcValues::AkMidiCcSoundAttackTime", (int64)EAkMidiCcValues::AkMidiCcSoundAttackTime },
		{ "EAkMidiCcValues::AkMidiCcSoundBrightness", (int64)EAkMidiCcValues::AkMidiCcSoundBrightness },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl6", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl6 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl7", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl7 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl8", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl8 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl9", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl9 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl10", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl10 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton1", (int64)EAkMidiCcValues::AkMidiCcGeneralButton1 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton2", (int64)EAkMidiCcValues::AkMidiCcGeneralButton2 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton3", (int64)EAkMidiCcValues::AkMidiCcGeneralButton3 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton4", (int64)EAkMidiCcValues::AkMidiCcGeneralButton4 },
		{ "EAkMidiCcValues::AkMidiCcReverbLevel", (int64)EAkMidiCcValues::AkMidiCcReverbLevel },
		{ "EAkMidiCcValues::AkMidiCcTremoloLevel", (int64)EAkMidiCcValues::AkMidiCcTremoloLevel },
		{ "EAkMidiCcValues::AkMidiCcChorusLevel", (int64)EAkMidiCcValues::AkMidiCcChorusLevel },
		{ "EAkMidiCcValues::AkMidiCcCelesteLevel", (int64)EAkMidiCcValues::AkMidiCcCelesteLevel },
		{ "EAkMidiCcValues::AkMidiCcPhaserLevel", (int64)EAkMidiCcValues::AkMidiCcPhaserLevel },
		{ "EAkMidiCcValues::AkMidiCcDataButtonP1", (int64)EAkMidiCcValues::AkMidiCcDataButtonP1 },
		{ "EAkMidiCcValues::AkMidiCcDataButtonM1", (int64)EAkMidiCcValues::AkMidiCcDataButtonM1 },
		{ "EAkMidiCcValues::AkMidiCcNonRegisterCoarse", (int64)EAkMidiCcValues::AkMidiCcNonRegisterCoarse },
		{ "EAkMidiCcValues::AkMidiCcNonRegisterFine", (int64)EAkMidiCcValues::AkMidiCcNonRegisterFine },
		{ "EAkMidiCcValues::AkMidiCcAllSoundOff", (int64)EAkMidiCcValues::AkMidiCcAllSoundOff },
		{ "EAkMidiCcValues::AkMidiCcAllControllersOff", (int64)EAkMidiCcValues::AkMidiCcAllControllersOff },
		{ "EAkMidiCcValues::AkMidiCcLocalKeyboard", (int64)EAkMidiCcValues::AkMidiCcLocalKeyboard },
		{ "EAkMidiCcValues::AkMidiCcAllNotesOff", (int64)EAkMidiCcValues::AkMidiCcAllNotesOff },
		{ "EAkMidiCcValues::AkMidiCcOmniModeOff", (int64)EAkMidiCcValues::AkMidiCcOmniModeOff },
		{ "EAkMidiCcValues::AkMidiCcOmniModeOn", (int64)EAkMidiCcValues::AkMidiCcOmniModeOn },
		{ "EAkMidiCcValues::AkMidiCcOmniMonophonicOn", (int64)EAkMidiCcValues::AkMidiCcOmniMonophonicOn },
		{ "EAkMidiCcValues::AkMidiCcOmniPolyphonicOn", (int64)EAkMidiCcValues::AkMidiCcOmniPolyphonicOn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enum_MetaDataParams[] = {
		{ "AkMidiCcAllControllersOff.Name", "EAkMidiCcValues::AkMidiCcAllControllersOff" },
		{ "AkMidiCcAllNotesOff.Name", "EAkMidiCcValues::AkMidiCcAllNotesOff" },
		{ "AkMidiCcAllSoundOff.Name", "EAkMidiCcValues::AkMidiCcAllSoundOff" },
		{ "AkMidiCcBalanceCoarse.Name", "EAkMidiCcValues::AkMidiCcBalanceCoarse" },
		{ "AkMidiCcBalanceFine.Name", "EAkMidiCcValues::AkMidiCcBalanceFine" },
		{ "AkMidiCcBankSelectCoarse.Comment", "// Need to set hard-coded 0, or else UHT complains.\n" },
		{ "AkMidiCcBankSelectCoarse.Name", "EAkMidiCcValues::AkMidiCcBankSelectCoarse" },
		{ "AkMidiCcBankSelectCoarse.ToolTip", "Need to set hard-coded 0, or else UHT complains." },
		{ "AkMidiCcBankSelectFine.Name", "EAkMidiCcValues::AkMidiCcBankSelectFine" },
		{ "AkMidiCcBreathCtrlCoarse.Name", "EAkMidiCcValues::AkMidiCcBreathCtrlCoarse" },
		{ "AkMidiCcBreathCtrlFine.Name", "EAkMidiCcValues::AkMidiCcBreathCtrlFine" },
		{ "AkMidiCcCelesteLevel.Name", "EAkMidiCcValues::AkMidiCcCelesteLevel" },
		{ "AkMidiCcChorusLevel.Name", "EAkMidiCcValues::AkMidiCcChorusLevel" },
		{ "AkMidiCcCtrl14Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl14Coarse" },
		{ "AkMidiCcCtrl14Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl14Fine" },
		{ "AkMidiCcCtrl15Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl15Coarse" },
		{ "AkMidiCcCtrl15Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl15Fine" },
		{ "AkMidiCcCtrl20Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl20Coarse" },
		{ "AkMidiCcCtrl20Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl20Fine" },
		{ "AkMidiCcCtrl21Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl21Coarse" },
		{ "AkMidiCcCtrl21Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl21Fine" },
		{ "AkMidiCcCtrl22Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl22Coarse" },
		{ "AkMidiCcCtrl22Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl22Fine" },
		{ "AkMidiCcCtrl23Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl23Coarse" },
		{ "AkMidiCcCtrl23Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl23Fine" },
		{ "AkMidiCcCtrl24Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl24Coarse" },
		{ "AkMidiCcCtrl24Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl24Fine" },
		{ "AkMidiCcCtrl25Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl25Coarse" },
		{ "AkMidiCcCtrl25Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl25Fine" },
		{ "AkMidiCcCtrl26Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl26Coarse" },
		{ "AkMidiCcCtrl26Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl26Fine" },
		{ "AkMidiCcCtrl27Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl27Coarse" },
		{ "AkMidiCcCtrl27Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl27Fine" },
		{ "AkMidiCcCtrl28Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl28Coarse" },
		{ "AkMidiCcCtrl28Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl28Fine" },
		{ "AkMidiCcCtrl29Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl29Coarse" },
		{ "AkMidiCcCtrl29Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl29Fine" },
		{ "AkMidiCcCtrl30Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl30Coarse" },
		{ "AkMidiCcCtrl30Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl30Fine" },
		{ "AkMidiCcCtrl31Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl31Coarse" },
		{ "AkMidiCcCtrl31Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl31Fine" },
		{ "AkMidiCcCtrl3Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl3Coarse" },
		{ "AkMidiCcCtrl3Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl3Fine" },
		{ "AkMidiCcCtrl9Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl9Coarse" },
		{ "AkMidiCcCtrl9Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl9Fine" },
		{ "AkMidiCcDataButtonM1.Name", "EAkMidiCcValues::AkMidiCcDataButtonM1" },
		{ "AkMidiCcDataButtonP1.Name", "EAkMidiCcValues::AkMidiCcDataButtonP1" },
		{ "AkMidiCcDataEntryCoarse.Name", "EAkMidiCcValues::AkMidiCcDataEntryCoarse" },
		{ "AkMidiCcDataEntryFine.Name", "EAkMidiCcValues::AkMidiCcDataEntryFine" },
		{ "AkMidiCcEffectCtrl1Coarse.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse" },
		{ "AkMidiCcEffectCtrl1Fine.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl1Fine" },
		{ "AkMidiCcEffectCtrl2Coarse.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse" },
		{ "AkMidiCcEffectCtrl2Fine.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl2Fine" },
		{ "AkMidiCcExpressionCoarse.Name", "EAkMidiCcValues::AkMidiCcExpressionCoarse" },
		{ "AkMidiCcExpressionFine.Name", "EAkMidiCcValues::AkMidiCcExpressionFine" },
		{ "AkMidiCcFootPedalCoarse.Name", "EAkMidiCcValues::AkMidiCcFootPedalCoarse" },
		{ "AkMidiCcFootPedalFine.Name", "EAkMidiCcValues::AkMidiCcFootPedalFine" },
		{ "AkMidiCcGeneralButton1.Name", "EAkMidiCcValues::AkMidiCcGeneralButton1" },
		{ "AkMidiCcGeneralButton2.Name", "EAkMidiCcValues::AkMidiCcGeneralButton2" },
		{ "AkMidiCcGeneralButton3.Name", "EAkMidiCcValues::AkMidiCcGeneralButton3" },
		{ "AkMidiCcGeneralButton4.Name", "EAkMidiCcValues::AkMidiCcGeneralButton4" },
		{ "AkMidiCcGenSlider1.Name", "EAkMidiCcValues::AkMidiCcGenSlider1" },
		{ "AkMidiCcGenSlider2.Name", "EAkMidiCcValues::AkMidiCcGenSlider2" },
		{ "AkMidiCcGenSlider3.Name", "EAkMidiCcValues::AkMidiCcGenSlider3" },
		{ "AkMidiCcGenSlider4.Name", "EAkMidiCcValues::AkMidiCcGenSlider4" },
		{ "AkMidiCcHoldPedal.Name", "EAkMidiCcValues::AkMidiCcHoldPedal" },
		{ "AkMidiCcHoldPedal2.Name", "EAkMidiCcValues::AkMidiCcHoldPedal2" },
		{ "AkMidiCcLegatoPedal.Name", "EAkMidiCcValues::AkMidiCcLegatoPedal" },
		{ "AkMidiCcLocalKeyboard.Name", "EAkMidiCcValues::AkMidiCcLocalKeyboard" },
		{ "AkMidiCcModWheelCoarse.Name", "EAkMidiCcValues::AkMidiCcModWheelCoarse" },
		{ "AkMidiCcModWheelFine.Name", "EAkMidiCcValues::AkMidiCcModWheelFine" },
		{ "AkMidiCcNonRegisterCoarse.Name", "EAkMidiCcValues::AkMidiCcNonRegisterCoarse" },
		{ "AkMidiCcNonRegisterFine.Name", "EAkMidiCcValues::AkMidiCcNonRegisterFine" },
		{ "AkMidiCcOmniModeOff.Name", "EAkMidiCcValues::AkMidiCcOmniModeOff" },
		{ "AkMidiCcOmniModeOn.Name", "EAkMidiCcValues::AkMidiCcOmniModeOn" },
		{ "AkMidiCcOmniMonophonicOn.Name", "EAkMidiCcValues::AkMidiCcOmniMonophonicOn" },
		{ "AkMidiCcOmniPolyphonicOn.Name", "EAkMidiCcValues::AkMidiCcOmniPolyphonicOn" },
		{ "AkMidiCcPanPositionCoarse.Name", "EAkMidiCcValues::AkMidiCcPanPositionCoarse" },
		{ "AkMidiCcPanPositionFine.Name", "EAkMidiCcValues::AkMidiCcPanPositionFine" },
		{ "AkMidiCcPhaserLevel.Name", "EAkMidiCcValues::AkMidiCcPhaserLevel" },
		{ "AkMidiCcPortamentoCoarse.Name", "EAkMidiCcValues::AkMidiCcPortamentoCoarse" },
		{ "AkMidiCcPortamentoFine.Name", "EAkMidiCcValues::AkMidiCcPortamentoFine" },
		{ "AkMidiCcPortamentoOnOff.Name", "EAkMidiCcValues::AkMidiCcPortamentoOnOff" },
		{ "AkMidiCcReverbLevel.Name", "EAkMidiCcValues::AkMidiCcReverbLevel" },
		{ "AkMidiCcSoftPedal.Name", "EAkMidiCcValues::AkMidiCcSoftPedal" },
		{ "AkMidiCcSoundAttackTime.Name", "EAkMidiCcValues::AkMidiCcSoundAttackTime" },
		{ "AkMidiCcSoundBrightness.Name", "EAkMidiCcValues::AkMidiCcSoundBrightness" },
		{ "AkMidiCcSoundCtrl10.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl10" },
		{ "AkMidiCcSoundCtrl6.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl6" },
		{ "AkMidiCcSoundCtrl7.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl7" },
		{ "AkMidiCcSoundCtrl8.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl8" },
		{ "AkMidiCcSoundCtrl9.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl9" },
		{ "AkMidiCcSoundReleaseTime.Name", "EAkMidiCcValues::AkMidiCcSoundReleaseTime" },
		{ "AkMidiCcSoundTimbre.Name", "EAkMidiCcValues::AkMidiCcSoundTimbre" },
		{ "AkMidiCcSoundVariation.Name", "EAkMidiCcValues::AkMidiCcSoundVariation" },
		{ "AkMidiCcSustenutoPedal.Name", "EAkMidiCcValues::AkMidiCcSustenutoPedal" },
		{ "AkMidiCcTremoloLevel.Name", "EAkMidiCcValues::AkMidiCcTremoloLevel" },
		{ "AkMidiCcVolumeCoarse.Name", "EAkMidiCcValues::AkMidiCcVolumeCoarse" },
		{ "AkMidiCcVolumeFine.Name", "EAkMidiCcValues::AkMidiCcVolumeFine" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkMidiCcValues",
		"EAkMidiCcValues",
		Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues()
	{
		if (!Z_Registration_Info_UEnum_EAkMidiCcValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkMidiCcValues.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkMidiCcValues.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiEventBase;
class UScriptStruct* FAkMidiEventBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiEventBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiEventBase, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiEventBase"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiEventBase.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiEventBase>()
{
	return FAkMidiEventBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiEventBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chan_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Chan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiEventBase>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiEventBase, Type), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_MetaData)) }; // 3662362985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan = { "Chan", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiEventBase, Chan), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewProp_Chan,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkMidiEventBase",
		sizeof(FAkMidiEventBase),
		alignof(FAkMidiEventBase),
		Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiEventBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiEventBase.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiEventBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkMidiGeneric>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiGeneric cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiGeneric;
class UScriptStruct* FAkMidiGeneric::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiGeneric.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiGeneric.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiGeneric, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiGeneric"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiGeneric.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiGeneric>()
{
	return FAkMidiGeneric::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiGeneric_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Param1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Param2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiGeneric>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|Generic" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiGeneric, Param1), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|Generic" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiGeneric, Param2), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiGeneric",
		sizeof(FAkMidiGeneric),
		alignof(FAkMidiGeneric),
		Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiGeneric.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiGeneric.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiGeneric.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkMidiNoteOnOff>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiNoteOnOff cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff;
class UScriptStruct* FAkMidiNoteOnOff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteOnOff, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiNoteOnOff"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiNoteOnOff>()
{
	return FAkMidiNoteOnOff::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Note;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteOnOff>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteOnOff" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiNoteOnOff, Note), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteOnOff" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiNoteOnOff, Velocity), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiNoteOnOff",
		sizeof(FAkMidiNoteOnOff),
		alignof(FAkMidiNoteOnOff),
		Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkMidiCc>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiCc cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiCc;
class UScriptStruct* FAkMidiCc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiCc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiCc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiCc, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiCc"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiCc.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiCc>()
{
	return FAkMidiCc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiCc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Cc_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cc_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Cc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiCc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiCc>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|CC" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc = { "Cc", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiCc, Cc), Z_Construct_UEnum_AkAudio_EAkMidiCcValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_MetaData)) }; // 4061070257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|CC" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiCc, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiCc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiCc",
		sizeof(FAkMidiCc),
		alignof(FAkMidiCc),
		Z_Construct_UScriptStruct_FAkMidiCc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiCc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiCc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiCc.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiCc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiCc.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkMidiPitchBend>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiPitchBend cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiPitchBend;
class UScriptStruct* FAkMidiPitchBend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiPitchBend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiPitchBend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiPitchBend, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiPitchBend"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiPitchBend.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiPitchBend>()
{
	return FAkMidiPitchBend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLsb_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueLsb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueMsb_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueMsb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FullValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiPitchBend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|PitchBend" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb = { "ValueLsb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiPitchBend, ValueLsb), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|PitchBend" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb = { "ValueMsb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiPitchBend, ValueMsb), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|PitchBend" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue = { "FullValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiPitchBend, FullValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiPitchBend",
		sizeof(FAkMidiPitchBend),
		alignof(FAkMidiPitchBend),
		Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiPitchBend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiPitchBend.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiPitchBend.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkMidiNoteAftertouch>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiNoteAftertouch cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch;
class UScriptStruct* FAkMidiNoteAftertouch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiNoteAftertouch"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiNoteAftertouch>()
{
	return FAkMidiNoteAftertouch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Note;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteAftertouch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteAfterTouch" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiNoteAftertouch, Note), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteAfterTouch" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiNoteAftertouch, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiNoteAftertouch",
		sizeof(FAkMidiNoteAftertouch),
		alignof(FAkMidiNoteAftertouch),
		Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkMidiChannelAftertouch>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiChannelAftertouch cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch;
class UScriptStruct* FAkMidiChannelAftertouch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiChannelAftertouch"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiChannelAftertouch>()
{
	return FAkMidiChannelAftertouch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiChannelAftertouch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|ChannelAfterTouch" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiChannelAftertouch, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiChannelAftertouch",
		sizeof(FAkMidiChannelAftertouch),
		alignof(FAkMidiChannelAftertouch),
		Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkMidiProgramChange>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiProgramChange cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiProgramChange;
class UScriptStruct* FAkMidiProgramChange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiProgramChange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiProgramChange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiProgramChange, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiProgramChange"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiProgramChange.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiProgramChange>()
{
	return FAkMidiProgramChange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgramNum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProgramNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiProgramChange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|ProgramChange" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum = { "ProgramNum", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiProgramChange, ProgramNum), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewProp_ProgramNum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiProgramChange",
		sizeof(FAkMidiProgramChange),
		alignof(FAkMidiProgramChange),
		Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiProgramChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiProgramChange.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiProgramChange.InnerSingleton;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetProgramChange)
	{
		P_GET_STRUCT_REF(FAkMidiProgramChange,Z_Param_Out_AsProgramChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProgramChange(Z_Param_Out_AsProgramChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetChannelAftertouch)
	{
		P_GET_STRUCT_REF(FAkMidiChannelAftertouch,Z_Param_Out_AsChannelAftertouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetChannelAftertouch(Z_Param_Out_AsChannelAftertouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteAftertouch)
	{
		P_GET_STRUCT_REF(FAkMidiNoteAftertouch,Z_Param_Out_AsNoteAftertouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNoteAftertouch(Z_Param_Out_AsNoteAftertouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetPitchBend)
	{
		P_GET_STRUCT_REF(FAkMidiPitchBend,Z_Param_Out_AsPitchBend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPitchBend(Z_Param_Out_AsPitchBend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetCc)
	{
		P_GET_STRUCT_REF(FAkMidiCc,Z_Param_Out_AsCc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCc(Z_Param_Out_AsCc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteOff)
	{
		P_GET_STRUCT_REF(FAkMidiNoteOnOff,Z_Param_Out_AsNoteOff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNoteOff(Z_Param_Out_AsNoteOff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteOn)
	{
		P_GET_STRUCT_REF(FAkMidiNoteOnOff,Z_Param_Out_AsNoteOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNoteOn(Z_Param_Out_AsNoteOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetGeneric)
	{
		P_GET_STRUCT_REF(FAkMidiGeneric,Z_Param_Out_AsGeneric);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGeneric(Z_Param_Out_AsGeneric);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAkMidiEventType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	void UAkMIDIEventCallbackInfo::StaticRegisterNativesUAkMIDIEventCallbackInfo()
	{
		UClass* Class = UAkMIDIEventCallbackInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCc", &UAkMIDIEventCallbackInfo::execGetCc },
			{ "GetChannel", &UAkMIDIEventCallbackInfo::execGetChannel },
			{ "GetChannelAftertouch", &UAkMIDIEventCallbackInfo::execGetChannelAftertouch },
			{ "GetGeneric", &UAkMIDIEventCallbackInfo::execGetGeneric },
			{ "GetNoteAftertouch", &UAkMIDIEventCallbackInfo::execGetNoteAftertouch },
			{ "GetNoteOff", &UAkMIDIEventCallbackInfo::execGetNoteOff },
			{ "GetNoteOn", &UAkMIDIEventCallbackInfo::execGetNoteOn },
			{ "GetPitchBend", &UAkMIDIEventCallbackInfo::execGetPitchBend },
			{ "GetProgramChange", &UAkMIDIEventCallbackInfo::execGetProgramChange },
			{ "GetType", &UAkMIDIEventCallbackInfo::execGetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetCc_Parms
		{
			FAkMidiCc AsCc;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsCc;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_AsCc = { "AsCc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetCc_Parms, AsCc), Z_Construct_UScriptStruct_FAkMidiCc, METADATA_PARAMS(nullptr, 0) }; // 71274821
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetCc_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetCc_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_AsCc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetCc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::AkMIDIEventCallbackInfo_eventGetCc_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetChannel_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::AkMIDIEventCallbackInfo_eventGetChannel_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms
		{
			FAkMidiChannelAftertouch AsChannelAftertouch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsChannelAftertouch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_AsChannelAftertouch = { "AsChannelAftertouch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms, AsChannelAftertouch), Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, METADATA_PARAMS(nullptr, 0) }; // 3905685271
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_AsChannelAftertouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetChannelAftertouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetGeneric_Parms
		{
			FAkMidiGeneric AsGeneric;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsGeneric;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_AsGeneric = { "AsGeneric", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetGeneric_Parms, AsGeneric), Z_Construct_UScriptStruct_FAkMidiGeneric, METADATA_PARAMS(nullptr, 0) }; // 829332151
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetGeneric_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetGeneric_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_AsGeneric,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetGeneric", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::AkMIDIEventCallbackInfo_eventGetGeneric_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms
		{
			FAkMidiNoteAftertouch AsNoteAftertouch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsNoteAftertouch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_AsNoteAftertouch = { "AsNoteAftertouch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms, AsNoteAftertouch), Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, METADATA_PARAMS(nullptr, 0) }; // 1975610596
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_AsNoteAftertouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteAftertouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteOff_Parms
		{
			FAkMidiNoteOnOff AsNoteOff;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsNoteOff;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_AsNoteOff = { "AsNoteOff", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms, AsNoteOff), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(nullptr, 0) }; // 4278469855
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteOff_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_AsNoteOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteOff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::AkMIDIEventCallbackInfo_eventGetNoteOff_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteOn_Parms
		{
			FAkMidiNoteOnOff AsNoteOn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsNoteOn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_AsNoteOn = { "AsNoteOn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms, AsNoteOn), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(nullptr, 0) }; // 4278469855
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_AsNoteOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::AkMIDIEventCallbackInfo_eventGetNoteOn_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetPitchBend_Parms
		{
			FAkMidiPitchBend AsPitchBend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsPitchBend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_AsPitchBend = { "AsPitchBend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms, AsPitchBend), Z_Construct_UScriptStruct_FAkMidiPitchBend, METADATA_PARAMS(nullptr, 0) }; // 1089092294
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetPitchBend_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_AsPitchBend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetPitchBend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::AkMIDIEventCallbackInfo_eventGetPitchBend_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetProgramChange_Parms
		{
			FAkMidiProgramChange AsProgramChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsProgramChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_AsProgramChange = { "AsProgramChange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms, AsProgramChange), Z_Construct_UScriptStruct_FAkMidiProgramChange, METADATA_PARAMS(nullptr, 0) }; // 467403688
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetProgramChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_AsProgramChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetProgramChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::AkMIDIEventCallbackInfo_eventGetProgramChange_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetType_Parms
		{
			EAkMidiEventType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(nullptr, 0) }; // 3662362985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::AkMIDIEventCallbackInfo_eventGetType_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMIDIEventCallbackInfo);
	UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister()
	{
		return UAkMIDIEventCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc, "GetCc" }, // 1848982785
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel, "GetChannel" }, // 1018962726
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch, "GetChannelAftertouch" }, // 319826892
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric, "GetGeneric" }, // 419963099
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch, "GetNoteAftertouch" }, // 345827215
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff, "GetNoteOff" }, // 2437326321
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn, "GetNoteOn" }, // 4157719564
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend, "GetPitchBend" }, // 1506036650
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange, "GetProgramChange" }, // 2186849315
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType, "GetType" }, // 3549690338
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Callback information structure corresponding to \\ref AK_MidiEvent\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n" },
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Callback information structure corresponding to \\ref AK_MidiEvent\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMIDIEventCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::ClassParams = {
		&UAkMIDIEventCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMIDIEventCallbackInfo>()
	{
		return UAkMIDIEventCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMIDIEventCallbackInfo);
	UAkMIDIEventCallbackInfo::~UAkMIDIEventCallbackInfo() {}
	void UAkMarkerCallbackInfo::StaticRegisterNativesUAkMarkerCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMarkerCallbackInfo);
	UClass* Z_Construct_UClass_UAkMarkerCallbackInfo_NoRegister()
	{
		return UAkMarkerCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkMarkerCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Callback information structure corresponding to \\ref AK_Marker.\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n/// - \\ref soundengine_markers\n" },
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Callback information structure corresponding to \\ref AK_Marker.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events\n- \\ref soundengine_markers" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Marker" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMarkerCallbackInfo, Identifier), METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Marker" },
		{ "Comment", "///< Cue point identifier\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Cue point identifier" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMarkerCallbackInfo, Position), METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Marker" },
		{ "Comment", "///< Position in the cue point (unit: sample frames)\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Position in the cue point (unit: sample frames)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMarkerCallbackInfo, Label), METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::NewProp_Label,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMarkerCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::ClassParams = {
		&UAkMarkerCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMarkerCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkMarkerCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMarkerCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkMarkerCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMarkerCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMarkerCallbackInfo>()
	{
		return UAkMarkerCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMarkerCallbackInfo);
	UAkMarkerCallbackInfo::~UAkMarkerCallbackInfo() {}
	void UAkDurationCallbackInfo::StaticRegisterNativesUAkDurationCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkDurationCallbackInfo);
	UClass* Z_Construct_UClass_UAkDurationCallbackInfo_NoRegister()
	{
		return UAkDurationCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkDurationCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EstimatedDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodeID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioNodeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediaID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[];
#endif
		static void NewProp_bStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkDurationCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Callback information structure corresponding to \\ref AK_Duration.\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n" },
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Callback information structure corresponding to \\ref AK_Duration.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, Duration), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
		{ "Comment", "///< Duration of the sound (unit: milliseconds)\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Duration of the sound (unit: milliseconds)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration = { "EstimatedDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, EstimatedDuration), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
		{ "Comment", "///< Estimated duration of the sound depending on source settings such as pitch. (unit: milliseconds)\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Estimated duration of the sound depending on source settings such as pitch. (unit: milliseconds)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID = { "AudioNodeID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, AudioNodeID), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
		{ "Comment", "///< Audio Node ID of playing item\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Audio Node ID of playing item" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID = { "MediaID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkDurationCallbackInfo, MediaID), METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
		{ "Comment", "///< Media ID of playing item. (corresponds to 'ID' attribute of 'File' element in SoundBank metadata file)\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Media ID of playing item. (corresponds to 'ID' attribute of 'File' element in SoundBank metadata file)" },
	};
#endif
	void Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_SetBit(void* Obj)
	{
		((UAkDurationCallbackInfo*)Obj)->bStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming = { "bStreaming", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkDurationCallbackInfo), &Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkDurationCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_EstimatedDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_AudioNodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_MediaID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkDurationCallbackInfo_Statics::NewProp_bStreaming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkDurationCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDurationCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDurationCallbackInfo_Statics::ClassParams = {
		&UAkDurationCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkDurationCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDurationCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkDurationCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkDurationCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDurationCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkDurationCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkDurationCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkDurationCallbackInfo>()
	{
		return UAkDurationCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkDurationCallbackInfo);
	UAkDurationCallbackInfo::~UAkDurationCallbackInfo() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSegmentInfo;
class UScriptStruct* FAkSegmentInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSegmentInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSegmentInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSegmentInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSegmentInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkSegmentInfo.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSegmentInfo>()
{
	return FAkSegmentInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSegmentInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreEntryDuration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreEntryDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDuration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostExitDuration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PostExitDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingLookAheadTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingLookAheadTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeatDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Structure used to query info on active playing segments.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "Structure used to query info on active playing segments." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSegmentInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition = { "CurrentPosition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, CurrentPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "Comment", "///< Current position of the segment, relative to the Entry Cue, in milliseconds. Range is [-iPreEntryDuration, iActiveDuration+iPostExitDuration].\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Current position of the segment, relative to the Entry Cue, in milliseconds. Range is [-iPreEntryDuration, iActiveDuration+iPostExitDuration]." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration = { "PreEntryDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, PreEntryDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "Comment", "///< Duration of the pre-entry region of the segment, in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Duration of the pre-entry region of the segment, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration = { "ActiveDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, ActiveDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "Comment", "///< Duration of the active region of the segment (between the Entry and Exit Cues), in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Duration of the active region of the segment (between the Entry and Exit Cues), in milliseconds." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration = { "PostExitDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, PostExitDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "Comment", "///< Duration of the post-exit region of the segment, in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Duration of the post-exit region of the segment, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime = { "RemainingLookAheadTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, RemainingLookAheadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "Comment", "///< Number of milliseconds remaining in the \"looking-ahead\" state of the segment, when it is silent but streamed tracks are being prefetched.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Number of milliseconds remaining in the \"looking-ahead\" state of the segment, when it is silent but streamed tracks are being prefetched." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration = { "BeatDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, BeatDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "Comment", "///< Beat Duration in seconds.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Beat Duration in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration = { "BarDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, BarDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "Comment", "///< Bar Duration in seconds.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Bar Duration in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration = { "GridDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, GridDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "Comment", "///< Grid duration in seconds.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Grid duration in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSegmentInfo, GridOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_CurrentPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PreEntryDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_ActiveDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_PostExitDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_RemainingLookAheadTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BeatDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_BarDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewProp_GridOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSegmentInfo",
		sizeof(FAkSegmentInfo),
		alignof(FAkSegmentInfo),
		Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSegmentInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSegmentInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSegmentInfo.InnerSingleton;
	}
	void UAkMusicSyncCallbackInfo::StaticRegisterNativesUAkMusicSyncCallbackInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMusicSyncCallbackInfo);
	UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo_NoRegister()
	{
		return UAkMusicSyncCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MusicSyncType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicSyncType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MusicSyncType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserCueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserCueName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, PlayingID), METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
		{ "Comment", "///< Playing ID of Event, returned by PostEvent()\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Playing ID of Event, returned by PostEvent()" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo = { "SegmentInfo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, SegmentInfo), Z_Construct_UScriptStruct_FAkSegmentInfo, METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo_MetaData)) }; // 336932795
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
		{ "Comment", "///< Segment information corresponding to the segment triggering this callback.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Segment information corresponding to the segment triggering this callback." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType = { "MusicSyncType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, MusicSyncType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_MetaData)) }; // 2601920354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
		{ "Comment", "///< Would be either \\ref AK_MusicSyncEntry, \\ref AK_MusicSyncBeat, \\ref AK_MusicSyncBar, \\ref AK_MusicSyncExit, \\ref AK_MusicSyncGrid, \\ref AK_MusicSyncPoint or \\ref AK_MusicSyncUserCue.\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "< Would be either \\ref AK_MusicSyncEntry, \\ref AK_MusicSyncBeat, \\ref AK_MusicSyncBar, \\ref AK_MusicSyncExit, \\ref AK_MusicSyncGrid, \\ref AK_MusicSyncPoint or \\ref AK_MusicSyncUserCue." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName = { "UserCueName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, UserCueName), METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_SegmentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_MusicSyncType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::NewProp_UserCueName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMusicSyncCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::ClassParams = {
		&UAkMusicSyncCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMusicSyncCallbackInfo>()
	{
		return UAkMusicSyncCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMusicSyncCallbackInfo);
	UAkMusicSyncCallbackInfo::~UAkMusicSyncCallbackInfo() {}
	struct Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnAkPostEventCallback_Parms
		{
			EAkCallbackType CallbackType;
			UAkCallbackInfo* CallbackInfo;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CallbackType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CallbackInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType = { "CallbackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnAkPostEventCallback_Parms, CallbackType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(nullptr, 0) }; // 2601920354
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackInfo = { "CallbackInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnAkPostEventCallback_Parms, CallbackInfo), Z_Construct_UClass_UAkCallbackInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnAkPostEventCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::_Script_AkAudio_eventOnAkPostEventCallback_Parms), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAkPostEventCallback_DelegateWrapper(const FScriptDelegate& OnAkPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo)
{
	struct _Script_AkAudio_eventOnAkPostEventCallback_Parms
	{
		EAkCallbackType CallbackType;
		UAkCallbackInfo* CallbackInfo;
	};
	_Script_AkAudio_eventOnAkPostEventCallback_Parms Parms;
	Parms.CallbackType=CallbackType;
	Parms.CallbackInfo=CallbackInfo;
	OnAkPostEventCallback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnAkBankCallback_Parms
		{
			EAkResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnAkBankCallback_Parms, Result), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(nullptr, 0) }; // 512295267
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnAkBankCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::_Script_AkAudio_eventOnAkBankCallback_Parms), Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAkBankCallback_DelegateWrapper(const FScriptDelegate& OnAkBankCallback, EAkResult Result)
{
	struct _Script_AkAudio_eventOnAkBankCallback_Parms
	{
		EAkResult Result;
	};
	_Script_AkAudio_eventOnAkBankCallback_Parms Parms;
	Parms.Result=Result;
	OnAkBankCallback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms
		{
			bool Succeeded;
		};
		static void NewProp_Succeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::NewProp_Succeeded_SetBit(void* Obj)
	{
		((_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms*)Obj)->Succeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms), &Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::NewProp_Succeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::NewProp_Succeeded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnSetCurrentAudioCultureCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms), Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSetCurrentAudioCultureCallback_DelegateWrapper(const FScriptDelegate& OnSetCurrentAudioCultureCallback, bool Succeeded)
{
	struct _Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms
	{
		bool Succeeded;
	};
	_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms Parms;
	Parms.Succeeded=Succeeded ? true : false;
	OnSetCurrentAudioCultureCallback.ProcessDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkCodecId;
	static UEnum* AkCodecId_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkCodecId.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkCodecId.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkCodecId, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCodecId"));
		}
		return Z_Registration_Info_UEnum_AkCodecId.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkCodecId>()
	{
		return AkCodecId_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkCodecId_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enumerators[] = {
		{ "AkCodecId::None", (int64)AkCodecId::None },
		{ "AkCodecId::PCM", (int64)AkCodecId::PCM },
		{ "AkCodecId::ADPCM", (int64)AkCodecId::ADPCM },
		{ "AkCodecId::XMA", (int64)AkCodecId::XMA },
		{ "AkCodecId::Vorbis", (int64)AkCodecId::Vorbis },
		{ "AkCodecId::ATRAC9", (int64)AkCodecId::ATRAC9 },
		{ "AkCodecId::OpusNX", (int64)AkCodecId::OpusNX },
		{ "AkCodecId::AkOpus", (int64)AkCodecId::AkOpus },
		{ "AkCodecId::AkOpusWEM", (int64)AkCodecId::AkOpusWEM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enum_MetaDataParams[] = {
		{ "ADPCM.Comment", "///< ADPCM encoding\n" },
		{ "ADPCM.Name", "AkCodecId::ADPCM" },
		{ "ADPCM.ToolTip", "< ADPCM encoding" },
		{ "AkOpus.Comment", "///< Opus encoding\n" },
		{ "AkOpus.Name", "AkCodecId::AkOpus" },
		{ "AkOpus.ToolTip", "< Opus encoding" },
		{ "AkOpusWEM.Comment", "///< WEM Opus encoding\n" },
		{ "AkOpusWEM.Name", "AkCodecId::AkOpusWEM" },
		{ "AkOpusWEM.ToolTip", "< WEM Opus encoding" },
		{ "ATRAC9.Comment", "///< ATRAC-9 encoding\n" },
		{ "ATRAC9.Name", "AkCodecId::ATRAC9" },
		{ "ATRAC9.ToolTip", "< ATRAC-9 encoding" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*=============================================================================\n\nBegin - AkExternalSources enums and structures. Known limitations:\n\x09- It is not possible to set external sources from memory using Blueprint\n\x09- It is not possible to stream external sources from disk\n\n=============================================================================*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "None.Comment", "///< None: required default.\n" },
		{ "None.Name", "AkCodecId::None" },
		{ "None.ToolTip", "< None: required default." },
		{ "OpusNX.Comment", "///< OpusNX encoding\n" },
		{ "OpusNX.Name", "AkCodecId::OpusNX" },
		{ "OpusNX.ToolTip", "< OpusNX encoding" },
		{ "PCM.Comment", "///< PCM encoding\n" },
		{ "PCM.Name", "AkCodecId::PCM" },
		{ "PCM.ToolTip", "< PCM encoding" },
		{ "ToolTip", "Begin - AkExternalSources enums and structures. Known limitations:\n       - It is not possible to set external sources from memory using Blueprint\n       - It is not possible to stream external sources from disk" },
		{ "Vorbis.Comment", "///< Vorbis encoding\n" },
		{ "Vorbis.Name", "AkCodecId::Vorbis" },
		{ "Vorbis.ToolTip", "< Vorbis encoding" },
		{ "XMA.Comment", "///< XMA encoding\n" },
		{ "XMA.Name", "AkCodecId::XMA" },
		{ "XMA.ToolTip", "< XMA encoding" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkCodecId_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkCodecId",
		"AkCodecId",
		Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkCodecId()
	{
		if (!Z_Registration_Info_UEnum_AkCodecId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkCodecId.InnerSingleton, Z_Construct_UEnum_AkAudio_AkCodecId_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkCodecId.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkExternalSourceInfo;
class UScriptStruct* FAkExternalSourceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkExternalSourceInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkExternalSourceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkExternalSourceInfo>()
{
	return FAkExternalSourceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSrcName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSrcName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CodecID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CodecID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CodecID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalSourceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStreamed_MetaData[];
#endif
		static void NewProp_IsStreamed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStreamed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkExternalSourceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
		{ "Comment", "/// Name of the source given in the project. (The Cookie ID)\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "Name of the source given in the project. (The Cookie ID)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName = { "ExternalSrcName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkExternalSourceInfo, ExternalSrcName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
		{ "Comment", "/// Codec ID for the file. \n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "Codec ID for the file." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID = { "CodecID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkExternalSourceInfo, CodecID), Z_Construct_UEnum_AkAudio_AkCodecId, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_MetaData)) }; // 4045776873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
		{ "Comment", "/// File path for the source. (Relative to ExternalSources folder in your sound bank folder)\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "File path for the source. (Relative to ExternalSources folder in your sound bank folder)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkExternalSourceInfo, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
		{ "Comment", "/// Hard link to the media asset to use, it can be either streamed or not using IsStreamed\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "Hard link to the media asset to use, it can be either streamed or not using IsStreamed" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset = { "ExternalSourceAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkExternalSourceInfo, ExternalSourceAsset), Z_Construct_UClass_UAkExternalMediaAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
		{ "Comment", "/// Is the ExternalSourceAsset streamed or not\n" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ToolTip", "Is the ExternalSourceAsset streamed or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_SetBit(void* Obj)
	{
		((FAkExternalSourceInfo*)Obj)->IsStreamed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed = { "IsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkExternalSourceInfo), &Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkExternalSourceInfo",
		sizeof(FAkExternalSourceInfo),
		alignof(FAkExternalSourceInfo),
		Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkExternalSourceInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics::EnumInfo[] = {
		{ EAkAudioContext_StaticEnum, TEXT("EAkAudioContext"), &Z_Registration_Info_UEnum_EAkAudioContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3501986560U) },
		{ PanningRule_StaticEnum, TEXT("PanningRule"), &Z_Registration_Info_UEnum_PanningRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2538757133U) },
		{ AkAcousticPortalState_StaticEnum, TEXT("AkAcousticPortalState"), &Z_Registration_Info_UEnum_AkAcousticPortalState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1885284374U) },
		{ AkChannelConfiguration_StaticEnum, TEXT("AkChannelConfiguration"), &Z_Registration_Info_UEnum_AkChannelConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2631469996U) },
		{ AkSpeakerConfiguration_StaticEnum, TEXT("AkSpeakerConfiguration"), &Z_Registration_Info_UEnum_AkSpeakerConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3424799292U) },
		{ AkMultiPositionType_StaticEnum, TEXT("AkMultiPositionType"), &Z_Registration_Info_UEnum_AkMultiPositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2212346613U) },
		{ AkActionOnEventType_StaticEnum, TEXT("AkActionOnEventType"), &Z_Registration_Info_UEnum_AkActionOnEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3167120798U) },
		{ EAkCurveInterpolation_StaticEnum, TEXT("EAkCurveInterpolation"), &Z_Registration_Info_UEnum_EAkCurveInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2810145355U) },
		{ EAkResult_StaticEnum, TEXT("EAkResult"), &Z_Registration_Info_UEnum_EAkResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 512295267U) },
		{ EAkCallbackType_StaticEnum, TEXT("EAkCallbackType"), &Z_Registration_Info_UEnum_EAkCallbackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2601920354U) },
		{ ERTPCValueType_StaticEnum, TEXT("ERTPCValueType"), &Z_Registration_Info_UEnum_ERTPCValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4103813723U) },
		{ EAkMidiEventType_StaticEnum, TEXT("EAkMidiEventType"), &Z_Registration_Info_UEnum_EAkMidiEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3662362985U) },
		{ EAkMidiCcValues_StaticEnum, TEXT("EAkMidiCcValues"), &Z_Registration_Info_UEnum_EAkMidiCcValues, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4061070257U) },
		{ AkCodecId_StaticEnum, TEXT("AkCodecId"), &Z_Registration_Info_UEnum_AkCodecId, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4045776873U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics::ScriptStructInfo[] = {
		{ FAkChannelMask::StaticStruct, Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewStructOps, TEXT("AkChannelMask"), &Z_Registration_Info_UScriptStruct_AkChannelMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkChannelMask), 3168795762U) },
		{ FAkOutputSettings::StaticStruct, Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewStructOps, TEXT("AkOutputSettings"), &Z_Registration_Info_UScriptStruct_AkOutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkOutputSettings), 1150828959U) },
		{ FAkMidiEventBase::StaticStruct, Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewStructOps, TEXT("AkMidiEventBase"), &Z_Registration_Info_UScriptStruct_AkMidiEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiEventBase), 2746320258U) },
		{ FAkMidiGeneric::StaticStruct, Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewStructOps, TEXT("AkMidiGeneric"), &Z_Registration_Info_UScriptStruct_AkMidiGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiGeneric), 829332151U) },
		{ FAkMidiNoteOnOff::StaticStruct, Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewStructOps, TEXT("AkMidiNoteOnOff"), &Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiNoteOnOff), 4278469855U) },
		{ FAkMidiCc::StaticStruct, Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewStructOps, TEXT("AkMidiCc"), &Z_Registration_Info_UScriptStruct_AkMidiCc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiCc), 71274821U) },
		{ FAkMidiPitchBend::StaticStruct, Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewStructOps, TEXT("AkMidiPitchBend"), &Z_Registration_Info_UScriptStruct_AkMidiPitchBend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiPitchBend), 1089092294U) },
		{ FAkMidiNoteAftertouch::StaticStruct, Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewStructOps, TEXT("AkMidiNoteAftertouch"), &Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiNoteAftertouch), 1975610596U) },
		{ FAkMidiChannelAftertouch::StaticStruct, Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewStructOps, TEXT("AkMidiChannelAftertouch"), &Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiChannelAftertouch), 3905685271U) },
		{ FAkMidiProgramChange::StaticStruct, Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewStructOps, TEXT("AkMidiProgramChange"), &Z_Registration_Info_UScriptStruct_AkMidiProgramChange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiProgramChange), 467403688U) },
		{ FAkSegmentInfo::StaticStruct, Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewStructOps, TEXT("AkSegmentInfo"), &Z_Registration_Info_UScriptStruct_AkSegmentInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSegmentInfo), 336932795U) },
		{ FAkExternalSourceInfo::StaticStruct, Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewStructOps, TEXT("AkExternalSourceInfo"), &Z_Registration_Info_UScriptStruct_AkExternalSourceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkExternalSourceInfo), 2248278535U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkCallbackInfo, UAkCallbackInfo::StaticClass, TEXT("UAkCallbackInfo"), &Z_Registration_Info_UClass_UAkCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkCallbackInfo), 1262252310U) },
		{ Z_Construct_UClass_UAkEventCallbackInfo, UAkEventCallbackInfo::StaticClass, TEXT("UAkEventCallbackInfo"), &Z_Registration_Info_UClass_UAkEventCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEventCallbackInfo), 3595952089U) },
		{ Z_Construct_UClass_UAkMIDIEventCallbackInfo, UAkMIDIEventCallbackInfo::StaticClass, TEXT("UAkMIDIEventCallbackInfo"), &Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMIDIEventCallbackInfo), 3131476977U) },
		{ Z_Construct_UClass_UAkMarkerCallbackInfo, UAkMarkerCallbackInfo::StaticClass, TEXT("UAkMarkerCallbackInfo"), &Z_Registration_Info_UClass_UAkMarkerCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMarkerCallbackInfo), 68009189U) },
		{ Z_Construct_UClass_UAkDurationCallbackInfo, UAkDurationCallbackInfo::StaticClass, TEXT("UAkDurationCallbackInfo"), &Z_Registration_Info_UClass_UAkDurationCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDurationCallbackInfo), 2429937831U) },
		{ Z_Construct_UClass_UAkMusicSyncCallbackInfo, UAkMusicSyncCallbackInfo::StaticClass, TEXT("UAkMusicSyncCallbackInfo"), &Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMusicSyncCallbackInfo), 2773865740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_2734838070(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
