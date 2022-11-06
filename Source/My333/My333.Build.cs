// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class My333 : ModuleRules
{
	public My333(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
