// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study_CPP/Public/Projectile/AProjectileBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAProjectileBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STUDY_CPP_API UClass* Z_Construct_UClass_AAProjectileBase();
	STUDY_CPP_API UClass* Z_Construct_UClass_AAProjectileBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Study_CPP();
// End Cross Module References
	void AAProjectileBase::StaticRegisterNativesAAProjectileBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAProjectileBase);
	UClass* Z_Construct_UClass_AAProjectileBase_NoRegister()
	{
		return AAProjectileBase::StaticClass();
	}
	struct Z_Construct_UClass_AAProjectileBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAProjectileBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Study_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAProjectileBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile/AProjectileBase.h" },
		{ "ModuleRelativePath", "Public/Projectile/AProjectileBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "AProjectileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/AProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAProjectileBase, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileMesh_MetaData), Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileComponent_MetaData[] = {
		{ "Category", "AProjectileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/AProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileComponent = { "ProjectileComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAProjectileBase, ProjectileComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileComponent_MetaData), Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAProjectileBase_Statics::NewProp_Particle_MetaData[] = {
		{ "Category", "AProjectileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/AProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAProjectileBase_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAProjectileBase, Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileBase_Statics::NewProp_Particle_MetaData), Z_Construct_UClass_AAProjectileBase_Statics::NewProp_Particle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAProjectileBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAProjectileBase_Statics::NewProp_ProjectileComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAProjectileBase_Statics::NewProp_Particle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAProjectileBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAProjectileBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAProjectileBase_Statics::ClassParams = {
		&AAProjectileBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAProjectileBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAProjectileBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAProjectileBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAProjectileBase()
	{
		if (!Z_Registration_Info_UClass_AAProjectileBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAProjectileBase.OuterSingleton, Z_Construct_UClass_AAProjectileBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAProjectileBase.OuterSingleton;
	}
	template<> STUDY_CPP_API UClass* StaticClass<AAProjectileBase>()
	{
		return AAProjectileBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAProjectileBase);
	AAProjectileBase::~AAProjectileBase() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_Projectile_AProjectileBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_Projectile_AProjectileBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAProjectileBase, AAProjectileBase::StaticClass, TEXT("AAProjectileBase"), &Z_Registration_Info_UClass_AAProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAProjectileBase), 1493959972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_Projectile_AProjectileBase_h_1718451349(TEXT("/Script/Study_CPP"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_Projectile_AProjectileBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_Study_CPP_Source_Study_CPP_Public_Projectile_AProjectileBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
