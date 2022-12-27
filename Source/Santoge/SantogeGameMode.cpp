// Copyright Epic Games, Inc. All Rights Reserved.

#include "SantogeGameMode.h"
#include "SantogePlayerController.h"
#include "SantogeCharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "Gift.h"

ASantogeGameMode::ASantogeGameMode()
{

	PrimaryActorTick.bCanEverTick = true;

	// use our custom PlayerController class
	PlayerControllerClass = ASantogePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_SantogeCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	

}

void ASantogeGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SpawnTimer -= DeltaTime;

	if (SpawnTimer < 0.0f) {

		float NumberOfSecondsBetweenSpawn = 1.0f;

		SpawnTimer = NumberOfSecondsBetweenSpawn;

		UWorld* world = GetWorld();

		if (world) {
			FVector giftLocation = GenerateRandomLocation();

			AGift* gift = world->SpawnActor<AGift>(GiftBlueprint, giftLocation,
				FRotator::ZeroRotator);
		}
	}
}

FVector ASantogeGameMode::GenerateRandomLocation()
{
	FVector location;

	float minimum = 100;
	float maximum = 1000;

	location.X = FMath::RandRange(minimum, maximum);
	location.Y = FMath::RandRange(minimum, maximum);
	location.Z = 280;

	return location;

}