// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/SMBaseWeapon.h"
#include "SMSpawnSword.generated.h"


class ASMBaseCharacter;
class ASMProjectile;
class USMTargetSystem;

/**
 * 
 */


UCLASS()
class SIMPLEM_API ASMSpawnSword : public ASMBaseWeapon
{
	GENERATED_BODY()
	virtual void StartFire() override;

	virtual void MakeShot() override;

	UPROPERTY()
	ASMBaseCharacter* BaseCharacter;

	void CreatreSphere();

public:

	// Function to spawn actors in a sphere radius
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SpawnActorsInSphereRadius();
public:
	
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<AActor> ActorToSpawn;

	// The radius within which actors will be spawned
	UPROPERTY(EditAnywhere, Category = "Spawning")
	float SpawnRadius;

	// The number of actors to spawn
	UPROPERTY(EditAnywhere, Category = "Spawning")
	int32 NumberOfActorsToSpawn;
	

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FColor SphereColor =  FColor::Red;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapon")
	TSubclassOf<ASMProjectile> ProjectileClass;
};
