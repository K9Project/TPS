// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_WeaponDefault_generated_h
#error "WeaponDefault.generated.h already included, missing '#pragma once' in WeaponDefault.h"
#endif
#define TPS_WeaponDefault_generated_h

#define TPS_Source_TPS_WeaponDefault_h_17_SPARSE_DATA
#define TPS_Source_TPS_WeaponDefault_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWeaponStateFire);


#define TPS_Source_TPS_WeaponDefault_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWeaponStateFire);


#define TPS_Source_TPS_WeaponDefault_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponDefault(); \
	friend struct Z_Construct_UClass_AWeaponDefault_Statics; \
public: \
	DECLARE_CLASS(AWeaponDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(AWeaponDefault)


#define TPS_Source_TPS_WeaponDefault_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponDefault(); \
	friend struct Z_Construct_UClass_AWeaponDefault_Statics; \
public: \
	DECLARE_CLASS(AWeaponDefault, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(AWeaponDefault)


#define TPS_Source_TPS_WeaponDefault_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponDefault(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponDefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponDefault(AWeaponDefault&&); \
	NO_API AWeaponDefault(const AWeaponDefault&); \
public:


#define TPS_Source_TPS_WeaponDefault_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponDefault(AWeaponDefault&&); \
	NO_API AWeaponDefault(const AWeaponDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponDefault); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponDefault)


#define TPS_Source_TPS_WeaponDefault_h_17_PRIVATE_PROPERTY_OFFSET
#define TPS_Source_TPS_WeaponDefault_h_14_PROLOG
#define TPS_Source_TPS_WeaponDefault_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_WeaponDefault_h_17_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_WeaponDefault_h_17_SPARSE_DATA \
	TPS_Source_TPS_WeaponDefault_h_17_RPC_WRAPPERS \
	TPS_Source_TPS_WeaponDefault_h_17_INCLASS \
	TPS_Source_TPS_WeaponDefault_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_WeaponDefault_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_WeaponDefault_h_17_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_WeaponDefault_h_17_SPARSE_DATA \
	TPS_Source_TPS_WeaponDefault_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_WeaponDefault_h_17_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_WeaponDefault_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class AWeaponDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_WeaponDefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
