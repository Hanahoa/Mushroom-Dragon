// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/BoxComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Unit.generated.h"


UCLASS()
class OURPROJECT_API AUnit : public AActor
{
	GENERATED_BODY()
	
public:	

	AUnit()
	{
		
	}

	// Sets default values for this actor's properties
	AUnit(FVector startPosition, FVector endPosition, FString parentName);

	UPROPERTY(EditAnywhere)
		UPrimitiveComponent sphere;

	UPROPERTY(EditAnywhere)
		FVector startPosition;

	UPROPERTY(EditAnywhere)
		FVector endPosition;

	UPROPERTY(EditAnywhere)
		FString parentName;

	UPROPERTY(EditAnywhere)
		UBoxComponent *collisionBox;

	UPROPERTY(EditAnywhere)
		float moveDuration;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	float elapsedTime;
	bool isMovingForward;
};
