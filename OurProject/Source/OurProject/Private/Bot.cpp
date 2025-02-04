// Fill out your copyright notice in the Description page of Project Settings.


#include "Bot.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/GameplayStatics.h"
#include "Containers/Array.h"
#include "AIController.h"

// Sets default values
ABot::ABot()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	botMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Node"));
	botMesh->SetupAttachment(RootComponent);
	botCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	botCollider->SetupAttachment(RootComponent);
	botCollider->SetSphereRadius(50.0f); 
	botCollider->SetGenerateOverlapEvents(true);


}

void ABot::AttackNode(EClaimState nodeClaimState)
{
	switch (nodeClaimState)
	{
	case EClaimState::AntiVirus:
		if (botTeam == EClaimState::Virus)
		{
			targetNode->takeDamage(damage);
		}
		else
		{
			return;
		}
		break;

	case EClaimState::Virus:
		if (botTeam == EClaimState::AntiVirus)
		{
			targetNode->takeDamage(damage);
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

void ABot::BotDefeated()
{
	if (health <= 0.0f)
	{
		UGameplayStatics::PlaySoundAtLocation(this, deathByNodeSound, GetActorLocation());
		Destroy();
	}
}

void ABot::setTeam(EClaimState nodeClaimState)
{
	switch (nodeClaimState)
	{
	case EClaimState::AntiVirus:
		botMesh->SetMaterial(0, enemyMat);
		botTeam = EClaimState::AntiVirus;

		break;

	case EClaimState::Virus:
		botMesh->SetMaterial(0, playerMat);
		botTeam = EClaimState::Virus;

		break;

	default:
		break;
	}
}

void ABot::FindNearestTargetNode()
{

	FVector origin = GetActorLocation();

	nearestNode = FindNearestActor(LevelNodes, origin);

	if (nearestNode)
	{
		nearestNode = targetNode;
	}

}

AActor* ABot::FindNearestActor(const TArray<AActor*>& NodesToCheck, const FVector & Origin)
{
	if (LevelNodes.Num() == 0)
	{
		return nullptr;
	}

	float nearestDistance = FLT_MAX;

	for (AActor* Node : LevelNodes)
	{
		if (!Node)
		{
			continue;
		}

		float distance = FVector::DistSquared(Origin, Node->GetActorLocation());

		if (distance < nearestDistance)
		{
			nearestDistance = distance;
			nearestNode = Node;
		}
	}

	return nearestNode;
}


// Called when the game starts or when spawned
void ABot::BeginPlay()
{
	Super::BeginPlay();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABaseNode::StaticClass(), LevelNodes);

	FindNearestTargetNode();

}

// Called every frame
void ABot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

