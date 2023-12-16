// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Weapon/SMThrowWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMThrowWeapon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMBaseCharacter_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMBaseWeapon();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMProjectile_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMThrowWeapon();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMThrowWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	void ASMThrowWeapon::StaticRegisterNativesASMThrowWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMThrowWeapon);
	UClass* Z_Construct_UClass_ASMThrowWeapon_NoRegister()
	{
		return ASMThrowWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASMThrowWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMThrowWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASMBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMThrowWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/SMThrowWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/SMThrowWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_BaseCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/SMThrowWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_BaseCharacter = { "BaseCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMThrowWeapon, BaseCharacter), Z_Construct_UClass_ASMBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_BaseCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_BaseCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/SMThrowWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMThrowWeapon, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASMProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMThrowWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_BaseCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMThrowWeapon_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMThrowWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMThrowWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMThrowWeapon_Statics::ClassParams = {
		&ASMThrowWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASMThrowWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMThrowWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASMThrowWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMThrowWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMThrowWeapon()
	{
		if (!Z_Registration_Info_UClass_ASMThrowWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMThrowWeapon.OuterSingleton, Z_Construct_UClass_ASMThrowWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASMThrowWeapon.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<ASMThrowWeapon>()
	{
		return ASMThrowWeapon::StaticClass();
	}
	ASMThrowWeapon::ASMThrowWeapon() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMThrowWeapon);
	ASMThrowWeapon::~ASMThrowWeapon() {}
	struct Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMThrowWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMThrowWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMThrowWeapon, ASMThrowWeapon::StaticClass, TEXT("ASMThrowWeapon"), &Z_Registration_Info_UClass_ASMThrowWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMThrowWeapon), 981629585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMThrowWeapon_h_2152833628(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMThrowWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMThrowWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
