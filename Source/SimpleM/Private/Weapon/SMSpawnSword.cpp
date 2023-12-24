// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/SMSpawnSword.h"
#include "SMBaseCharacter.h"
#include "SMTargetSystem.h"
#include "Weapon/SMProjectile.h"

void ASMSpawnSword::StartFire()
{
	SpawnActorsInSphereRadius();
}

void ASMSpawnSword::MakeShot()
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

void ASMSpawnSword::CreatreSphere()
{
	
}

void ASMSpawnSword::SpawnActorsInSphereRadius()
{
	if (!GetWorld()->GetFirstPlayerController())return;
	const ASMBaseCharacter* YourCharacter = Cast<ASMBaseCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
	const auto Target = YourCharacter->TargetSystem->GetCurrentTarget();
	if(!Target) return;
	if(Target == YourCharacter)  return;
	if (ActorToSpawn)
	{
		// Randomly spawn actors within the specified radius
		for (int32 i = 0; i < NumberOfActorsToSpawn; ++i)
		{
			FVector SphereCenter = Target->GetActorLocation();
			float SphereRadius = 2000.0f; // Adjust the radius as needed

			float StartOffset = 100;
			// Generate a random point within the sphere
			FVector RandomPointInSphere = FMath::RandPointInBox(FBox(FVector(StartOffset) + SphereCenter - FVector(SphereRadius),FVector(StartOffset) + SphereCenter + FVector(SphereRadius)));
			auto SpawnedActor = GetWorld()->SpawnActorDeferred<ASMProjectile>(ActorToSpawn, FTransform(RandomPointInSphere));
			if (SpawnedActor)
			{
				if(SpawnedActor->GetActorLocation().Z > GetActorLocation().Z)
				{
					
					FVector StartLocation = SpawnedActor->GetActorLocation();
					FVector TargetLocation = Target->GetActorLocation();
					FVector DirectionToTarget = TargetLocation - StartLocation;
					//DirectionToTarget.Z = 50.0f; // Ignore the Z-axis if you don't want vertical rotation
					const FRotator NewRotation = FRotationMatrix::MakeFromX(DirectionToTarget).Rotator().GetNormalized();
					FVector Direction = (Target->GetActorLocation() - SpawnedActor->GetActorLocation()).GetSafeNormal();
					SpawnedActor->SetShootDirection(Direction);
					SpawnedActor->SetActorRotation(NewRotation);
					SpawnedActor->SetLifeSpan(3.f);
					SpawnedActor->FinishSpawning(FTransform(RandomPointInSphere));
				}
				else
				{
					SpawnedActor->Destroy();
				}
			}
		}
	}
}