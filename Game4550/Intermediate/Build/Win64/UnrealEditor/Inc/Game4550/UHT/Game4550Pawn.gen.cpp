// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game4550Pawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeGame4550Pawn() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent(ETypeConstructPhase);
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Game4550(ETypeConstructPhase);
GAME4550_API UClass* Z_Construct_UClass_AGame4550Pawn(ETypeConstructPhase);
GAME4550_API UClass* Z_Construct_UClass_AGame4550Pawn(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AGame4550Pawn Function BrakeLights ***************************************
struct Game4550Pawn_eventBrakeLights_Parms
{
	bool bBraking;
};
static FName NAME_AGame4550Pawn_BrakeLights = FName(TEXT("BrakeLights"));
void AGame4550Pawn::BrakeLights(bool bBraking)
{
	Game4550Pawn_eventBrakeLights_Parms Parms;
	Parms.bBraking=bBraking ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AGame4550Pawn_BrakeLights);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_BrakeLights_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the brake lights are turned on or off */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the brake lights are turned on or off" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BrakeLights constinit property declarations ***************************
	static void NewProp_bBraking_SetBit(void* Obj)
	{
		((Game4550Pawn_eventBrakeLights_Parms*)Obj)->bBraking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBraking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BrakeLights constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BrakeLights Property Definitions **************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBraking = { "bBraking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Game4550Pawn_eventBrakeLights_Parms), &UHT_STATICS::NewProp_bBraking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBraking,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BrakeLights Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "BrakeLights", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<Game4550Pawn_eventBrakeLights_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(Game4550Pawn_eventBrakeLights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGame4550Pawn_BrakeLights(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class AGame4550Pawn Function BrakeLights *****************************************

// ********** Begin Class AGame4550Pawn Function DoBrake *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoBrake_Statics
struct UHT_STATICS
{
	struct Game4550Pawn_eventDoBrake_Parms
	{
		float BrakeValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle brake input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle brake input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoBrake constinit property declarations *******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoBrake constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoBrake Property Definitions ******************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BrakeValue = { "BrakeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Game4550Pawn_eventDoBrake_Parms, BrakeValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrakeValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DoBrake Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoBrake", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Game4550Pawn_eventDoBrake_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Game4550Pawn_eventDoBrake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoBrake(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoBrake)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BrakeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoBrake(Z_Param_BrakeValue);
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoBrake *********************************************

// ********** Begin Class AGame4550Pawn Function DoBrakeStart **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoBrakeStart_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle brake start input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle brake start input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoBrakeStart constinit property declarations **************************
// ********** End Function DoBrakeStart constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoBrakeStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoBrakeStart(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoBrakeStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoBrakeStart();
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoBrakeStart ****************************************

// ********** Begin Class AGame4550Pawn Function DoBrakeStop ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoBrakeStop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle brake stop input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle brake stop input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoBrakeStop constinit property declarations ***************************
// ********** End Function DoBrakeStop constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoBrakeStop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoBrakeStop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoBrakeStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoBrakeStop();
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoBrakeStop *****************************************

// ********** Begin Class AGame4550Pawn Function DoHandbrakeStart **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoHandbrakeStart_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle handbrake start input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle handbrake start input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoHandbrakeStart constinit property declarations **********************
// ********** End Function DoHandbrakeStart constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoHandbrakeStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoHandbrakeStart(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoHandbrakeStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoHandbrakeStart();
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoHandbrakeStart ************************************

// ********** Begin Class AGame4550Pawn Function DoHandbrakeStop ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoHandbrakeStop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle handbrake stop input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle handbrake stop input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoHandbrakeStop constinit property declarations ***********************
// ********** End Function DoHandbrakeStop constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoHandbrakeStop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoHandbrakeStop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoHandbrakeStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoHandbrakeStop();
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoHandbrakeStop *************************************

// ********** Begin Class AGame4550Pawn Function DoLookAround **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoLookAround_Statics
struct UHT_STATICS
{
	struct Game4550Pawn_eventDoLookAround_Parms
	{
		float YawDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle look input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle look input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoLookAround constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoLookAround constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoLookAround Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Game4550Pawn_eventDoLookAround_Parms, YawDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_YawDelta,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DoLookAround Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoLookAround", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Game4550Pawn_eventDoLookAround_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Game4550Pawn_eventDoLookAround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoLookAround(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoLookAround)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_YawDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLookAround(Z_Param_YawDelta);
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoLookAround ****************************************

// ********** Begin Class AGame4550Pawn Function DoResetVehicle ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoResetVehicle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle reset vehicle input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle reset vehicle input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoResetVehicle constinit property declarations ************************
// ********** End Function DoResetVehicle constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoResetVehicle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoResetVehicle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoResetVehicle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoResetVehicle();
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoResetVehicle **************************************

// ********** Begin Class AGame4550Pawn Function DoSteering ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoSteering_Statics
struct UHT_STATICS
{
	struct Game4550Pawn_eventDoSteering_Parms
	{
		float SteeringValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle steering input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle steering input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoSteering constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoSteering constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoSteering Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SteeringValue = { "SteeringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Game4550Pawn_eventDoSteering_Parms, SteeringValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SteeringValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DoSteering Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoSteering", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Game4550Pawn_eventDoSteering_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Game4550Pawn_eventDoSteering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoSteering(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoSteering)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SteeringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoSteering(Z_Param_SteeringValue);
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoSteering ******************************************

// ********** Begin Class AGame4550Pawn Function DoThrottle ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoThrottle_Statics
struct UHT_STATICS
{
	struct Game4550Pawn_eventDoThrottle_Parms
	{
		float ThrottleValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle throttle input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle throttle input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoThrottle constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoThrottle constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoThrottle Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ThrottleValue = { "ThrottleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Game4550Pawn_eventDoThrottle_Parms, ThrottleValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ThrottleValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DoThrottle Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoThrottle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Game4550Pawn_eventDoThrottle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Game4550Pawn_eventDoThrottle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoThrottle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoThrottle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrottleValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoThrottle(Z_Param_ThrottleValue);
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoThrottle ******************************************

// ********** Begin Class AGame4550Pawn Function DoToggleCamera ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_DoToggleCamera_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle toggle camera input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle toggle camera input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoToggleCamera constinit property declarations ************************
// ********** End Function DoToggleCamera constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "DoToggleCamera", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AGame4550Pawn_DoToggleCamera(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execDoToggleCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoToggleCamera();
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function DoToggleCamera **************************************

// ********** Begin Class AGame4550Pawn Function FlippedCheck **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AGame4550Pawn_FlippedCheck_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks if the car is flipped upside down and automatically resets it */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the car is flipped upside down and automatically resets it" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FlippedCheck constinit property declarations **************************
// ********** End Function FlippedCheck constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AGame4550Pawn, nullptr, "FlippedCheck", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AGame4550Pawn_FlippedCheck(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AGame4550Pawn::execFlippedCheck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlippedCheck();
	P_NATIVE_END;
}
// ********** End Class AGame4550Pawn Function FlippedCheck ****************************************

// ********** Begin Class AGame4550Pawn ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AGame4550Pawn_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Pawn class\n *  Handles common functionality for all vehicle types,\n *  including input handling and camera management.\n *  \n *  Specific vehicle configurations are handled in subclasses.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game4550Pawn.h" },
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Pawn class\nHandles common functionality for all vehicle types,\nincluding input handling and camera management.\n\nSpecific vehicle configurations are handled in subclasses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the front camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the front camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Front Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the back camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the back camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Back Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Back Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Steering Action */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throttle Action */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throttle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Brake Action */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handbrake Action */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handbrake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAroundAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Around Action */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Around Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle Camera Action */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle Camera Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetVehicleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset Vehicle Action */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset Vehicle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipCheckTime_MetaData[] = {
		{ "Category", "Flip Check" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time between automatic flip checks */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time between automatic flip checks" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipCheckMinDot_MetaData[] = {
		{ "Category", "Flip Check" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum dot product value for the vehicle's up direction that we still consider upright */" },
#endif
		{ "ModuleRelativePath", "Game4550Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum dot product value for the vehicle's up direction that we still consider upright" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGame4550Pawn constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrottleAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAroundAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleCameraAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetVehicleAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlipCheckTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlipCheckMinDot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGame4550Pawn constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DoBrake"), .Pointer = &AGame4550Pawn::execDoBrake },
		{ .NameUTF8 = UTF8TEXT("DoBrakeStart"), .Pointer = &AGame4550Pawn::execDoBrakeStart },
		{ .NameUTF8 = UTF8TEXT("DoBrakeStop"), .Pointer = &AGame4550Pawn::execDoBrakeStop },
		{ .NameUTF8 = UTF8TEXT("DoHandbrakeStart"), .Pointer = &AGame4550Pawn::execDoHandbrakeStart },
		{ .NameUTF8 = UTF8TEXT("DoHandbrakeStop"), .Pointer = &AGame4550Pawn::execDoHandbrakeStop },
		{ .NameUTF8 = UTF8TEXT("DoLookAround"), .Pointer = &AGame4550Pawn::execDoLookAround },
		{ .NameUTF8 = UTF8TEXT("DoResetVehicle"), .Pointer = &AGame4550Pawn::execDoResetVehicle },
		{ .NameUTF8 = UTF8TEXT("DoSteering"), .Pointer = &AGame4550Pawn::execDoSteering },
		{ .NameUTF8 = UTF8TEXT("DoThrottle"), .Pointer = &AGame4550Pawn::execDoThrottle },
		{ .NameUTF8 = UTF8TEXT("DoToggleCamera"), .Pointer = &AGame4550Pawn::execDoToggleCamera },
		{ .NameUTF8 = UTF8TEXT("FlippedCheck"), .Pointer = &AGame4550Pawn::execFlippedCheck },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGame4550Pawn_BrakeLights, "BrakeLights" }, // a3b939da7794d8eed825038f35ba792f0fd57c38
		{ &Z_Construct_UFunction_AGame4550Pawn_DoBrake, "DoBrake" }, // 42cb3ccf94093b0c7a347fc99f4d3e078b401aef
		{ &Z_Construct_UFunction_AGame4550Pawn_DoBrakeStart, "DoBrakeStart" }, // db3e8d547cfd65b32207b3d9e4db844e3bb100e9
		{ &Z_Construct_UFunction_AGame4550Pawn_DoBrakeStop, "DoBrakeStop" }, // c0f4efd595ec7ccbd0fda83c9f3b5e6d8b794fd6
		{ &Z_Construct_UFunction_AGame4550Pawn_DoHandbrakeStart, "DoHandbrakeStart" }, // 9dc148fd376201d1bdde73430706bf1238f11edb
		{ &Z_Construct_UFunction_AGame4550Pawn_DoHandbrakeStop, "DoHandbrakeStop" }, // 63ddf924ce6647609a38c13b638e7248b6e04274
		{ &Z_Construct_UFunction_AGame4550Pawn_DoLookAround, "DoLookAround" }, // 8eee2e094fdf5cbc2e4c65fd8ea17285032d6ecd
		{ &Z_Construct_UFunction_AGame4550Pawn_DoResetVehicle, "DoResetVehicle" }, // 38002ff0649114f4464f37cb8817f6a751f2eb48
		{ &Z_Construct_UFunction_AGame4550Pawn_DoSteering, "DoSteering" }, // c0b34dcb086cf789a37098707e3f2e1901fe1f8d
		{ &Z_Construct_UFunction_AGame4550Pawn_DoThrottle, "DoThrottle" }, // 4702246f9683c0abf3a3b7e21d263ad806b9755e
		{ &Z_Construct_UFunction_AGame4550Pawn_DoToggleCamera, "DoToggleCamera" }, // 30c3cda40c991b68547cfdf43c150254cf40c5cf
		{ &Z_Construct_UFunction_AGame4550Pawn_FlippedCheck, "FlippedCheck" }, // b4be4b6ba356fe299b94c58a39e9e1d133d0e9e0
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGame4550Pawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AGame4550Pawn Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FrontSpringArm = { "FrontSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, FrontSpringArm), Z_Construct_UClass_USpringArmComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontSpringArm_MetaData), NewProp_FrontSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FrontCamera = { "FrontCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, FrontCamera), Z_Construct_UClass_UCameraComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontCamera_MetaData), NewProp_FrontCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BackSpringArm = { "BackSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, BackSpringArm), Z_Construct_UClass_USpringArmComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSpringArm_MetaData), NewProp_BackSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BackCamera = { "BackCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, BackCamera), Z_Construct_UClass_UCameraComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackCamera_MetaData), NewProp_BackCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SteeringAction = { "SteeringAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, SteeringAction), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringAction_MetaData), NewProp_SteeringAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ThrottleAction = { "ThrottleAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, ThrottleAction), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrottleAction_MetaData), NewProp_ThrottleAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BrakeAction = { "BrakeAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, BrakeAction), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakeAction_MetaData), NewProp_BrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HandbrakeAction = { "HandbrakeAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, HandbrakeAction), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeAction_MetaData), NewProp_HandbrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LookAroundAction = { "LookAroundAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, LookAroundAction), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAroundAction_MetaData), NewProp_LookAroundAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ToggleCameraAction = { "ToggleCameraAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, ToggleCameraAction), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCameraAction_MetaData), NewProp_ToggleCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ResetVehicleAction = { "ResetVehicleAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, ResetVehicleAction), Z_Construct_UClass_UInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetVehicleAction_MetaData), NewProp_ResetVehicleAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FlipCheckTime = { "FlipCheckTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, FlipCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipCheckTime_MetaData), NewProp_FlipCheckTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FlipCheckMinDot = { "FlipCheckMinDot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AGame4550Pawn, FlipCheckMinDot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipCheckMinDot_MetaData), NewProp_FlipCheckMinDot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrontSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrontCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SteeringAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ThrottleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandbrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LookAroundAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ToggleCameraAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResetVehicleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FlipCheckTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FlipCheckMinDot,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AGame4550Pawn Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AWheeledVehiclePawn,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Game4550,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AGame4550Pawn,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AGame4550Pawn_StaticRegisterNativesAGame4550Pawn()
{
	UClass* Class = AGame4550Pawn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGame4550Pawn;
UClass* Z_Construct_UClass_AGame4550Pawn(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AGame4550Pawn;
		if (!Z_Registration_Info_UClass_AGame4550Pawn.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Game4550Pawn"),
				Z_Registration_Info_UClass_AGame4550Pawn.InnerSingleton,
				AGame4550Pawn_StaticRegisterNativesAGame4550Pawn,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_AGame4550Pawn.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AGame4550Pawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGame4550Pawn.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AGame4550Pawn.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGame4550Pawn);
AGame4550Pawn::~AGame4550Pawn() {}
// ********** End Class AGame4550Pawn **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Game4550_Source_Game4550_Game4550Pawn_h__Script_Game4550_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGame4550Pawn, TEXT("AGame4550Pawn"), &Z_Registration_Info_UClass_AGame4550Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGame4550Pawn), 3425178858U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game4550_Source_Game4550_Game4550Pawn_h__Script_Game4550_c64bb807346b9600e43abdbfca0804563dbbe03e{
	TEXT("/Script/Game4550"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
