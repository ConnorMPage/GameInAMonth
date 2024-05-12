// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/MainGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AMainGameMode();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AMainGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	DEFINE_FUNCTION(AMainGameMode::execChooseSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->ChooseSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGameMode::execTimesUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimesUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGameMode::execGetWinCon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWinCon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGameMode::execGetGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGameMode::execStartRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGameMode::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGameMode::execGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGameMode::execEnemyKilled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnemyKilled();
		P_NATIVE_END;
	}
	void AMainGameMode::StaticRegisterNativesAMainGameMode()
	{
		UClass* Class = AMainGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChooseSpawn", &AMainGameMode::execChooseSpawn },
			{ "EnemyKilled", &AMainGameMode::execEnemyKilled },
			{ "GameOver", &AMainGameMode::execGameOver },
			{ "GetGameState", &AMainGameMode::execGetGameState },
			{ "GetWinCon", &AMainGameMode::execGetWinCon },
			{ "StartGame", &AMainGameMode::execStartGame },
			{ "StartRound", &AMainGameMode::execStartRound },
			{ "TimesUp", &AMainGameMode::execTimesUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics
	{
		struct MainGameMode_eventChooseSpawn_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameMode_eventChooseSpawn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ends the game when out of time\n" },
#endif
		{ "ModuleRelativePath", "MainGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ends the game when out of time" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "ChooseSpawn", nullptr, nullptr, Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::MainGameMode_eventChooseSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::MainGameMode_eventChooseSpawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMainGameMode_ChooseSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_ChooseSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGameMode_EnemyKilled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGameMode_EnemyKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_EnemyKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "EnemyKilled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_EnemyKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_EnemyKilled_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMainGameMode_EnemyKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_EnemyKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGameMode_GameOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGameMode_GameOver_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//if an enemy is killed\n" },
#endif
		{ "ModuleRelativePath", "MainGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if an enemy is killed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "GameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_GameOver_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMainGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGameMode_GetGameState_Statics
	{
		struct MainGameMode_eventGetGameState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MainGameMode_eventGetGameState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainGameMode_eventGetGameState_Parms), &Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "GetGameState", nullptr, nullptr, Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::MainGameMode_eventGetGameState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::MainGameMode_eventGetGameState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMainGameMode_GetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_GetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics
	{
		struct MainGameMode_eventGetWinCon_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameMode_eventGetWinCon_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "GetWinCon", nullptr, nullptr, Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::MainGameMode_eventGetWinCon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::MainGameMode_eventGetWinCon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMainGameMode_GetWinCon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_GetWinCon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGameMode_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGameMode_StartGame_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ends the game\n" },
#endif
		{ "ModuleRelativePath", "MainGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ends the game" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMainGameMode_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGameMode_StartRound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGameMode_StartRound_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_StartRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "StartRound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_StartRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_StartRound_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMainGameMode_StartRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_StartRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGameMode_TimesUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGameMode_TimesUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_TimesUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "TimesUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_TimesUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_TimesUp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMainGameMode_TimesUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_TimesUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainGameMode);
	UClass* Z_Construct_UClass_AMainGameMode_NoRegister()
	{
		return AMainGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMainGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GameLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndGameLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndGameLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BetweenRoundLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BetweenRoundLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinEnemies_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinEnemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnemies_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEnemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnemiesLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoundNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundsToWin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoundsToWin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGame_MetaData[];
#endif
		static void NewProp_InGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OOT_MetaData[];
#endif
		static void NewProp_OOT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OOT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Won_MetaData[];
#endif
		static void NewProp_Won_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Won;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CWon_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CWon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_COutOfTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_COutOfTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLoss_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CLoss;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGameMode_ChooseSpawn, "ChooseSpawn" }, // 1318306817
		{ &Z_Construct_UFunction_AMainGameMode_EnemyKilled, "EnemyKilled" }, // 1085084725
		{ &Z_Construct_UFunction_AMainGameMode_GameOver, "GameOver" }, // 746852901
		{ &Z_Construct_UFunction_AMainGameMode_GetGameState, "GetGameState" }, // 628129529
		{ &Z_Construct_UFunction_AMainGameMode_GetWinCon, "GetWinCon" }, // 3647306897
		{ &Z_Construct_UFunction_AMainGameMode_StartGame, "StartGame" }, // 2021293622
		{ &Z_Construct_UFunction_AMainGameMode_StartRound, "StartRound" }, // 3775033186
		{ &Z_Construct_UFunction_AMainGameMode_TimesUp, "TimesUp" }, // 2140788457
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainGameMode.h" },
		{ "ModuleRelativePath", "MainGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_GameLength_MetaData[] = {
		{ "Category", "MainGameMode" },
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_GameLength = { "GameLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, GameLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_GameLength_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_GameLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_EndGameLength_MetaData[] = {
		{ "Category", "MainGameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ten minute timer\n" },
#endif
		{ "ModuleRelativePath", "MainGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ten minute timer" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_EndGameLength = { "EndGameLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, EndGameLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_EndGameLength_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_EndGameLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_BetweenRoundLength_MetaData[] = {
		{ "Category", "MainGameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//wait for the game t start\n" },
#endif
		{ "ModuleRelativePath", "MainGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "wait for the game t start" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_BetweenRoundLength = { "BetweenRoundLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, BetweenRoundLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_BetweenRoundLength_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_BetweenRoundLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_MinEnemies_MetaData[] = {
		{ "Category", "MainGameMode" },
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_MinEnemies = { "MinEnemies", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, MinEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_MinEnemies_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_MinEnemies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_MaxEnemies_MetaData[] = {
		{ "Category", "MainGameMode" },
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_MaxEnemies = { "MaxEnemies", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, MaxEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_MaxEnemies_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_MaxEnemies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_EnemiesLeft_MetaData[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_EnemiesLeft = { "EnemiesLeft", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, EnemiesLeft), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_EnemiesLeft_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_EnemiesLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundNum_MetaData[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundNum = { "RoundNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, RoundNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundNum_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundsToWin_MetaData[] = {
		{ "Category", "MainGameMode" },
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundsToWin = { "RoundsToWin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, RoundsToWin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundsToWin_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundsToWin_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_SpawnPoints_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_SpawnPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_InGame_MetaData[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMainGameMode_Statics::NewProp_InGame_SetBit(void* Obj)
	{
		((AMainGameMode*)Obj)->InGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_InGame = { "InGame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainGameMode), &Z_Construct_UClass_AMainGameMode_Statics::NewProp_InGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_InGame_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_InGame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_OOT_MetaData[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMainGameMode_Statics::NewProp_OOT_SetBit(void* Obj)
	{
		((AMainGameMode*)Obj)->OOT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_OOT = { "OOT", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainGameMode), &Z_Construct_UClass_AMainGameMode_Statics::NewProp_OOT_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_OOT_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_OOT_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_Won_MetaData[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMainGameMode_Statics::NewProp_Won_SetBit(void* Obj)
	{
		((AMainGameMode*)Obj)->Won = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_Won = { "Won", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainGameMode), &Z_Construct_UClass_AMainGameMode_Statics::NewProp_Won_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_Won_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_Won_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_CWon_MetaData[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_CWon = { "CWon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, CWon), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_CWon_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_CWon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_COutOfTime_MetaData[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_COutOfTime = { "COutOfTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, COutOfTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_COutOfTime_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_COutOfTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_CLoss_MetaData[] = {
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_CLoss = { "CLoss", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, CLoss), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_CLoss_MetaData), Z_Construct_UClass_AMainGameMode_Statics::NewProp_CLoss_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_GameLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_EndGameLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_BetweenRoundLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_MinEnemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_MaxEnemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_EnemiesLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_RoundsToWin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_SpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_SpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_InGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_OOT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_Won,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_CWon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_COutOfTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_CLoss,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGameMode_Statics::ClassParams = {
		&AMainGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMainGameMode()
	{
		if (!Z_Registration_Info_UClass_AMainGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGameMode.OuterSingleton, Z_Construct_UClass_AMainGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainGameMode.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<AMainGameMode>()
	{
		return AMainGameMode::StaticClass();
	}
	AMainGameMode::AMainGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameMode);
	AMainGameMode::~AMainGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_MainGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_MainGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainGameMode, AMainGameMode::StaticClass, TEXT("AMainGameMode"), &Z_Registration_Info_UClass_AMainGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGameMode), 3333259696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_MainGameMode_h_1596743792(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_MainGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_MainGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
