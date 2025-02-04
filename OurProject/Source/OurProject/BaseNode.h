// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EClaimState.h"
#include "SoundDefinitions.h"
#include "Sound/SoundWave.h"
#include "BaseNode.generated.h"


UCLASS()
class OURPROJECT_API ABaseNode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseNode();

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* nodeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMaterialInterface* playerMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMaterialInterface* enemyMat;

	UPROPERTY(visibleAnywhere)
		int unitsOnNode; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int controlledState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float maxHealth = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float health = maxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EClaimState nodeClaimState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundWave* claimSound;

	UFUNCTION(BlueprintCallable)
		void nodeClaimed(EClaimState botTeam);

	UFUNCTION(BlueprintCallable)
		bool isCaptured();

	UFUNCTION()
		void takeDamage(float damage);

	UFUNCTION()
		void addUnit(FString attacker);

	UFUNCTION()
		void setState(FString name);

	UFUNCTION()
		bool isSameState(FString name);

	UFUNCTION()
		void flipControlledState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
