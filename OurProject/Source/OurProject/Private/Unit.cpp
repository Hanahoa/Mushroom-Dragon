// Fill out your copyright notice in the Description page of Project Settings.


#include "Unit.h"
#include "BaseNode.h"

// Sets default values
AUnit::AUnit(FVector startPosition, FVector endPosition, FString parentName)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->startPosition = startPosition;
	this->endPosition = endPosition;
	this->parentName = parentName;


	elapsedTime = 0.0f;
	isMovingForward = false;

	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	collisionBox->SetupAttachment(RootComponent);
	collisionBox->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f)); // Adjust size as needed
	collisionBox->SetCollisionProfileName(TEXT("Trigger"));
}

// Called when the game starts or when spawned
void AUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (moveDuration > 0.0f)
	{
		elapsedTime += DeltaTime;
		float Alpha = FMath::Clamp(elapsedTime / moveDuration, 0.0f, 1.0f);
		FVector newLocation = FMath::Lerp(startPosition, endPosition, Alpha);
		SetActorLocation(newLocation);

		if (elapsedTime >= moveDuration)
		{
			elapsedTime = 0.0f;
			isMovingForward = !isMovingForward;
			Swap(startPosition, endPosition);

			TArray<AActor*> overlappingActors;
			collisionBox->GetOverlappingActors(overlappingActors);

			for (AActor* Actor : overlappingActors)
			{
				if (Actor && Actor->IsA(ABaseNode::StaticClass()))
				{
					ABaseNode *node = Cast<ABaseNode>(Actor);
					node->addUnit(parentName);
				}
			}
		}
	}
}
