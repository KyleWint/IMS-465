#include "PlayerStatsComponent.h"

UPlayerStatsComponent::UPlayerStatsComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPlayerStatsComponent::BeginPlay()
{
	Super::BeginPlay();

	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
	UE_LOG(LogTemp, Warning, TEXT("[PlayerStats] MaxHealth initialized to %f"), MaxHealth);
}