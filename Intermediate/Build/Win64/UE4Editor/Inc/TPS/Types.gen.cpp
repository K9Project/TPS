// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/Types.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypes() {}
// Cross Module References
	TPS_API UEnum* Z_Construct_UEnum_TPS_EMovementState();
	UPackage* Z_Construct_UPackage__Script_TPS();
	TPS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
	TPS_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TPS_API UClass* Z_Construct_UClass_AProjectileDefault_NoRegister();
	TPS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpeed();
	TPS_API UClass* Z_Construct_UClass_UTypes_NoRegister();
	TPS_API UClass* Z_Construct_UClass_UTypes();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EMovementState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TPS_EMovementState, Z_Construct_UPackage__Script_TPS(), TEXT("EMovementState"));
		}
		return Singleton;
	}
	template<> TPS_API UEnum* StaticEnum<EMovementState>()
	{
		return EMovementState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementState(EMovementState_StaticEnum, TEXT("/Script/TPS"), TEXT("EMovementState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TPS_EMovementState_Hash() { return 2430035360U; }
	UEnum* Z_Construct_UEnum_TPS_EMovementState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementState"), 0, Get_Z_Construct_UEnum_TPS_EMovementState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementState::Aim_State", (int64)EMovementState::Aim_State },
				{ "EMovementState::AimWalk_State", (int64)EMovementState::AimWalk_State },
				{ "EMovementState::Walk_State", (int64)EMovementState::Walk_State },
				{ "EMovementState::Run_State", (int64)EMovementState::Run_State },
				{ "EMovementState::SprintRun_State", (int64)EMovementState::SprintRun_State },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aim_State.DisplayName", "Aim State" },
				{ "Aim_State.Name", "EMovementState::Aim_State" },
				{ "AimWalk_State.DisplayName", "AimWalk State" },
				{ "AimWalk_State.Name", "EMovementState::AimWalk_State" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Types.h" },
				{ "Run_State.DisplayName", "Run State" },
				{ "Run_State.Name", "EMovementState::Run_State" },
				{ "SprintRun_State.DisplayName", "SprintRun State" },
				{ "SprintRun_State.Name", "EMovementState::SprintRun_State" },
				{ "Walk_State.DisplayName", "Walk State" },
				{ "Walk_State.Name", "EMovementState::Walk_State" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TPS,
				nullptr,
				"EMovementState",
				"EMovementState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FWeaponInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TPS_API uint32 Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponInfo, Z_Construct_UPackage__Script_TPS(), TEXT("WeaponInfo"), sizeof(FWeaponInfo), Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash());
	}
	return Singleton;
}
template<> TPS_API UScriptStruct* StaticStruct<FWeaponInfo>()
{
	return FWeaponInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponInfo(FWeaponInfo::StaticStruct, TEXT("/Script/TPS"), TEXT("WeaponInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TPS_StaticRegisterNativesFWeaponInfo
{
	FScriptStruct_TPS_StaticRegisterNativesFWeaponInfo()
	{
		UScriptStruct::DeferCppStructOps<FWeaponInfo>(FName(TEXT("WeaponInfo")));
	}
} ScriptStruct_TPS_StaticRegisterNativesFWeaponInfo;
	struct Z_Construct_UScriptStruct_FWeaponInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "WeaponSetting" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, WeaponDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "WeaponSetting" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, RateOfFire), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting_MetaData[] = {
		{ "Category", "WeaponSetting" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting = { "ProjectileSetting", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInfo, ProjectileSetting), Z_Construct_UScriptStruct_FProjectileInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_WeaponDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewProp_ProjectileSetting,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
		nullptr,
		&NewStructOps,
		"WeaponInfo",
		sizeof(FWeaponInfo),
		alignof(FWeaponInfo),
		Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponInfo"), sizeof(FWeaponInfo), Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash() { return 3705830554U; }
class UScriptStruct* FProjectileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TPS_API uint32 Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileInfo, Z_Construct_UPackage__Script_TPS(), TEXT("ProjectileInfo"), sizeof(FProjectileInfo), Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash());
	}
	return Singleton;
}
template<> TPS_API UScriptStruct* StaticStruct<FProjectileInfo>()
{
	return FProjectileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectileInfo(FProjectileInfo::StaticStruct, TEXT("/Script/TPS"), TEXT("ProjectileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TPS_StaticRegisterNativesFProjectileInfo
{
	FScriptStruct_TPS_StaticRegisterNativesFProjectileInfo()
	{
		UScriptStruct::DeferCppStructOps<FProjectileInfo>(FName(TEXT("ProjectileInfo")));
	}
} ScriptStruct_TPS_StaticRegisterNativesFProjectileInfo;
	struct Z_Construct_UScriptStruct_FProjectileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, Projectile), Z_Construct_UClass_AProjectileDefault_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage_MetaData[] = {
		{ "Category", "ProjectileSetting" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage = { "ProjectileDamage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileInfo, ProjectileDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileDamage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
		nullptr,
		&NewStructOps,
		"ProjectileInfo",
		sizeof(FProjectileInfo),
		alignof(FProjectileInfo),
		Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectileInfo"), sizeof(FProjectileInfo), Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProjectileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectileInfo_Hash() { return 119442531U; }
class UScriptStruct* FCharacterSpeed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TPS_API uint32 Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSpeed, Z_Construct_UPackage__Script_TPS(), TEXT("CharacterSpeed"), sizeof(FCharacterSpeed), Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash());
	}
	return Singleton;
}
template<> TPS_API UScriptStruct* StaticStruct<FCharacterSpeed>()
{
	return FCharacterSpeed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterSpeed(FCharacterSpeed::StaticStruct, TEXT("/Script/TPS"), TEXT("CharacterSpeed"), false, nullptr, nullptr);
static struct FScriptStruct_TPS_StaticRegisterNativesFCharacterSpeed
{
	FScriptStruct_TPS_StaticRegisterNativesFCharacterSpeed()
	{
		UScriptStruct::DeferCppStructOps<FCharacterSpeed>(FName(TEXT("CharacterSpeed")));
	}
} ScriptStruct_TPS_StaticRegisterNativesFCharacterSpeed;
	struct Z_Construct_UScriptStruct_FCharacterSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSpeedNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSpeedNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeedNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeedNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeedNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSpeedWalk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSpeedWalk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintRunSpeedRun_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintRunSpeedRun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSpeed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal = { "AimSpeedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, AimSpeedNormal), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal = { "WalkSpeedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, WalkSpeedNormal), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal = { "RunSpeedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, RunSpeedNormal), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk = { "AimSpeedWalk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, AimSpeedWalk), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun = { "SprintRunSpeedRun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSpeed, SprintRunSpeedRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_WalkSpeedNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_RunSpeedNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_AimSpeedWalk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeed_Statics::NewProp_SprintRunSpeedRun,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSpeed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
		nullptr,
		&NewStructOps,
		"CharacterSpeed",
		sizeof(FCharacterSpeed),
		alignof(FCharacterSpeed),
		Z_Construct_UScriptStruct_FCharacterSpeed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpeed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterSpeed"), sizeof(FCharacterSpeed), Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterSpeed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterSpeed_Hash() { return 2478378709U; }
	void UTypes::StaticRegisterNativesUTypes()
	{
	}
	UClass* Z_Construct_UClass_UTypes_NoRegister()
	{
		return UTypes::StaticClass();
	}
	struct Z_Construct_UClass_UTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Types.h" },
		{ "ModuleRelativePath", "Types.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTypes_Statics::ClassParams = {
		&UTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTypes, 1332455511);
	template<> TPS_API UClass* StaticClass<UTypes>()
	{
		return UTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTypes(Z_Construct_UClass_UTypes, &UTypes::StaticClass, TEXT("/Script/TPS"), TEXT("UTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
