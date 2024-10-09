// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPS_TPSPlayerController_generated_h
#error "TPSPlayerController.generated.h already included, missing '#pragma once' in TPSPlayerController.h"
#endif
#define TPS_TPSPlayerController_generated_h

#define TPS_Source_TPS_TPSPlayerController_h_12_SPARSE_DATA
#define TPS_Source_TPS_TPSPlayerController_h_12_RPC_WRAPPERS
#define TPS_Source_TPS_TPSPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TPS_Source_TPS_TPSPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPlayerController(); \
	friend struct Z_Construct_UClass_ATPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayerController)


#define TPS_Source_TPS_TPSPlayerController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATPSPlayerController(); \
	friend struct Z_Construct_UClass_ATPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayerController)


#define TPS_Source_TPS_TPSPlayerController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayerController(ATPSPlayerController&&); \
	NO_API ATPSPlayerController(const ATPSPlayerController&); \
public:


#define TPS_Source_TPS_TPSPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayerController(ATPSPlayerController&&); \
	NO_API ATPSPlayerController(const ATPSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSPlayerController)


#define TPS_Source_TPS_TPSPlayerController_h_12_PRIVATE_PROPERTY_OFFSET
#define TPS_Source_TPS_TPSPlayerController_h_9_PROLOG
#define TPS_Source_TPS_TPSPlayerController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSPlayerController_h_12_SPARSE_DATA \
	TPS_Source_TPS_TPSPlayerController_h_12_RPC_WRAPPERS \
	TPS_Source_TPS_TPSPlayerController_h_12_INCLASS \
	TPS_Source_TPS_TPSPlayerController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPS_Source_TPS_TPSPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPS_Source_TPS_TPSPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	TPS_Source_TPS_TPSPlayerController_h_12_SPARSE_DATA \
	TPS_Source_TPS_TPSPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	TPS_Source_TPS_TPSPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPS_API UClass* StaticClass<class ATPSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPS_Source_TPS_TPSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
