// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// BorderImage.cs
// 
// Copyright 2015 Xamarin Inc. All rights reserved.

using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using Urho.Urho2D;
using Urho.Gui;
using Urho.Resources;
using Urho.IO;
using Urho.Navigation;
using Urho.Network;

namespace Urho.Gui
{
	/// <summary>
	/// %Image %UI element with optional border.
	/// </summary>
	public unsafe partial class BorderImage : UIElement
	{
		unsafe partial void OnBorderImageCreated ();

		[Preserve]
		public BorderImage (IntPtr handle) : base (handle)
		{
			OnBorderImageCreated ();
		}

		[Preserve]
		protected BorderImage (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnBorderImageCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int BorderImage_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (BorderImage_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr BorderImage_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (BorderImage_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int BorderImage_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(BorderImage));
			return new StringHash (BorderImage_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr BorderImage_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(BorderImage));
			return Marshal.PtrToStringAnsi (BorderImage_GetTypeNameStatic ());
		}

		[Preserve]
		public BorderImage () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr BorderImage_BorderImage (IntPtr context);

		[Preserve]
		public BorderImage (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(BorderImage));
			handle = BorderImage_BorderImage ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnBorderImageCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(BorderImage));
			BorderImage_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetTexture (IntPtr handle, IntPtr texture);

		/// <summary>
		/// Set texture.
		/// </summary>
		private void SetTexture (Texture texture)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetTexture (handle, (object)texture == null ? IntPtr.Zero : texture.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetImageRect (IntPtr handle, ref Urho.IntRect rect);

		/// <summary>
		/// Set part of texture to use as the image.
		/// </summary>
		private void SetImageRect (Urho.IntRect rect)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetImageRect (handle, ref rect);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetFullImageRect (IntPtr handle);

		/// <summary>
		/// Use whole texture as the image.
		/// </summary>
		public void SetFullImageRect ()
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetFullImageRect (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetBorder (IntPtr handle, ref Urho.IntRect rect);

		/// <summary>
		/// Set border dimensions on the screen.
		/// </summary>
		private void SetBorder (Urho.IntRect rect)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetBorder (handle, ref rect);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetImageBorder (IntPtr handle, ref Urho.IntRect rect);

		/// <summary>
		/// Set border dimensions on the image. If zero (default) uses the screen dimensions, resulting in pixel-perfect borders.
		/// </summary>
		private void SetImageBorder (Urho.IntRect rect)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetImageBorder (handle, ref rect);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetHoverOffset (IntPtr handle, ref Urho.IntVector2 offset);

		/// <summary>
		/// Set offset to image rectangle used on hover.
		/// </summary>
		private void SetHoverOffset (Urho.IntVector2 offset)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetHoverOffset (handle, ref offset);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetHoverOffset0 (IntPtr handle, int x, int y);

		/// <summary>
		/// Set offset to image rectangle used on hover.
		/// </summary>
		public void SetHoverOffset (int x, int y)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetHoverOffset0 (handle, x, y);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetDisabledOffset (IntPtr handle, ref Urho.IntVector2 offset);

		/// <summary>
		/// Set offset to image rectangle used when disabled.
		/// </summary>
		private void SetDisabledOffset (Urho.IntVector2 offset)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetDisabledOffset (handle, ref offset);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetDisabledOffset1 (IntPtr handle, int x, int y);

		/// <summary>
		/// Set offset to image rectangle used when disabled.
		/// </summary>
		public void SetDisabledOffset (int x, int y)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetDisabledOffset1 (handle, x, y);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetBlendMode (IntPtr handle, BlendMode mode);

		/// <summary>
		/// Set blend mode.
		/// </summary>
		private void SetBlendMode (BlendMode mode)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetBlendMode (handle, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetTiled (IntPtr handle, bool enable);

		/// <summary>
		/// Set tiled mode.
		/// </summary>
		private void SetTiled (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetTiled (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void BorderImage_SetMaterial (IntPtr handle, IntPtr material);

		/// <summary>
		/// Set material for custom rendering.
		/// </summary>
		private void SetMaterial (Material material)
		{
			Runtime.ValidateRefCounted (this);
			BorderImage_SetMaterial (handle, (object)material == null ? IntPtr.Zero : material.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr BorderImage_GetTexture (IntPtr handle);

		/// <summary>
		/// Return texture.
		/// </summary>
		private Texture GetTexture ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Texture> (BorderImage_GetTexture (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntRect BorderImage_GetImageRect (IntPtr handle);

		/// <summary>
		/// Return image rectangle.
		/// </summary>
		private Urho.IntRect GetImageRect ()
		{
			Runtime.ValidateRefCounted (this);
			return BorderImage_GetImageRect (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntRect BorderImage_GetBorder (IntPtr handle);

		/// <summary>
		/// Return border screen dimensions.
		/// </summary>
		private Urho.IntRect GetBorder ()
		{
			Runtime.ValidateRefCounted (this);
			return BorderImage_GetBorder (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntRect BorderImage_GetImageBorder (IntPtr handle);

		/// <summary>
		/// Return border image dimensions. Zero rect uses border screen dimensions.
		/// </summary>
		private Urho.IntRect GetImageBorder ()
		{
			Runtime.ValidateRefCounted (this);
			return BorderImage_GetImageBorder (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 BorderImage_GetHoverOffset (IntPtr handle);

		/// <summary>
		/// Return offset to image rectangle used on hover.
		/// </summary>
		private Urho.IntVector2 GetHoverOffset ()
		{
			Runtime.ValidateRefCounted (this);
			return BorderImage_GetHoverOffset (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 BorderImage_GetDisabledOffset (IntPtr handle);

		/// <summary>
		/// Return offset to image rectangle used when disabled.
		/// </summary>
		private Urho.IntVector2 GetDisabledOffset ()
		{
			Runtime.ValidateRefCounted (this);
			return BorderImage_GetDisabledOffset (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern BlendMode BorderImage_GetBlendMode (IntPtr handle);

		/// <summary>
		/// Return blend mode.
		/// </summary>
		private BlendMode GetBlendMode ()
		{
			Runtime.ValidateRefCounted (this);
			return BorderImage_GetBlendMode (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool BorderImage_IsTiled (IntPtr handle);

		/// <summary>
		/// Return whether is tiled.
		/// </summary>
		private bool IsTiled ()
		{
			Runtime.ValidateRefCounted (this);
			return BorderImage_IsTiled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr BorderImage_GetMaterial (IntPtr handle);

		/// <summary>
		/// Get material used for custom rendering.
		/// </summary>
		private Material GetMaterial ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Material> (BorderImage_GetMaterial (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ResourceRef BorderImage_GetTextureAttr (IntPtr handle);

		/// <summary>
		/// Return texture attribute.
		/// </summary>
		private ResourceRef GetTextureAttr ()
		{
			Runtime.ValidateRefCounted (this);
			return BorderImage_GetTextureAttr (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ResourceRef BorderImage_GetMaterialAttr (IntPtr handle);

		/// <summary>
		/// Get material attribute.
		/// </summary>
		private ResourceRef GetMaterialAttr ()
		{
			Runtime.ValidateRefCounted (this);
			return BorderImage_GetMaterialAttr (handle);
		}

		public override StringHash Type {
			get {
				return UrhoGetType ();
			}
		}

		public override string TypeName {
			get {
				return GetTypeName ();
			}
		}

		[Preserve]
		public new static StringHash TypeStatic {
			get {
				return GetTypeStatic ();
			}
		}

		public new static string TypeNameStatic {
			get {
				return GetTypeNameStatic ();
			}
		}

		/// <summary>
		/// Return texture.
		/// Or
		/// Set texture.
		/// </summary>
		public Texture Texture {
			get {
				return GetTexture ();
			}
			set {
				SetTexture (value);
			}
		}

		/// <summary>
		/// Return image rectangle.
		/// Or
		/// Set part of texture to use as the image.
		/// </summary>
		public Urho.IntRect ImageRect {
			get {
				return GetImageRect ();
			}
			set {
				SetImageRect (value);
			}
		}

		/// <summary>
		/// Return border screen dimensions.
		/// Or
		/// Set border dimensions on the screen.
		/// </summary>
		public Urho.IntRect Border {
			get {
				return GetBorder ();
			}
			set {
				SetBorder (value);
			}
		}

		/// <summary>
		/// Return border image dimensions. Zero rect uses border screen dimensions.
		/// Or
		/// Set border dimensions on the image. If zero (default) uses the screen dimensions, resulting in pixel-perfect borders.
		/// </summary>
		public Urho.IntRect ImageBorder {
			get {
				return GetImageBorder ();
			}
			set {
				SetImageBorder (value);
			}
		}

		/// <summary>
		/// Return offset to image rectangle used on hover.
		/// Or
		/// Set offset to image rectangle used on hover.
		/// </summary>
		public Urho.IntVector2 HoverOffset {
			get {
				return GetHoverOffset ();
			}
			set {
				SetHoverOffset (value);
			}
		}

		/// <summary>
		/// Return offset to image rectangle used when disabled.
		/// Or
		/// Set offset to image rectangle used when disabled.
		/// </summary>
		public Urho.IntVector2 DisabledOffset {
			get {
				return GetDisabledOffset ();
			}
			set {
				SetDisabledOffset (value);
			}
		}

		/// <summary>
		/// Return blend mode.
		/// Or
		/// Set blend mode.
		/// </summary>
		public BlendMode BlendMode {
			get {
				return GetBlendMode ();
			}
			set {
				SetBlendMode (value);
			}
		}

		/// <summary>
		/// Return whether is tiled.
		/// Or
		/// Set tiled mode.
		/// </summary>
		public bool Tiled {
			get {
				return IsTiled ();
			}
			set {
				SetTiled (value);
			}
		}

		/// <summary>
		/// Get material used for custom rendering.
		/// Or
		/// Set material for custom rendering.
		/// </summary>
		public Material Material {
			get {
				return GetMaterial ();
			}
			set {
				SetMaterial (value);
			}
		}

		/// <summary>
		/// Return texture attribute.
		/// </summary>
		public ResourceRef TextureAttr {
			get {
				return GetTextureAttr ();
			}
		}

		/// <summary>
		/// Get material attribute.
		/// </summary>
		public ResourceRef MaterialAttr {
			get {
				return GetMaterialAttr ();
			}
		}
	}
}
