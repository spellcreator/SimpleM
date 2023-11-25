// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/SMBaseWeapon.h"
#include "Components/SkeletalMeshComponent.h"

DEFINE_LOG_CATEGORY_STATIC(WeaponLog, All, All);

// Sets default values
ASMBaseWeapon::ASMBaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponComp");
	SetRootComponent(WeaponMesh);
}

void ASMBaseWeapon::StartFire()
{
	UE_LOG(WeaponLog,Display, TEXT("Fire"));
	MakeShot();
}

// Called when the game starts or when spawned
void ASMBaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}


void ASMBaseWeapon::MakeShot()
{
}

FVector ASMBaseWeapon::GetMuzzleSocketLocation() const
{
	return WeaponMesh->GetSocketLocation(WeaponAttachPointName);
}




