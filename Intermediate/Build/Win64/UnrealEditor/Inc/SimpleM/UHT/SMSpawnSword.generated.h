// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/SMSpawnSword.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEM_SMSpawnSword_generated_h
#error "SMSpawnSword.generated.h already included, missing '#pragma once' in SMSpawnSword.h"
#endif
#define SIMPLEM_SMSpawnSword_generated_h

#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_SPARSE_DATA
#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnActorsInSphereRadius);


#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnActorsInSphereRadius);


#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_ACCESSORS
#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASMSpawnSword(); \
	friend struct Z_Construct_UClass_ASMSpawnSword_Statics; \
public: \
	DECLARE_CLASS(ASMSpawnSword, ASMBaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(ASMSpawnSword)


#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASMSpawnSword(); \
	friend struct Z_Construct_UClass_ASMSpawnSword_Statics; \
public: \
	DECLARE_CLASS(ASMSpawnSword, ASMBaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(ASMSpawnSword)


#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASMSpawnSword(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASMSpawnSword) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMSpawnSword); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMSpawnSword); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMSpawnSword(ASMSpawnSword&&); \
	NO_API ASMSpawnSword(const ASMSpawnSword&); \
public: \
	NO_API virtual ~ASMSpawnSword();


#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASMSpawnSword(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMSpawnSword(ASMSpawnSword&&); \
	NO_API ASMSpawnSword(const ASMSpawnSword&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMSpawnSword); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMSpawnSword); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASMSpawnSword) \
	NO_API virtual ~ASMSpawnSword();


#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_19_PROLOG
#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_SPARSE_DATA \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_RPC_WRAPPERS \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_ACCESSORS \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_INCLASS \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_SPARSE_DATA \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_ACCESSORS \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_INCLASS_NO_PURE_DECLS \
	FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEM_API UClass* StaticClass<class ASMSpawnSword>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NextGen_Source_SimpleM_Public_Weapon_SMSpawnSword_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
