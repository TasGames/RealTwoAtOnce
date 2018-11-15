// Thomas Arthur Simon

#include "MovingPlatform.h"


// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Platform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	Platform->SetupAttachment(RootComponent);

	Direction = 1;
}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	OriginPos = GetActorLocation();
	TargetPos = OriginPos;

	if (IsHorizontal == true)
	{
		Max = OriginPos.Y + Range;
		Min = OriginPos.Y - Range;
	}
	else
	{
		Max = OriginPos.Z + Range;
		Min = OriginPos.Z - Range;
	}
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Move();
}

void AMovingPlatform::Move()
{
	if (IsHorizontal == true)
	{
		if (Min >= TargetPos.Y)
			Direction = 1;
		else if (Max <= TargetPos.Y)
			Direction = -1;
	}
	else
	{
		if (Min >= TargetPos.Z)
			Direction = 1;
		else if (Max <= TargetPos.Z)
			Direction = -1;
	}

	TotalMove = MoveSpeed * Direction;

	if (IsHorizontal == true)
		TargetPos.Y += TotalMove;
	else
		TargetPos.Z += TotalMove;

	SetActorLocation(TargetPos);
}