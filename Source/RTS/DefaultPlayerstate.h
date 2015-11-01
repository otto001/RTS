// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerState.h"
#include "Building.h"
#include "NpcController.h"
#include "DefaultPlayerstate.generated.h"



UCLASS()
class RTS_API ADefaultPlayerstate : public APlayerState
{
	GENERATED_BODY()
public:

	virtual void BeginPlay() override;

		//Id
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Identity)
		int32 CurrentUserIndex;

	//Buildings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Buildings)
		TArray<ABuilding*> OwnedBuildings;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Storage)
		TArray<AActor*> OwnedStorageBlocks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Storage)
		AActor* OwnedStorageBuilding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = NPCs)
		TArray<APawn*> OwnedNpcs;



	//Npc Networking
	TArray<APawn*> GetNpcsByState(TArray<APawn*> NpcArray, ENpcJob Job, ENpcTask Task);

	
};