#include "PlayerMovementComponent.h"

APlayerMovementCharacter::APlayerMovementCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlayerMovementCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float Speed = 50.0f;
	FVector ForwardOffset = GetActorForwardVector() * Speed;

	AddActorLocalOffset(ForwardOffset);
}