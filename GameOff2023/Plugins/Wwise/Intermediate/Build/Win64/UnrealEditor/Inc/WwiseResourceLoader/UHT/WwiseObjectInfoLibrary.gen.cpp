// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Private/Wwise/Info/WwiseObjectInfoLibrary.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseObjectInfoLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary();
	WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary_NoRegister();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetHardCodedSoundBankShortId)
	{
		P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
		P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetHardCodedSoundBankShortId(Z_Param_Out_Ref,Z_Param_HardCodedSoundBankShortId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetWwiseName)
	{
		P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
		P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetWwiseShortId)
	{
		P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
		P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetWwiseGuid)
	{
		P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetWwiseGuid(Z_Param_Out_Ref,Z_Param_Out_WwiseGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetHardCodedSoundBankShortId)
	{
		P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWwiseObjectInfoLibrary::GetHardCodedSoundBankShortId(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetWwiseName)
	{
		P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWwiseObjectInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetWwiseShortId)
	{
		P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWwiseObjectInfoLibrary::GetWwiseShortId(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetWwiseGuid)
	{
		P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UWwiseObjectInfoLibrary::GetWwiseGuid(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execBreakStruct)
	{
		P_GET_STRUCT(FWwiseObjectInfo,Z_Param_Ref);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutWwiseGuid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHardCodedSoundBankShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWwiseObjectInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutWwiseGuid,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName,Z_Param_Out_OutHardCodedSoundBankShortId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execMakeStruct)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
		P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
		P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
		P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::MakeStruct(Z_Param_Out_WwiseGuid,Z_Param_WwiseShortId,Z_Param_WwiseName,Z_Param_HardCodedSoundBankShortId);
		P_NATIVE_END;
	}
	void UWwiseObjectInfoLibrary::StaticRegisterNativesUWwiseObjectInfoLibrary()
	{
		UClass* Class = UWwiseObjectInfoLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakStruct", &UWwiseObjectInfoLibrary::execBreakStruct },
			{ "GetHardCodedSoundBankShortId", &UWwiseObjectInfoLibrary::execGetHardCodedSoundBankShortId },
			{ "GetWwiseGuid", &UWwiseObjectInfoLibrary::execGetWwiseGuid },
			{ "GetWwiseName", &UWwiseObjectInfoLibrary::execGetWwiseName },
			{ "GetWwiseShortId", &UWwiseObjectInfoLibrary::execGetWwiseShortId },
			{ "MakeStruct", &UWwiseObjectInfoLibrary::execMakeStruct },
			{ "SetHardCodedSoundBankShortId", &UWwiseObjectInfoLibrary::execSetHardCodedSoundBankShortId },
			{ "SetWwiseGuid", &UWwiseObjectInfoLibrary::execSetWwiseGuid },
			{ "SetWwiseName", &UWwiseObjectInfoLibrary::execSetWwiseName },
			{ "SetWwiseShortId", &UWwiseObjectInfoLibrary::execSetWwiseShortId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics
	{
		struct WwiseObjectInfoLibrary_eventBreakStruct_Parms
		{
			FWwiseObjectInfo Ref;
			FGuid OutWwiseGuid;
			int32 OutWwiseShortId;
			FString OutWwiseName;
			int32 OutHardCodedSoundBankShortId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWwiseGuid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutHardCodedSoundBankShortId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_Ref_MetaData)) }; // 3645774004
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid = { "OutWwiseGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutWwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId = { "OutHardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutHardCodedSoundBankShortId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OutHardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|WwiseObjectInfo" },
		{ "DisplayName", "Break WwiseObjectInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "BreakStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::WwiseObjectInfoLibrary_eventBreakStruct_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics
	{
		struct WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms
		{
			FWwiseObjectInfo Ref;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData)) }; // 3645774004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Short Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetHardCodedSoundBankShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics
	{
		struct WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms
		{
			FWwiseObjectInfo Ref;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref_MetaData)) }; // 3645774004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "GUID" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetWwiseGuid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics
	{
		struct WwiseObjectInfoLibrary_eventGetWwiseName_Parms
		{
			FWwiseObjectInfo Ref;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_Ref_MetaData)) }; // 3645774004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetWwiseName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::WwiseObjectInfoLibrary_eventGetWwiseName_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics
	{
		struct WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms
		{
			FWwiseObjectInfo Ref;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref_MetaData)) }; // 3645774004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Short Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetWwiseShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics
	{
		struct WwiseObjectInfoLibrary_eventMakeStruct_Parms
		{
			FGuid WwiseGuid;
			int32 WwiseShortId;
			FString WwiseName;
			int32 HardCodedSoundBankShortId;
			FWwiseObjectInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue_MetaData)) }; // 3645774004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_WwiseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "HardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|WwiseObjectInfo" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "DisplayName", "Make WwiseObjectInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "MakeStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::WwiseObjectInfoLibrary_eventMakeStruct_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics
	{
		struct WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms
		{
			FWwiseObjectInfo Ref;
			int32 HardCodedSoundBankShortId;
			FWwiseObjectInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData)) }; // 3645774004
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData)) }; // 3645774004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetHardCodedSoundBankShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics
	{
		struct WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms
		{
			FWwiseObjectInfo Ref;
			FGuid WwiseGuid;
			FWwiseObjectInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref_MetaData)) }; // 3645774004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue_MetaData)) }; // 3645774004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetWwiseGuid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics
	{
		struct WwiseObjectInfoLibrary_eventSetWwiseName_Parms
		{
			FWwiseObjectInfo Ref;
			FString WwiseName;
			FWwiseObjectInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_Ref_MetaData)) }; // 3645774004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue_MetaData)) }; // 3645774004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetWwiseName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::WwiseObjectInfoLibrary_eventSetWwiseName_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics
	{
		struct WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms
		{
			FWwiseObjectInfo Ref;
			int32 WwiseShortId;
			FWwiseObjectInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref_MetaData)) }; // 3645774004
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue_MetaData)) }; // 3645774004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetWwiseShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms), Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseObjectInfoLibrary);
	UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary_NoRegister()
	{
		return UWwiseObjectInfoLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct, "BreakStruct" }, // 3397769145
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId, "GetHardCodedSoundBankShortId" }, // 1515052388
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid, "GetWwiseGuid" }, // 3211278068
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName, "GetWwiseName" }, // 2297524032
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId, "GetWwiseShortId" }, // 31589339
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct, "MakeStruct" }, // 1383640647
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId, "SetHardCodedSoundBankShortId" }, // 2612288190
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid, "SetWwiseGuid" }, // 1150600786
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName, "SetWwiseName" }, // 2139456516
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // 1031647045
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/Info/WwiseObjectInfoLibrary.h" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseObjectInfoLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::ClassParams = {
		&UWwiseObjectInfoLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary()
	{
		if (!Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.OuterSingleton, Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.OuterSingleton;
	}
	template<> WWISERESOURCELOADER_API UClass* StaticClass<UWwiseObjectInfoLibrary>()
	{
		return UWwiseObjectInfoLibrary::StaticClass();
	}
	UWwiseObjectInfoLibrary::UWwiseObjectInfoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseObjectInfoLibrary);
	UWwiseObjectInfoLibrary::~UWwiseObjectInfoLibrary() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseObjectInfoLibrary, UWwiseObjectInfoLibrary::StaticClass, TEXT("UWwiseObjectInfoLibrary"), &Z_Registration_Info_UClass_UWwiseObjectInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseObjectInfoLibrary), 3896810567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h_1137550004(TEXT("/Script/WwiseResourceLoader"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
