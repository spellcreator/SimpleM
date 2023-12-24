// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/SMBaseWeapon.h"

#include "SMBaseCharacter.h"
#include "SMTargetSystem.h"
#include "Components/SkeletalMeshComponent.h"

DEFINE_LOG_CATEGORY_STATIC(WeaponLog, All, All);

// Sets default values
ASMBaseWeapon::ASMBaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponComp");
	if (!WeaponMesh) return;
	SetRootComponent(WeaponMesh);
}

void ASMBaseWeapon::StartFire()
{
	MakeShot();
}

// Called when the game starts or when spawned
void ASMBaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

FVector ASMBaseWeapon::GetMuzzleSocketLocation() const
{
	return WeaponMesh->GetSocketLocation(WeaponAttachPointName);
}




