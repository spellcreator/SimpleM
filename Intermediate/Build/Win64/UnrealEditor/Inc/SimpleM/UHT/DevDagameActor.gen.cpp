// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Dev/DevDagameActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevDagameActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_ADevDagameActor();
	SIMPLEM_API UClass* Z_Construct_UClass_ADevDagameActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	void ADevDagameActor::StaticRegisterNativesADevDagameActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADevDagameActor);
	UClass* Z_Construct_UClass_ADevDagameActor_NoRegister()
	{
		return ADevDagameActor::StaticClass();
	}
	struct Z_Construct_UClass_ADevDagameActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoFullDamage_MetaData[];
#endif
		static void NewProp_DoFullDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoFullDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADevDagameActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevDagameActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dev/DevDagameActor.h" },
		{ "ModuleRelativePath", "Public/Dev/DevDagameActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "DevDagameActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dev/DevDagameActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADevDagameActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "DevDagameActor" },
		{ "ModuleRelativePath", "Public/Dev/DevDagameActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADevDagameActor, Radius), METADATA_PARAMS(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "DevDagameActor" },
		{ "ModuleRelativePath", "Public/Dev/DevDagameActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADevDagameActor, Damage), METADATA_PARAMS(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DoFullDamage_MetaData[] = {
		{ "Category", "DevDagameActor" },
		{ "ModuleRelativePath", "Public/Dev/DevDagameActor.h" },
	};
#endif
	void Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DoFullDamage_SetBit(void* Obj)
	{
		((ADevDagameActor*)Obj)->DoFullDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DoFullDamage = { "DoFullDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADevDagameActor), &Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DoFullDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DoFullDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DoFullDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SphereColor_MetaData[] = {
		{ "Category", "DevDagameActor" },
		{ "ModuleRelativePath", "Public/Dev/DevDagameActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SphereColor = { "SphereColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADevDagameActor, SphereColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SphereColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SphereColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "DevDagameActor" },
		{ "ModuleRelativePath", "Public/Dev/DevDagameActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADevDagameActor, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADevDagameActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevDagameActor_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DoFullDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevDagameActor_Statics::NewProp_SphereColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevDagameActor_Statics::NewProp_DamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADevDagameActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADevDagameActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADevDagameActor_Statics::ClassParams = {
		&ADevDagameActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADevDagameActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADevDagameActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADevDagameActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADevDagameActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADevDagameActor()
	{
		if (!Z_Registration_Info_UClass_ADevDagameActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADevDagameActor.OuterSingleton, Z_Construct_UClass_ADevDagameActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADevDagameActor.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<ADevDagameActor>()
	{
		return ADevDagameActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADevDagameActor);
	ADevDagameActor::~ADevDagameActor() {}
	struct Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Dev_DevDagameActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Dev_DevDagameActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADevDagameActor, ADevDagameActor::StaticClass, TEXT("ADevDagameActor"), &Z_Registration_Info_UClass_ADevDagameActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADevDagameActor), 825908515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Dev_DevDagameActor_h_3647870173(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Dev_DevDagameActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Dev_DevDagameActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
