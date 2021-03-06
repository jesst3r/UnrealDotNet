// This file was created automatically, do not modify the contents of this file.

// ReSharper disable InvalidXmlDocComment
// ReSharper disable InconsistentNaming
// ReSharper disable CheckNamespace
// ReSharper disable MemberCanBePrivate.Global

#include "UnrealDotNetRuntime.h"
#include "DotnetTypeName.h"
#include "Generate/Manage/ManageGameNetworkManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// Source file C:\Program Files\Epic Games\UE_4.22\Engine\Source\Runtime\Engine\Classes\GameFramework\GameNetworkManager.h:27

AManageGameNetworkManager::AManageGameNetworkManager(const FObjectInitializer& ObjectInitializer)
 : Super(ObjectInitializer)
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(USceneComponent::GetDefaultSceneRootVariableName());
	RootComponent->Mobility = EComponentMobility::Movable;
	RootComponent->bVisualizeComponent = true;
	
	AddWrapperIfNotAttach();
}

bool AManageGameNetworkManager::AddWrapperIfNotAttach()
{
	if (!bIsManageAttach && !ManageClassName.FullName.IsEmpty())
	{
		auto dotnetTypeName = ManageClassName.PackJSON();
		auto core = UCoreShell::GetInstance();
		
		bIsManageAttach = core->InvokeInWrapper<bool, 0>("UnrealEngine.NativeManager", "AddWrapper", this, TCHAR_TO_UTF8(*dotnetTypeName));
	}

	return bIsManageAttach;
}

void AManageGameNetworkManager::EnableStandbyCheatDetection(bool bIsEnabled)
{
	Super::EnableStandbyCheatDetection(bIsEnabled);
	
	if(AddWrapperIfNotAttach())
		UCoreShell::GetInstance()->InvokeInObject(this, "EnableStandbyCheatDetection", bIsEnabled);
}

void AManageGameNetworkManager::StandbyCheatDetected(EStandbyType StandbyType)
{
	Super::StandbyCheatDetected(StandbyType);
	
	if(AddWrapperIfNotAttach())
		UCoreShell::GetInstance()->InvokeInObject(this, "StandbyCheatDetected", StandbyType);
}

void AManageGameNetworkManager::UpdateNetSpeeds(bool bIsLanMatch)
{
	Super::UpdateNetSpeeds(bIsLanMatch);
	
	if(AddWrapperIfNotAttach())
		UCoreShell::GetInstance()->InvokeInObject(this, "UpdateNetSpeeds", bIsLanMatch);
}

void AManageGameNetworkManager::UpdateNetSpeedsTimer()
{
	Super::UpdateNetSpeedsTimer();
	
	if(AddWrapperIfNotAttach())
		UCoreShell::GetInstance()->InvokeInObject(this, "UpdateNetSpeedsTimer");
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS
