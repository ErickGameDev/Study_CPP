// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Study_CPP : ModuleRules
{
	public Study_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
