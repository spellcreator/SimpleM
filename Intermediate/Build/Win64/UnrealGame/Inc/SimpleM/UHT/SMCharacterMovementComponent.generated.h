// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SMCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEM_SMCharacterMovementComponent_generated_h
#error "SMCharacterMovementComponent.generated.h already included, missing '#pragma once' in SMCharacterMovementComponent.h"
#endif
#define SIMPLEM_SMCharacterMovementComponent_generated_h

#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_SPARSE_DATA
#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_RPC_WRAPPERS
#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_ACCESSORS
#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_USMCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(USMCharacterMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(USMCharacterMovementComponent)


#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSMCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_USMCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(USMCharacterMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(USMCharacterMovementComponent)


#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMCharacterMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMCharacterMovementComponent(USMCharacterMovementComponent&&); \
	NO_API USMCharacterMovementComponent(const USMCharacterMovementComponent&); \
public: \
	NO_API virtual ~USMCharacterMovementComponent();


#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMCharacterMovementComponent(USMCharacterMovementComponent&&); \
	NO_API USMCharacterMovementComponent(const USMCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMCharacterMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMCharacterMovementComponent) \
	NO_API virtual ~USMCharacterMovementComponent();


#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_16_PROLOG
#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_SPARSE_DATA \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_RPC_WRAPPERS \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_ACCESSORS \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_INCLASS \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_SPARSE_DATA \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_ACCESSORS \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEM_API UClass* StaticClass<class USMCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NextGen_Source_SimpleM_Public_Components_SMCharacterMovementComponent_h


#define FOREACH_ENUM_EMYENUM(op) \
	op(Lolkek) 

enum EMyEnum : uint8;
template<> SIMPLEM_API UEnum* StaticEnum<EMyEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
