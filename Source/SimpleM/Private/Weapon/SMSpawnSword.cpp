// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/SMSpawnSword.h"
#include "SMBaseCharacter.h"
#include "SMTargetSystem.h"
#include "VectorTypes.h"
#include "Weapon/SMProjectile.h"

void ASMSpawnSword::StartFire()
{
	CreatreSphere();
}

void ASMSpawnSword::MakeShot()
{
}

ASMProjectile* ASMSpawnSword::CreateProjectile(TSubclassOf<ASMProjectile>* SpawnedActor, const FTransform& SpawnProjectileTransform) const
{
	if (SpawnedActor == nullptr) return nullptr;
	//auto CastToUclass = Cast<UClass>(SpawnedActor);
	//const auto Projectile = GetWorld()->SpawnActorDeferred<ASMProjectile>(ActorToSpawn, SpawnProjectileTransform);
	return  GetWorld()->SpawnActorDeferred<ASMProjectile>(*SpawnedActor, SpawnProjectileTransform);
}

void ASMSpawnSword::CreatreSphere()
{
	const auto Transform = SpawnTransform(FRotator::ZeroRotator, GetMuzzleSocketLocation());
	const auto Target = GetTarget();
	if (ActorToSpawn)
	{
		// Randomly spawn actors within the specified radius
		for (int32 i = 0; i < NumberOfActorsToSpawn; ++i)
		{
			FVector SphereCenter = Target->GetActorLocation();
			float SphereRadius = 2000.0f; // Adjust the radius as needed

			float StartOffset = 100;
			
			FVector RandomPointInSphere = FMath::RandPointInBox(FBox(FVector(StartOffset) + SphereCenter - FVector(SphereRadius),FVector(StartOffset) + SphereCenter + FVector(SphereRadius)));
			const auto Projectile = CreateProjectile(&ActorToSpawn, FTransform(RandomPointInSphere));
			CurrentProjectile = Projectile;
			if (Projectile)
			{
				if(Projectile->GetActorLocation().Z > GetActorLocation().Z)
				{
					
					const FVector DirectionToTarget = ProjectileDirectionToTarget(Target, Projectile);
					//DirectionToTarget.Z = 50.0f; // Ignore the Z-axis if you don't want vertical rotation
					const FRotator NewRotation = FRotationMatrix::MakeFromX(DirectionToTarget).Rotator().GetNormalized();
					//FVector Direction = (Target->GetActorLocation() - Projectile->GetActorLocation()).GetSafeNormal();
					//Projectile->SetShootDirection(Direction);
					Projectile->SetActorRotation(NewRotation);
					//Projectile->ChangeMaterialParam();
					Projectile->SetLifeSpan(5.f);
					Projectile->FinishSpawning(FTransform(RandomPointInSphere));
				}
				else
				{
					Projectile->Destroy();
				}
			}
		}
	}
}

void ASMSpawnSword::SpawnActorsInSphereRadius()
{
	auto Target = GetTarget();
	if (ActorToSpawn)
	{
		// Randomly spawn actors within the specified radius
		for (int32 i = 0; i < NumberOfActorsToSpawn; ++i)
		{
			FVector SphereCenter = Target->GetActorLocation();
			float SphereRadius = 2000.0f; // Adjust the radius as needed

			float StartOffset = 100;
			
			FVector RandomPointInSphere = FMath::RandPointInBox(FBox(FVector(StartOffset) + SphereCenter - FVector(SphereRadius),FVector(StartOffset) + SphereCenter + FVector(SphereRadius)));
			auto UclassActorSpawn = Cast<UClass>(ActorToSpawn);
			auto SpawnedActor = GetWorld()->SpawnActorDeferred<ASMProjectile>(UclassActorSpawn, FTransform(RandomPointInSphere));
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

void ASMSpawnSword::AddProjMovement()
{
	const auto Target = GetTarget();
	FVector Direction = (Target->GetActorLocation() - CurrentProjectile->GetActorLocation()).GetSafeNormal();
	
	CurrentProjectile->SetShootDirection(Direction);
}

void ASMSpawnSword::MatFade()
{
	CurrentProjectile->ChangeMaterialParam();
	CurrentProjectile = nullptr;
}
