// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// Material.cs
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

namespace Urho
{
	/// <summary>
	/// Describes how to render 3D geometries.
	/// </summary>
	public unsafe partial class Material : Resource
	{
		unsafe partial void OnMaterialCreated ();

		[Preserve]
		public Material (IntPtr handle) : base (handle)
		{
			OnMaterialCreated ();
		}

		[Preserve]
		protected Material (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnMaterialCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Material_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Material_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Material_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Material_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Material));
			return new StringHash (Material_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Material));
			return Marshal.PtrToStringAnsi (Material_GetTypeNameStatic ());
		}

		[Preserve]
		public Material () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_Material (IntPtr context);

		[Preserve]
		public Material (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Material));
			handle = Material_Material ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnMaterialCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// </summary>
		public static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(Material));
			Material_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_BeginLoad_File (IntPtr handle, IntPtr source);

		/// <summary>
		/// Load resource from stream. May be called from a worker thread. Return true if successful.
		/// </summary>
		public override bool BeginLoad (File source)
		{
			Runtime.ValidateRefCounted (this);
			return Material_BeginLoad_File (handle, (object)source == null ? IntPtr.Zero : source.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_BeginLoad_MemoryBuffer (IntPtr handle, IntPtr source);

		/// <summary>
		/// Load resource from stream. May be called from a worker thread. Return true if successful.
		/// </summary>
		public override bool BeginLoad (MemoryBuffer source)
		{
			Runtime.ValidateRefCounted (this);
			return Material_BeginLoad_MemoryBuffer (handle, (object)source == null ? IntPtr.Zero : source.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_EndLoad (IntPtr handle);

		/// <summary>
		/// Finish resource loading. Always called from the main thread. Return true if successful.
		/// </summary>
		public override bool EndLoad ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_EndLoad (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_Save_File (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save resource. Return true if successful.
		/// </summary>
		public override bool Save (File dest)
		{
			Runtime.ValidateRefCounted (this);
			return Material_Save_File (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_Save_MemoryBuffer (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save resource. Return true if successful.
		/// </summary>
		public override bool Save (MemoryBuffer dest)
		{
			Runtime.ValidateRefCounted (this);
			return Material_Save_MemoryBuffer (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_Load (IntPtr handle, IntPtr source);

		/// <summary>
		/// Load from an XML element. Return true if successful.
		/// </summary>
		public bool Load (XmlElement source)
		{
			Runtime.ValidateRefCounted (this);
			return Material_Load (handle, (object)source == null ? IntPtr.Zero : source.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_Save0 (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save to an XML element. Return true if successful.
		/// </summary>
		public bool Save (XmlElement dest)
		{
			Runtime.ValidateRefCounted (this);
			return Material_Save0 (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetNumTechniques (IntPtr handle, uint num);

		/// <summary>
		/// Set number of techniques.
		/// </summary>
		private void SetNumTechniques (uint num)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetNumTechniques (handle, num);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetTechnique (IntPtr handle, uint index, IntPtr tech, uint qualityLevel, float lodDistance);

		/// <summary>
		/// Set technique.
		/// </summary>
		public void SetTechnique (uint index, Technique tech, uint qualityLevel = 0, float lodDistance = 0f)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetTechnique (handle, index, (object)tech == null ? IntPtr.Zero : tech.Handle, qualityLevel, lodDistance);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetVertexShaderDefines (IntPtr handle, string defines);

		/// <summary>
		/// Set additional vertex shader defines. Separate multiple defines with spaces. Setting defines at the material level causes technique(s) to be cloned as necessary.
		/// </summary>
		private void SetVertexShaderDefines (string defines)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetVertexShaderDefines (handle, defines);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetPixelShaderDefines (IntPtr handle, string defines);

		/// <summary>
		/// Set additional pixel shader defines. Separate multiple defines with spaces. Setting defines at the material level causes technique(s) to be cloned as necessary.
		/// </summary>
		private void SetPixelShaderDefines (string defines)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetPixelShaderDefines (handle, defines);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter0 (IntPtr handle, string name, ref Vector3 value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, Vector3 value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter0 (handle, name, ref value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter1 (IntPtr handle, string name, ref IntRect value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, IntRect value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter1 (handle, name, ref value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter2 (IntPtr handle, string name, ref Color value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, Color value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter2 (handle, name, ref value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter3 (IntPtr handle, string name, ref Vector2 value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, Vector2 value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter3 (handle, name, ref value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter4 (IntPtr handle, string name, ref Vector4 value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, Vector4 value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter4 (handle, name, ref value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter5 (IntPtr handle, string name, ref IntVector2 value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, IntVector2 value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter5 (handle, name, ref value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter6 (IntPtr handle, string name, ref Quaternion value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, Quaternion value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter6 (handle, name, ref value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter7 (IntPtr handle, string name, ref Matrix4 value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, Matrix4 value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter7 (handle, name, ref value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter8 (IntPtr handle, string name, ref Matrix3x4 value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, Matrix3x4 value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter8 (handle, name, ref value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter9 (IntPtr handle, string name, int value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, int value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter9 (handle, name, value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter10 (IntPtr handle, string name, float value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, float value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter10 (handle, name, value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter11 (IntPtr handle, string name, string value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, string value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter11 (handle, name, value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameter12 (IntPtr handle, string name, bool value);

		/// <summary>
		/// Set shader parameter.
		/// </summary>
		public void SetShaderParameter (string name, bool value)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameter12 (handle, name, value);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameterAnimation (IntPtr handle, string name, IntPtr animation, WrapMode wrapMode, float speed);

		/// <summary>
		/// Set shader parameter animation.
		/// </summary>
		public void SetShaderParameterAnimation (string name, ValueAnimation animation, WrapMode wrapMode = WrapMode.Loop, float speed = 1f)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameterAnimation (handle, name, (object)animation == null ? IntPtr.Zero : animation.Handle, wrapMode, speed);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameterAnimationWrapMode (IntPtr handle, string name, WrapMode wrapMode);

		/// <summary>
		/// Set shader parameter animation wrap mode.
		/// </summary>
		public void SetShaderParameterAnimationWrapMode (string name, WrapMode wrapMode)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameterAnimationWrapMode (handle, name, wrapMode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShaderParameterAnimationSpeed (IntPtr handle, string name, float speed);

		/// <summary>
		/// Set shader parameter animation speed.
		/// </summary>
		public void SetShaderParameterAnimationSpeed (string name, float speed)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShaderParameterAnimationSpeed (handle, name, speed);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetTexture (IntPtr handle, TextureUnit unit, IntPtr texture);

		/// <summary>
		/// Set texture.
		/// </summary>
		public void SetTexture (TextureUnit unit, Texture texture)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetTexture (handle, unit, (object)texture == null ? IntPtr.Zero : texture.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetUVTransform (IntPtr handle, ref Urho.Vector2 offset, float rotation, ref Urho.Vector2 repeat);

		/// <summary>
		/// Set texture coordinate transform.
		/// </summary>
		public void SetUVTransform (Urho.Vector2 offset, float rotation, Urho.Vector2 repeat)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetUVTransform (handle, ref offset, rotation, ref repeat);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetUVTransform1 (IntPtr handle, ref Urho.Vector2 offset, float rotation, float repeat);

		/// <summary>
		/// Set texture coordinate transform.
		/// </summary>
		public void SetUVTransform (Urho.Vector2 offset, float rotation, float repeat)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetUVTransform1 (handle, ref offset, rotation, repeat);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetCullMode (IntPtr handle, CullMode mode);

		/// <summary>
		/// Set culling mode.
		/// </summary>
		private void SetCullMode (CullMode mode)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetCullMode (handle, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetShadowCullMode (IntPtr handle, CullMode mode);

		/// <summary>
		/// Set culling mode for shadows.
		/// </summary>
		private void SetShadowCullMode (CullMode mode)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetShadowCullMode (handle, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetFillMode (IntPtr handle, FillMode mode);

		/// <summary>
		/// Set polygon fill mode. Interacts with the camera's fill mode setting so that the "least filled" mode will be used.
		/// </summary>
		private void SetFillMode (FillMode mode)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetFillMode (handle, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetDepthBias (IntPtr handle, ref BiasParameters parameters);

		/// <summary>
		/// Set depth bias parameters for depth write and compare. Note that the normal offset parameter is not used and will not be saved, as it affects only shadow map sampling during light rendering.
		/// </summary>
		private void SetDepthBias (BiasParameters parameters)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetDepthBias (handle, ref parameters);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetAlphaToCoverage (IntPtr handle, bool enable);

		/// <summary>
		/// Set alpha-to-coverage mode on all passes.
		/// </summary>
		private void SetAlphaToCoverage (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetAlphaToCoverage (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetLineAntiAlias (IntPtr handle, bool enable);

		/// <summary>
		/// Set line antialiasing on/off. Has effect only on models that consist of line lists.
		/// </summary>
		private void SetLineAntiAlias (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetLineAntiAlias (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetRenderOrder (IntPtr handle, byte order);

		/// <summary>
		/// Set 8-bit render order within pass. Default 128. Lower values will render earlier and higher values later, taking precedence over e.g. state and distance sorting.
		/// </summary>
		private void SetRenderOrder (byte order)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetRenderOrder (handle, order);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetOcclusion (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether to use in occlusion rendering. Default true.
		/// </summary>
		private void SetOcclusion (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetOcclusion (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SetScene (IntPtr handle, IntPtr scene);

		/// <summary>
		/// Associate the material with a scene to ensure that shader parameter animation happens in sync with scene update, respecting the scene time scale. If no scene is set, the global update events will be used.
		/// </summary>
		private void SetScene (Scene scene)
		{
			Runtime.ValidateRefCounted (this);
			Material_SetScene (handle, (object)scene == null ? IntPtr.Zero : scene.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_RemoveShaderParameter (IntPtr handle, string name);

		/// <summary>
		/// Remove shader parameter.
		/// </summary>
		public void RemoveShaderParameter (string name)
		{
			Runtime.ValidateRefCounted (this);
			Material_RemoveShaderParameter (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_ReleaseShaders (IntPtr handle);

		/// <summary>
		/// Reset all shader pointers.
		/// </summary>
		public void ReleaseShaders ()
		{
			Runtime.ValidateRefCounted (this);
			Material_ReleaseShaders (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_Clone (IntPtr handle, string cloneName);

		/// <summary>
		/// Clone the material.
		/// </summary>
		public Material Clone (string cloneName = "")
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupRefCounted<Material> (Material_Clone (handle, cloneName));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_SortTechniques (IntPtr handle);

		/// <summary>
		/// Ensure that material techniques are listed in correct order.
		/// </summary>
		public void SortTechniques ()
		{
			Runtime.ValidateRefCounted (this);
			Material_SortTechniques (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Material_MarkForAuxView (IntPtr handle, uint frameNumber);

		/// <summary>
		/// Mark material for auxiliary view rendering.
		/// </summary>
		public void MarkForAuxView (uint frameNumber)
		{
			Runtime.ValidateRefCounted (this);
			Material_MarkForAuxView (handle, frameNumber);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Material_GetNumTechniques (IntPtr handle);

		/// <summary>
		/// Return number of techniques.
		/// </summary>
		private uint GetNumTechniques ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetNumTechniques (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetTechnique (IntPtr handle, uint index);

		/// <summary>
		/// Return technique by index.
		/// </summary>
		public Technique GetTechnique (uint index)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Technique> (Material_GetTechnique (handle, index));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetPass (IntPtr handle, uint index, string passName);

		/// <summary>
		/// Return pass by technique index and pass name.
		/// </summary>
		public Pass GetPass (uint index, string passName)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupRefCounted<Pass> (Material_GetPass (handle, index, passName));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetTexture (IntPtr handle, TextureUnit unit);

		/// <summary>
		/// Return texture by unit.
		/// </summary>
		public Texture GetTexture (TextureUnit unit)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Texture> (Material_GetTexture (handle, unit));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetVertexShaderDefines (IntPtr handle);

		/// <summary>
		/// Return additional vertex shader defines.
		/// </summary>
		private string GetVertexShaderDefines ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Material_GetVertexShaderDefines (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetPixelShaderDefines (IntPtr handle);

		/// <summary>
		/// Return additional pixel shader defines.
		/// </summary>
		private string GetPixelShaderDefines ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Material_GetPixelShaderDefines (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetShaderParameterAnimation (IntPtr handle, string name);

		/// <summary>
		/// Return shader parameter animation.
		/// </summary>
		public ValueAnimation GetShaderParameterAnimation (string name)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<ValueAnimation> (Material_GetShaderParameterAnimation (handle, name));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern WrapMode Material_GetShaderParameterAnimationWrapMode (IntPtr handle, string name);

		/// <summary>
		/// Return shader parameter animation wrap mode.
		/// </summary>
		public WrapMode GetShaderParameterAnimationWrapMode (string name)
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetShaderParameterAnimationWrapMode (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Material_GetShaderParameterAnimationSpeed (IntPtr handle, string name);

		/// <summary>
		/// Return shader parameter animation speed.
		/// </summary>
		public float GetShaderParameterAnimationSpeed (string name)
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetShaderParameterAnimationSpeed (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern CullMode Material_GetCullMode (IntPtr handle);

		/// <summary>
		/// Return normal culling mode.
		/// </summary>
		private CullMode GetCullMode ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetCullMode (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern CullMode Material_GetShadowCullMode (IntPtr handle);

		/// <summary>
		/// Return culling mode for shadows.
		/// </summary>
		private CullMode GetShadowCullMode ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetShadowCullMode (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern FillMode Material_GetFillMode (IntPtr handle);

		/// <summary>
		/// Return polygon fill mode.
		/// </summary>
		private FillMode GetFillMode ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetFillMode (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern BiasParameters Material_GetDepthBias (IntPtr handle);

		/// <summary>
		/// Return depth bias.
		/// </summary>
		private BiasParameters GetDepthBias ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetDepthBias (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_GetAlphaToCoverage (IntPtr handle);

		/// <summary>
		/// Return alpha-to-coverage mode.
		/// </summary>
		private bool GetAlphaToCoverage ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetAlphaToCoverage (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_GetLineAntiAlias (IntPtr handle);

		/// <summary>
		/// Return whether line antialiasing is enabled.
		/// </summary>
		private bool GetLineAntiAlias ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetLineAntiAlias (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern byte Material_GetRenderOrder (IntPtr handle);

		/// <summary>
		/// Return render order.
		/// </summary>
		private byte GetRenderOrder ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetRenderOrder (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Material_GetAuxViewFrameNumber (IntPtr handle);

		/// <summary>
		/// Return last auxiliary view rendered frame number.
		/// </summary>
		private uint GetAuxViewFrameNumber ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetAuxViewFrameNumber (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_GetOcclusion (IntPtr handle);

		/// <summary>
		/// Return whether should render occlusion.
		/// </summary>
		private bool GetOcclusion ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetOcclusion (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Material_GetSpecular (IntPtr handle);

		/// <summary>
		/// Return whether should render specular.
		/// </summary>
		private bool GetSpecular ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetSpecular (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetScene (IntPtr handle);

		/// <summary>
		/// Return the scene associated with the material for shader parameter animation updates.
		/// </summary>
		private Scene GetScene ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Scene> (Material_GetScene (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Material_GetShaderParameterHash (IntPtr handle);

		/// <summary>
		/// Return shader parameter hash value. Used as an optimization to avoid setting shader parameters unnecessarily.
		/// </summary>
		private uint GetShaderParameterHash ()
		{
			Runtime.ValidateRefCounted (this);
			return Material_GetShaderParameterHash (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Material_GetTextureUnitName (TextureUnit unit);

		/// <summary>
		/// Return name for texture unit.
		/// </summary>
		public static string GetTextureUnitName (TextureUnit unit)
		{
			Runtime.Validate (typeof(Material));
			return Marshal.PtrToStringAnsi (Material_GetTextureUnitName (unit));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Variant Material_ParseShaderParameterValue (string value);

		/// <summary>
		/// Parse a shader parameter value from a string. Retunrs either a bool, a float, or a 2 to 4-component vector.
		/// </summary>
		public static Variant ParseShaderParameterValue (string value)
		{
			Runtime.Validate (typeof(Material));
			return Material_ParseShaderParameterValue (value);
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
		/// Return number of techniques.
		/// Or
		/// Set number of techniques.
		/// </summary>
		public uint NumTechniques {
			get {
				return GetNumTechniques ();
			}
			set {
				SetNumTechniques (value);
			}
		}

		/// <summary>
		/// Return additional vertex shader defines.
		/// Or
		/// Set additional vertex shader defines. Separate multiple defines with spaces. Setting defines at the material level causes technique(s) to be cloned as necessary.
		/// </summary>
		public string VertexShaderDefines {
			get {
				return GetVertexShaderDefines ();
			}
			set {
				SetVertexShaderDefines (value);
			}
		}

		/// <summary>
		/// Return additional pixel shader defines.
		/// Or
		/// Set additional pixel shader defines. Separate multiple defines with spaces. Setting defines at the material level causes technique(s) to be cloned as necessary.
		/// </summary>
		public string PixelShaderDefines {
			get {
				return GetPixelShaderDefines ();
			}
			set {
				SetPixelShaderDefines (value);
			}
		}

		/// <summary>
		/// Return normal culling mode.
		/// Or
		/// Set culling mode.
		/// </summary>
		public CullMode CullMode {
			get {
				return GetCullMode ();
			}
			set {
				SetCullMode (value);
			}
		}

		/// <summary>
		/// Return culling mode for shadows.
		/// Or
		/// Set culling mode for shadows.
		/// </summary>
		public CullMode ShadowCullMode {
			get {
				return GetShadowCullMode ();
			}
			set {
				SetShadowCullMode (value);
			}
		}

		/// <summary>
		/// Return polygon fill mode.
		/// Or
		/// Set polygon fill mode. Interacts with the camera's fill mode setting so that the "least filled" mode will be used.
		/// </summary>
		public FillMode FillMode {
			get {
				return GetFillMode ();
			}
			set {
				SetFillMode (value);
			}
		}

		/// <summary>
		/// Return depth bias.
		/// Or
		/// Set depth bias parameters for depth write and compare. Note that the normal offset parameter is not used and will not be saved, as it affects only shadow map sampling during light rendering.
		/// </summary>
		public BiasParameters DepthBias {
			get {
				return GetDepthBias ();
			}
			set {
				SetDepthBias (value);
			}
		}

		/// <summary>
		/// Return alpha-to-coverage mode.
		/// Or
		/// Set alpha-to-coverage mode on all passes.
		/// </summary>
		public bool AlphaToCoverage {
			get {
				return GetAlphaToCoverage ();
			}
			set {
				SetAlphaToCoverage (value);
			}
		}

		/// <summary>
		/// Return whether line antialiasing is enabled.
		/// Or
		/// Set line antialiasing on/off. Has effect only on models that consist of line lists.
		/// </summary>
		public bool LineAntiAlias {
			get {
				return GetLineAntiAlias ();
			}
			set {
				SetLineAntiAlias (value);
			}
		}

		/// <summary>
		/// Return render order.
		/// Or
		/// Set 8-bit render order within pass. Default 128. Lower values will render earlier and higher values later, taking precedence over e.g. state and distance sorting.
		/// </summary>
		public byte RenderOrder {
			get {
				return GetRenderOrder ();
			}
			set {
				SetRenderOrder (value);
			}
		}

		/// <summary>
		/// Return whether should render occlusion.
		/// Or
		/// Set whether to use in occlusion rendering. Default true.
		/// </summary>
		public bool Occlusion {
			get {
				return GetOcclusion ();
			}
			set {
				SetOcclusion (value);
			}
		}

		/// <summary>
		/// Return the scene associated with the material for shader parameter animation updates.
		/// Or
		/// Associate the material with a scene to ensure that shader parameter animation happens in sync with scene update, respecting the scene time scale. If no scene is set, the global update events will be used.
		/// </summary>
		public Scene Scene {
			get {
				return GetScene ();
			}
			set {
				SetScene (value);
			}
		}

		/// <summary>
		/// Return last auxiliary view rendered frame number.
		/// </summary>
		public uint AuxViewFrameNumber {
			get {
				return GetAuxViewFrameNumber ();
			}
		}

		/// <summary>
		/// Return whether should render specular.
		/// </summary>
		public bool Specular {
			get {
				return GetSpecular ();
			}
		}

		/// <summary>
		/// Return shader parameter hash value. Used as an optimization to avoid setting shader parameters unnecessarily.
		/// </summary>
		public uint ShaderParameterHash {
			get {
				return GetShaderParameterHash ();
			}
		}
	}
}
