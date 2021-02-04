// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NarrativeGameV2 : ModuleRules
{
	public NarrativeGameV2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
