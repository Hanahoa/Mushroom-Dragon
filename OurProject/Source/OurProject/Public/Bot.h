// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "SoundDefinitions.h"
#include "Sound/SoundWave.h"
#include "EClaimState.h"
#include "BaseNode.h"
#include "Bot.generated.h"

UCLASS()
class OURPROJECT_API ABot : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABot();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EClaimState botTeam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float health = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float damage = 2.0f;

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* botMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
		USphereComponent* botCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMaterialInterface* playerMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMaterialInterface* enemyMat;

	UPROPERTY()
		TArray<AActor*> LevelNodes;

	UPROPERTY()
		AActor* nearestNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References")
		ABaseNode* targetNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundWave* attackNodeSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundWave* attackBotSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundWave* deathByNodeSound;

	UFUNCTION(BlueprintCallable)
		void AttackNode(EClaimState nodeClaimState);

	UFUNCTION(BlueprintCallable)
		void BotDefeated();

	UFUNCTION(BlueprintCallable)
		void setTeam(EClaimState nodeClaimState);

	UFUNCTION(BlueprintCallable)
		void FindNearestTargetNode();

	UFUNCTION(BlueprintCallable)
		AActor* FindNearestActor(const TArray<AActor*>& NodesToCheck, const FVector& Origin);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
