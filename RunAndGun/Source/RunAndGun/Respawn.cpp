// Thomas Arthur Simon

#include "Respawn.h"


// Sets default values
ARespawn::ARespawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARespawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARespawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

