using System;
using System.Runtime.InteropServices;

namespace UnrealEngine
{
	public  partial class UPostProcessComponent : USceneComponent
	{
		public UPostProcessComponent(IntPtr Adress)
			: base(Adress)
		{
		}

		public UPostProcessComponent(UObject Parent = null, string Name = "PostProcessComponent")
			: base(IntPtr.Zero)
		{
			NativePointer = E_NewObject_UPostProcessComponent(Parent, Name);
		}

		#region DLLInmport
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl)]
		private static extern IntPtr E_NewObject_UPostProcessComponent(IntPtr Parent, string Name);
		
		#endregion
		
		public static implicit operator IntPtr(UPostProcessComponent Self)
		{
			return Self.NativePointer;
		}

		public static implicit operator UPostProcessComponent(ObjectPointerDescription PtrDesc)
		{
			return NativeManager.GetWrapper<UPostProcessComponent>(PtrDesc);
		}}}
