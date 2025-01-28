// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseNode.generated.h"


UCLASS()
class OURPROJECT_API ABaseNode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseNode();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* nodeMesh;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* neutralMesh;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* playerMesh;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* enemyMesh;

	UPROPERTY(visibleAnywhere)
		int unitsOnNode; 

	UPROPERTY(visibleAnywhere)
		int controlledState;

	UFUNCTION()
		void addUnit(FString attacker);

	UFUNCTION()
		void setState(FString name);

	UFUNCTION()
		bool isSameState(FString name);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
