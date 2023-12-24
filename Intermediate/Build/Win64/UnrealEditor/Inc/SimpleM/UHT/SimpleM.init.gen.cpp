// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleM_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleM;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleM()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleM.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleM",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4743B799,
				0x6D27C390,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleM.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleM.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleM(Z_Construct_UPackage__Script_SimpleM, TEXT("/Script/SimpleM"), Z_Registration_Info_UPackage__Script_SimpleM, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4743B799, 0x6D27C390));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
