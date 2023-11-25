// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMBasePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMBasePlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMBasePlayerController();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMBasePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	void ASMBasePlayerController::StaticRegisterNativesASMBasePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMBasePlayerController);
	UClass* Z_Construct_UClass_ASMBasePlayerController_NoRegister()
	{
		return ASMBasePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASMBasePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMBasePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMBasePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/SMBasePlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/SMBasePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMBasePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMBasePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMBasePlayerController_Statics::ClassParams = {
		&ASMBasePlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASMBasePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMBasePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMBasePlayerController()
	{
		if (!Z_Registration_Info_UClass_ASMBasePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMBasePlayerController.OuterSingleton, Z_Construct_UClass_ASMBasePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASMBasePlayerController.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<ASMBasePlayerController>()
	{
		return ASMBasePlayerController::StaticClass();
	}
	ASMBasePlayerController::ASMBasePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMBasePlayerController);
	ASMBasePlayerController::~ASMBasePlayerController() {}
	struct Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Player_SMBasePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Player_SMBasePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMBasePlayerController, ASMBasePlayerController::StaticClass, TEXT("ASMBasePlayerController"), &Z_Registration_Info_UClass_ASMBasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMBasePlayerController), 1493972519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Player_SMBasePlayerController_h_2265309324(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Player_SMBasePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Player_SMBasePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
