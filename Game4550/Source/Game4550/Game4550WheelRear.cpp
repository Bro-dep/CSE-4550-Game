// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game4550WheelRear.h"
#include "UObject/ConstructorHelpers.h"

UGame4550WheelRear::UGame4550WheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}