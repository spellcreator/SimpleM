// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/SMProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEM_SMProjectile_generated_h
#error "SMProjectile.generated.h already included, missing '#pragma once' in SMProjectile.h"
#endif
#define SIMPLEM_SMProjectile_generated_h

#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_SPARSE_DATA
#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_RPC_WRAPPERS
#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_ACCESSORS
#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASMProjectile(); \
	friend struct Z_Construct_UClass_ASMProjectile_Statics; \
public: \
	DECLARE_CLASS(ASMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(ASMProjectile)


#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASMProjectile(); \
	friend struct Z_Construct_UClass_ASMProjectile_Statics; \
public: \
	DECLARE_CLASS(ASMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(ASMProjectile)


#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASMProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASMProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMProjectile(ASMProjectile&&); \
	NO_API ASMProjectile(const ASMProjectile&); \
public: \
	NO_API virtual ~ASMProjectile();


#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMProjectile(ASMProjectile&&); \
	NO_API ASMProjectile(const ASMProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASMProjectile) \
	NO_API virtual ~ASMProjectile();


#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_11_PROLOG
#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_SPARSE_DATA \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_RPC_WRAPPERS \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_ACCESSORS \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_INCLASS \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_SPARSE_DATA \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_ACCESSORS \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEM_API UClass* StaticClass<class ASMProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SimpleM_Source_SimpleM_Public_Weapon_SMProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
