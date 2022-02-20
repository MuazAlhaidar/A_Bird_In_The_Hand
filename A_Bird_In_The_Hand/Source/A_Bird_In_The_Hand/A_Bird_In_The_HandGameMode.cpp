// Copyright Epic Games, Inc. All Rights Reserved.

#include "A_Bird_In_The_HandGameMode.h"
#include "A_Bird_In_The_HandPlayerController.h"
#include "A_Bird_In_The_HandCharacter.h"
#include "UObject/ConstructorHelpers.h"

AA_Bird_In_The_HandGameMode::AA_Bird_In_The_HandGameMode() {
	// use our custom PlayerController class
	PlayerControllerClass = AA_Bird_In_The_HandPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr) {
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}