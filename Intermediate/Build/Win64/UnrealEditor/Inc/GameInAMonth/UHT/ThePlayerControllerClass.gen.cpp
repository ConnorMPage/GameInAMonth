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
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AThePlayerControllerClass();
	GAMEINAMONTH_API UClass* Z_Construct_UClass_AThePlayerControllerClass_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameInAMonth();
// End Cross Module References
	void AThePlayerControllerClass::StaticRegisterNativesAThePlayerControllerClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThePlayerControllerClass);
	UClass* Z_Construct_UClass_AThePlayerControllerClass_NoRegister()
	{
		return AThePlayerControllerClass::StaticClass();
	}
	struct Z_Construct_UClass_AThePlayerControllerClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThePlayerControllerClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GameInAMonth,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayerControllerClass_Statics::DependentSingletons) < 16);
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThePlayerControllerClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_CrosshairUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_MiniMapUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayerControllerClass_Statics::NewProp_HUDUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThePlayerControllerClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThePlayerControllerClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThePlayerControllerClass_Statics::ClassParams = {
		&AThePlayerControllerClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThePlayerControllerClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AThePlayerControllerClass, AThePlayerControllerClass::StaticClass, TEXT("AThePlayerControllerClass"), &Z_Registration_Info_UClass_AThePlayerControllerClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThePlayerControllerClass), 2748457478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_ThePlayerControllerClass_h_2304857696(TEXT("/Script/GameInAMonth"),
		Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_ThePlayerControllerClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conno_OneDrive_Documents_Uni_Masters_Year_Advanced_Games_Dev_GameInAMonth_Source_GameInAMonth_ThePlayerControllerClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
