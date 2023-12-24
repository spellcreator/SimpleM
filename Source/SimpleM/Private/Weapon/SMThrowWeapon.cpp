// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/SMThrowWeapon.h"
#include "SMBaseCharacter.h"
#include "SMTargetSystem.h"
#include "Weapon/SMProjectile.h"

void ASMThrowWeapon::StartFire()
{
    MakeShot();
}

void ASMThrowWeapon::MakeShot()
{
    const FTransform SpawnTransform(FRotator::ZeroRotator, GetMuzzleSocketLocation());
    if (!GetWorld()->GetFirstPlayerController())return;
    ASMBaseCharacter* YourCharacter = Cast<ASMBaseCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
    auto Target = YourCharacter->TargetSystem->GetCurrentTarget();
    if(!Target) return;
    if(Target == YourCharacter)  return;
    const auto Projectile = GetWorld()->SpawnActorDeferred<ASMProjectile>(ProjectileClass, SpawnTransform);
    if (Projectile)
    {
        FVector Direction = (Target->GetActorLocation() - Projectile->GetActorLocation()).GetSafeNormal();
        Projectile->SetShootDirection(Direction);
        Projectile->FinishSpawning(SpawnTransform);
    }
}