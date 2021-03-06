// This file was created automatically, do not modify the contents of this file.

// ReSharper disable InvalidXmlDocComment
// ReSharper disable InconsistentNaming
// ReSharper disable CheckNamespace
// ReSharper disable MemberCanBePrivate.Global

using System;
using System.Runtime.InteropServices;

// Source file C:\Program Files\Epic Games\UE_4.22\Engine\Source\Runtime\Engine\Classes\Components\BoxComponent.h:17

namespace UnrealEngine
{
	[ManageType("ManageBoxComponent")]
	public partial class ManageBoxComponent : UBoxComponent
	{
		public ManageBoxComponent(IntPtr Adress)
			: base(Adress)
		{
		}

		public static implicit operator IntPtr(ManageBoxComponent self)
		{
			return self?.NativePointer ?? IntPtr.Zero;
		}

		public static implicit operator ManageBoxComponent(ObjectPointerDescription PtrDesc)
		{
			return NativeManager.GetWrapper<ManageBoxComponent>(PtrDesc);
		}}}
