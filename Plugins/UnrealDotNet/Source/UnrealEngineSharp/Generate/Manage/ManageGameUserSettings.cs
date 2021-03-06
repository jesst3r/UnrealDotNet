// This file was created automatically, do not modify the contents of this file.

// ReSharper disable InvalidXmlDocComment
// ReSharper disable InconsistentNaming
// ReSharper disable CheckNamespace
// ReSharper disable MemberCanBePrivate.Global

using System;
using System.Runtime.InteropServices;

// Source file C:\Program Files\Epic Games\UE_4.22\Engine\Source\Runtime\Engine\Classes\GameFramework\GameUserSettings.h:38

namespace UnrealEngine
{
	[ManageType("ManageGameUserSettings")]
	public partial class ManageGameUserSettings : UGameUserSettings
	{
		public ManageGameUserSettings(IntPtr Adress)
			: base(Adress)
		{
		}

		
		/// <summary>
		/// Applies the settings stored in ScalabilityQuality and saves settings
		/// </summary>
		public override void ApplyHardwareBenchmarkResults() { }
		
		public override void ApplyNonResolutionSettings() { }
		
		
		/// <summary>
		/// Applies all current user settings to the game and saves to permanent storage (e.g. file), optionally checking for command line overrides.
		/// </summary>
		public override void ApplySettings(bool bCheckForCommandLineOverrides) { }
		
		
		/// <summary>
		/// Mark current video mode settings (fullscreenmode/resolution) as being confirmed by the user
		/// </summary>
		public override void ConfirmVideoMode() { }
		
		
		/// <summary>
		/// Loads the user settings from persistent storage
		/// </summary>
		public override void LoadSettings(bool bForceReload) { }
		
		
		/// <summary>
		/// This function resets all settings to the current system settings
		/// </summary>
		public override void ResetToCurrentSettings() { }
		
		
		/// <summary>
		/// Runs the hardware benchmark and populates ScalabilityQuality as well as the last benchmark results config members, but does not apply the settings it determines. Designed to be called in conjunction with ApplyHardwareBenchmarkResults
		/// </summary>
		public override void RunHardwareBenchmark(int workScale, float cPUMultiplier, float gPUMultiplier) { }
		
		
		/// <summary>
		/// Save the user settings to persistent storage (automatically happens as part of ApplySettings)
		/// </summary>
		public override void SaveSettings() { }
		
		public override void SetOverallScalabilityLevel(int value) { }
		
		public override void SetToDefaults() { }
		
		public override void SetWindowPosition(int windowPosX, int windowPosY) { }
		
		
		/// <summary>
		/// Update the version of the game user settings to the current version
		/// </summary>
		protected override void UpdateVersion() { }
		
		
		/// <summary>
		/// Validates and resets bad user settings to default. Deletes stale user settings file if necessary.
		/// </summary>
		public override void ValidateSettings() { }
		
		public static implicit operator IntPtr(ManageGameUserSettings self)
		{
			return self?.NativePointer ?? IntPtr.Zero;
		}

		public static implicit operator ManageGameUserSettings(ObjectPointerDescription PtrDesc)
		{
			return NativeManager.GetWrapper<ManageGameUserSettings>(PtrDesc);
		}}}
