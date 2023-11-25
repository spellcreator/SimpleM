// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SMHealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
#ifdef SIMPLEM_SMHealthComponent_generated_h
#error "SMHealthComponent.generated.h already included, missing '#pragma once' in SMHealthComponent.h"
#endif
#define SIMPLEM_SMHealthComponent_generated_h

#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_SPARSE_DATA
#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execGetHealthPercent);


#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execGetHealthPercent);


#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_ACCESSORS
#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMHealthComponent(); \
	friend struct Z_Construct_UClass_USMHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USMHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(USMHealthComponent)


#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSMHealthComponent(); \
	friend struct Z_Construct_UClass_USMHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USMHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleM"), NO_API) \
	DECLARE_SERIALIZER(USMHealthComponent)


#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMHealthComponent(USMHealthComponent&&); \
	NO_API USMHealthComponent(const USMHealthComponent&); \
public: \
	NO_API virtual ~USMHealthComponent();


#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMHealthComponent(USMHealthComponent&&); \
	NO_API USMHealthComponent(const USMHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMHealthComponent) \
	NO_API virtual ~USMHealthComponent();


#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_10_PROLOG
#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_SPARSE_DATA \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_RPC_WRAPPERS \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_ACCESSORS \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_INCLASS \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_SPARSE_DATA \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_ACCESSORS \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEM_API UClass* StaticClass<class USMHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SimpleM_Source_SimpleM_Public_Components_SMHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
