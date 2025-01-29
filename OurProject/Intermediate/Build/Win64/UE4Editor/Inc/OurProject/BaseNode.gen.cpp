// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OurProject/BaseNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseNode() {}
// Cross Module References
	OURPROJECT_API UClass* Z_Construct_UClass_ABaseNode_NoRegister();
	OURPROJECT_API UClass* Z_Construct_UClass_ABaseNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OurProject();
	OURPROJECT_API UFunction* Z_Construct_UFunction_ABaseNode_addUnit();
	OURPROJECT_API UFunction* Z_Construct_UFunction_ABaseNode_flipControlledState();
	OURPROJECT_API UFunction* Z_Construct_UFunction_ABaseNode_isSameState();
	OURPROJECT_API UFunction* Z_Construct_UFunction_ABaseNode_setState();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABaseNode::StaticRegisterNativesABaseNode()
	{
		UClass* Class = ABaseNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addUnit", &ABaseNode::execaddUnit },
			{ "flipControlledState", &ABaseNode::execflipControlledState },
			{ "isSameState", &ABaseNode::execisSameState },
			{ "setState", &ABaseNode::execsetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseNode_addUnit_Statics
	{
		struct BaseNode_eventaddUnit_Parms
		{
			FString attacker;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseNode_addUnit_Statics::NewProp_attacker = { "attacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseNode_eventaddUnit_Parms, attacker), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseNode_addUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNode_addUnit_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNode_addUnit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNode_addUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNode, nullptr, "addUnit", nullptr, nullptr, sizeof(BaseNode_eventaddUnit_Parms), Z_Construct_UFunction_ABaseNode_addUnit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseNode_addUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNode_addUnit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseNode_addUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNode_addUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseNode_addUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseNode_flipControlledState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNode_flipControlledState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNode_flipControlledState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNode, nullptr, "flipControlledState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNode_flipControlledState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseNode_flipControlledState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNode_flipControlledState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseNode_flipControlledState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseNode_isSameState_Statics
	{
		struct BaseNode_eventisSameState_Parms
		{
			FString name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseNode_isSameState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseNode_eventisSameState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseNode_isSameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseNode_eventisSameState_Parms), &Z_Construct_UFunction_ABaseNode_isSameState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseNode_isSameState_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseNode_eventisSameState_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseNode_isSameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNode_isSameState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNode_isSameState_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNode_isSameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNode_isSameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNode, nullptr, "isSameState", nullptr, nullptr, sizeof(BaseNode_eventisSameState_Parms), Z_Construct_UFunction_ABaseNode_isSameState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseNode_isSameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNode_isSameState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseNode_isSameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNode_isSameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseNode_isSameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseNode_setState_Statics
	{
		struct BaseNode_eventsetState_Parms
		{
			FString name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseNode_setState_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseNode_eventsetState_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseNode_setState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNode_setState_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNode_setState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNode_setState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNode, nullptr, "setState", nullptr, nullptr, sizeof(BaseNode_eventsetState_Parms), Z_Construct_UFunction_ABaseNode_setState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseNode_setState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNode_setState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseNode_setState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNode_setState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseNode_setState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseNode_NoRegister()
	{
		return ABaseNode::StaticClass();
	}
	struct Z_Construct_UClass_ABaseNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlledState_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_controlledState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unitsOnNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_unitsOnNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nodeMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OurProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseNode_addUnit, "addUnit" }, // 3475337846
		{ &Z_Construct_UFunction_ABaseNode_flipControlledState, "flipControlledState" }, // 3717789923
		{ &Z_Construct_UFunction_ABaseNode_isSameState, "isSameState" }, // 61120659
		{ &Z_Construct_UFunction_ABaseNode_setState, "setState" }, // 3912879652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseNode.h" },
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNode_Statics::NewProp_controlledState_MetaData[] = {
		{ "Category", "BaseNode" },
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseNode_Statics::NewProp_controlledState = { "controlledState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNode, controlledState), METADATA_PARAMS(Z_Construct_UClass_ABaseNode_Statics::NewProp_controlledState_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseNode_Statics::NewProp_controlledState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNode_Statics::NewProp_unitsOnNode_MetaData[] = {
		{ "Category", "BaseNode" },
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseNode_Statics::NewProp_unitsOnNode = { "unitsOnNode", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNode, unitsOnNode), METADATA_PARAMS(Z_Construct_UClass_ABaseNode_Statics::NewProp_unitsOnNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseNode_Statics::NewProp_unitsOnNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNode_Statics::NewProp_enemyMesh_MetaData[] = {
		{ "Category", "BaseNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNode_Statics::NewProp_enemyMesh = { "enemyMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNode, enemyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNode_Statics::NewProp_enemyMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseNode_Statics::NewProp_enemyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNode_Statics::NewProp_playerMesh_MetaData[] = {
		{ "Category", "BaseNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNode_Statics::NewProp_playerMesh = { "playerMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNode, playerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNode_Statics::NewProp_playerMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseNode_Statics::NewProp_playerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNode_Statics::NewProp_nodeMesh_MetaData[] = {
		{ "Category", "BaseNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNode_Statics::NewProp_nodeMesh = { "nodeMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNode, nodeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNode_Statics::NewProp_nodeMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseNode_Statics::NewProp_nodeMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNode_Statics::NewProp_controlledState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNode_Statics::NewProp_unitsOnNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNode_Statics::NewProp_enemyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNode_Statics::NewProp_playerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNode_Statics::NewProp_nodeMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseNode_Statics::ClassParams = {
		&ABaseNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABaseNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseNode, 2661494459);
	template<> OURPROJECT_API UClass* StaticClass<ABaseNode>()
	{
		return ABaseNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseNode(Z_Construct_UClass_ABaseNode, &ABaseNode::StaticClass, TEXT("/Script/OurProject"), TEXT("ABaseNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
