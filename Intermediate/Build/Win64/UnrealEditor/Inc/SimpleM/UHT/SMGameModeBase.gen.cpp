// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../GameMode/SMGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMGameModeBase();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	void ASMGameModeBase::StaticRegisterNativesASMGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMGameModeBase);
	UClass* Z_Construct_UClass_ASMGameModeBase_NoRegister()
	{
		return ASMGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASMGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/SMGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameMode/SMGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMGameModeBase_Statics::ClassParams = {
		&ASMGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASMGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASMGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMGameModeBase.OuterSingleton, Z_Construct_UClass_ASMGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASMGameModeBase.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<ASMGameModeBase>()
	{
		return ASMGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMGameModeBase);
	ASMGameModeBase::~ASMGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_GameMode_SMGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_GameMode_SMGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMGameModeBase, ASMGameModeBase::StaticClass, TEXT("ASMGameModeBase"), &Z_Registration_Info_UClass_ASMGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMGameModeBase), 4124445784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_GameMode_SMGameModeBase_h_335310113(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_GameMode_SMGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_GameMode_SMGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
