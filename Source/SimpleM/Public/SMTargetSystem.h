// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SMTargetSystem.generated.h"

class AActor;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMPLEM_API USMTargetSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USMTargetSystem();
	
	bool HasPlayerController(AActor* Actor);
	void SetSelectedTarget(AActor* NewTarget);


protected:
	virtual void BeginPlay() override;
	void UpdateTargetVisualization();

private:
	UPROPERTY()
	AActor* SelectedTarget;
	
};
