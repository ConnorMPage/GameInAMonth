// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInAMonth/PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_APlayerCharacter();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	DEFINE_FUNCTION(APlayerCharacter::execFireWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCrouchFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrouchFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execBeginCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MoveAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_MoveAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execLookUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MoveAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUp(Z_Param_MoveAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSideMovement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MoveAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SideMovement(Z_Param_MoveAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MoveAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_MoveAmount);
		P_NATIVE_END;
	}
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginCrouch", &APlayerCharacter::execBeginCrouch },
			{ "CrouchFinished", &APlayerCharacter::execCrouchFinished },
			{ "FireWeapon", &APlayerCharacter::execFireWeapon },
			{ "LookUp", &APlayerCharacter::execLookUp },
			{ "MoveForward", &APlayerCharacter::execMoveForward },
			{ "SideMovement", &APlayerCharacter::execSideMovement },
			{ "Turn", &APlayerCharacter::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacter_BeginCrouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_BeginCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_BeginCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "BeginCrouch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_BeginCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_BeginCrouch_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_BeginCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_BeginCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CrouchFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CrouchFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CrouchFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CrouchFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CrouchFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_CrouchFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CrouchFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CrouchFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_FireWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_FireWeapon_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------\n//Action Functions \n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_FireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "FireWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_FireWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_FireWeapon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_FireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_FireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_LookUp_Statics
	{
		struct PlayerCharacter_eventLookUp_Parms
		{
			float MoveAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::NewProp_MoveAmount = { "MoveAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventLookUp_Parms, MoveAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::NewProp_MoveAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "LookUp", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::PlayerCharacter_eventLookUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::PlayerCharacter_eventLookUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics
	{
		struct PlayerCharacter_eventMoveForward_Parms
		{
			float MoveAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::NewProp_MoveAmount = { "MoveAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMoveForward_Parms, MoveAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::NewProp_MoveAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Movement Functions\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::PlayerCharacter_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::PlayerCharacter_eventMoveForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics
	{
		struct PlayerCharacter_eventSideMovement_Parms
		{
			float MoveAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::NewProp_MoveAmount = { "MoveAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSideMovement_Parms, MoveAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::NewProp_MoveAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SideMovement", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::PlayerCharacter_eventSideMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::PlayerCharacter_eventSideMovement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SideMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SideMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_Turn_Statics
	{
		struct PlayerCharacter_eventTurn_Parms
		{
			float MoveAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_Turn_Statics::NewProp_MoveAmount = { "MoveAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventTurn_Parms, MoveAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Turn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Turn_Statics::NewProp_MoveAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Turn", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Turn_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_Turn_Statics::PlayerCharacter_eventTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Turn_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Turn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Turn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_Turn_Statics::PlayerCharacter_eventTurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmForMainCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmForMainCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCamLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalCamLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCamRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalCamRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringArmLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedSpringArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedSpringArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileSpawnLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_BeginCrouch, "BeginCrouch" }, // 1064011798
		{ &Z_Construct_UFunction_APlayerCharacter_CrouchFinished, "CrouchFinished" }, // 4200625044
		{ &Z_Construct_UFunction_APlayerCharacter_FireWeapon, "FireWeapon" }, // 3680520462
		{ &Z_Construct_UFunction_APlayerCharacter_LookUp, "LookUp" }, // 3564338599
		{ &Z_Construct_UFunction_APlayerCharacter_MoveForward, "MoveForward" }, // 2902875338
		{ &Z_Construct_UFunction_APlayerCharacter_SideMovement, "SideMovement" }, // 2161533567
		{ &Z_Construct_UFunction_APlayerCharacter_Turn, "Turn" }, // 1705592003
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter.h" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainCamera_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of Objects & Classes \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Objects & Classes" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainCamera = { "MainCamera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MainCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainCamera_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmForMainCam_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmForMainCam = { "SpringArmForMainCam", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, SpringArmForMainCam), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmForMainCam_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmForMainCam_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterWeapon_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterWeapon = { "CharacterWeapon", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CharacterWeapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterWeapon_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamLocation_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------\n//Vector * Rotator List\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector * Rotator List" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamLocation = { "OriginalCamLocation", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, OriginalCamLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamLocation_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamRotation_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//original camera location\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "original camera location" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamRotation = { "OriginalCamRotation", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, OriginalCamRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamRotation_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLocation_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Original Camera Rotation\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Original Camera Rotation" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLocation = { "SpringArmLocation", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, SpringArmLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLocation_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLength_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//location of the spring arm\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "location of the spring arm" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLength = { "SpringArmLength", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, SpringArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLength_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomedSpringArmLength_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Length of Springarm\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of Springarm" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomedSpringArmLength = { "ZoomedSpringArmLength", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ZoomedSpringArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomedSpringArmLength_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomedSpringArmLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponLocation_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Length of Springarm while zoomed\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of Springarm while zoomed" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponLocation = { "WeaponLocation", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, WeaponLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponLocation_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireSpawnLocation_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// location of player weapon\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "location of player weapon" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireSpawnLocation = { "FireSpawnLocation", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, FireSpawnLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireSpawnLocation_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireSpawnLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ProjectileSpawnLocation_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ProjectileSpawnLocation = { "ProjectileSpawnLocation", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ProjectileSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ProjectileSpawnLocation_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ProjectileSpawnLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmForMainCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CharacterWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_OriginalCamRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SpringArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomedSpringArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WeaponLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_FireSpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ProjectileSpawnLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
	}
	template<> GAMEINAMONTH_API UClass* StaticClass<APlayerCharacter>()
	{
		return APlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
	APlayerCharacter::~APlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 1040036261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_436676099(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
