// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDecalComponent;
class AWeaponDefault;
#ifdef TPS_TPSCharacter_generated_h
#error "TPSCharacter.generated.h already included, missing '#pragma once' in TPSCharacter.h"
#endif
#define TPS_TPSCharacter_generated_h

#define TPS_Source_TPS_TPSCharacter_h_21_SPARSE_DATA
#define TPS_Source_TPS_TPSCharacter_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCursorToWorld); \
	DECLARE_FUNCTION(execInitWeapon); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execChangeMovementState); \
	DECLARE_FUNCTION(execCharacterUpdate); \
	DECLARE_FUNCTION(execAttackCharEvent); \
	DECLARE_FUNCTION(execMovementTick); \
	DECLARE_FUNCTION(execInputAttackReleased); \
	DECLARE_FUNCTION(execInputAttackPressed); \
	DECLARE_FUNCTION(execInputAxisX); \
	DECLARE_FUNCTION(execInputAxisY);


#define TPS_Source_TPS_TPSCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCursorToWorld); \
	DECLARE_FUNCTION(execInitWeapon); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execChangeMovementState); \
	DECLARE_FUNCTION(execCharacterUpdate); \
	DECLARE_FUNCTION(execAttackCharEvent); \
	DECLARE_FUNCTION(execMovementTick); \
	DECLARE_FUNCTION(execInputAttackReleased); \
	DECLARE_FUNCTION(execInputAttackPressed); \
	DECLARE_FUNCTION(execInputAxisX); \
	DECLARE_FUNCTION(execInputAxisY);


#define TPS_Source_TPS_TPSCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define TPS_Source_TPS_TPSCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define TPS_Source_TPS_TPSCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public:


#define TPS_Source_TPS_TPSCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSCharacter)


#define TPS_Source_TPS_TPSCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATPSCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATPSCharacter, CameraBoom); }


#define TPS_Source_TPS_TPSCharacter_h_18_PROLOG
#define TPS_Source_TPS_TPSCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSCharacter_h_21_SPARSE_DATA \
	TPS_Source_TPS_TPSCharacter_h_21_RPC_WRAPPERS \
	TPS_Source_TPS_TPSCharacter_h_21_INCLASS \
	TPS_Source_TPS_TPSCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_TPSCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSCharacter_h_21_SPARSE_DATA \
	TPS_Source_TPS_TPSCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSCharacter_h_21_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class ATPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_TPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
