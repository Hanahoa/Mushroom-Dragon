// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DefenseComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OURPROJECT_API UDefenseComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDefenseComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int healthMultiplier = 2;

	UPROPERTY(VisibleAnywhere)
		AActor* node;

	UFUNCTION(BlueprintCallable)
		void UpdateNodeHealth(float health);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
