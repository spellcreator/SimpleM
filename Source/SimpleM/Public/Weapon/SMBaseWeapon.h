// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SMBaseWeapon.generated.h"

class ASMBaseCharacter;
class USkeletalMeshComponent;
UCLASS()
class SIMPLEM_API ASMBaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASMBaseWeapon();

	virtual void StartFire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components")
	USkeletalMeshComponent* WeaponMesh;
	UPROPERTY(EditDefaultsOnly, Category="Weapon")
	FName WeaponAttachPointName = "Weapon_R";

public:
	virtual void MakeShot(){}
	FVector GetMuzzleSocketLocation() const;
};
