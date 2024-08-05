#include "TestActor.h"


FVector ATestActor::GetCurrentTransformPosition()
{
	return FVector(GetActorLocation());
}

FVector ATestActor::RandomTransformPosition()
{
	return FVector(CustomTransformPosition = FVector(rand(), rand(), rand()));
}

// Sets default values
ATestActor::ATestActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
