// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Weapon/SMSpawnSword.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMSpawnSword() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMBaseCharacter_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMBaseWeapon();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMProjectile_NoRegister();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMSpawnSword();
	SIMPLEM_API UClass* Z_Construct_UClass_ASMSpawnSword_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleM();
// End Cross Module References
	DEFINE_FUNCTION(ASMSpawnSword::execSpawnActorsInSphereRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorsInSphereRadius();
		P_NATIVE_END;
	}
	void ASMSpawnSword::StaticRegisterNativesASMSpawnSword()
	{
		UClass* Class = ASMSpawnSword::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnActorsInSphereRadius", &ASMSpawnSword::execSpawnActorsInSphereRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASMSpawnSword_SpawnActorsInSphereRadius_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASMSpawnSword_SpawnActorsInSphereRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "Comment", "// Function to spawn actors in a sphere radius\n" },
		{ "ModuleRelativePath", "Public/Weapon/SMSpawnSword.h" },
		{ "ToolTip", "Function to spawn actors in a sphere radius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMSpawnSword_SpawnActorsInSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASMSpawnSword, nullptr, "SpawnActorsInSphereRadius", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASMSpawnSword_SpawnActorsInSphereRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMSpawnSword_SpawnActorsInSphereRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASMSpawnSword_SpawnActorsInSphereRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMSpawnSword_SpawnActorsInSphereRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMSpawnSword);
	UClass* Z_Construct_UClass_ASMSpawnSword_NoRegister()
	{
		return ASMSpawnSword::StaticClass();
	}
	struct Z_Construct_UClass_ASMSpawnSword_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfActorsToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfActorsToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMSpawnSword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASMBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASMSpawnSword_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASMSpawnSword_SpawnActorsInSphereRadius, "SpawnActorsInSphereRadius" }, // 2976501859
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSpawnSword_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/SMSpawnSword.h" },
		{ "ModuleRelativePath", "Public/Weapon/SMSpawnSword.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_BaseCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/SMSpawnSword.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_BaseCharacter = { "BaseCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMSpawnSword, BaseCharacter), Z_Construct_UClass_ASMBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_BaseCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_BaseCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Weapon/SMSpawnSword.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMSpawnSword, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ActorToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "// The radius within which actors will be spawned\n" },
		{ "ModuleRelativePath", "Public/Weapon/SMSpawnSword.h" },
		{ "ToolTip", "The radius within which actors will be spawned" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMSpawnSword, SpawnRadius), METADATA_PARAMS(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SpawnRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_NumberOfActorsToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "// The number of actors to spawn\n" },
		{ "ModuleRelativePath", "Public/Weapon/SMSpawnSword.h" },
		{ "ToolTip", "The number of actors to spawn" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_NumberOfActorsToSpawn = { "NumberOfActorsToSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMSpawnSword, NumberOfActorsToSpawn), METADATA_PARAMS(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_NumberOfActorsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_NumberOfActorsToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SphereColor_MetaData[] = {
		{ "Category", "SMSpawnSword" },
		{ "ModuleRelativePath", "Public/Weapon/SMSpawnSword.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SphereColor = { "SphereColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMSpawnSword, SphereColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SphereColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SphereColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/SMSpawnSword.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASMSpawnSword, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASMProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMSpawnSword_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_BaseCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ActorToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_NumberOfActorsToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_SphereColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMSpawnSword_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMSpawnSword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMSpawnSword>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMSpawnSword_Statics::ClassParams = {
		&ASMSpawnSword::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASMSpawnSword_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMSpawnSword_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASMSpawnSword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMSpawnSword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMSpawnSword()
	{
		if (!Z_Registration_Info_UClass_ASMSpawnSword.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMSpawnSword.OuterSingleton, Z_Construct_UClass_ASMSpawnSword_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASMSpawnSword.OuterSingleton;
	}
	template<> SIMPLEM_API UClass* StaticClass<ASMSpawnSword>()
	{
		return ASMSpawnSword::StaticClass();
	}
	ASMSpawnSword::ASMSpawnSword() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMSpawnSword);
	ASMSpawnSword::~ASMSpawnSword() {}
	struct Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMSpawnSword, ASMSpawnSword::StaticClass, TEXT("ASMSpawnSword"), &Z_Registration_Info_UClass_ASMSpawnSword, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMSpawnSword), 3279643188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_2005666903(TEXT("/Script/SimpleM"),
		Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
