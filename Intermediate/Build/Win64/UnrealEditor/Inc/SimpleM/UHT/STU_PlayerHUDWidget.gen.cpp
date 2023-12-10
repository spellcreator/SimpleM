// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../UI/STU_PlayerHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTU_PlayerHUDWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_USTU_PlayerHUDWidget();
	SIMPLEM_API UClass* Z_Construct_UClass_USTU_PlayerHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	DEFINE_FUNCTION(USTU_PlayerHUDWidget::execGetActorTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTU_PlayerHUDWidget::execGetHealthPercent)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent(Z_Param_Player);
		P_NATIVE_END;
	}
	void USTU_PlayerHUDWidget::StaticRegisterNativesUSTU_PlayerHUDWidget()
	{
		UClass* Class = USTU_PlayerHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorTarget", &USTU_PlayerHUDWidget::execGetActorTarget },
			{ "GetHealthPercent", &USTU_PlayerHUDWidget::execGetHealthPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics
	{
		struct STU_PlayerHUDWidget_eventGetActorTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(STU_PlayerHUDWidget_eventGetActorTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STU_PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTU_PlayerHUDWidget, nullptr, "GetActorTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::STU_PlayerHUDWidget_eventGetActorTarget_Parms), Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics
	{
		struct STU_PlayerHUDWidget_eventGetHealthPercent_Parms
		{
			AActor* Player;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(STU_PlayerHUDWidget_eventGetHealthPercent_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(STU_PlayerHUDWidget_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STU_PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTU_PlayerHUDWidget, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::STU_PlayerHUDWidget_eventGetHealthPercent_Parms), Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USTU_PlayerHUDWidget);
	UClass* Z_Construct_UClass_USTU_PlayerHUDWidget_NoRegister()
	{
		return USTU_PlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTU_PlayerHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTU_PlayerHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTU_PlayerHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTU_PlayerHUDWidget_GetActorTarget, "GetActorTarget" }, // 1433456096
		{ &Z_Construct_UFunction_USTU_PlayerHUDWidget_GetHealthPercent, "GetHealthPercent" }, // 2643557407
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTU_PlayerHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/STU_PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/STU_PlayerHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTU_PlayerHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTU_PlayerHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USTU_PlayerHUDWidget_Statics::ClassParams = {
		&USTU_PlayerHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTU_PlayerHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTU_PlayerHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTU_PlayerHUDWidget()
	{
		if (!Z_Registration_Info_UClass_USTU_PlayerHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTU_PlayerHUDWidget.OuterSingleton, Z_Construct_UClass_USTU_PlayerHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USTU_PlayerHUDWidget.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<USTU_PlayerHUDWidget>()
	{
		return USTU_PlayerHUDWidget::StaticClass();
	}
	USTU_PlayerHUDWidget::USTU_PlayerHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTU_PlayerHUDWidget);
	USTU_PlayerHUDWidget::~USTU_PlayerHUDWidget() {}
	struct Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_UI_STU_PlayerHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_UI_STU_PlayerHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USTU_PlayerHUDWidget, USTU_PlayerHUDWidget::StaticClass, TEXT("USTU_PlayerHUDWidget"), &Z_Registration_Info_UClass_USTU_PlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTU_PlayerHUDWidget), 825144460U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_UI_STU_PlayerHUDWidget_h_3205015711(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_UI_STU_PlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_UI_STU_PlayerHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
