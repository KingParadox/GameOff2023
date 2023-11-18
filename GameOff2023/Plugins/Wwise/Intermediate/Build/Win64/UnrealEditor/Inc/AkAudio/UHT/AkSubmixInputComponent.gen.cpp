// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSubmixInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSubmixInputComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSubmixInputComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSubmixInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkSubmixInputComponent::StaticRegisterNativesUAkSubmixInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSubmixInputComponent);
	UClass* Z_Construct_UClass_UAkSubmixInputComponent_NoRegister()
	{
		return UAkSubmixInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkSubmixInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSubmixInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSubmixInputComponent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkSubmixInputComponent\n------------------------------------------------------------------------------------*/" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkSubmixInputComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAkSubmixInputComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "Category", "SubmixInput" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSubmixInputComponent, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSubmixInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSubmixInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSubmixInputComponent_Statics::ClassParams = {
		&UAkSubmixInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSubmixInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSubmixInputComponent()
	{
		if (!Z_Registration_Info_UClass_UAkSubmixInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSubmixInputComponent.OuterSingleton, Z_Construct_UClass_UAkSubmixInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkSubmixInputComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkSubmixInputComponent>()
	{
		return UAkSubmixInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSubmixInputComponent);
	UAkSubmixInputComponent::~UAkSubmixInputComponent() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkSubmixInputComponent, UAkSubmixInputComponent::StaticClass, TEXT("UAkSubmixInputComponent"), &Z_Registration_Info_UClass_UAkSubmixInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSubmixInputComponent), 391181692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_669227701(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
