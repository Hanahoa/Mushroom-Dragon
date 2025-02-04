// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseNode.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABaseNode::ABaseNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	nodeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Node"));
	RootComponent = nodeMesh;


}


// Called when the game starts or when spawned
void ABaseNode::BeginPlay()
{
	Super::BeginPlay();

	unitsOnNode = 0;
	controlledState = 1;

}

// Called every frame
void ABaseNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseNode::nodeClaimed(EClaimState botTeam)
{
	switch (botTeam)
	{
	case EClaimState::AntiVirus:
		if (nodeClaimState == EClaimState::Virus)
		{
			nodeMesh->SetMaterial(0, playerMat);
			nodeClaimState = EClaimState::Virus;
			UGameplayStatics::PlaySoundAtLocation(this, claimSound, GetActorLocation());
			health = maxHealth;
		}
		else
		{ 
			return;
		}
		break;

	case EClaimState::Virus:
		if (nodeClaimState == EClaimState::AntiVirus)
		{
			nodeMesh->SetMaterial(0, enemyMat);
			nodeClaimState = EClaimState::AntiVirus;
			UGameplayStatics::PlaySoundAtLocation(this, claimSound, GetActorLocation());
			health = maxHealth;
		}
		else
		{
			return;
		}
		break;

	default:
		break;
	}
}

bool ABaseNode::isCaptured()
{
	if (health <= 0.0f)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ABaseNode::takeDamage(float damage)
{
	health = health - damage;
	isCaptured();
}


void ABaseNode::addUnit(FString attackerName)
{
	if (isSameState(attackerName) == true)
		unitsOnNode++;
	else if(isSameState(attackerName) == false)
		unitsOnNode--;

	if (unitsOnNode == 0)
		flipControlledState();
}

void ABaseNode::setState(FString name)
{

	if (name == "Player")
	{
		controlledState = 1;
		nodeMesh->SetMaterial(0, enemyMat);
	}
	else if(name == "enemy")
	{
		controlledState = 2; 
		nodeMesh->SetMaterial(0, enemyMat);
	}
}

bool ABaseNode::isSameState(FString name)
{
	if (name == "Player" && controlledState == 1)
		return true;
	else if (name == "Enemy" && controlledState == 2)
		return true;

	return false; 
}

void ABaseNode::flipControlledState()
{
	if (controlledState == 1)
		controlledState = 2;
	else if (controlledState == 2)
		controlledState = 1; 
}
