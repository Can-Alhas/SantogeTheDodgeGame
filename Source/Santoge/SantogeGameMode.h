// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SantogeGameMode.generated.h"

UCLASS(minimalapi)
class ASantogeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASantogeGameMode();

	UPROPERTY(EditAnywhere, Category = "Spawn")
		TSubclassOf<class AGift> GiftBlueprint;
		

	float SpawnTimer;

	virtual void Tick(float DeltaTime) override;

	FVector GenerateRandomLocation();
};



