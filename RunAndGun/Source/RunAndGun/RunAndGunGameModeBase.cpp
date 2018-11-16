// Thomas Arthur Simon

#include "RunAndGunGameModeBase.h"
#include "Blueprint/UserWidget.h"

void ARunAndGunGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (PlayerHUDClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDClass);

		if (CurrentWidget != nullptr)
			CurrentWidget->AddToViewport();
	}
}
