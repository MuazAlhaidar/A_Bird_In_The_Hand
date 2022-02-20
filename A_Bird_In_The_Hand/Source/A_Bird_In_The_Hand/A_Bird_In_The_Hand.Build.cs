// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class A_Bird_In_The_Hand : ModuleRules
{
	public A_Bird_In_The_Hand(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
	}
}
