// This file was created automatically, do not modify the contents of this file.

// ReSharper disable InvalidXmlDocComment
// ReSharper disable InconsistentNaming
// ReSharper disable CheckNamespace
// ReSharper disable MemberCanBePrivate.Global

using System;
using System.Runtime.InteropServices;

// Source file C:\Program Files\Epic Games\UE_4.22\Engine\Source\Runtime\Engine\Classes\GameFramework\PlayerController.h:167

namespace UnrealEngine
{
	public  partial class FUpdateLevelVisibilityLevelInfo : NativeStructWrapper
	{
		internal FUpdateLevelVisibilityLevelInfo(IntPtr NativePointer, bool IsRef) : base(NativePointer, IsRef)
		{
		}

		public FUpdateLevelVisibilityLevelInfo() :
			base(E_CreateStruct_FUpdateLevelVisibilityLevelInfo(), false)
		{
		}

		[DllImport(NativeManager.UnrealDotNetDll, CallingConvention = CallingConvention.Cdecl)]
		private static extern StringWrapper E_PROP_FUpdateLevelVisibilityLevelInfo_PackageName_GET(IntPtr Ptr);
		[DllImport(NativeManager.UnrealDotNetDll, CallingConvention = CallingConvention.Cdecl)]
		private static extern void E_PROP_FUpdateLevelVisibilityLevelInfo_PackageName_SET(IntPtr Ptr, string Value);
		
		#region DLLInmport
		[DllImport(NativeManager.UnrealDotNetDll, CallingConvention = CallingConvention.Cdecl)]
		private static extern IntPtr E_CreateStruct_FUpdateLevelVisibilityLevelInfo();
		
		#endregion
		
		#region Property
		public string PackageName
		{
			get => E_PROP_FUpdateLevelVisibilityLevelInfo_PackageName_GET(NativePointer);
			set => E_PROP_FUpdateLevelVisibilityLevelInfo_PackageName_SET(NativePointer, value);
		}

		#endregion
		
		public static implicit operator IntPtr(FUpdateLevelVisibilityLevelInfo self)
		{
			return self?.NativePointer ?? IntPtr.Zero;
		}

		public static implicit operator FUpdateLevelVisibilityLevelInfo(IntPtr Adress)
		{
			return Adress == IntPtr.Zero ? null : new FUpdateLevelVisibilityLevelInfo(Adress, false);
		}}}
