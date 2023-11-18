// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseProjectDatabase/Public/Wwise/WwiseDatabaseIdentifiers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseDatabaseIdentifiers() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_WwiseProjectDatabase();
	WWISEPROJECTDATABASE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey();
	WWISEPROJECTDATABASE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey();
	WWISEPROJECTDATABASE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey();
	WWISEPROJECTDATABASE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey();
	WWISEPROJECTDATABASE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey();
	WWISEPROJECTDATABASE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDatabaseMediaIdKey;
class UScriptStruct* FWwiseDatabaseMediaIdKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseMediaIdKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDatabaseMediaIdKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey, (UObject*)Z_Construct_UPackage__Script_WwiseProjectDatabase(), TEXT("WwiseDatabaseMediaIdKey"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDatabaseMediaIdKey.OuterSingleton;
}
template<> WWISEPROJECTDATABASE_API UScriptStruct* StaticStruct<FWwiseDatabaseMediaIdKey>()
{
	return FWwiseDatabaseMediaIdKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MediaId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SoundBankId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDatabaseMediaIdKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_MediaId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseMediaIdKey, MediaId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_MediaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_MediaId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_SoundBankId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseMediaIdKey, SoundBankId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_SoundBankId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_SoundBankId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_MediaId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewProp_SoundBankId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseProjectDatabase,
		nullptr,
		&NewStructOps,
		"WwiseDatabaseMediaIdKey",
		sizeof(FWwiseDatabaseMediaIdKey),
		alignof(FWwiseDatabaseMediaIdKey),
		Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseMediaIdKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDatabaseMediaIdKey.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseDatabaseMediaIdKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableIdKey;
class UScriptStruct* FWwiseDatabaseLocalizableIdKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableIdKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableIdKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey, (UObject*)Z_Construct_UPackage__Script_WwiseProjectDatabase(), TEXT("WwiseDatabaseLocalizableIdKey"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableIdKey.OuterSingleton;
}
template<> WWISEPROJECTDATABASE_API UScriptStruct* StaticStruct<FWwiseDatabaseLocalizableIdKey>()
{
	return FWwiseDatabaseLocalizableIdKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LanguageId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SoundBankId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDatabaseLocalizableIdKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseLocalizableIdKey, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_LanguageId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseLocalizableIdKey, LanguageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_LanguageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_LanguageId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_SoundBankId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseLocalizableIdKey, SoundBankId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_SoundBankId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_SoundBankId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_LanguageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewProp_SoundBankId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseProjectDatabase,
		nullptr,
		&NewStructOps,
		"WwiseDatabaseLocalizableIdKey",
		sizeof(FWwiseDatabaseLocalizableIdKey),
		alignof(FWwiseDatabaseLocalizableIdKey),
		Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableIdKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableIdKey.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableIdKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDatabaseGroupValueKey;
class UScriptStruct* FWwiseDatabaseGroupValueKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseGroupValueKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDatabaseGroupValueKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey, (UObject*)Z_Construct_UPackage__Script_WwiseProjectDatabase(), TEXT("WwiseDatabaseGroupValueKey"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDatabaseGroupValueKey.OuterSingleton;
}
template<> WWISEPROJECTDATABASE_API UScriptStruct* StaticStruct<FWwiseDatabaseGroupValueKey>()
{
	return FWwiseDatabaseGroupValueKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDatabaseGroupValueKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_GroupId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseGroupValueKey, GroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseGroupValueKey, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_GroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseProjectDatabase,
		nullptr,
		&NewStructOps,
		"WwiseDatabaseGroupValueKey",
		sizeof(FWwiseDatabaseGroupValueKey),
		alignof(FWwiseDatabaseGroupValueKey),
		Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseGroupValueKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDatabaseGroupValueKey.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseDatabaseGroupValueKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGroupValueKey;
class UScriptStruct* FWwiseDatabaseLocalizableGroupValueKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGroupValueKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGroupValueKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey, (UObject*)Z_Construct_UPackage__Script_WwiseProjectDatabase(), TEXT("WwiseDatabaseLocalizableGroupValueKey"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGroupValueKey.OuterSingleton;
}
template<> WWISEPROJECTDATABASE_API UScriptStruct* StaticStruct<FWwiseDatabaseLocalizableGroupValueKey>()
{
	return FWwiseDatabaseLocalizableGroupValueKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LanguageId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDatabaseLocalizableGroupValueKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_GroupValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_GroupValue = { "GroupValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseLocalizableGroupValueKey, GroupValue), Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_GroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_GroupValue_MetaData)) }; // 3751402430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_LanguageId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseLocalizableGroupValueKey, LanguageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_LanguageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_LanguageId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_GroupValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewProp_LanguageId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseProjectDatabase,
		nullptr,
		&NewStructOps,
		"WwiseDatabaseLocalizableGroupValueKey",
		sizeof(FWwiseDatabaseLocalizableGroupValueKey),
		alignof(FWwiseDatabaseLocalizableGroupValueKey),
		Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGroupValueKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGroupValueKey.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGroupValueKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGuidKey;
class UScriptStruct* FWwiseDatabaseLocalizableGuidKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGuidKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGuidKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey, (UObject*)Z_Construct_UPackage__Script_WwiseProjectDatabase(), TEXT("WwiseDatabaseLocalizableGuidKey"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGuidKey.OuterSingleton;
}
template<> WWISEPROJECTDATABASE_API UScriptStruct* StaticStruct<FWwiseDatabaseLocalizableGuidKey>()
{
	return FWwiseDatabaseLocalizableGuidKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LanguageId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDatabaseLocalizableGuidKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseLocalizableGuidKey, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_LanguageId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseLocalizableGuidKey, LanguageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_LanguageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_LanguageId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewProp_LanguageId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseProjectDatabase,
		nullptr,
		&NewStructOps,
		"WwiseDatabaseLocalizableGuidKey",
		sizeof(FWwiseDatabaseLocalizableGuidKey),
		alignof(FWwiseDatabaseLocalizableGuidKey),
		Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGuidKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGuidKey.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGuidKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableNameKey;
class UScriptStruct* FWwiseDatabaseLocalizableNameKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableNameKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableNameKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey, (UObject*)Z_Construct_UPackage__Script_WwiseProjectDatabase(), TEXT("WwiseDatabaseLocalizableNameKey"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableNameKey.OuterSingleton;
}
template<> WWISEPROJECTDATABASE_API UScriptStruct* StaticStruct<FWwiseDatabaseLocalizableNameKey>()
{
	return FWwiseDatabaseLocalizableNameKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LanguageId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDatabaseLocalizableNameKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseLocalizableNameKey, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_LanguageId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/WwiseDatabaseIdentifiers.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWwiseDatabaseLocalizableNameKey, LanguageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_LanguageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_LanguageId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewProp_LanguageId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseProjectDatabase,
		nullptr,
		&NewStructOps,
		"WwiseDatabaseLocalizableNameKey",
		sizeof(FWwiseDatabaseLocalizableNameKey),
		alignof(FWwiseDatabaseLocalizableNameKey),
		Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableNameKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableNameKey.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableNameKey.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_WwiseDatabaseIdentifiers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_WwiseDatabaseIdentifiers_h_Statics::ScriptStructInfo[] = {
		{ FWwiseDatabaseMediaIdKey::StaticStruct, Z_Construct_UScriptStruct_FWwiseDatabaseMediaIdKey_Statics::NewStructOps, TEXT("WwiseDatabaseMediaIdKey"), &Z_Registration_Info_UScriptStruct_WwiseDatabaseMediaIdKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDatabaseMediaIdKey), 3401766132U) },
		{ FWwiseDatabaseLocalizableIdKey::StaticStruct, Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableIdKey_Statics::NewStructOps, TEXT("WwiseDatabaseLocalizableIdKey"), &Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableIdKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDatabaseLocalizableIdKey), 3247112796U) },
		{ FWwiseDatabaseGroupValueKey::StaticStruct, Z_Construct_UScriptStruct_FWwiseDatabaseGroupValueKey_Statics::NewStructOps, TEXT("WwiseDatabaseGroupValueKey"), &Z_Registration_Info_UScriptStruct_WwiseDatabaseGroupValueKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDatabaseGroupValueKey), 3751402430U) },
		{ FWwiseDatabaseLocalizableGroupValueKey::StaticStruct, Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGroupValueKey_Statics::NewStructOps, TEXT("WwiseDatabaseLocalizableGroupValueKey"), &Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGroupValueKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDatabaseLocalizableGroupValueKey), 3927985000U) },
		{ FWwiseDatabaseLocalizableGuidKey::StaticStruct, Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableGuidKey_Statics::NewStructOps, TEXT("WwiseDatabaseLocalizableGuidKey"), &Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableGuidKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDatabaseLocalizableGuidKey), 628647312U) },
		{ FWwiseDatabaseLocalizableNameKey::StaticStruct, Z_Construct_UScriptStruct_FWwiseDatabaseLocalizableNameKey_Statics::NewStructOps, TEXT("WwiseDatabaseLocalizableNameKey"), &Z_Registration_Info_UScriptStruct_WwiseDatabaseLocalizableNameKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDatabaseLocalizableNameKey), 2500346438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_WwiseDatabaseIdentifiers_h_1922491058(TEXT("/Script/WwiseProjectDatabase"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_WwiseDatabaseIdentifiers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_WwiseDatabaseIdentifiers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
