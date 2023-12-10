// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/STU_PlayerHUDWidget.h"

#include "SMTargetSystem.h"
#include "Components/SMHealthComponent.h"

float USTU_PlayerHUDWidget::GetHealthPercent(AActor* Player) const
{
	//Player = GetOwningPlayerPawn();
	if (!Player)return 0.0f;

	const auto Component = Player->GetComponentByClass(USMHealthComponent::StaticClass());
	const auto HealthComponent = Cast<USMHealthComponent>(Component);

	if(!HealthComponent) return 0.0f;
	return HealthComponent->GetHealthPercent();
}

AActor* USTU_PlayerHUDWidget::GetActorTarget()
{
	auto Player = GetOwningPlayerPawn();
	if(!Player) return nullptr;

	const auto Component = Player->GetComponentByClass(USMTargetSystem::StaticClass());
	const auto TargetSystem = Cast<USMTargetSystem>(Component);

	if(!TargetSystem) return nullptr;
	return TargetSystem->GetCurrentTarget();
}