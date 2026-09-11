// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game4550GameMode.h"
#include "Game4550PlayerController.h"

AGame4550GameMode::AGame4550GameMode()
{
	PlayerControllerClass = AGame4550PlayerController::StaticClass();
}
