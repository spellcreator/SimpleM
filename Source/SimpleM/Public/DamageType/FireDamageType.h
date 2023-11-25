// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "FireDamageType.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEM_API UFireDamageType : public UDamageType
{
	GENERATED_BODY()
protected:
	void Burning();

	
};
