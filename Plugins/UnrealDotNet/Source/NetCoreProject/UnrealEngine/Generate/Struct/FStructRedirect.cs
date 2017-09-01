using System;
using System.Runtime.InteropServices;

namespace UnrealEngine
{
	public partial class FStructRedirect
	{
		private readonly IntPtr NativePointer;
		private readonly bool IsRef;
		
		public FStructRedirect()
		{
			NativePointer = E_CreateStruct_FStructRedirect();
			IsRef = false;
		}

		internal FStructRedirect(IntPtr NativePointer, bool IsRef)
		{
			this.NativePointer = NativePointer;
			this.IsRef = IsRef;
		}

		
		#region DLLInmport
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern IntPtr E_CreateStruct_FStructRedirect();
		
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void E_DeleteStruct(IntPtr Adress);
		
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern string E_PROP_FStructRedirect_OldStructName_GET(IntPtr Ptr);
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void E_PROP_FStructRedirect_OldStructName_SET(IntPtr Ptr, string Value);
		
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern string E_PROP_FStructRedirect_NewStructName_GET(IntPtr Ptr);
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void E_PROP_FStructRedirect_NewStructName_SET(IntPtr Ptr, string Value);
		
		#endregion
		
		#region Property
		public string OldStructName
		{
			get => E_PROP_FStructRedirect_OldStructName_GET(NativePointer);
			set => E_PROP_FStructRedirect_OldStructName_SET(NativePointer, value);
		}

		public string NewStructName
		{
			get => E_PROP_FStructRedirect_NewStructName_GET(NativePointer);
			set => E_PROP_FStructRedirect_NewStructName_SET(NativePointer, value);
		}

		#endregion
		
		public static implicit operator IntPtr(FStructRedirect Self)
		{
			return Self.NativePointer;
		}

		public static implicit operator FStructRedirect(IntPtr Adress)
		{
			return Adress == IntPtr.Zero ? null : new FStructRedirect(Adress, false);
		}}}
