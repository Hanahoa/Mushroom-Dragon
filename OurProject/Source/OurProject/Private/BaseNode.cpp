// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseNode.h"

// Sets default values
ABaseNode::ABaseNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void ABaseNode::BeginPlay()
{
	Super::BeginPlay();

	nodeMesh = neutralMesh;
	unitsOnNode = 0;
	controlledState = 0; 
}

// Called every frame
void ABaseNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABaseNode::addUnit(FString attackerName)
{
	if (controlledState == 0)
	{
		setState(attackerName);
		unitsOnNode++;
	}
	else if (isSameState(attackerName) == true)
	{
		unitsOnNode++;
	}
	else if(isSameState(attackerName) == false)
	{
		unitsOnNode--;
	}

	if (unitsOnNode == 0)
	{
		setState("Neutral");
	}
}

void ABaseNode::setState(FString name)
{
	if (name == "Neutral")
	{
		controlledState = 0;
		nodeMesh = neutralMesh;
	}
	else if (name == "Player")
	{
		controlledState = 1;
		nodeMesh = playerMesh;
	}
	else if(name == "enemy")
	{
		controlledState = 2; 
		nodeMesh = enemyMesh;
	}
}

bool ABaseNode::isSameState(FString name)
{
	if (name == "Player" && controlledState == 1)
	{
		return true;
	}
	else if (name == "Enemy" && controlledState == 2)
	{
		return true;
	}

	return false; 
}

