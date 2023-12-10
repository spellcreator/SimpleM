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
	SIMPLEM_API UClass* Z_Construct_UClass_ASMBaseCharacter_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMBasePlayerController();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMBasePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	DEFINE_FUNCTION(ASMBasePlayerController::execOnClickEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASMBasePlayerController::execOnClickStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickStart();
		P_NATIVE_END;
	}
	void ASMBasePlayerController::StaticRegisterNativesASMBasePlayerController()
	{
		UClass* Class = ASMBasePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickEnd", &ASMBasePlayerController::execOnClickEnd },
			{ "OnClickStart", &ASMBasePlayerController::execOnClickStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASMBasePlayerController_OnClickEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASMBasePlayerController_OnClickEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerMovement" },
		{ "ModuleRelativePath", "Public/Player/SMBasePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMBasePlayerController_OnClickEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASMBasePlayerController, nullptr, "OnClickEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASMBasePlayerController_OnClickEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMBasePlayerController_OnClickEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASMBasePlayerController_OnClickEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMBasePlayerController_OnClickEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASMBasePlayerController_OnClickStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASMBasePlayerController_OnClickStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerMovement" },
		{ "ModuleRelativePath", "Public/Player/SMBasePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMBasePlayerController_OnClickStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASMBasePlayerController, nullptr, "OnClickStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASMBasePlayerController_OnClickStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMBasePlayerController_OnClickStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASMBasePlayerController_OnClickStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMBasePlayerController_OnClickStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMBasePlayerController);
	UClass* Z_Construct_UClass_ASMBasePlayerController_NoRegister()
	{
		return ASMBasePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASMBasePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMBasePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASMBasePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASMBasePlayerController_OnClickEnd, "OnClickEnd" }, // 2424927969
		{ &Z_Construct_UFunction_ASMBasePlayerController_OnClickStart, "OnClickStart" }, // 1843812128
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMBasePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/SMBasePlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/SMBasePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMBasePlayerController_Statics::NewProp_CustomCharacter_MetaData[] = {
		{ "Category", "SMBasePlayerController" },
		{ "Comment", "//bool GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation);\n" },
		{ "ModuleRelativePath", "Public/Player/SMBasePlayerController.h" },
		{ "ToolTip", "bool GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation);" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMBasePlayerController_Statics::NewProp_CustomCharacter = { "CustomCharacter", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMBasePlayerController, CustomCharacter), Z_Construct_UClass_ASMBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMBasePlayerController_Statics::NewProp_CustomCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMBasePlayerController_Statics::NewProp_CustomCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMBasePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMBasePlayerController_Statics::NewProp_CustomCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMBasePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMBasePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMBasePlayerController_Statics::ClassParams = {
		&ASMBasePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASMBasePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMBasePlayerController_Statics::PropPointers),
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
	struct Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Player_SMBasePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Player_SMBasePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMBasePlayerController, ASMBasePlayerController::StaticClass, TEXT("ASMBasePlayerController"), &Z_Registration_Info_UClass_ASMBasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMBasePlayerController), 1618571536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Player_SMBasePlayerController_h_3503644014(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Player_SMBasePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Player_SMBasePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
