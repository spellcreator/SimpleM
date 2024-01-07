// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/SMThrowWeapon.h"
#include "SMBaseCharacter.h"
#include "SMTargetSystem.h"
#include "Weapon/SMProjectile.h"

void ASMThrowWeapon::StartFire()
{
    MakeShot();
    
}

//const FTransform SpawnTransform(FRotator::ZeroRotator, GetMuzzleSocketLocation());
//if (!GetWorld()->GetFirstPlayerController())return;
//ASMBaseCharacter* YourCharacter = Cast<ASMBaseCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
//auto Target = YourCharacter->TargetSystem->GetCurrentTarget();
//if(!Target) return;
//if(Target == YourCharacter)  return;
//const auto Projectile = GetWorld()->SpawnActorDeferred<ASMProjectile>(ProjectileClass, SpawnTransform);
//if (Projectile)
//{
//    FVector Direction = (Target->GetActorLocation() - Projectile->GetActorLocation()).GetSafeNormal();
//    Projectile->SetShootDirection(Direction);
//    Projectile->FinishSpawning(SpawnTransform);
//}

void ASMThrowWeapon::MakeShot()
{
    const auto Transform = SpawnTransform(FRotator::ZeroRotator, GetMuzzleSocketLocation());
    const auto Target = GetTarget();
   //const auto Projectile = CreateProjectile(ActorToSpawn, Transform);
   //if (Projectile)
   //{
   //    //FVector Direction = (Target->GetActorLocation() - Projectile->GetActorLocation()).GetSafeNormal();
   //    const FVector Direction = ProjectileDirectionToTarget(Target, Projectile);
   //    Projectile->SetShootDirection(Direction);
   //    Projectile->FinishSpawning(Transform);
   //}
}