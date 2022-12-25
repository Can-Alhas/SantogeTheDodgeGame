// Copyright Epic Games, Inc. All Rights Reserved.

#include "SantogeGameMode.h"
#include "SantogePlayerController.h"
#include "SantogeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASantogeGameMode::ASantogeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASantogePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}