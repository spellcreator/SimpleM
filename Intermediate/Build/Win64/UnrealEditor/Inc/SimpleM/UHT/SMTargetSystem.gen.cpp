// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../SMTargetSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTargetSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SIMPLEM_API UClass* Z_Construct_UClass_USMTargetSystem();
	SIMPLEM_API UClass* Z_Construct_UClass_USMTargetSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	void USMTargetSystem::StaticRegisterNativesUSMTargetSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMTargetSystem);
	UClass* Z_Construct_UClass_USMTargetSystem_NoRegister()
	{
		return USMTargetSystem::StaticClass();
	}
	struct Z_Construct_UClass_USMTargetSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMTargetSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTargetSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SMTargetSystem.h" },
		{ "ModuleRelativePath", "Public/SMTargetSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTargetSystem_Statics::NewProp_SelectedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMTargetSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMTargetSystem_Statics::NewProp_SelectedTarget = { "SelectedTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USMTargetSystem, SelectedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMTargetSystem_Statics::NewProp_SelectedTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTargetSystem_Statics::NewProp_SelectedTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMTargetSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTargetSystem_Statics::NewProp_SelectedTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMTargetSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMTargetSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMTargetSystem_Statics::ClassParams = {
		&USMTargetSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMTargetSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMTargetSystem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMTargetSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMTargetSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMTargetSystem()
	{
		if (!Z_Registration_Info_UClass_USMTargetSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMTargetSystem.OuterSingleton, Z_Construct_UClass_USMTargetSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMTargetSystem.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<USMTargetSystem>()
	{
		return USMTargetSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMTargetSystem);
	USMTargetSystem::~USMTargetSystem() {}
	struct Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_SMTargetSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_SMTargetSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMTargetSystem, USMTargetSystem::StaticClass, TEXT("USMTargetSystem"), &Z_Registration_Info_UClass_USMTargetSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMTargetSystem), 2820907704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_SMTargetSystem_h_687013981(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_SMTargetSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_SMTargetSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
