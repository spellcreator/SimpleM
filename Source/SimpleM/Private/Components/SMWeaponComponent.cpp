// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SMWeaponComponent.h"
#include "Weapon/SMBaseWeapon.h"
#include "GameFramework/Character.h"


// Sets default values for this component's properties
USMWeaponComponent::USMWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void USMWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	SpawnWeapon();
}

void USMWeaponComponent::SpawnWeapon()
{
	if (!GetWorld()) return;
	CurrentWeapon = GetWorld()->SpawnActor<ASMBaseWeapon>(WeaponClass);

	const ACharacter* Character = Cast<ACharacter>(GetOwner());
	if(!Character) return;
	if(!CurrentWeapon) return;

	const FAttachmentTransformRules	AttachmentRules(EAttachmentRule::SnapToTarget, false);
	CurrentWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);
}

void USMWeaponComponent::Fire()
{
	if(!CurrentWeapon)return;

	CurrentWeapon->StartFire();
}

