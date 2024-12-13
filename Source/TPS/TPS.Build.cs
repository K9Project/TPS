// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPS : ModuleRules
{
	public TPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore",
			"UMG",
			"HeadMountedDisplay",
			"Niagara",
			"PhysicsCore",
			"AIModule",
			"GameplayTasks",
			"GameplayTags",
			"NavigationSystem", 
			"OnlineSubsystem",
			"OnlineSubsystemNull",
			"NetCore",
			"FieldSystemEngine",
			"GeometryCollectionEngine",
			"AnimGraphRuntime",
			"EnhancedInput",
		});
    }
}
