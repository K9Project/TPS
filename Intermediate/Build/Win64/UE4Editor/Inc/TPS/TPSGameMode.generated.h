// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_TPSGameMode_generated_h
#error "TPSGameMode.generated.h already included, missing '#pragma once' in TPSGameMode.h"
#endif
#define TPS_TPSGameMode_generated_h

#define TPS_Source_TPS_TPSGameMode_h_12_SPARSE_DATA
#define TPS_Source_TPS_TPSGameMode_h_12_RPC_WRAPPERS
#define TPS_Source_TPS_TPSGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TPS_Source_TPS_TPSGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSGameMode(); \
	friend struct Z_Construct_UClass_ATPSGameMode_Statics; \
public: \
	DECLARE_CLASS(ATPSGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), TPS_API) \
	DECLARE_SERIALIZER(ATPSGameMode)


#define TPS_Source_TPS_TPSGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATPSGameMode(); \
	friend struct Z_Construct_UClass_ATPSGameMode_Statics; \
public: \
	DECLARE_CLASS(ATPSGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), TPS_API) \
	DECLARE_SERIALIZER(ATPSGameMode)


#define TPS_Source_TPS_TPSGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TPS_API ATPSGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TPS_API, ATPSGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TPS_API ATPSGameMode(ATPSGameMode&&); \
	TPS_API ATPSGameMode(const ATPSGameMode&); \
public:


#define TPS_Source_TPS_TPSGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TPS_API ATPSGameMode(ATPSGameMode&&); \
	TPS_API ATPSGameMode(const ATPSGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TPS_API, ATPSGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSGameMode)


#define TPS_Source_TPS_TPSGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define TPS_Source_TPS_TPSGameMode_h_9_PROLOG
#define TPS_Source_TPS_TPSGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSGameMode_h_12_SPARSE_DATA \
	TPS_Source_TPS_TPSGameMode_h_12_RPC_WRAPPERS \
	TPS_Source_TPS_TPSGameMode_h_12_INCLASS \
	TPS_Source_TPS_TPSGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_TPSGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSGameMode_h_12_SPARSE_DATA \
	TPS_Source_TPS_TPSGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSGameMode_h_12_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class ATPSGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_TPSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
