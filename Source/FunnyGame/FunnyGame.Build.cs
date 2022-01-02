// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FunnyGame : ModuleRules
{
	public FunnyGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
