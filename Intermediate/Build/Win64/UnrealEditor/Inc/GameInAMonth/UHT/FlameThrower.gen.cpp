// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/FlameThrower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlameThrower() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AFlameThrower();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AFlameThrower_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	DEFINE_FUNCTION(AFlameThrower::execGetMagMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMagMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlameThrower::execGetFuelInMag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFuelInMag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlameThrower::execGetTotalFuel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalFuel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlameThrower::execSetWeapon)
	{
		P_GET_UBOOL(Z_Param_WeaponSelect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeapon(Z_Param_WeaponSelect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlameThrower::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlameThrower::execExecuteDamageOnTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToBeDamaged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteDamageOnTarget(Z_Param_ActorToBeDamaged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlameThrower::execStopWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlameThrower::execFireWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlameThrower::execRefillAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefillAmmo();
		P_NATIVE_END;
	}
	static FName NAME_AFlameThrower_BpFireEvent = FName(TEXT("BpFireEvent"));
	void AFlameThrower::BpFireEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFlameThrower_BpFireEvent),NULL);
	}
	static FName NAME_AFlameThrower_BpStopEvent = FName(TEXT("BpStopEvent"));
	void AFlameThrower::BpStopEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFlameThrower_BpStopEvent),NULL);
	}
	void AFlameThrower::StaticRegisterNativesAFlameThrower()
	{
		UClass* Class = AFlameThrower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteDamageOnTarget", &AFlameThrower::execExecuteDamageOnTarget },
			{ "FireWeapon", &AFlameThrower::execFireWeapon },
			{ "GetFuelInMag", &AFlameThrower::execGetFuelInMag },
			{ "GetMagMax", &AFlameThrower::execGetMagMax },
			{ "GetTotalFuel", &AFlameThrower::execGetTotalFuel },
			{ "RefillAmmo", &AFlameThrower::execRefillAmmo },
			{ "Reload", &AFlameThrower::execReload },
			{ "SetWeapon", &AFlameThrower::execSetWeapon },
			{ "StopWeapon", &AFlameThrower::execStopWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlameThrower_BpFireEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_BpFireEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_BpFireEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "BpFireEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_BpFireEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_BpFireEvent_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFlameThrower_BpFireEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_BpFireEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_BpStopEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_BpStopEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_BpStopEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "BpStopEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_BpStopEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_BpStopEvent_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFlameThrower_BpStopEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_BpStopEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics
	{
		struct FlameThrower_eventExecuteDamageOnTarget_Parms
		{
			AActor* ActorToBeDamaged;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToBeDamaged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::NewProp_ActorToBeDamaged = { "ActorToBeDamaged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlameThrower_eventExecuteDamageOnTarget_Parms, ActorToBeDamaged), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::NewProp_ActorToBeDamaged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "ExecuteDamageOnTarget", nullptr, nullptr, Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::FlameThrower_eventExecuteDamageOnTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::FlameThrower_eventExecuteDamageOnTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "FireWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFlameThrower_FireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_FireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics
	{
		struct FlameThrower_eventGetFuelInMag_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlameThrower_eventGetFuelInMag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "GetFuelInMag", nullptr, nullptr, Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::FlameThrower_eventGetFuelInMag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::FlameThrower_eventGetFuelInMag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFlameThrower_GetFuelInMag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_GetFuelInMag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics
	{
		struct FlameThrower_eventGetMagMax_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlameThrower_eventGetMagMax_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "GetMagMax", nullptr, nullptr, Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::FlameThrower_eventGetMagMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::FlameThrower_eventGetMagMax_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFlameThrower_GetMagMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_GetMagMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics
	{
		struct FlameThrower_eventGetTotalFuel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlameThrower_eventGetTotalFuel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "GetTotalFuel", nullptr, nullptr, Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::FlameThrower_eventGetTotalFuel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::FlameThrower_eventGetTotalFuel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFlameThrower_GetTotalFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_GetTotalFuel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "RefillAmmo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFlameThrower_RefillAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_RefillAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_Reload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_Reload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFlameThrower_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics
	{
		struct FlameThrower_eventSetWeapon_Parms
		{
			bool WeaponSelect;
		};
		static void NewProp_WeaponSelect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WeaponSelect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::NewProp_WeaponSelect_SetBit(void* Obj)
	{
		((FlameThrower_eventSetWeapon_Parms*)Obj)->WeaponSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::NewProp_WeaponSelect = { "WeaponSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlameThrower_eventSetWeapon_Parms), &Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::NewProp_WeaponSelect_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::NewProp_WeaponSelect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "SetWeapon", nullptr, nullptr, Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::FlameThrower_eventSetWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::FlameThrower_eventSetWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFlameThrower_SetWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_SetWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlameThrower_StopWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlameThrower_StopWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlameThrower_StopWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlameThrower, nullptr, "StopWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlameThrower_StopWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlameThrower_StopWeapon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFlameThrower_StopWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlameThrower_StopWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlameThrower);
	UClass* Z_Construct_UClass_AFlameThrower_NoRegister()
	{
		return AFlameThrower::StaticClass();
	}
	struct Z_Construct_UClass_AFlameThrower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlameThrowerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameThrowerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlameSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlameTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileSpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileSpawnRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPrimary_MetaData[];
#endif
		static void NewProp_IsPrimary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPrimary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MagCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuelInMag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FuelInMag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalFuel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalFuel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusFuel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BonusFuel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyMag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmptyMag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlameThrower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlameThrower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlameThrower_BpFireEvent, "BpFireEvent" }, // 3279051152
		{ &Z_Construct_UFunction_AFlameThrower_BpStopEvent, "BpStopEvent" }, // 1679167395
		{ &Z_Construct_UFunction_AFlameThrower_ExecuteDamageOnTarget, "ExecuteDamageOnTarget" }, // 1718656586
		{ &Z_Construct_UFunction_AFlameThrower_FireWeapon, "FireWeapon" }, // 1992309625
		{ &Z_Construct_UFunction_AFlameThrower_GetFuelInMag, "GetFuelInMag" }, // 4246335595
		{ &Z_Construct_UFunction_AFlameThrower_GetMagMax, "GetMagMax" }, // 1334708161
		{ &Z_Construct_UFunction_AFlameThrower_GetTotalFuel, "GetTotalFuel" }, // 4058998764
		{ &Z_Construct_UFunction_AFlameThrower_RefillAmmo, "RefillAmmo" }, // 3864259872
		{ &Z_Construct_UFunction_AFlameThrower_Reload, "Reload" }, // 1054454192
		{ &Z_Construct_UFunction_AFlameThrower_SetWeapon, "SetWeapon" }, // 214216941
		{ &Z_Construct_UFunction_AFlameThrower_StopWeapon, "StopWeapon" }, // 2687399596
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlameThrower.h" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh = { "FlameThrowerMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, FlameThrowerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation = { "FireSpawnLocation", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, FireSpawnLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameSystem_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameSystem = { "FlameSystem", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, FlameSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameSystem_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameTimeline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameTimeline = { "FlameTimeline", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, FlameTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameTimeline_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameTimeline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, WeaponDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_WeaponDamage_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_WeaponDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation = { "ProjectileSpawnLocation", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, ProjectileSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnRotation_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnRotation = { "ProjectileSpawnRotation", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, ProjectileSpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnRotation_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsActive_MetaData[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	void Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((AFlameThrower*)Obj)->IsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlameThrower), &Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsActive_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsPrimary_MetaData[] = {
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	void Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsPrimary_SetBit(void* Obj)
	{
		((AFlameThrower*)Obj)->IsPrimary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsPrimary = { "IsPrimary", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlameThrower), &Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsPrimary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsPrimary_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsPrimary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_MagCapacity_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_MagCapacity = { "MagCapacity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, MagCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_MagCapacity_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_MagCapacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_FuelInMag_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_FuelInMag = { "FuelInMag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, FuelInMag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_FuelInMag_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_FuelInMag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_TotalFuel_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_TotalFuel = { "TotalFuel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, TotalFuel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_TotalFuel_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_TotalFuel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_BonusFuel_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_BonusFuel = { "BonusFuel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, BonusFuel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_BonusFuel_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_BonusFuel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlameThrower_Statics::NewProp_EmptyMag_MetaData[] = {
		{ "Category", "FlameThrower" },
		{ "ModuleRelativePath", "FlameThrower.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlameThrower_Statics::NewProp_EmptyMag = { "EmptyMag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlameThrower, EmptyMag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::NewProp_EmptyMag_MetaData), Z_Construct_UClass_AFlameThrower_Statics::NewProp_EmptyMag_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlameThrower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameThrowerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_FireSpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_FlameTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_WeaponDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_ProjectileSpawnRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_IsPrimary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_MagCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_FuelInMag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_TotalFuel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_BonusFuel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlameThrower_Statics::NewProp_EmptyMag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlameThrower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlameThrower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlameThrower_Statics::ClassParams = {
		&AFlameThrower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlameThrower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlameThrower_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlameThrower_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFlameThrower()
	{
		if (!Z_Registration_Info_UClass_AFlameThrower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlameThrower.OuterSingleton, Z_Construct_UClass_AFlameThrower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlameThrower.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<AFlameThrower>()
	{
		return AFlameThrower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlameThrower);
	AFlameThrower::~AFlameThrower() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlameThrower, AFlameThrower::StaticClass, TEXT("AFlameThrower"), &Z_Registration_Info_UClass_AFlameThrower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlameThrower), 2936208435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_2171623165(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_FlameThrower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
