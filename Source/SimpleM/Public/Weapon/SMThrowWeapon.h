// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/SMBaseWeapon.h"
#include "SMThrowWeapon.generated.h"

class ASMProjectile;

/**
 * 
 */
UCLASS()
class SIMPLEM_API ASMThrowWeapon : public ASMBaseWeapon
{
	GENERATED_BODY()

public:
	virtual void StartFire() override;

	

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapon")
	TSubclassOf<ASMProjectile> ProjectileClass;

	
	
	virtual void MakeShot() override;
	
};
