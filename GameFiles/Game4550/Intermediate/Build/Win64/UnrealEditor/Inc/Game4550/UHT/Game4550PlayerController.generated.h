// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game4550PlayerController.h"

#ifdef GAME4550_Game4550PlayerController_generated_h
#error "Game4550PlayerController.generated.h already included, missing '#pragma once' in Game4550PlayerController.h"
#endif
#define GAME4550_Game4550PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class AGame4550PlayerController ************************************************
#define FID_Game4550_Source_Game4550_Game4550PlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnDestroyed);


struct Z_Construct_UClass_AGame4550PlayerController_Statics;
GAME4550_API UClass* Z_Construct_UClass_AGame4550PlayerController(ETypeConstructPhase);

#define FID_Game4550_Source_Game4550_Game4550PlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AGame4550PlayerController_Statics; \
	friend GAME4550_API UClass* ::Z_Construct_UClass_AGame4550PlayerController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AGame4550PlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game4550"), Z_Construct_UClass_AGame4550PlayerController) \
	DECLARE_SERIALIZER(AGame4550PlayerController)


#define FID_Game4550_Source_Game4550_Game4550PlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGame4550PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGame4550PlayerController(AGame4550PlayerController&&) = delete; \
	AGame4550PlayerController(const AGame4550PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGame4550PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGame4550PlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGame4550PlayerController) \
	NO_API virtual ~AGame4550PlayerController();


#define FID_Game4550_Source_Game4550_Game4550PlayerController_h_17_PROLOG
#define FID_Game4550_Source_Game4550_Game4550PlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game4550_Source_Game4550_Game4550PlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game4550_Source_Game4550_Game4550PlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Game4550_Source_Game4550_Game4550PlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGame4550PlayerController;

// ********** End Class AGame4550PlayerController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game4550_Source_Game4550_Game4550PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
