// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAmbientSound() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(AAkAmbientSound::execStopAmbientSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAmbientSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAkAmbientSound::execStartAmbientSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAmbientSound();
		P_NATIVE_END;
	}
	void AAkAmbientSound::StaticRegisterNativesAAkAmbientSound()
	{
		UClass* Class = AAkAmbientSound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartAmbientSound", &AAkAmbientSound::execStartAmbientSound },
			{ "StopAmbientSound", &AAkAmbientSound::execStopAmbientSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
		{ "Comment", "/*\n\x09 * Start an Ak ambient sound.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "* Start an Ak ambient sound." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, nullptr, "StartAmbientSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
		{ "Comment", "/*\n\x09 * Stop an Ak ambient sound.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "* Stop an Ak ambient sound." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, nullptr, "StopAmbientSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkAmbientSound);
	UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister()
	{
		return AAkAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_AAkAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerIsDestroyed_MetaData[];
#endif
		static void NewProp_StopWhenOwnerIsDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerIsDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoPost_MetaData[];
#endif
		static void NewProp_AutoPost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAkAmbientSound_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound, "StartAmbientSound" }, // 1796473980
		{ &Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound, "StopAmbientSound" }, // 3199168250
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkAmbientSound" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkAmbientSound\n------------------------------------------------------------------------------------*/" },
		{ "HideCategories", "Audio" },
		{ "IncludePath", "AkAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AAkAmbientSound" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "Comment", "/** AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkAmbientSound, AkAudioEvent_DEPRECATED), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent_MetaData[] = {
		{ "Category", "AkAmbientSound" },
		{ "Comment", "/** AkComponent to handle playback */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "AkComponent to handle playback" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkAmbientSound, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_MetaData[] = {
		{ "Category", "AkAmbientSound" },
		{ "Comment", "/** Stop playback if the owner is destroyed */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "Stop playback if the owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_SetBit(void* Obj)
	{
		((AAkAmbientSound*)Obj)->StopWhenOwnerIsDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed = { "StopWhenOwnerIsDestroyed", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAkAmbientSound), &Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_MetaData[] = {
		{ "Category", "AkAmbientSound" },
		{ "Comment", "/** Automatically post the associated AkAudioEvent on BeginPlay */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "Automatically post the associated AkAudioEvent on BeginPlay" },
	};
#endif
	void Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_SetBit(void* Obj)
	{
		((AAkAmbientSound*)Obj)->AutoPost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAkAmbientSound), &Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkAmbientSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkAmbientSound_Statics::ClassParams = {
		&AAkAmbientSound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkAmbientSound()
	{
		if (!Z_Registration_Info_UClass_AAkAmbientSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkAmbientSound.OuterSingleton, Z_Construct_UClass_AAkAmbientSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAkAmbientSound.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<AAkAmbientSound>()
	{
		return AAkAmbientSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAmbientSound);
	AAkAmbientSound::~AAkAmbientSound() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAkAmbientSound, AAkAmbientSound::StaticClass, TEXT("AAkAmbientSound"), &Z_Registration_Info_UClass_AAkAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkAmbientSound), 2212177728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_4058036524(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
