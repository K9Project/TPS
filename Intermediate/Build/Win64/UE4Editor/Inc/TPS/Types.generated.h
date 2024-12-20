// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_Types_generated_h
#error "Types.generated.h already included, missing '#pragma once' in Types.h"
#endif
#define TPS_Types_generated_h

#define TPS_Source_TPS_Types_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponInfo_Statics; \
	TPS_API static class UScriptStruct* StaticStruct();


template<> TPS_API UScriptStruct* StaticStruct<struct FWeaponInfo>();

#define TPS_Source_TPS_Types_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileInfo_Statics; \
	TPS_API static class UScriptStruct* StaticStruct();


template<> TPS_API UScriptStruct* StaticStruct<struct FProjectileInfo>();

#define TPS_Source_TPS_Types_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterSpeed_Statics; \
	TPS_API static class UScriptStruct* StaticStruct();


template<> TPS_API UScriptStruct* StaticStruct<struct FCharacterSpeed>();

#define TPS_Source_TPS_Types_h_60_SPARSE_DATA
#define TPS_Source_TPS_Types_h_60_RPC_WRAPPERS
#define TPS_Source_TPS_Types_h_60_RPC_WRAPPERS_NO_PURE_DECLS
#define TPS_Source_TPS_Types_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypes(); \
	friend struct Z_Construct_UClass_UTypes_Statics; \
public: \
	DECLARE_CLASS(UTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(UTypes)


#define TPS_Source_TPS_Types_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUTypes(); \
	friend struct Z_Construct_UClass_UTypes_Statics; \
public: \
	DECLARE_CLASS(UTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(UTypes)


#define TPS_Source_TPS_Types_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypes(UTypes&&); \
	NO_API UTypes(const UTypes&); \
public:


#define TPS_Source_TPS_Types_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypes(UTypes&&); \
	NO_API UTypes(const UTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypes)


#define TPS_Source_TPS_Types_h_60_PRIVATE_PROPERTY_OFFSET
#define TPS_Source_TPS_Types_h_57_PROLOG
#define TPS_Source_TPS_Types_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_Types_h_60_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_Types_h_60_SPARSE_DATA \
	TPS_Source_TPS_Types_h_60_RPC_WRAPPERS \
	TPS_Source_TPS_Types_h_60_INCLASS \
	TPS_Source_TPS_Types_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_Types_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_Types_h_60_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_Types_h_60_SPARSE_DATA \
	TPS_Source_TPS_Types_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_Types_h_60_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_Types_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class UTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_Types_h


#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::Aim_State) \
	op(EMovementState::AimWalk_State) \
	op(EMovementState::Walk_State) \
	op(EMovementState::Run_State) \
	op(EMovementState::SprintRun_State) 

enum class EMovementState : uint8;
template<> TPS_API UEnum* StaticEnum<EMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
