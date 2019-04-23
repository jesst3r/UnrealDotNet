// This file was created automatically, do not modify the contents of this file.

// ReSharper disable InvalidXmlDocComment
// ReSharper disable InconsistentNaming
// ReSharper disable CheckNamespace
// ReSharper disable MemberCanBePrivate.Global

using System;
using System.Runtime.InteropServices;

// Source file C:\Program Files\Epic Games\UE_4.22\Engine\Source\Runtime\Engine\Classes\GameFramework\ForceFeedbackEffect.h:14

namespace UnrealEngine
{
	public  partial class FForceFeedbackChannelDetails : NativeStructWrapper
	{
		internal FForceFeedbackChannelDetails(IntPtr NativePointer, bool IsRef) : base(NativePointer, IsRef)
		{
		}

		public FForceFeedbackChannelDetails() :
			base(E_CreateStruct_FForceFeedbackChannelDetails(), false)
		{
		}

		#region DLLInmport
		[DllImport(NativeManager.UnrealDotNetDll, CallingConvention = CallingConvention.Cdecl)]
		private static extern IntPtr E_CreateStruct_FForceFeedbackChannelDetails();
		
		#endregion
		
		public static implicit operator IntPtr(FForceFeedbackChannelDetails self)
		{
			return self.NativePointer;
		}

		public static implicit operator FForceFeedbackChannelDetails(IntPtr Adress)
		{
			return Adress == IntPtr.Zero ? null : new FForceFeedbackChannelDetails(Adress, false);
		}