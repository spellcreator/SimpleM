// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../DamageType/FireDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireDamageType() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	SIMPLEM_API UClass* Z_Construct_UClass_UFireDamageType();
	SIMPLEM_API UClass* Z_Construct_UClass_UFireDamageType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	void UFireDamageType::StaticRegisterNativesUFireDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireDamageType);
	UClass* Z_Construct_UClass_UFireDamageType_NoRegister()
	{
		return UFireDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UFireDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DamageType/FireDamageType.h" },
		{ "ModuleRelativePath", "Public/DamageType/FireDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireDamageType_Statics::ClassParams = {
		&UFireDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireDamageType()
	{
		if (!Z_Registration_Info_UClass_UFireDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireDamageType.OuterSingleton, Z_Construct_UClass_UFireDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFireDamageType.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<UFireDamageType>()
	{
		return UFireDamageType::StaticClass();
	}
	UFireDamageType::UFireDamageType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireDamageType);
	UFireDamageType::~UFireDamageType() {}
	struct Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_DamageType_FireDamageType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_DamageType_FireDamageType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFireDamageType, UFireDamageType::StaticClass, TEXT("UFireDamageType"), &Z_Registration_Info_UClass_UFireDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireDamageType), 2102057513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_DamageType_FireDamageType_h_1362025932(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_DamageType_FireDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_DamageType_FireDamageType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
