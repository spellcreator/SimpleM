// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class SimpleM : ModuleRules
{
	public SimpleM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput"  });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		
		PublicIncludePaths.AddRange(new string[]
		{
			"SimpleM/Public/Player",
			"SimpleM/Public/Components",
			//"SimpleM/Public/Dev",
			//"SimpleM/Public/Weapon",
			//"SimpleM/Public/UI",
			"SimpleM/Public/Assets"
		});
		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
