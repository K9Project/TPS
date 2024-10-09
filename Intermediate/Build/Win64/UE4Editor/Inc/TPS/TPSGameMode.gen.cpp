// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS/TPSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSGameMode() {}
// Cross Module References
	TPS_API UClass* Z_Construct_UClass_ATPSGameMode_NoRegister();
	TPS_API UClass* Z_Construct_UClass_ATPSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TPS();
// End Cross Module References
	void ATPSGameMode::StaticRegisterNativesATPSGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATPSGameMode_NoRegister()
	{
		return ATPSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATPSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TPSGameMode.h" },
		{ "ModuleRelativePath", "TPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSGameMode_Statics::ClassParams = {
		&ATPSGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSGameMode, 1419359537);
	template<> TPS_API UClass* StaticClass<ATPSGameMode>()
	{
		return ATPSGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSGameMode(Z_Construct_UClass_ATPSGameMode, &ATPSGameMode::StaticClass, TEXT("/Script/TPS"), TEXT("ATPSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
