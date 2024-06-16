// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEWorkflowTest : ModuleRules
{
	public UEWorkflowTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
