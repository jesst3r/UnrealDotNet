using System;
using System.Runtime.InteropServices;

namespace UnrealEngine
{
	public partial class FLensBloomSettings
	{
		private readonly IntPtr NativePointer;
		private readonly bool IsRef;
		
		public FLensBloomSettings()
		{
			NativePointer = E_CreateStruct_FLensBloomSettings();
			IsRef = false;
		}

		internal FLensBloomSettings(IntPtr NativePointer, bool IsRef)
		{
			this.NativePointer = NativePointer;
			this.IsRef = IsRef;
		}

		
		#region DLLInmport
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern IntPtr E_CreateStruct_FLensBloomSettings();
		
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void E_DeleteStruct(IntPtr Adress);
		
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern FConvolutionBloomSettings E_PROP_FLensBloomSettings_Convolution_GET(IntPtr Ptr);
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void E_PROP_FLensBloomSettings_Convolution_SET(IntPtr Ptr, FConvolutionBloomSettings Value);
		
		#endregion
		
		#region Property
		
		/// <summary>
		/// Bloom convolution method specific settings.
		/// </summary>
		public FConvolutionBloomSettings Convolution
		{
			get => E_PROP_FLensBloomSettings_Convolution_GET(NativePointer);
			set => E_PROP_FLensBloomSettings_Convolution_SET(NativePointer, value);
		}

		#endregion
		
		public static implicit operator IntPtr(FLensBloomSettings Self)
		{
			return Self.NativePointer;
		}

		public static implicit operator FLensBloomSettings(IntPtr Adress)
		{
			return Adress == IntPtr.Zero ? null : new FLensBloomSettings(Adress, false);
		}}}
