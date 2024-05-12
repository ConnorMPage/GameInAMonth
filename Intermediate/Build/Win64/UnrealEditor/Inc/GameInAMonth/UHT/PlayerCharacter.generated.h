// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
struct FDamageEvent;
#ifdef GAMEINAMONTH_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define GAMEINAMONTH_PlayerCharacter_generated_h

#define FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_SPARSE_DATA
#define FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetSecondary); \
	DECLARE_FUNCTION(execSetPrimary); \
	DECLARE_FUNCTION(execFireGrenade); \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execStopFireWeapon); \
	DECLARE_FUNCTION(execFireWeapon); \
	DECLARE_FUNCTION(execCrouchFinished); \
	DECLARE_FUNCTION(execBeginCrouch); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execSideMovement); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execGetGrenades); \
	DECLARE_FUNCTION(execGetTotalBullets); \
	DECLARE_FUNCTION(execGetBulletsInMag); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetFuelTotal); \
	DECLARE_FUNCTION(execGetMaxMag); \
	DECLARE_FUNCTION(execGetFuelInMag); \
	DECLARE_FUNCTION(execAddGrenades); \
	DECLARE_FUNCTION(execAddBullets); \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execRefuelWeapon);


#define FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_ACCESSORS
#define FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameInAMonth"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_14_PROLOG
#define FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_SPARSE_DATA \
	FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_ACCESSORS \
	FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEINAMONTH_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
