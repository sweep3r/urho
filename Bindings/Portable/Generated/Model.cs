// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// Model.cs
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
	/// 3D model resource.
	/// </summary>
	public unsafe partial class Model : Resource
	{
		unsafe partial void OnModelCreated ();

		[Preserve]
		public Model (IntPtr handle) : base (handle)
		{
			OnModelCreated ();
		}

		[Preserve]
		protected Model (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnModelCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Model_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Model_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Model_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Model_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Model_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Model));
			return new StringHash (Model_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Model_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Model));
			return Marshal.PtrToStringAnsi (Model_GetTypeNameStatic ());
		}

		[Preserve]
		public Model () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Model_Model (IntPtr context);

		[Preserve]
		public Model (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Model));
			handle = Model_Model ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnModelCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Model_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// </summary>
		public static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(Model));
			Model_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Model_BeginLoad_File (IntPtr handle, IntPtr source);

		/// <summary>
		/// Load resource from stream. May be called from a worker thread. Return true if successful.
		/// </summary>
		public override bool BeginLoad (File source)
		{
			Runtime.ValidateRefCounted (this);
			return Model_BeginLoad_File (handle, (object)source == null ? IntPtr.Zero : source.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Model_BeginLoad_MemoryBuffer (IntPtr handle, IntPtr source);

		/// <summary>
		/// Load resource from stream. May be called from a worker thread. Return true if successful.
		/// </summary>
		public override bool BeginLoad (MemoryBuffer source)
		{
			Runtime.ValidateRefCounted (this);
			return Model_BeginLoad_MemoryBuffer (handle, (object)source == null ? IntPtr.Zero : source.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Model_EndLoad (IntPtr handle);

		/// <summary>
		/// Finish resource loading. Always called from the main thread. Return true if successful.
		/// </summary>
		public override bool EndLoad ()
		{
			Runtime.ValidateRefCounted (this);
			return Model_EndLoad (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Model_Save_File (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save resource. Return true if successful.
		/// </summary>
		public override bool Save (File dest)
		{
			Runtime.ValidateRefCounted (this);
			return Model_Save_File (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Model_Save_MemoryBuffer (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save resource. Return true if successful.
		/// </summary>
		public override bool Save (MemoryBuffer dest)
		{
			Runtime.ValidateRefCounted (this);
			return Model_Save_MemoryBuffer (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Model_SetBoundingBox (IntPtr handle, ref Urho.BoundingBox box);

		/// <summary>
		/// Set local-space bounding box.
		/// </summary>
		private void SetBoundingBox (Urho.BoundingBox box)
		{
			Runtime.ValidateRefCounted (this);
			Model_SetBoundingBox (handle, ref box);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Model_SetNumGeometries (IntPtr handle, uint num);

		/// <summary>
		/// Set number of geometries.
		/// </summary>
		private void SetNumGeometries (uint num)
		{
			Runtime.ValidateRefCounted (this);
			Model_SetNumGeometries (handle, num);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Model_SetNumGeometryLodLevels (IntPtr handle, uint index, uint num);

		/// <summary>
		/// Set number of LOD levels in a geometry.
		/// </summary>
		public bool SetNumGeometryLodLevels (uint index, uint num)
		{
			Runtime.ValidateRefCounted (this);
			return Model_SetNumGeometryLodLevels (handle, index, num);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Model_SetGeometry (IntPtr handle, uint index, uint lodLevel, IntPtr geometry);

		/// <summary>
		/// Set geometry.
		/// </summary>
		public bool SetGeometry (uint index, uint lodLevel, Geometry geometry)
		{
			Runtime.ValidateRefCounted (this);
			return Model_SetGeometry (handle, index, lodLevel, (object)geometry == null ? IntPtr.Zero : geometry.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Model_SetGeometryCenter (IntPtr handle, uint index, ref Urho.Vector3 center);

		/// <summary>
		/// Set geometry center.
		/// </summary>
		public bool SetGeometryCenter (uint index, Urho.Vector3 center)
		{
			Runtime.ValidateRefCounted (this);
			return Model_SetGeometryCenter (handle, index, ref center);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Model_Clone (IntPtr handle, string cloneName);

		/// <summary>
		/// Clone the model. The geometry data is deep-copied and can be modified in the clone without affecting the original.
		/// </summary>
		public Model Clone (string cloneName = "")
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupRefCounted<Model> (Model_Clone (handle, cloneName));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.BoundingBox Model_GetBoundingBox (IntPtr handle);

		/// <summary>
		/// Return bounding box.
		/// </summary>
		private Urho.BoundingBox GetBoundingBox ()
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetBoundingBox (handle);
		}

		private IReadOnlyList<VertexBuffer> _GetVertexBuffers_cache;

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Model_GetVertexBuffers (IntPtr handle);

		/// <summary>
		/// Return vertex buffers.
		/// </summary>
		private IReadOnlyList<VertexBuffer> GetVertexBuffers ()
		{
			Runtime.ValidateRefCounted (this);
			return _GetVertexBuffers_cache != null ? _GetVertexBuffers_cache : _GetVertexBuffers_cache = Runtime.CreateVectorSharedPtrProxy<VertexBuffer> (Model_GetVertexBuffers (handle));
		}

		private IReadOnlyList<IndexBuffer> _GetIndexBuffers_cache;

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Model_GetIndexBuffers (IntPtr handle);

		/// <summary>
		/// Return index buffers.
		/// </summary>
		private IReadOnlyList<IndexBuffer> GetIndexBuffers ()
		{
			Runtime.ValidateRefCounted (this);
			return _GetIndexBuffers_cache != null ? _GetIndexBuffers_cache : _GetIndexBuffers_cache = Runtime.CreateVectorSharedPtrProxy<IndexBuffer> (Model_GetIndexBuffers (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Model_GetNumGeometries (IntPtr handle);

		/// <summary>
		/// Return number of geometries.
		/// </summary>
		private uint GetNumGeometries ()
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetNumGeometries (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Model_GetNumGeometryLodLevels (IntPtr handle, uint index);

		/// <summary>
		/// Return number of LOD levels in geometry.
		/// </summary>
		public uint GetNumGeometryLodLevels (uint index)
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetNumGeometryLodLevels (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Model_GetGeometry (IntPtr handle, uint index, uint lodLevel);

		/// <summary>
		/// Return geometry by index and LOD level. The LOD level is clamped if out of range.
		/// </summary>
		public Geometry GetGeometry (uint index, uint lodLevel)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Geometry> (Model_GetGeometry (handle, index, lodLevel));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector3 Model_GetGeometryCenter (IntPtr handle, uint index);

		/// <summary>
		/// Return geometry center by index.
		/// </summary>
		public Urho.Vector3 GetGeometryCenter (uint index)
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetGeometryCenter (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Model_GetNumMorphs (IntPtr handle);

		/// <summary>
		/// Return number of vertex morphs.
		/// </summary>
		private uint GetNumMorphs ()
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetNumMorphs (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ModelMorph* Model_GetMorph (IntPtr handle, uint index);

		/// <summary>
		/// Return vertex morph by index.
		/// </summary>
		public ModelMorph* GetMorph (uint index)
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetMorph (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ModelMorph* Model_GetMorph0 (IntPtr handle, string name);

		/// <summary>
		/// Return vertex morph by name.
		/// </summary>
		public ModelMorph* GetMorph (string name)
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetMorph0 (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ModelMorph* Model_GetMorph1 (IntPtr handle, int nameHash);

		/// <summary>
		/// Return vertex morph by name hash.
		/// </summary>
		public ModelMorph* GetMorph (StringHash nameHash)
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetMorph1 (handle, nameHash.Code);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Model_GetMorphRangeStart (IntPtr handle, uint bufferIndex);

		/// <summary>
		/// Return vertex buffer morph range start.
		/// </summary>
		public uint GetMorphRangeStart (uint bufferIndex)
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetMorphRangeStart (handle, bufferIndex);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Model_GetMorphRangeCount (IntPtr handle, uint bufferIndex);

		/// <summary>
		/// Return vertex buffer morph range vertex count.
		/// </summary>
		public uint GetMorphRangeCount (uint bufferIndex)
		{
			Runtime.ValidateRefCounted (this);
			return Model_GetMorphRangeCount (handle, bufferIndex);
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
		/// Return bounding box.
		/// Or
		/// Set local-space bounding box.
		/// </summary>
		public Urho.BoundingBox BoundingBox {
			get {
				return GetBoundingBox ();
			}
			set {
				SetBoundingBox (value);
			}
		}

		/// <summary>
		/// Return number of geometries.
		/// Or
		/// Set number of geometries.
		/// </summary>
		public uint NumGeometries {
			get {
				return GetNumGeometries ();
			}
			set {
				SetNumGeometries (value);
			}
		}

		/// <summary>
		/// Return vertex buffers.
		/// </summary>
		public IReadOnlyList<VertexBuffer> VertexBuffers {
			get {
				return GetVertexBuffers ();
			}
		}

		/// <summary>
		/// Return index buffers.
		/// </summary>
		public IReadOnlyList<IndexBuffer> IndexBuffers {
			get {
				return GetIndexBuffers ();
			}
		}

		/// <summary>
		/// Return number of vertex morphs.
		/// </summary>
		public uint NumMorphs {
			get {
				return GetNumMorphs ();
			}
		}
	}
}
