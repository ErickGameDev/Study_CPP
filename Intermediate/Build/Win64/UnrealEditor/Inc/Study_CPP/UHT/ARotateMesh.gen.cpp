// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_CPP/Public/RotateMesh/ARotateMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARotateMesh() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STUDY_CPP_API UClass* Z_Construct_UClass_AARotateMesh();
	STUDY_CPP_API UClass* Z_Construct_UClass_AARotateMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Study_CPP();
// End Cross Module References
	void AARotateMesh::StaticRegisterNativesAARotateMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARotateMesh);
	UClass* Z_Construct_UClass_AARotateMesh_NoRegister()
	{
		return AARotateMesh::StaticClass();
	}
	struct Z_Construct_UClass_AARotateMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRotateValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRotateValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotateValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRotateValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARotateMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARotateMesh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARotateMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotateMesh/ARotateMesh.h" },
		{ "ModuleRelativePath", "Public/RotateMesh/ARotateMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARotateMesh_Statics::NewProp_RotateMesh_MetaData[] = {
		{ "Category", "ARotateMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotateMesh/ARotateMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARotateMesh_Statics::NewProp_RotateMesh = { "RotateMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARotateMesh, RotateMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARotateMesh_Statics::NewProp_RotateMesh_MetaData), Z_Construct_UClass_AARotateMesh_Statics::NewProp_RotateMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARotateMesh_Statics::NewProp_YawRotateValue_MetaData[] = {
		{ "Category", "VALUE" },
		{ "ModuleRelativePath", "Public/RotateMesh/ARotateMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARotateMesh_Statics::NewProp_YawRotateValue = { "YawRotateValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARotateMesh, YawRotateValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARotateMesh_Statics::NewProp_YawRotateValue_MetaData), Z_Construct_UClass_AARotateMesh_Statics::NewProp_YawRotateValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARotateMesh_Statics::NewProp_PitchRotateValue_MetaData[] = {
		{ "Category", "VALUE" },
		{ "ModuleRelativePath", "Public/RotateMesh/ARotateMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARotateMesh_Statics::NewProp_PitchRotateValue = { "PitchRotateValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARotateMesh, PitchRotateValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARotateMesh_Statics::NewProp_PitchRotateValue_MetaData), Z_Construct_UClass_AARotateMesh_Statics::NewProp_PitchRotateValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARotateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARotateMesh_Statics::NewProp_RotateMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARotateMesh_Statics::NewProp_YawRotateValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARotateMesh_Statics::NewProp_PitchRotateValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARotateMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARotateMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARotateMesh_Statics::ClassParams = {
		&AARotateMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AARotateMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AARotateMesh_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARotateMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_AARotateMesh_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARotateMesh_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AARotateMesh()
	{
		if (!Z_Registration_Info_UClass_AARotateMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARotateMesh.OuterSingleton, Z_Construct_UClass_AARotateMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARotateMesh.OuterSingleton;
	}
	template<> STUDY_CPP_API UClass* StaticClass<AARotateMesh>()
	{
		return AARotateMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARotateMesh);
	AARotateMesh::~AARotateMesh() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_RotateMesh_ARotateMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_RotateMesh_ARotateMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARotateMesh, AARotateMesh::StaticClass, TEXT("AARotateMesh"), &Z_Registration_Info_UClass_AARotateMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARotateMesh), 1172996787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_RotateMesh_ARotateMesh_h_3541397270(TEXT("/Script/Study_CPP"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_RotateMesh_ARotateMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_RotateMesh_ARotateMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
