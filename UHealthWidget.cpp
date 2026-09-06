#include "HealthWidget.h"
#include "PlayerStatsComponent.h"

void UHealthWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (TargetStatsComponent)
	{
		float HealthToDisplay = TargetStatsComponent->CurrentHealth;
		UpdateHealthTextPrompt(HealthToDisplay);
	}
}