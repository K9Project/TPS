// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Types.generated.h"

UENUM(BlueprintType)
enum class EMovementState : uint8
{
	Aim_State	  	UMETA(DisplayName = "Aim State"),
	AimWalk_State 	UMETA(DisplayName = "AimWalk State"),
	Walk_State	  	UMETA(DisplayName = "Walk State"),
	Run_State	  	UMETA(DisplayName = "Run State"),
	SprintRun_State 	UMETA(DisplayName = "SprintRun State")
};

USTRUCT(BlueprintType)
struct FCharacterSpeed
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float AimSpeedNormal = 300.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float WalkSpeedNormal = 200.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float RunSpeedNormal = 600.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float AimSpeedWalk = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float SprintRunSpeedRun = 800.0f;
};

USTRUCT(BlueprintType)
struct FProjectileInfo
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWhrite, Category = "ProjectileSetting")
		TSubclassOf<class  AProjectileDefault> Projectile = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWhrite, Category = "ProjectileSetting")
		float ProjectileDamage = 20.0f;
};

USTRUCT(BlueprintType)
struct FWeaponInfo
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWhrite, Category = "WeaponSetting")
		float WeaponDamage = 20.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWhrite, Category = "WeaponSetting")
		float RateOfFire = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWhrite, Category = "WeaponSetting")
		FProjectileInfo ProjectileSetting;
};

UCLASS()
class TPS_API UTypes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
};