// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwise_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Wwise;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Wwise()
	{
		if (!Z_Registration_Info_UPackage__Script_Wwise.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Wwise",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x30B8D51A,
				0x45653238,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Wwise.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Wwise.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Wwise(Z_Construct_UPackage__Script_Wwise, TEXT("/Script/Wwise"), Z_Registration_Info_UPackage__Script_Wwise, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x30B8D51A, 0x45653238));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
