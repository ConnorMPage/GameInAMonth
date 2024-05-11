// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/EnemyCharacterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacterAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AEnemyCharacterAIController();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AEnemyCharacterAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyCharacterAIController::execChooseWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->ChooseWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyCharacterAIController::execCheckInFront)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckInFront(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	void AEnemyCharacterAIController::StaticRegisterNativesAEnemyCharacterAIController()
	{
		UClass* Class = AEnemyCharacterAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckInFront", &AEnemyCharacterAIController::execCheckInFront },
			{ "ChooseWaypoint", &AEnemyCharacterAIController::execChooseWaypoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics
	{
		struct EnemyCharacterAIController_eventCheckInFront_Parms
		{
			AActor* TargetActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacterAIController_eventCheckInFront_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyCharacterAIController_eventCheckInFront_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyCharacterAIController_eventCheckInFront_Parms), &Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacterAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacterAIController, nullptr, "CheckInFront", nullptr, nullptr, Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::EnemyCharacterAIController_eventCheckInFront_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::EnemyCharacterAIController_eventCheckInFront_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics
	{
		struct EnemyCharacterAIController_eventChooseWaypoint_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacterAIController_eventChooseWaypoint_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyCharacterAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacterAIController, nullptr, "ChooseWaypoint", nullptr, nullptr, Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::EnemyCharacterAIController_eventChooseWaypoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::EnemyCharacterAIController_eventChooseWaypoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacterAIController);
	UClass* Z_Construct_UClass_AEnemyCharacterAIController_NoRegister()
	{
		return AEnemyCharacterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyBehaviourTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyBehaviourTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyCharacterAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacterAIController_CheckInFront, "CheckInFront" }, // 3565285919
		{ &Z_Construct_UFunction_AEnemyCharacterAIController_ChooseWaypoint, "ChooseWaypoint" }, // 3277364991
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyCharacterAIController.h" },
		{ "ModuleRelativePath", "EnemyCharacterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree_MetaData[] = {
		{ "Category", "EnemyCharacterAIController" },
		{ "ModuleRelativePath", "EnemyCharacterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree = { "EnemyBehaviourTree", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacterAIController, EnemyBehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree_MetaData), Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef_MetaData[] = {
		{ "ModuleRelativePath", "EnemyCharacterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef = { "PlayerCharacterRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacterAIController, PlayerCharacterRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef_MetaData), Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_Waypoints_MetaData[] = {
		{ "ModuleRelativePath", "EnemyCharacterAIController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacterAIController, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_Waypoints_MetaData), Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_Waypoints_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacterAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_EnemyBehaviourTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_PlayerCharacterRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_Waypoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterAIController_Statics::NewProp_Waypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacterAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacterAIController_Statics::ClassParams = {
		&AEnemyCharacterAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyCharacterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacterAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyCharacterAIController()
	{
		if (!Z_Registration_Info_UClass_AEnemyCharacterAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacterAIController.OuterSingleton, Z_Construct_UClass_AEnemyCharacterAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyCharacterAIController.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<AEnemyCharacterAIController>()
	{
		return AEnemyCharacterAIController::StaticClass();
	}
	AEnemyCharacterAIController::AEnemyCharacterAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacterAIController);
	AEnemyCharacterAIController::~AEnemyCharacterAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacterAIController, AEnemyCharacterAIController::StaticClass, TEXT("AEnemyCharacterAIController"), &Z_Registration_Info_UClass_AEnemyCharacterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacterAIController), 1682702456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_679173663(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_EnemyCharacterAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
