// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEM_API AMyHUD : public AHUD
{
	GENERATED_BODY()
protected:

	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="UI")
	TSubclassOf<UUserWidget> PlayerHudWidgetClass;
};
