// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/WeaponDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponDefault() {}
// Cross Module References
	TPS_API UClass* Z_Construct_UClass_AWeaponDefault_NoRegister();
	TPS_API UClass* Z_Construct_UClass_AWeaponDefault();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TPS();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	TPS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponDefault::execSetWeaponStateFire)
	{
		P_GET_UBOOL(Z_Param_bIsFire);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeaponStateFire(Z_Param_bIsFire);
		P_NATIVE_END;
	}
	void AWeaponDefault::StaticRegisterNativesAWeaponDefault()
	{
		UClass* Class = AWeaponDefault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWeaponStateFire", &AWeaponDefault::execSetWeaponStateFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics
	{
		struct WeaponDefault_eventSetWeaponStateFire_Parms
		{
			bool bIsFire;
		};
		static void NewProp_bIsFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::NewProp_bIsFire_SetBit(void* Obj)
	{
		((WeaponDefault_eventSetWeaponStateFire_Parms*)Obj)->bIsFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::NewProp_bIsFire = { "bIsFire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponDefault_eventSetWeaponStateFire_Parms), &Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::NewProp_bIsFire_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::NewProp_bIsFire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponDefault, nullptr, "SetWeaponStateFire", nullptr, nullptr, sizeof(WeaponDefault_eventSetWeaponStateFire_Parms), Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponDefault_NoRegister()
	{
		return AWeaponDefault::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFiring_MetaData[];
#endif
		static void NewProp_WeaponFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponFiring;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponDefault_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponDefault_SetWeaponStateFire, "SetWeaponStateFire" }, // 3243338262
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponFireStart);//ToDo Delegate on event weapon fire - Anim char, state char...\n" },
		{ "IncludePath", "WeaponDefault.h" },
		{ "ModuleRelativePath", "WeaponDefault.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponFireStart);ToDo Delegate on event weapon fire - Anim char, state char..." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon = { "SkeletalMeshWeapon", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, SkeletalMeshWeapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon = { "StaticMeshWeapon", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, StaticMeshWeapon), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation = { "ShootLocation", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, ShootLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting_MetaData[] = {
		{ "Category", "FireLogic" },
		{ "ModuleRelativePath", "WeaponDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting = { "WeaponSetting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponDefault, WeaponSetting), Z_Construct_UScriptStruct_FWeaponInfo, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_MetaData[] = {
		{ "Category", "FireLogic" },
		{ "ModuleRelativePath", "WeaponDefault.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_SetBit(void* Obj)
	{
		((AWeaponDefault*)Obj)->WeaponFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring = { "WeaponFiring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponDefault), &Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_SkeletalMeshWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_StaticMeshWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_ShootLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponDefault_Statics::NewProp_WeaponFiring,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponDefault_Statics::ClassParams = {
		&AWeaponDefault::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponDefault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponDefault, 3587566163);
	template<> TPS_API UClass* StaticClass<AWeaponDefault>()
	{
		return AWeaponDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponDefault(Z_Construct_UClass_AWeaponDefault, &AWeaponDefault::StaticClass, TEXT("/Script/TPS"), TEXT("AWeaponDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
