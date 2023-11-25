// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/SMThrowWeapon.h"
#include "Weapon/SMProjectile.h"
#include "Kismet/GameplayStatics.h"

void ASMThrowWeapon::StartFire()
{
	MakeShot();
}

void ASMThrowWeapon::MakeShot()
{
	const FTransform SpawnTransform(FRotator::ZeroRotator, GetMuzzleSocketLocation());

	auto Projectile = UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(), ProjectileClass, SpawnTransform);

	UGameplayStatics::FinishSpawningActor(Projectile, SpawnTransform);
}
