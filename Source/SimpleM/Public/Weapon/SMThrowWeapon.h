// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/SMBaseWeapon.h"
#include "SMThrowWeapon.generated.h"

class ASMBaseCharacter;
class ASMProjectile;
class USMTargetSystem;
/**
 * 
 */
UCLASS()
class SIMPLEM_API ASMThrowWeapon : public ASMBaseWeapon
{
	GENERATED_BODY()

public:
	virtual void StartFire() override;

	UPROPERTY()
	ASMBaseCharacter* BaseCharacter;

protected:
	
	virtual void MakeShot() override;
	
};
