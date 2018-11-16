// Thomas Arthur Simon

#include "Turret.h"
#include "Projectile.h"


// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));

	FireRate = 0.5f;
	OffSet = FVector(100.f, 0.f, 0.f);
	CanFire = true;
}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Fire();
}

void ATurret::Fire()
{
	if (CanFire == true)
	{
		const FRotator FireRotation = GetActorRotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(OffSet);

		UWorld* const World = GetWorld();
		if (World != NULL)
			World->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, FireRotation);

		CanFire = false;
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ATurret::ShotTimerExpired, FireRate);

		CanFire = false;
	}
}

void ATurret::ShotTimerExpired()
{
	CanFire = true;
}
