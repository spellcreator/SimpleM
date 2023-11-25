// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Weapon/SMProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMProjectile();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	void ASMProjectile::StaticRegisterNativesASMProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMProjectile);
	UClass* Z_Construct_UClass_ASMProjectile_NoRegister()
	{
		return ASMProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASMProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/SMProjectile.h" },
		{ "ModuleRelativePath", "Public/Weapon/SMProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMProjectile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/SMProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMProjectile_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMProjectile_Statics::NewProp_CollisionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMProjectile_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMProjectile_Statics::ClassParams = {
		&ASMProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASMProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASMProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMProjectile()
	{
		if (!Z_Registration_Info_UClass_ASMProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMProjectile.OuterSingleton, Z_Construct_UClass_ASMProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASMProjectile.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<ASMProjectile>()
	{
		return ASMProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMProjectile);
	ASMProjectile::~ASMProjectile() {}
	struct Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMProjectile, ASMProjectile::StaticClass, TEXT("ASMProjectile"), &Z_Registration_Info_UClass_ASMProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMProjectile), 3910812502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_4086439237(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
