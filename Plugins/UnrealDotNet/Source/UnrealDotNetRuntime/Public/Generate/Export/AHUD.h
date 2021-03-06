#pragma once
// This file was created automatically, do not modify the contents of this file.

// ReSharper disable InvalidXmlDocComment
// ReSharper disable InconsistentNaming
// ReSharper disable CheckNamespace
// ReSharper disable MemberCanBePrivate.Global

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#include "CoreMinimal.h"
#include "ManageEventSender.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"

// Source file C:\Program Files\Epic Games\UE_4.22\Engine\Source\Runtime\Engine\Classes\GameFramework\HUD.h:36

class E_PROTECTED_WRAP_AHUD : protected AHUD
{
public:
	bool IsCanvasValid_WarnIfNot_WRAP()
	{
		return IsCanvasValid_WarnIfNot();
	}

};


extern "C"
{
	DOTNET_EXPORT auto E_PROP_AHUD_bEnableDebugTextShadow_GET(AHUD* Ptr) { return Ptr->bEnableDebugTextShadow; }
	DOTNET_EXPORT void E_PROP_AHUD_bEnableDebugTextShadow_SET(AHUD* Ptr, uint8 Value) { Ptr->bEnableDebugTextShadow = Value; }
	
	DOTNET_EXPORT auto E_PROP_AHUD_bLostFocusPaused_GET(AHUD* Ptr) { return Ptr->bLostFocusPaused; }
	DOTNET_EXPORT void E_PROP_AHUD_bLostFocusPaused_SET(AHUD* Ptr, uint8 Value) { Ptr->bLostFocusPaused = Value; }
	
	DOTNET_EXPORT auto E_PROP_AHUD_bShowDebugInfo_GET(AHUD* Ptr) { return Ptr->bShowDebugInfo; }
	DOTNET_EXPORT void E_PROP_AHUD_bShowDebugInfo_SET(AHUD* Ptr, uint8 Value) { Ptr->bShowDebugInfo = Value; }
	
	DOTNET_EXPORT auto E_PROP_AHUD_bShowHitBoxDebugInfo_GET(AHUD* Ptr) { return Ptr->bShowHitBoxDebugInfo; }
	DOTNET_EXPORT void E_PROP_AHUD_bShowHitBoxDebugInfo_SET(AHUD* Ptr, uint8 Value) { Ptr->bShowHitBoxDebugInfo = Value; }
	
	DOTNET_EXPORT auto E_PROP_AHUD_bShowHUD_GET(AHUD* Ptr) { return Ptr->bShowHUD; }
	DOTNET_EXPORT void E_PROP_AHUD_bShowHUD_SET(AHUD* Ptr, uint8 Value) { Ptr->bShowHUD = Value; }
	
	DOTNET_EXPORT auto E_PROP_AHUD_bShowOverlays_GET(AHUD* Ptr) { return Ptr->bShowOverlays; }
	DOTNET_EXPORT void E_PROP_AHUD_bShowOverlays_SET(AHUD* Ptr, uint8 Value) { Ptr->bShowOverlays = Value; }
	
	DOTNET_EXPORT auto E_PROP_AHUD_CurrentTargetIndex_GET(AHUD* Ptr) { return Ptr->CurrentTargetIndex; }
	DOTNET_EXPORT void E_PROP_AHUD_CurrentTargetIndex_SET(AHUD* Ptr, int32 Value) { Ptr->CurrentTargetIndex = Value; }
	
	DOTNET_EXPORT auto E_PROP_AHUD_LastHUDRenderTime_GET(AHUD* Ptr) { return Ptr->LastHUDRenderTime; }
	DOTNET_EXPORT void E_PROP_AHUD_LastHUDRenderTime_SET(AHUD* Ptr, float Value) { Ptr->LastHUDRenderTime = Value; }
	
	DOTNET_EXPORT auto E_PROP_AHUD_PlayerOwner_GET(AHUD* Ptr) { return ConvertToManage_ObjectPointerDescription(Ptr->PlayerOwner); }
	DOTNET_EXPORT void E_PROP_AHUD_PlayerOwner_SET(AHUD* Ptr, APlayerController* Value) { Ptr->PlayerOwner = Value; }
	
	DOTNET_EXPORT auto E_PROP_AHUD_RenderDelta_GET(AHUD* Ptr) { return Ptr->RenderDelta; }
	DOTNET_EXPORT void E_PROP_AHUD_RenderDelta_SET(AHUD* Ptr, float Value) { Ptr->RenderDelta = Value; }
	
	
	DOTNET_EXPORT INT_PTR E_NewObject_AHUD(UObject* Parent, char* Name)
	{
		return (INT_PTR)NewObject<AHUD>(Parent, FName(UTF8_TO_TCHAR(Name)));
	}

	DOTNET_EXPORT auto E_AHUD_AddHitBox(AHUD* Self, INT_PTR Position, INT_PTR Size, char* InName, bool bConsumesInput, int32 Priority)
	{
		auto _p0 = *(FVector2D*)Position;
		auto _p1 = *(FVector2D*)Size;
		auto _p2 = ConvertFromManage_FName(InName);
		auto _p3 = bConsumesInput;
		auto _p4 = Priority;
		Self->AddHitBox(_p0, _p1, _p2, _p3, _p4);
	}

	DOTNET_EXPORT auto E_AHUD_AddPostRenderedActor(AHUD* Self, AActor* A)
	{
		auto _p0 = A;
		Self->AddPostRenderedActor(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_AnyCurrentHitBoxHits(AHUD* Self)
	{
		return Self->AnyCurrentHitBoxHits();
	}

	DOTNET_EXPORT auto E_AHUD_Deproject(AHUD* Self, float ScreenX, float ScreenY, INT_PTR WorldPosition, INT_PTR WorldDirection)
	{
		auto _p0 = ScreenX;
		auto _p1 = ScreenY;
		auto& _p2 = *(FVector*)WorldPosition;
		auto& _p3 = *(FVector*)WorldDirection;
		Self->Deproject(_p0, _p1, _p2, _p3);
	}

	DOTNET_EXPORT auto E_AHUD_DrawActorOverlays(AHUD* Self, INT_PTR Viewpoint, INT_PTR ViewRotation)
	{
		auto _p0 = *(FVector*)Viewpoint;
		auto _p1 = *(FRotator*)ViewRotation;
		Self->DrawActorOverlays(_p0, _p1);
	}

	DOTNET_EXPORT auto E_AHUD_DrawDebugTextList(AHUD* Self)
	{
		Self->DrawDebugTextList();
	}

	DOTNET_EXPORT auto E_AHUD_DrawHUD(AHUD* Self)
	{
		Self->DrawHUD();
	}

	DOTNET_EXPORT auto E_AHUD_DrawLine(AHUD* Self, float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, INT_PTR LineColor, float LineThickness)
	{
		auto _p0 = StartScreenX;
		auto _p1 = StartScreenY;
		auto _p2 = EndScreenX;
		auto _p3 = EndScreenY;
		auto _p4 = *(FLinearColor*)LineColor;
		auto _p5 = LineThickness;
		Self->DrawLine(_p0, _p1, _p2, _p3, _p4, _p5);
	}

	DOTNET_EXPORT auto E_AHUD_DrawRect(AHUD* Self, INT_PTR RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH)
	{
		auto _p0 = *(FLinearColor*)RectColor;
		auto _p1 = ScreenX;
		auto _p2 = ScreenY;
		auto _p3 = ScreenW;
		auto _p4 = ScreenH;
		Self->DrawRect(_p0, _p1, _p2, _p3, _p4);
	}

	DOTNET_EXPORT auto E_AHUD_DrawSafeZoneOverlay(AHUD* Self)
	{
		Self->DrawSafeZoneOverlay();
	}

	DOTNET_EXPORT auto E_AHUD_GetCurrentDebugTargetActor(AHUD* Self)
	{
		return ConvertToManage_ObjectPointerDescription(Self->GetCurrentDebugTargetActor());
	}

	DOTNET_EXPORT auto E_AHUD_GetOwningPawn(AHUD* Self)
	{
		return ConvertToManage_ObjectPointerDescription(Self->GetOwningPawn());
	}

	DOTNET_EXPORT auto E_AHUD_GetOwningPlayerController(AHUD* Self)
	{
		return ConvertToManage_ObjectPointerDescription(Self->GetOwningPlayerController());
	}

	DOTNET_EXPORT auto E_AHUD_HandleBugScreenShot(AHUD* Self)
	{
		Self->HandleBugScreenShot();
	}

	DOTNET_EXPORT auto E_AHUD_IsCanvasValid_WarnIfNot(AHUD* Self)
	{
		return ((E_PROTECTED_WRAP_AHUD*)Self)->IsCanvasValid_WarnIfNot_WRAP();
	}

	DOTNET_EXPORT auto E_AHUD_NextDebugTarget(AHUD* Self)
	{
		Self->NextDebugTarget();
	}

	DOTNET_EXPORT auto E_AHUD_NotifyBindPostProcessEffects(AHUD* Self)
	{
		Self->NotifyBindPostProcessEffects();
	}

	DOTNET_EXPORT auto E_AHUD_NotifyHitBoxBeginCursorOver(AHUD* Self, char* BoxName)
	{
		auto _p0 = ConvertFromManage_FName(BoxName);
		Self->NotifyHitBoxBeginCursorOver(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_NotifyHitBoxClick(AHUD* Self, char* BoxName)
	{
		auto _p0 = ConvertFromManage_FName(BoxName);
		Self->NotifyHitBoxClick(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_NotifyHitBoxEndCursorOver(AHUD* Self, char* BoxName)
	{
		auto _p0 = ConvertFromManage_FName(BoxName);
		Self->NotifyHitBoxEndCursorOver(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_NotifyHitBoxRelease(AHUD* Self, char* BoxName)
	{
		auto _p0 = ConvertFromManage_FName(BoxName);
		Self->NotifyHitBoxRelease(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_OnLostFocusPause(AHUD* Self, bool bEnable)
	{
		auto _p0 = bEnable;
		Self->OnLostFocusPause(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_PostRender(AHUD* Self)
	{
		Self->PostRender();
	}

	DOTNET_EXPORT auto E_AHUD_PreviousDebugTarget(AHUD* Self)
	{
		Self->PreviousDebugTarget();
	}

	DOTNET_EXPORT auto E_AHUD_Project(AHUD* Self, INT_PTR Location)
	{
		auto _p0 = *(FVector*)Location;
		return (INT_PTR) new FVector(Self->Project(_p0));
	}

	DOTNET_EXPORT auto E_AHUD_ReceiveDrawHUD(AHUD* Self, int32 SizeX, int32 SizeY)
	{
		auto _p0 = SizeX;
		auto _p1 = SizeY;
		Self->ReceiveDrawHUD(_p0, _p1);
	}

	DOTNET_EXPORT auto E_AHUD_ReceiveHitBoxBeginCursorOver(AHUD* Self, char* BoxName)
	{
		auto _p0 = ConvertFromManage_FName(BoxName);
		Self->ReceiveHitBoxBeginCursorOver(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_ReceiveHitBoxClick(AHUD* Self, char* BoxName)
	{
		auto _p0 = ConvertFromManage_FName(BoxName);
		Self->ReceiveHitBoxClick(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_ReceiveHitBoxEndCursorOver(AHUD* Self, char* BoxName)
	{
		auto _p0 = ConvertFromManage_FName(BoxName);
		Self->ReceiveHitBoxEndCursorOver(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_ReceiveHitBoxRelease(AHUD* Self, char* BoxName)
	{
		auto _p0 = ConvertFromManage_FName(BoxName);
		Self->ReceiveHitBoxRelease(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_RemoveAllDebugStrings(AHUD* Self)
	{
		Self->RemoveAllDebugStrings();
	}

	DOTNET_EXPORT auto E_AHUD_RemoveDebugText(AHUD* Self, AActor* SrcActor, bool bLeaveDurationText)
	{
		auto _p0 = SrcActor;
		auto _p1 = bLeaveDurationText;
		Self->RemoveDebugText(_p0, _p1);
	}

	DOTNET_EXPORT auto E_AHUD_RemovePostRenderedActor(AHUD* Self, AActor* A)
	{
		auto _p0 = A;
		Self->RemovePostRenderedActor(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_SetCanvas(AHUD* Self, UCanvas* InCanvas, UCanvas* InDebugCanvas)
	{
		auto _p0 = InCanvas;
		auto _p1 = InDebugCanvas;
		Self->SetCanvas(_p0, _p1);
	}

	DOTNET_EXPORT auto E_AHUD_ShouldDisplayDebug(AHUD* Self, char* DebugType)
	{
		auto _p0 = ConvertFromManage_FName(DebugType);
		return Self->ShouldDisplayDebug(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_ShowDebug(AHUD* Self, char* DebugType)
	{
		auto _p0 = ConvertFromManage_FName(DebugType);
		Self->ShowDebug(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_ShowDebugInfo(AHUD* Self, float YL, float YPos)
	{
		auto& _p0 = YL;
		auto& _p1 = YPos;
		Self->ShowDebugInfo(_p0, _p1);
	}

	DOTNET_EXPORT auto E_AHUD_ShowDebugToggleSubCategory(AHUD* Self, char* Category)
	{
		auto _p0 = ConvertFromManage_FName(Category);
		Self->ShowDebugToggleSubCategory(_p0);
	}

	DOTNET_EXPORT auto E_AHUD_ShowHUD(AHUD* Self)
	{
		Self->ShowHUD();
	}

	DOTNET_EXPORT auto E_AHUD_UpdateAndDispatchHitBoxClickEvents(AHUD* Self, INT_PTR ClickLocation, EInputEvent InEventType)
	{
		auto _p0 = *(FVector2D*)ClickLocation;
		auto _p1 = InEventType;
		return Self->UpdateAndDispatchHitBoxClickEvents(_p0, _p1);
	}

}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
