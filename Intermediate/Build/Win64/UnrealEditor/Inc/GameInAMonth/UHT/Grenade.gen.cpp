// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/Grenade.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrenade() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AGrenade();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AGrenade_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	DEFINE_FUNCTION(AGrenade::execStartCountdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCountdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrenade::execGrenadeDetonate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrenadeDetonate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrenade::execOnOverLapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverLapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrenade::execOnOverLapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverLapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AGrenade::StaticRegisterNativesAGrenade()
	{
		UClass* Class = AGrenade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrenadeDetonate", &AGrenade::execGrenadeDetonate },
			{ "OnOverLapBegin", &AGrenade::execOnOverLapBegin },
			{ "OnOverLapEnd", &AGrenade::execOnOverLapEnd },
			{ "StartCountdown", &AGrenade::execStartCountdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrenade_GrenadeDetonate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrenade_GrenadeDetonate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grenade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrenade_GrenadeDetonate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrenade, nullptr, "GrenadeDetonate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_GrenadeDetonate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrenade_GrenadeDetonate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGrenade_GrenadeDetonate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrenade_GrenadeDetonate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics
	{
		struct Grenade_eventOnOverLapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grenade_eventOnOverLapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grenade_eventOnOverLapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grenade_eventOnOverLapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grenade_eventOnOverLapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Grenade_eventOnOverLapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Grenade_eventOnOverLapBegin_Parms), &Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grenade_eventOnOverLapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Functions\n" },
#endif
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrenade, nullptr, "OnOverLapBegin", nullptr, nullptr, Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::Grenade_eventOnOverLapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::Grenade_eventOnOverLapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGrenade_OnOverLapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrenade_OnOverLapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics
	{
		struct Grenade_eventOnOverLapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grenade_eventOnOverLapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grenade_eventOnOverLapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grenade_eventOnOverLapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grenade_eventOnOverLapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//function for if overlap\n" },
#endif
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "function for if overlap" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrenade, nullptr, "OnOverLapEnd", nullptr, nullptr, Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::Grenade_eventOnOverLapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::Grenade_eventOnOverLapEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGrenade_OnOverLapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrenade_OnOverLapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrenade_StartCountdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrenade_StartCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grenade.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrenade_StartCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrenade, nullptr, "StartCountdown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrenade_StartCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrenade_StartCountdown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGrenade_StartCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrenade_StartCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrenade);
	UClass* Z_Construct_UClass_AGrenade_NoRegister()
	{
		return AGrenade::StaticClass();
	}
	struct Z_Construct_UClass_AGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadeTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrenadeMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtentSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtentSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lifeSpan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lifeSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InArea_MetaData[];
#endif
		static void NewProp_InArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrenadeDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToDamage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrenade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrenade_GrenadeDetonate, "GrenadeDetonate" }, // 509804452
		{ &Z_Construct_UFunction_AGrenade_OnOverLapBegin, "OnOverLapBegin" }, // 2161919859
		{ &Z_Construct_UFunction_AGrenade_OnOverLapEnd, "OnOverLapEnd" }, // 1850514218
		{ &Z_Construct_UFunction_AGrenade_StartCountdown, "StartCountdown" }, // 2557257200
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grenade.h" },
		{ "ModuleRelativePath", "Grenade.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMesh_MetaData[] = {
		{ "Category", "Grenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grenade.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMesh = { "GrenadeMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, GrenadeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMesh_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Grenade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//creates mesh component \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "creates mesh component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_CollisionBox_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_CollisionBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovement_MetaData[] = {
		{ "Category", "Grenade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//creates collision box\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "creates collision box" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovement = { "GrenadeMovement", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, GrenadeMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovement_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_ForceComp_MetaData[] = {
		{ "Category", "Grenade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//creates the movment component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "creates the movment component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_ForceComp = { "ForceComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, ForceComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_ForceComp_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_ForceComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeTimer_MetaData[] = {
		{ "Category", "Grenade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//creates force component \n" },
#endif
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "creates force component" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeTimer = { "GrenadeTimer", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, GrenadeTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeTimer_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeTimer_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovementSpeed_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Grenade.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovementSpeed = { "GrenadeMovementSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, GrenadeMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovementSpeed_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_BoxExtentSize_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Grenade.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_BoxExtentSize = { "BoxExtentSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, BoxExtentSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_BoxExtentSize_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_BoxExtentSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_BoxLocation_MetaData[] = {
		{ "Category", "Grenade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//box size\n" },
#endif
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "box size" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_BoxLocation = { "BoxLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, BoxLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_BoxLocation_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_BoxLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_lifeSpan_MetaData[] = {
		{ "Category", "Grenade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//box location\n" },
#endif
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "box location" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_lifeSpan = { "lifeSpan", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, lifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_lifeSpan_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_lifeSpan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_TimerLength_MetaData[] = {
		{ "Category", "Grenade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//lifespan\n" },
#endif
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "lifespan" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_TimerLength = { "TimerLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, TimerLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_TimerLength_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_TimerLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_InArea_MetaData[] = {
		{ "Category", "Grenade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//length of timer\n" },
#endif
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "length of timer" },
#endif
	};
#endif
	void Z_Construct_UClass_AGrenade_Statics::NewProp_InArea_SetBit(void* Obj)
	{
		((AGrenade*)Obj)->InArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_InArea = { "InArea", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGrenade), &Z_Construct_UClass_AGrenade_Statics::NewProp_InArea_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_InArea_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_InArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeDamage_MetaData[] = {
		{ "Category", "Grenade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//checks if in area\n" },
#endif
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "checks if in area" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeDamage = { "GrenadeDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, GrenadeDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeDamage_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenade_Statics::NewProp_ActorToDamage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//damage grenade does\n" },
#endif
		{ "ModuleRelativePath", "Grenade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "damage grenade does" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrenade_Statics::NewProp_ActorToDamage = { "ActorToDamage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrenade, ActorToDamage), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::NewProp_ActorToDamage_MetaData), Z_Construct_UClass_AGrenade_Statics::NewProp_ActorToDamage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrenade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_CollisionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_ForceComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_BoxExtentSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_BoxLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_lifeSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_TimerLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_InArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_GrenadeDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenade_Statics::NewProp_ActorToDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrenade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrenade_Statics::ClassParams = {
		&AGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrenade_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrenade_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGrenade()
	{
		if (!Z_Registration_Info_UClass_AGrenade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrenade.OuterSingleton, Z_Construct_UClass_AGrenade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrenade.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<AGrenade>()
	{
		return AGrenade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrenade);
	AGrenade::~AGrenade() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_Grenade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_Grenade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrenade, AGrenade::StaticClass, TEXT("AGrenade"), &Z_Registration_Info_UClass_AGrenade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrenade), 3014655617U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_Grenade_h_2055199761(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_Grenade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_Grenade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
