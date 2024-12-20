// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_ProjectileDefault_generated_h
#error "ProjectileDefault.generated.h already included, missing '#pragma once' in ProjectileDefault.h"
#endif
#define TPS_ProjectileDefault_generated_h

#define TPS_Source_TPS_ProjectileDefault_h_16_SPARSE_DATA
#define TPS_Source_TPS_ProjectileDefault_h_16_RPC_WRAPPERS
#define TPS_Source_TPS_ProjectileDefault_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define TPS_Source_TPS_ProjectileDefault_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileDefault(); \
	friend struct Z_Construct_UClass_AProjectileDefault_Statics; \
public: \
	DECLARE_CLASS(AProjectileDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(AProjectileDefault)


#define TPS_Source_TPS_ProjectileDefault_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileDefault(); \
	friend struct Z_Construct_UClass_AProjectileDefault_Statics; \
public: \
	DECLARE_CLASS(AProjectileDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(AProjectileDefault)


#define TPS_Source_TPS_ProjectileDefault_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileDefault(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileDefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileDefault(AProjectileDefault&&); \
	NO_API AProjectileDefault(const AProjectileDefault&); \
public:


#define TPS_Source_TPS_ProjectileDefault_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileDefault(AProjectileDefault&&); \
	NO_API AProjectileDefault(const AProjectileDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileDefault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileDefault)


#define TPS_Source_TPS_ProjectileDefault_h_16_PRIVATE_PROPERTY_OFFSET
#define TPS_Source_TPS_ProjectileDefault_h_13_PROLOG
#define TPS_Source_TPS_ProjectileDefault_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_ProjectileDefault_h_16_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_ProjectileDefault_h_16_SPARSE_DATA \
	TPS_Source_TPS_ProjectileDefault_h_16_RPC_WRAPPERS \
	TPS_Source_TPS_ProjectileDefault_h_16_INCLASS \
	TPS_Source_TPS_ProjectileDefault_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_ProjectileDefault_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_ProjectileDefault_h_16_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_ProjectileDefault_h_16_SPARSE_DATA \
	TPS_Source_TPS_ProjectileDefault_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_ProjectileDefault_h_16_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_ProjectileDefault_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class AProjectileDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_ProjectileDefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
