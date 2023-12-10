// Fill out your copyright notice in the Description page of Project Settings.


#include "SMTargetSystem.h"

// Sets default values for this component's properties
USMTargetSystem::USMTargetSystem(): SelectedTarget(nullptr)
{
}

bool USMTargetSystem::HasPlayerController(AActor* Actor)
{
	if (Actor && Actor->GetWorld())
	{
		APlayerController* PlayerController = Actor->GetWorld()->GetFirstPlayerController();
		if (PlayerController)
		{
			// Actor имеет PlayerController
			return true;
		}
	}
	// Actor не имеет PlayerController
	return false;
}


void USMTargetSystem::SetSelectedTarget(AActor* NewTarget)
{
	if(NewTarget == nullptr) return;
	if (HasPlayerController(NewTarget->GetOwner()))
	{
		SelectedTarget = NewTarget;
		//UpdateTargetVisualization();
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("TargetName: %s"),  *SelectedTarget->GetName()));
	}
	
}

AActor* USMTargetSystem::GetCurrentTarget() const
{
	return SelectedTarget;
}

void USMTargetSystem::BeginPlay()
{
	Super::BeginPlay();
}

void USMTargetSystem::UpdateTargetVisualization()
{
	
}




