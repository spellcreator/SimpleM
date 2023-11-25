// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Components/SMCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMCharacterMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SIMPLEM_API UClass* Z_Construct_UClass_USMCharacterMovementComponent();
	SIMPLEM_API UClass* Z_Construct_UClass_USMCharacterMovementComponent_NoRegister();
	SIMPLEM_API UEnum* Z_Construct_UEnum_SimpleM_EMyEnum();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMyEnum;
	static UEnum* EMyEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMyEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMyEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleM_EMyEnum, (UObject*)Z_Construct_UPackage__Script_SimpleM(), TEXT("EMyEnum"));
		}
		return Z_Registration_Info_UEnum_EMyEnum.OuterSingleton;
	}
	template<> SIMPLEM_API UEnum* StaticEnum<EMyEnum>()
	{
		return EMyEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleM_EMyEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleM_EMyEnum_Statics::Enumerators[] = {
		{ "Lolkek", (int64)Lolkek },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleM_EMyEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Lolkek.Name", "Lolkek" },
		{ "ModuleRelativePath", "Public/Components/SMCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleM_EMyEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleM,
		nullptr,
		"EMyEnum",
		"EMyEnum",
		Z_Construct_UEnum_SimpleM_EMyEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleM_EMyEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SimpleM_EMyEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleM_EMyEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SimpleM_EMyEnum()
	{
		if (!Z_Registration_Info_UEnum_EMyEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMyEnum.InnerSingleton, Z_Construct_UEnum_SimpleM_EMyEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMyEnum.InnerSingleton;
	}
	void USMCharacterMovementComponent::StaticRegisterNativesUSMCharacterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMCharacterMovementComponent);
	UClass* Z_Construct_UClass_USMCharacterMovementComponent_NoRegister()
	{
		return USMCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USMCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SMCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SMCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMCharacterMovementComponent_Statics::ClassParams = {
		&USMCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_USMCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_USMCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMCharacterMovementComponent.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<USMCharacterMovementComponent>()
	{
		return USMCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMCharacterMovementComponent);
	USMCharacterMovementComponent::~USMCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_Statics::EnumInfo[] = {
		{ EMyEnum_StaticEnum, TEXT("EMyEnum"), &Z_Registration_Info_UEnum_EMyEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2964794913U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMCharacterMovementComponent, USMCharacterMovementComponent::StaticClass, TEXT("USMCharacterMovementComponent"), &Z_Registration_Info_UClass_USMCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMCharacterMovementComponent), 2373863542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_931522292(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
