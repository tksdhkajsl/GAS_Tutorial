// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KI07_Unreal_GAS/Public/Interface/Resource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UResource();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UResource_NoRegister();
UPackage* Z_Construct_UPackage__Script_KI07_Unreal_GAS();
// End Cross Module References

// Begin Interface UResource Function UpdateCurrent
struct Resource_eventUpdateCurrent_Parms
{
	float InValue;
};
void IResource::UpdateCurrent(float InValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateCurrent instead.");
}
static FName NAME_UResource_UpdateCurrent = FName(TEXT("UpdateCurrent"));
void IResource::Execute_UpdateCurrent(UObject* O, float InValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UResource::StaticClass()));
	Resource_eventUpdateCurrent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UResource_UpdateCurrent);
	if (Func)
	{
		Parms.InValue=InValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IResource*)(O->GetNativeInterfaceAddress(UResource::StaticClass())))
	{
		I->UpdateCurrent_Implementation(InValue);
	}
}
struct Z_Construct_UFunction_UResource_UpdateCurrent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Interface/Resource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResource_UpdateCurrent_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventUpdateCurrent_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResource_UpdateCurrent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResource_UpdateCurrent_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResource_UpdateCurrent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResource_UpdateCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResource, nullptr, "UpdateCurrent", nullptr, nullptr, Z_Construct_UFunction_UResource_UpdateCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResource_UpdateCurrent_Statics::PropPointers), sizeof(Resource_eventUpdateCurrent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResource_UpdateCurrent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResource_UpdateCurrent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Resource_eventUpdateCurrent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResource_UpdateCurrent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResource_UpdateCurrent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IResource::execUpdateCurrent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurrent_Implementation(Z_Param_InValue);
	P_NATIVE_END;
}
// End Interface UResource Function UpdateCurrent

// Begin Interface UResource Function UpdateMax
struct Resource_eventUpdateMax_Parms
{
	float InValue;
};
void IResource::UpdateMax(float InValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateMax instead.");
}
static FName NAME_UResource_UpdateMax = FName(TEXT("UpdateMax"));
void IResource::Execute_UpdateMax(UObject* O, float InValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UResource::StaticClass()));
	Resource_eventUpdateMax_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UResource_UpdateMax);
	if (Func)
	{
		Parms.InValue=InValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IResource*)(O->GetNativeInterfaceAddress(UResource::StaticClass())))
	{
		I->UpdateMax_Implementation(InValue);
	}
}
struct Z_Construct_UFunction_UResource_UpdateMax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Interface/Resource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResource_UpdateMax_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventUpdateMax_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResource_UpdateMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResource_UpdateMax_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResource_UpdateMax_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResource_UpdateMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResource, nullptr, "UpdateMax", nullptr, nullptr, Z_Construct_UFunction_UResource_UpdateMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResource_UpdateMax_Statics::PropPointers), sizeof(Resource_eventUpdateMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResource_UpdateMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResource_UpdateMax_Statics::Function_MetaDataParams) };
static_assert(sizeof(Resource_eventUpdateMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResource_UpdateMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResource_UpdateMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IResource::execUpdateMax)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMax_Implementation(Z_Param_InValue);
	P_NATIVE_END;
}
// End Interface UResource Function UpdateMax

// Begin Interface UResource
void UResource::StaticRegisterNativesUResource()
{
	UClass* Class = UResource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateCurrent", &IResource::execUpdateCurrent },
		{ "UpdateMax", &IResource::execUpdateMax },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResource);
UClass* Z_Construct_UClass_UResource_NoRegister()
{
	return UResource::StaticClass();
}
struct Z_Construct_UClass_UResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/Resource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UResource_UpdateCurrent, "UpdateCurrent" }, // 1617810558
		{ &Z_Construct_UFunction_UResource_UpdateMax, "UpdateMax" }, // 3007711794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IResource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UResource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_KI07_Unreal_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResource_Statics::ClassParams = {
	&UResource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResource_Statics::Class_MetaDataParams), Z_Construct_UClass_UResource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResource()
{
	if (!Z_Registration_Info_UClass_UResource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResource.OuterSingleton, Z_Construct_UClass_UResource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResource.OuterSingleton;
}
template<> KI07_UNREAL_GAS_API UClass* StaticClass<UResource>()
{
	return UResource::StaticClass();
}
UResource::UResource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResource);
UResource::~UResource() {}
// End Interface UResource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResource, UResource::StaticClass, TEXT("UResource"), &Z_Registration_Info_UClass_UResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResource), 3698931849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_2188534557(TEXT("/Script/KI07_Unreal_GAS"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
