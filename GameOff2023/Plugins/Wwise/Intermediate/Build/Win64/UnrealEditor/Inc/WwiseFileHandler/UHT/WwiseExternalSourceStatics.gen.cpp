// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/Wwise/WwiseExternalSourceStatics.h"
#include "../../WwiseSoundEngine/Public/AkUnrealHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceStatics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
	WWISEFILEHANDLER_API UClass* Z_Construct_UClass_UWwiseExternalSourceStatics();
	WWISEFILEHANDLER_API UClass* Z_Construct_UClass_UWwiseExternalSourceStatics_NoRegister();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID();
// End Cross Module References
	DEFINE_FUNCTION(UWwiseExternalSourceStatics::execSetExternalSourceMediaWithIds)
	{
		P_GET_STRUCT(FAkUniqueID,Z_Param_ExternalSourceCookie);
		P_GET_PROPERTY(FIntProperty,Z_Param_MediaId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWwiseExternalSourceStatics::SetExternalSourceMediaWithIds(Z_Param_ExternalSourceCookie,Z_Param_MediaId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseExternalSourceStatics::execSetExternalSourceMediaByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalSourceName);
		P_GET_PROPERTY(FStrProperty,Z_Param_MediaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWwiseExternalSourceStatics::SetExternalSourceMediaByName(Z_Param_ExternalSourceName,Z_Param_MediaName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseExternalSourceStatics::execSetExternalSourceMediaById)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalSourceName);
		P_GET_PROPERTY(FIntProperty,Z_Param_MediaId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWwiseExternalSourceStatics::SetExternalSourceMediaById(Z_Param_ExternalSourceName,Z_Param_MediaId);
		P_NATIVE_END;
	}
	void UWwiseExternalSourceStatics::StaticRegisterNativesUWwiseExternalSourceStatics()
	{
		UClass* Class = UWwiseExternalSourceStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetExternalSourceMediaById", &UWwiseExternalSourceStatics::execSetExternalSourceMediaById },
			{ "SetExternalSourceMediaByName", &UWwiseExternalSourceStatics::execSetExternalSourceMediaByName },
			{ "SetExternalSourceMediaWithIds", &UWwiseExternalSourceStatics::execSetExternalSourceMediaWithIds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics
	{
		struct WwiseExternalSourceStatics_eventSetExternalSourceMediaById_Parms
		{
			FString ExternalSourceName;
			int32 MediaId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediaId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_ExternalSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_ExternalSourceName = { "ExternalSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaById_Parms, ExternalSourceName), METADATA_PARAMS(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_ExternalSourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_ExternalSourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_MediaId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaById_Parms, MediaId), METADATA_PARAMS(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_MediaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_MediaId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_ExternalSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::NewProp_MediaId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::Function_MetaDataParams[] = {
		{ "Category", "WwiseExternalSources" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseExternalSourceStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseExternalSourceStatics, nullptr, "SetExternalSourceMediaById", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::WwiseExternalSourceStatics_eventSetExternalSourceMediaById_Parms), Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics
	{
		struct WwiseExternalSourceStatics_eventSetExternalSourceMediaByName_Parms
		{
			FString ExternalSourceName;
			FString MediaName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_ExternalSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_ExternalSourceName = { "ExternalSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaByName_Parms, ExternalSourceName), METADATA_PARAMS(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_ExternalSourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_ExternalSourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_MediaName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaByName_Parms, MediaName), METADATA_PARAMS(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_MediaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_MediaName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_ExternalSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::NewProp_MediaName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "WwiseExternalSources" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseExternalSourceStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseExternalSourceStatics, nullptr, "SetExternalSourceMediaByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::WwiseExternalSourceStatics_eventSetExternalSourceMediaByName_Parms), Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics
	{
		struct WwiseExternalSourceStatics_eventSetExternalSourceMediaWithIds_Parms
		{
			FAkUniqueID ExternalSourceCookie;
			int32 MediaId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceCookie_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceCookie;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediaId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_ExternalSourceCookie_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_ExternalSourceCookie = { "ExternalSourceCookie", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaWithIds_Parms, ExternalSourceCookie), Z_Construct_UScriptStruct_FAkUniqueID, METADATA_PARAMS(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_ExternalSourceCookie_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_ExternalSourceCookie_MetaData)) }; // 2187982974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_MediaId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaWithIds_Parms, MediaId), METADATA_PARAMS(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_MediaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_MediaId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_ExternalSourceCookie,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::NewProp_MediaId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "WwiseExternalSources" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseExternalSourceStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseExternalSourceStatics, nullptr, "SetExternalSourceMediaWithIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::WwiseExternalSourceStatics_eventSetExternalSourceMediaWithIds_Parms), Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseExternalSourceStatics);
	UClass* Z_Construct_UClass_UWwiseExternalSourceStatics_NoRegister()
	{
		return UWwiseExternalSourceStatics::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseExternalSourceStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseExternalSourceStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseFileHandler,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWwiseExternalSourceStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById, "SetExternalSourceMediaById" }, // 1951451370
		{ &Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName, "SetExternalSourceMediaByName" }, // 3439283993
		{ &Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds, "SetExternalSourceMediaWithIds" }, // 3976259859
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseExternalSourceStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/WwiseExternalSourceStatics.h" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseExternalSourceStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseExternalSourceStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseExternalSourceStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseExternalSourceStatics_Statics::ClassParams = {
		&UWwiseExternalSourceStatics::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWwiseExternalSourceStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseExternalSourceStatics()
	{
		if (!Z_Registration_Info_UClass_UWwiseExternalSourceStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseExternalSourceStatics.OuterSingleton, Z_Construct_UClass_UWwiseExternalSourceStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseExternalSourceStatics.OuterSingleton;
	}
	template<> WWISEFILEHANDLER_API UClass* StaticClass<UWwiseExternalSourceStatics>()
	{
		return UWwiseExternalSourceStatics::StaticClass();
	}
	UWwiseExternalSourceStatics::UWwiseExternalSourceStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseExternalSourceStatics);
	UWwiseExternalSourceStatics::~UWwiseExternalSourceStatics() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseExternalSourceStatics, UWwiseExternalSourceStatics::StaticClass, TEXT("UWwiseExternalSourceStatics"), &Z_Registration_Info_UClass_UWwiseExternalSourceStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseExternalSourceStatics), 1220689112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_3287000924(TEXT("/Script/WwiseFileHandler"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
