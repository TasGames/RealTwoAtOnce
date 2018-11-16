// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OutOfBounds.generated.h"

UCLASS()
class RUNANDGUN_API AOutOfBounds : public AActor
{
	GENERATED_BODY()
	
protected:

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	

	AOutOfBounds();
	
};
