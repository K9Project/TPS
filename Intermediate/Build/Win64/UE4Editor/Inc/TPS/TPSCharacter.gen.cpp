// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/TPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSCharacter() {}
// Cross Module References
	TPS_API UClass* Z_Construct_UClass_ATPSCharacter_NoRegister();
	TPS_API UClass* Z_Construct_UClass_ATPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TPS();
	TPS_API UClass* Z_Construct_UClass_AWeaponDefault_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TPS_API UEnum* Z_Construct_UEnum_TPS_EMovementState();
	TPS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpeed();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(ATPSCharacter::execGetCursorToWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDecalComponent**)Z_Param__Result=P_THIS->GetCursorToWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execInitWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponDefault**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execChangeMovementState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMovementState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execCharacterUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharacterUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execAttackCharEvent)
	{
		P_GET_UBOOL(Z_Param_bIsFiring);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackCharEvent(Z_Param_bIsFiring);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execMovementTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementTick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execInputAttackReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAttackReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execInputAttackPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAttackPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execInputAxisX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxisX(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execInputAxisY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxisY(Z_Param_Value);
		P_NATIVE_END;
	}
	void ATPSCharacter::StaticRegisterNativesATPSCharacter()
	{
		UClass* Class = ATPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackCharEvent", &ATPSCharacter::execAttackCharEvent },
			{ "ChangeMovementState", &ATPSCharacter::execChangeMovementState },
			{ "CharacterUpdate", &ATPSCharacter::execCharacterUpdate },
			{ "GetCurrentWeapon", &ATPSCharacter::execGetCurrentWeapon },
			{ "GetCursorToWorld", &ATPSCharacter::execGetCursorToWorld },
			{ "InitWeapon", &ATPSCharacter::execInitWeapon },
			{ "InputAttackPressed", &ATPSCharacter::execInputAttackPressed },
			{ "InputAttackReleased", &ATPSCharacter::execInputAttackReleased },
			{ "InputAxisX", &ATPSCharacter::execInputAxisX },
			{ "InputAxisY", &ATPSCharacter::execInputAxisY },
			{ "MovementTick", &ATPSCharacter::execMovementTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics
	{
		struct TPSCharacter_eventAttackCharEvent_Parms
		{
			bool bIsFiring;
		};
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((TPSCharacter_eventAttackCharEvent_Parms*)Obj)->bIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TPSCharacter_eventAttackCharEvent_Parms), &Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::NewProp_bIsFiring,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Func\n" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "Func" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "AttackCharEvent", nullptr, nullptr, sizeof(TPSCharacter_eventAttackCharEvent_Parms), Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_AttackCharEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_AttackCharEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_ChangeMovementState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_ChangeMovementState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_ChangeMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "ChangeMovementState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_ChangeMovementState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_ChangeMovementState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_ChangeMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_ChangeMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_CharacterUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_CharacterUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_CharacterUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "CharacterUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_CharacterUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_CharacterUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_CharacterUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_CharacterUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics
	{
		struct TPSCharacter_eventGetCurrentWeapon_Parms
		{
			AWeaponDefault* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeaponDefault_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(TPSCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics
	{
		struct TPSCharacter_eventGetCursorToWorld_Parms
		{
			UDecalComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventGetCursorToWorld_Parms, ReturnValue), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "GetCursorToWorld", nullptr, nullptr, sizeof(TPSCharacter_eventGetCursorToWorld_Parms), Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_InitWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_InitWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_InitWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "InitWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_InitWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_InitWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_InitWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_InitWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_InputAttackPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_InputAttackPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_InputAttackPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "InputAttackPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_InputAttackPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_InputAttackPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_InputAttackPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_InputAttackPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_InputAttackReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_InputAttackReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_InputAttackReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "InputAttackReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_InputAttackReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_InputAttackReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_InputAttackReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_InputAttackReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics
	{
		struct TPSCharacter_eventInputAxisX_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventInputAxisX_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "InputAxisX", nullptr, nullptr, sizeof(TPSCharacter_eventInputAxisX_Parms), Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_InputAxisX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_InputAxisX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics
	{
		struct TPSCharacter_eventInputAxisY_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventInputAxisY_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Inputs\n" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "Inputs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "InputAxisY", nullptr, nullptr, sizeof(TPSCharacter_eventInputAxisY_Parms), Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_InputAxisY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_InputAxisY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics
	{
		struct TPSCharacter_eventMovementTick_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPSCharacter_eventMovementTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Tick Func\n" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "Tick Func" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "MovementTick", nullptr, nullptr, sizeof(TPSCharacter_eventMovementTick_Parms), Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_MovementTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSCharacter_MovementTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATPSCharacter_NoRegister()
	{
		return ATPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CursorSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementSpeedInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintRunEnabled_MetaData[];
#endif
		static void NewProp_SprintRunEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SprintRunEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkEnabled_MetaData[];
#endif
		static void NewProp_WalkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WalkEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimEnabled_MetaData[];
#endif
		static void NewProp_AimEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AimEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InitWeaponClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPSCharacter_AttackCharEvent, "AttackCharEvent" }, // 2237424822
		{ &Z_Construct_UFunction_ATPSCharacter_ChangeMovementState, "ChangeMovementState" }, // 2037745253
		{ &Z_Construct_UFunction_ATPSCharacter_CharacterUpdate, "CharacterUpdate" }, // 273478313
		{ &Z_Construct_UFunction_ATPSCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 199418952
		{ &Z_Construct_UFunction_ATPSCharacter_GetCursorToWorld, "GetCursorToWorld" }, // 3156560870
		{ &Z_Construct_UFunction_ATPSCharacter_InitWeapon, "InitWeapon" }, // 2356188504
		{ &Z_Construct_UFunction_ATPSCharacter_InputAttackPressed, "InputAttackPressed" }, // 1423218730
		{ &Z_Construct_UFunction_ATPSCharacter_InputAttackReleased, "InputAttackReleased" }, // 3830270513
		{ &Z_Construct_UFunction_ATPSCharacter_InputAxisX, "InputAxisX" }, // 774155260
		{ &Z_Construct_UFunction_ATPSCharacter_InputAxisY, "InputAxisY" }, // 1234255907
		{ &Z_Construct_UFunction_ATPSCharacter_MovementTick, "MovementTick" }, // 3350724820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct FCharacterSpeedInfo\n//{\n//\x09GENERATED_BODY()\n//\n//\n//};\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPSCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FCharacterSpeedInfo\n{\n       GENERATED_BODY()\n\n\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorMaterial_MetaData[] = {
		{ "Category", "Cursor" },
		{ "Comment", "//Cursor\n" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "Cursor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorMaterial = { "CursorMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, CursorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorSize_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorSize = { "CursorSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, CursorSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementState_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//Movement\n" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "Movement" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, MovementState), Z_Construct_UEnum_TPS_EMovementState, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementSpeedInfo_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementSpeedInfo = { "MovementSpeedInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, MovementSpeedInfo), Z_Construct_UScriptStruct_FCharacterSpeed, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementSpeedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementSpeedInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_SprintRunEnabled_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_SprintRunEnabled_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->SprintRunEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_SprintRunEnabled = { "SprintRunEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_SprintRunEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_SprintRunEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_SprintRunEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WalkEnabled_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WalkEnabled_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->WalkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WalkEnabled = { "WalkEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WalkEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WalkEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WalkEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_AimEnabled_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_AimEnabled_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->AimEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_AimEnabled = { "AimEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_AimEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_AimEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_AimEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_InitWeaponClass_MetaData[] = {
		{ "Category", "Demo" },
		{ "Comment", "//for demo \n" },
		{ "ModuleRelativePath", "TPSCharacter.h" },
		{ "ToolTip", "for demo" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_InitWeaponClass = { "InitWeaponClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSCharacter, InitWeaponClass), Z_Construct_UClass_AWeaponDefault_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_InitWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_InitWeaponClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_CursorSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_MovementSpeedInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_SprintRunEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_WalkEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_AimEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_InitWeaponClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSCharacter_Statics::ClassParams = {
		&ATPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSCharacter, 451343493);
	template<> TPS_API UClass* StaticClass<ATPSCharacter>()
	{
		return ATPSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSCharacter(Z_Construct_UClass_ATPSCharacter, &ATPSCharacter::StaticClass, TEXT("/Script/TPS"), TEXT("ATPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
