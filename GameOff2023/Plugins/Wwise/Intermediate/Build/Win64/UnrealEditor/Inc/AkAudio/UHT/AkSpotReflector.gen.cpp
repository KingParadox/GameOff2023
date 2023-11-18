// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSpotReflector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpotReflector() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void AAkSpotReflector::StaticRegisterNativesAAkSpotReflector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkSpotReflector);
	UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister()
	{
		return AAkSpotReflector::StaticClass();
	}
	struct Z_Construct_UClass_AAkSpotReflector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceScalingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceScalingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SameRoomOnly_MetaData[];
#endif
		static void NewProp_SameRoomOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SameRoomOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableRoomOverride_MetaData[];
#endif
		static void NewProp_EnableRoomOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRoomOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkSpotReflector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkSpotReflector.h" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBus_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "Comment", "/**\n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Leave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\n\x09*\x09Setting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nLeave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\nSetting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBus = { "EarlyReflectionAuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkSpotReflector, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBusName_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "Comment", "/**\n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Leave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\n\x09*\x09Setting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nLeave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\nSetting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBusName = { "EarlyReflectionAuxBusName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkSpotReflector, EarlyReflectionAuxBusName), METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "Comment", "/**\n\x09*\x09The Acoustic Texture represents sound absorption. It is done by filtering the sound bouncing off the spot reflector.\n\x09*\x09If left to None, no filtering will be applied to the sound.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ToolTip", "The Acoustic Texture represents sound absorption. It is done by filtering the sound bouncing off the spot reflector.\nIf left to None, no filtering will be applied to the sound." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkSpotReflector, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09*\x09This number scales the distance between the listener and the actual image source, preserving orientation.\n\x09*\x09Set to 1 to position the image source at the position of the spot reflector\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ToolTip", "This number scales the distance between the listener and the actual image source, preserving orientation.\nSet to 1 to position the image source at the position of the spot reflector" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor = { "DistanceScalingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkSpotReflector, DistanceScalingFactor), METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Game-controlled level for the sound that will emit from the image source. Valid range: (0.0, 4.0)*/" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ToolTip", "Game-controlled level for the sound that will emit from the image source. Valid range: (0.0, 4.0)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkSpotReflector, Level), METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "Comment", "/** Make this spot reflector only reflect emitted sounds in the same Spatial Audio Room.*/" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ToolTip", "Make this spot reflector only reflect emitted sounds in the same Spatial Audio Room." },
	};
#endif
	void Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly_SetBit(void* Obj)
	{
		((AAkSpotReflector*)Obj)->SameRoomOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly = { "SameRoomOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAkSpotReflector), &Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "Comment", "/** Override the room this spot reflector is contained in. If disabled, a containment check will be done to find the room.*/" },
		{ "EditCondition", "SameRoomOnly" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ToolTip", "Override the room this spot reflector is contained in. If disabled, a containment check will be done to find the room." },
	};
#endif
	void Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride_SetBit(void* Obj)
	{
		((AAkSpotReflector*)Obj)->EnableRoomOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride = { "EnableRoomOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAkSpotReflector), &Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_RoomOverride_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "Comment", "/** The room in which the spot reflector will be virtually placed in. If set to None, the default \"Outdoors\" room will be used.*/" },
		{ "EditCondition", "EnableRoomOverride" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ToolTip", "The room in which the spot reflector will be virtually placed in. If set to None, the default \"Outdoors\" room will be used." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_RoomOverride = { "RoomOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkSpotReflector, RoomOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_RoomOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_RoomOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EarlyReflectionAuxBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_AcousticTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_DistanceScalingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_SameRoomOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_EnableRoomOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpotReflector_Statics::NewProp_RoomOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkSpotReflector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkSpotReflector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkSpotReflector_Statics::ClassParams = {
		&AAkSpotReflector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkSpotReflector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpotReflector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkSpotReflector()
	{
		if (!Z_Registration_Info_UClass_AAkSpotReflector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkSpotReflector.OuterSingleton, Z_Construct_UClass_AAkSpotReflector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAkSpotReflector.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<AAkSpotReflector>()
	{
		return AAkSpotReflector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpotReflector);
	AAkSpotReflector::~AAkSpotReflector() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAkSpotReflector, AAkSpotReflector::StaticClass, TEXT("AAkSpotReflector"), &Z_Registration_Info_UClass_AAkSpotReflector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkSpotReflector), 503360708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h_1774635890(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
