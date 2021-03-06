// This file was created automatically, do not modify the contents of this file.

// ReSharper disable InvalidXmlDocComment
// ReSharper disable InconsistentNaming
// ReSharper disable CheckNamespace
// ReSharper disable MemberCanBePrivate.Global

#include "UnrealDotNetRuntime.h"
#include "DotnetTypeName.h"
#include "Generate/Manage/ManageDefaultPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// Source file C:\Program Files\Epic Games\UE_4.22\Engine\Source\Runtime\Engine\Classes\GameFramework\DefaultPawn.h:25

AManageDefaultPawn::AManageDefaultPawn(const FObjectInitializer& ObjectInitializer)
 : Super(ObjectInitializer)
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(USceneComponent::GetDefaultSceneRootVariableName());
	RootComponent->Mobility = EComponentMobility::Movable;
	RootComponent->bVisualizeComponent = true;
	
	AddWrapperIfNotAttach();
}

bool AManageDefaultPawn::AddWrapperIfNotAttach()
{
	if (!bIsManageAttach && !ManageClassName.FullName.IsEmpty())
	{
		auto dotnetTypeName = ManageClassName.PackJSON();
		auto core = UCoreShell::GetInstance();
		
		bIsManageAttach = core->InvokeInWrapper<bool, 0>("UnrealEngine.NativeManager", "AddWrapper", this, TCHAR_TO_UTF8(*dotnetTypeName));
	}

	return bIsManageAttach;
}

void AManageDefaultPawn::LookUpAtRate(float Rate)
{
	Super::LookUpAtRate(Rate);
	
	if(AddWrapperIfNotAttach())
		UCoreShell::GetInstance()->InvokeInObject(this, "LookUpAtRate", Rate);
}

void AManageDefaultPawn::MoveForward(float Val)
{
	Super::MoveForward(Val);
	
	if(AddWrapperIfNotAttach())
		UCoreShell::GetInstance()->InvokeInObject(this, "MoveForward", Val);
}

void AManageDefaultPawn::MoveRight(float Val)
{
	Super::MoveRight(Val);
	
	if(AddWrapperIfNotAttach())
		UCoreShell::GetInstance()->InvokeInObject(this, "MoveRight", Val);
}

void AManageDefaultPawn::MoveUp_World(float Val)
{
	Super::MoveUp_World(Val);
	
	if(AddWrapperIfNotAttach())
		UCoreShell::GetInstance()->InvokeInObject(this, "MoveUp_World", Val);
}

void AManageDefaultPawn::TurnAtRate(float Rate)
{
	Super::TurnAtRate(Rate);
	
	if(AddWrapperIfNotAttach())
		UCoreShell::GetInstance()->InvokeInObject(this, "TurnAtRate", Rate);
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS
