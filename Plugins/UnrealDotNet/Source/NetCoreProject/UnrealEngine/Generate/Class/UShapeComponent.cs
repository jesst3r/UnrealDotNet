using System;
using System.Runtime.InteropServices;

namespace UnrealEngine
{
	
	/// <summary>
	/// ShapeComponent is a PrimitiveComponent that is represented by a simple geometrical shape (sphere, capsule, box, etc).
	/// </summary>
	public partial class UShapeComponent : UPrimitiveComponent
	{
		public UShapeComponent(IntPtr Adress)
			: base(Adress)
		{
		}

		
		#region DLLInmport
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern byte E_PROP_UShapeComponent_bUseArchetypeBodySetup_GET(IntPtr Ptr);
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void E_PROP_UShapeComponent_bUseArchetypeBodySetup_SET(IntPtr Ptr, byte Value);
		
		[DllImport(NativeManager.UnrealDotNetDLL, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void E_UShapeComponent_UpdateBodySetup(IntPtr Self);
		
		#endregion
		
		#region Property
		
		/// <summary>
		/// If the body setup can be shared (i.e. there have been no alterations compared to the CDO)
		/// </summary>
		protected byte bUseArchetypeBodySetup
		{
			get => E_PROP_UShapeComponent_bUseArchetypeBodySetup_GET(NativePointer);
			set => E_PROP_UShapeComponent_bUseArchetypeBodySetup_SET(NativePointer, value);
		}

		#endregion
		
		#region ExternMethods
		
		/// <summary>
		/// Update the body setup parameters based on shape information
		/// </summary>
		public void UpdateBodySetup()
			=> E_UShapeComponent_UpdateBodySetup(NativePointer);
		
		#endregion
		
		public static implicit operator IntPtr(UShapeComponent Self)
		{
			return Self.NativePointer;
		}

		public static implicit operator UShapeComponent(IntPtr Adress)
		{
			return Adress == IntPtr.Zero ? null : new UShapeComponent(Adress);
		}}}
