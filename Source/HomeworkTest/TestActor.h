#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS(Blueprintable)
class HOMEWORKTEST_API ATestActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Test")
	FVector CustomTransformPosition;

	UFUNCTION(BlueprintCallable, Category = "Test")
	FVector GetCurrentTransformPosition();

	UFUNCTION(BlueprintCallable, Category = "Test")
	FVector RandomTransformPosition();

public:
	// Sets default values for this actor's properties
	ATestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
