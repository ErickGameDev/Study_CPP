// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_CPP/Study_CPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudy_CPPGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	STUDY_CPP_API UClass* Z_Construct_UClass_AStudy_CPPGameMode();
	STUDY_CPP_API UClass* Z_Construct_UClass_AStudy_CPPGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Study_CPP();
// End Cross Module References
	void AStudy_CPPGameMode::StaticRegisterNativesAStudy_CPPGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStudy_CPPGameMode);
	UClass* Z_Construct_UClass_AStudy_CPPGameMode_NoRegister()
	{
		return AStudy_CPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStudy_CPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStudy_CPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStudy_CPPGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStudy_CPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Study_CPPGameMode.h" },
		{ "ModuleRelativePath", "Study_CPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStudy_CPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStudy_CPPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStudy_CPPGameMode_Statics::ClassParams = {
		&AStudy_CPPGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStudy_CPPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AStudy_CPPGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AStudy_CPPGameMode()
	{
		if (!Z_Registration_Info_UClass_AStudy_CPPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStudy_CPPGameMode.OuterSingleton, Z_Construct_UClass_AStudy_CPPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStudy_CPPGameMode.OuterSingleton;
	}
	template<> STUDY_CPP_API UClass* StaticClass<AStudy_CPPGameMode>()
	{
		return AStudy_CPPGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStudy_CPPGameMode);
	AStudy_CPPGameMode::~AStudy_CPPGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Study_CPPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Study_CPPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStudy_CPPGameMode, AStudy_CPPGameMode::StaticClass, TEXT("AStudy_CPPGameMode"), &Z_Registration_Info_UClass_AStudy_CPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStudy_CPPGameMode), 2759515941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Study_CPPGameMode_h_1430635910(TEXT("/Script/Study_CPP"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Study_CPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Study_CPPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
