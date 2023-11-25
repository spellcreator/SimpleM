// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../WorldActors/SMSwingDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMSwingDoor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMSwingDoor();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMSwingDoor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	void ASMSwingDoor::StaticRegisterNativesASMSwingDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMSwingDoor);
	UClass* Z_Construct_UClass_ASMSwingDoor_NoRegister()
	{
		return ASMSwingDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASMSwingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMSwingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSwingDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldActors/SMSwingDoor.h" },
		{ "ModuleRelativePath", "Public/WorldActors/SMSwingDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "MyComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldActors/SMSwingDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMSwingDoor, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "MyComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldActors/SMSwingDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMSwingDoor, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "MyComponents" },
		{ "ModuleRelativePath", "Public/WorldActors/SMSwingDoor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMSwingDoor, BoxCollision), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMSwingDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMSwingDoor_Statics::NewProp_BoxCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMSwingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMSwingDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMSwingDoor_Statics::ClassParams = {
		&ASMSwingDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASMSwingDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMSwingDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASMSwingDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSwingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMSwingDoor()
	{
		if (!Z_Registration_Info_UClass_ASMSwingDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMSwingDoor.OuterSingleton, Z_Construct_UClass_ASMSwingDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASMSwingDoor.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<ASMSwingDoor>()
	{
		return ASMSwingDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMSwingDoor);
	ASMSwingDoor::~ASMSwingDoor() {}
	struct Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_WorldActors_SMSwingDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_WorldActors_SMSwingDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMSwingDoor, ASMSwingDoor::StaticClass, TEXT("ASMSwingDoor"), &Z_Registration_Info_UClass_ASMSwingDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMSwingDoor), 3214172358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_WorldActors_SMSwingDoor_h_2382955952(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_WorldActors_SMSwingDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleM_Source_SimpleM_Public_WorldActors_SMSwingDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
