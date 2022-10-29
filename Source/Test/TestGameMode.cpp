// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestGameMode.h"
#include "TestHUD.h"
#include "TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestGameMode::ATestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestHUD::StaticClass();
}
