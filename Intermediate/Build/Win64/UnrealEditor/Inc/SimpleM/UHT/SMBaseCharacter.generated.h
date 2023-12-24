// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/SMBaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SIMPLEM_SMBaseCharacter_generated_h
#error "SMBaseCharacter.generated.h already included, missing '#pragma once' in SMBaseCharacter.h"
#endif
#define SIMPLEM_SMBaseCharacter_generated_h

#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_SPARSE_DATA
#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execIsRunning);


#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execIsRunning);


#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_ACCESSORS
#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASMBaseCharacter(); \
	friend struct Z_Construct_UClass_ASMBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASMBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(ASMBaseCharacter)


#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASMBaseCharacter(); \
	friend struct Z_Construct_UClass_ASMBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASMBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(ASMBaseCharacter)


#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASMBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASMBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMBaseCharacter(ASMBaseCharacter&&); \
	NO_API ASMBaseCharacter(const ASMBaseCharacter&); \
public: \
	NO_API virtual ~ASMBaseCharacter();


#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMBaseCharacter(ASMBaseCharacter&&); \
	NO_API ASMBaseCharacter(const ASMBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASMBaseCharacter) \
	NO_API virtual ~ASMBaseCharacter();


#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_24_PROLOG
#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_SPARSE_DATA \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_RPC_WRAPPERS \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_ACCESSORS \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_INCLASS \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_SPARSE_DATA \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_ACCESSORS \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEM_API UClass* StaticClass<class ASMBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NextGen_Source_SimpleM_Public_Player_SMBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
