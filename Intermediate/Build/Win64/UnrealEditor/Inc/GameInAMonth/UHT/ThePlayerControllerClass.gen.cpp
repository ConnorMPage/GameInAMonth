// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/ThePlayerControllerClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThePlayerControllerClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AMainGameMode_NoRegister();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AThePlayerControllerClass();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AThePlayerControllerClass_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	DEFINE_FUNCTION(AThePlayerControllerClass::execGetGrenades)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGrenades();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayerControllerClass::execGetBulletsInMag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBulletsInMag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayerControllerClass::execGetPLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPLevels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayerControllerClass::execGetTotalBulletAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalBulletAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayerControllerClass::execGetTotalFuelAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalFuelAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayerControllerClass::execGetFuelInMagPerc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFuelInMagPerc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayerControllerClass::execGetHealthPerc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPerc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayerControllerClass::execLoadEndGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadEndGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayerControllerClass::execUpdateHUDStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHUDStats();
		P_NATIVE_END;
	}
	void AThePlayerControllerClass::StaticRegisterNativesAThePlayerControllerClass()
	{
		UClass* Class = AThePlayerControllerClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBulletsInMag", &AThePlayerControllerClass::execGetBulletsInMag },
			{ "GetFuelInMagPerc", &AThePlayerControllerClass::execGetFuelInMagPerc },
			{ "GetGrenades", &AThePlayerControllerClass::execGetGrenades },
			{ "GetHealthPerc", &AThePlayerControllerClass::execGetHealthPerc },
			{ "GetPLevels", &AThePlayerControllerClass::execGetPLevels },
			{ "GetTotalBulletAmount", &AThePlayerControllerClass::execGetTotalBulletAmount },
			{ "GetTotalFuelAmount", &AThePlayerControllerClass::execGetTotalFuelAmount },
			{ "LoadEndGame", &AThePlayerControllerClass::execLoadEndGame },
			{ "UpdateHUDStats", &AThePlayerControllerClass::execUpdateHUDStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics
	{
		struct ThePlayerControllerClass_eventGetBulletsInMag_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePlayerControllerClass_eventGetBulletsInMag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayerControllerClass, nullptr, "GetBulletsInMag", nullptr, nullptr, Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::ThePlayerControllerClass_eventGetBulletsInMag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::ThePlayerControllerClass_eventGetBulletsInMag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics
	{
		struct ThePlayerControllerClass_eventGetFuelInMagPerc_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePlayerControllerClass_eventGetFuelInMagPerc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayerControllerClass, nullptr, "GetFuelInMagPerc", nullptr, nullptr, Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::ThePlayerControllerClass_eventGetFuelInMagPerc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::ThePlayerControllerClass_eventGetFuelInMagPerc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics
	{
		struct ThePlayerControllerClass_eventGetGrenades_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePlayerControllerClass_eventGetGrenades_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayerControllerClass, nullptr, "GetGrenades", nullptr, nullptr, Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::ThePlayerControllerClass_eventGetGrenades_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::ThePlayerControllerClass_eventGetGrenades_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics
	{
		struct ThePlayerControllerClass_eventGetHealthPerc_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePlayerControllerClass_eventGetHealthPerc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayerControllerClass, nullptr, "GetHealthPerc", nullptr, nullptr, Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::ThePlayerControllerClass_eventGetHealthPerc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::ThePlayerControllerClass_eventGetHealthPerc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics
	{
		struct ThePlayerControllerClass_eventGetPLevels_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePlayerControllerClass_eventGetPLevels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayerControllerClass, nullptr, "GetPLevels", nullptr, nullptr, Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::ThePlayerControllerClass_eventGetPLevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::ThePlayerControllerClass_eventGetPLevels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics
	{
		struct ThePlayerControllerClass_eventGetTotalBulletAmount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePlayerControllerClass_eventGetTotalBulletAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayerControllerClass, nullptr, "GetTotalBulletAmount", nullptr, nullptr, Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::ThePlayerControllerClass_eventGetTotalBulletAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::ThePlayerControllerClass_eventGetTotalBulletAmount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics
	{
		struct ThePlayerControllerClass_eventGetTotalFuelAmount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThePlayerControllerClass_eventGetTotalFuelAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayerControllerClass, nullptr, "GetTotalFuelAmount", nullptr, nullptr, Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::ThePlayerControllerClass_eventGetTotalFuelAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::ThePlayerControllerClass_eventGetTotalFuelAmount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayerControllerClass_LoadEndGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayerControllerClass_LoadEndGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayerControllerClass_LoadEndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayerControllerClass, nullptr, "LoadEndGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_LoadEndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePlayerControllerClass_LoadEndGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AThePlayerControllerClass_LoadEndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePlayerControllerClass_LoadEndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayerControllerClass_UpdateHUDStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayerControllerClass_UpdateHUDStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayerControllerClass_UpdateHUDStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayerControllerClass, nullptr, "UpdateHUDStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayerControllerClass_UpdateHUDStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThePlayerControllerClass_UpdateHUDStats_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AThePlayerControllerClass_UpdateHUDStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThePlayerControllerClass_UpdateHUDStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThePlayerControllerClass);
	UClass* Z_Construct_UClass_AThePlayerControllerClass_NoRegister()
	{
		return AThePlayerControllerClass::StaticClass();
	}
	struct Z_Construct_UClass_AThePlayerControllerClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CrosshairClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MiniMapClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WinClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WinClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OOTClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OOTClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DeadClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndScreen_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EndScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuelInMag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FuelInMag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalFuel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalFuel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MAXHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MAXHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletsInMag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BulletsInMag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalBullets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalBullets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfGrenades_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfGrenades;
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
	UObject* (*const Z_Construct_UClass_AThePlayerControllerClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThePlayerControllerClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThePlayerControllerClass_GetBulletsInMag, "GetBulletsInMag" }, // 818818297
		{ &Z_Construct_UFunction_AThePlayerControllerClass_GetFuelInMagPerc, "GetFuelInMagPerc" }, // 2044378330
		{ &Z_Construct_UFunction_AThePlayerControllerClass_GetGrenades, "GetGrenades" }, // 135876039
		{ &Z_Construct_UFunction_AThePlayerControllerClass_GetHealthPerc, "GetHealthPerc" }, // 2242452333
		{ &Z_Construct_UFunction_AThePlayerControllerClass_GetPLevels, "GetPLevels" }, // 3223079181
		{ &Z_Construct_UFunction_AThePlayerControllerClass_GetTotalBulletAmount, "GetTotalBulletAmount" }, // 3794639152
		{ &Z_Construct_UFunction_AThePlayerControllerClass_GetTotalFuelAmount, "GetTotalFuelAmount" }, // 980273356
		{ &Z_Construct_UFunction_AThePlayerControllerClass_LoadEndGame, "LoadEndGame" }, // 1099917165
		{ &Z_Construct_UFunction_AThePlayerControllerClass_UpdateHUDStats, "UpdateHUDStats" }, // 247403775
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ThePlayerControllerClass.h" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_GameModeRef_MetaData[] = {
		{ "Category", "ThePlayerControllerClass" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, GameModeRef), Z_Construct_UClass_AMainGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_GameModeRef_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_GameModeRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PlayerCharacterRef_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PlayerCharacterRef = { "PlayerCharacterRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, PlayerCharacterRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PlayerCharacterRef_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PlayerCharacterRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairClass_MetaData[] = {
		{ "Category", "ThePlayerControllerClass" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairClass = { "CrosshairClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, CrosshairClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairClass_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairUI = { "CrosshairUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, CrosshairUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairUI_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapClass_MetaData[] = {
		{ "Category", "ThePlayerControllerClass" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapClass = { "MiniMapClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, MiniMapClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapClass_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapUI = { "MiniMapUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, MiniMapUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapUI_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "ThePlayerControllerClass" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDClass_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDUI = { "HUDUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, HUDUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDUI_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_WinClass_MetaData[] = {
		{ "Category", "ThePlayerControllerClass" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_WinClass = { "WinClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, WinClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_WinClass_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_WinClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_OOTClass_MetaData[] = {
		{ "Category", "ThePlayerControllerClass" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_OOTClass = { "OOTClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, OOTClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_OOTClass_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_OOTClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_DeadClass_MetaData[] = {
		{ "Category", "ThePlayerControllerClass" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_DeadClass = { "DeadClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, DeadClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_DeadClass_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_DeadClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_EndScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_EndScreen = { "EndScreen", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, EndScreen), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_EndScreen_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_EndScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MaxMag_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MaxMag = { "MaxMag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, MaxMag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MaxMag_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MaxMag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_FuelInMag_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_FuelInMag = { "FuelInMag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, FuelInMag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_FuelInMag_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_FuelInMag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalFuel_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalFuel = { "TotalFuel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, TotalFuel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalFuel_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalFuel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HealthAmount_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HealthAmount = { "HealthAmount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, HealthAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HealthAmount_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HealthAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MAXHealth_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MAXHealth = { "MAXHealth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, MAXHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MAXHealth_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MAXHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PLevel_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PLevel = { "PLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, PLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PLevel_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_BulletsInMag_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_BulletsInMag = { "BulletsInMag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, BulletsInMag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_BulletsInMag_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_BulletsInMag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalBullets_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalBullets = { "TotalBullets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, TotalBullets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalBullets_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalBullets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_AmountOfGrenades_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_AmountOfGrenades = { "AmountOfGrenades", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, AmountOfGrenades), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_AmountOfGrenades_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_AmountOfGrenades_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CWon_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CWon = { "CWon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, CWon), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CWon_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CWon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_COutOfTime_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_COutOfTime = { "COutOfTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, COutOfTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_COutOfTime_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_COutOfTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CLoss_MetaData[] = {
		{ "ModuleRelativePath", "ThePlayerControllerClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CLoss = { "CLoss", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThePlayerControllerClass, CLoss), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CLoss_MetaData), Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CLoss_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThePlayerControllerClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_GameModeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PlayerCharacterRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_WinClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_OOTClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_DeadClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_EndScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MaxMag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_FuelInMag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalFuel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HealthAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MAXHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_PLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_BulletsInMag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_TotalBullets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_AmountOfGrenades,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CWon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_COutOfTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CLoss,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThePlayerControllerClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThePlayerControllerClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThePlayerControllerClass_Statics::ClassParams = {
		&AThePlayerControllerClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThePlayerControllerClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::Class_MetaDataParams), Z_Construct_UClass_AThePlayerControllerClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThePlayerControllerClass()
	{
		if (!Z_Registration_Info_UClass_AThePlayerControllerClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThePlayerControllerClass.OuterSingleton, Z_Construct_UClass_AThePlayerControllerClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThePlayerControllerClass.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<AThePlayerControllerClass>()
	{
		return AThePlayerControllerClass::StaticClass();
	}
	AThePlayerControllerClass::AThePlayerControllerClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThePlayerControllerClass);
	AThePlayerControllerClass::~AThePlayerControllerClass() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_ThePlayerControllerClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_ThePlayerControllerClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThePlayerControllerClass, AThePlayerControllerClass::StaticClass, TEXT("AThePlayerControllerClass"), &Z_Registration_Info_UClass_AThePlayerControllerClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThePlayerControllerClass), 1910944574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_ThePlayerControllerClass_h_183794466(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_ThePlayerControllerClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_ThePlayerControllerClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
