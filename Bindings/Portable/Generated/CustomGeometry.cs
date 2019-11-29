// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// CustomGeometry.cs
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
	/// Custom geometry component.
	/// </summary>
	public unsafe partial class CustomGeometry : Drawable
	{
		unsafe partial void OnCustomGeometryCreated ();

		[Preserve]
		public CustomGeometry (IntPtr handle) : base (handle)
		{
			OnCustomGeometryCreated ();
		}

		[Preserve]
		protected CustomGeometry (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnCustomGeometryCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int CustomGeometry_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (CustomGeometry_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CustomGeometry_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (CustomGeometry_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int CustomGeometry_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(CustomGeometry));
			return new StringHash (CustomGeometry_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CustomGeometry_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(CustomGeometry));
			return Marshal.PtrToStringAnsi (CustomGeometry_GetTypeNameStatic ());
		}

		[Preserve]
		public CustomGeometry () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CustomGeometry_CustomGeometry (IntPtr context);

		[Preserve]
		public CustomGeometry (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(CustomGeometry));
			handle = CustomGeometry_CustomGeometry ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnCustomGeometryCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory. Drawable must be registered first.
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(CustomGeometry));
			CustomGeometry_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CustomGeometry_GetLodGeometry (IntPtr handle, uint batchIndex, uint level);

		/// <summary>
		/// Return the geometry for a specific LOD level.
		/// </summary>
		public override Geometry GetLodGeometry (uint batchIndex, uint level)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Geometry> (CustomGeometry_GetLodGeometry (handle, batchIndex, level));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint CustomGeometry_GetNumOccluderTriangles (IntPtr handle);

		/// <summary>
		/// Return number of occlusion geometry triangles.
		/// </summary>
		private uint GetNumOccluderTriangles ()
		{
			Runtime.ValidateRefCounted (this);
			return CustomGeometry_GetNumOccluderTriangles (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool CustomGeometry_DrawOcclusion (IntPtr handle, IntPtr buffer);

		/// <summary>
		/// Draw to occlusion buffer. Return true if did not run out of triangles.
		/// </summary>
		public override bool DrawOcclusion (OcclusionBuffer buffer)
		{
			Runtime.ValidateRefCounted (this);
			return CustomGeometry_DrawOcclusion (handle, (object)buffer == null ? IntPtr.Zero : buffer.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_MakeCircle (IntPtr handle, float radius, int iterations, float startTheta, float endTheta, bool clear, int geomNum);

		/// <summary>
		/// Make the custom geometry into a circle, change start and stop to make a segment instead
		/// Set clear=false and geomNum for making multiple circle segments
		/// </summary>
		public void MakeCircle (float radius = 1, int iterations = 300, float startTheta = 0, float endTheta = 0, bool clear = true, int geomNum = 0)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_MakeCircle (handle, radius, iterations, startTheta, endTheta, clear, geomNum);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_MakeSquare (IntPtr handle, float size);

		/// <summary>
		/// Makes this custom geometry into a square shape
		/// </summary>
		public void MakeSquare (float size)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_MakeSquare (handle, size);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_MakeSphere (IntPtr handle, float radius, int iterations);

		public void MakeSphere (float radius = 1, int iterations = 200)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_MakeSphere (handle, radius, iterations);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_Clear (IntPtr handle);

		/// <summary>
		/// Clear all geometries.
		/// </summary>
		public void Clear ()
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_Clear (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_SetNumGeometries (IntPtr handle, uint num);

		/// <summary>
		/// Set number of geometries.
		/// </summary>
		private void SetNumGeometries (uint num)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_SetNumGeometries (handle, num);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_SetDynamic (IntPtr handle, bool enable);

		/// <summary>
		/// Set vertex buffer dynamic mode. A dynamic buffer should be faster to update frequently. Effective at the next Commit() call.
		/// </summary>
		private void SetDynamic (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_SetDynamic (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_BeginGeometry (IntPtr handle, uint index, PrimitiveType type);

		/// <summary>
		/// Begin defining a geometry. Clears existing vertices in that index.
		/// </summary>
		public void BeginGeometry (uint index, PrimitiveType type)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_BeginGeometry (handle, index, type);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_DefineVertex (IntPtr handle, ref Urho.Vector3 position);

		/// <summary>
		/// Define a vertex position. This begins a new vertex.
		/// </summary>
		public void DefineVertex (Urho.Vector3 position)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_DefineVertex (handle, ref position);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_DefineNormal (IntPtr handle, ref Urho.Vector3 normal);

		/// <summary>
		/// Define a vertex normal.
		/// </summary>
		public void DefineNormal (Urho.Vector3 normal)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_DefineNormal (handle, ref normal);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_DefineColor (IntPtr handle, ref Urho.Color color);

		/// <summary>
		/// Define a vertex color.
		/// </summary>
		public void DefineColor (Urho.Color color)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_DefineColor (handle, ref color);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_DefineTexCoord (IntPtr handle, ref Urho.Vector2 texCoord);

		/// <summary>
		/// Define a vertex UV coordinate.
		/// </summary>
		public void DefineTexCoord (Urho.Vector2 texCoord)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_DefineTexCoord (handle, ref texCoord);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_DefineTangent (IntPtr handle, ref Urho.Vector4 tangent);

		/// <summary>
		/// Define a vertex tangent.
		/// </summary>
		public void DefineTangent (Urho.Vector4 tangent)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_DefineTangent (handle, ref tangent);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_DefineGeometry (IntPtr handle, uint index, PrimitiveType type, uint numVertices, bool hasNormals, bool hasColors, bool hasTexCoords, bool hasTangents);

		/// <summary>
		/// Set the primitive type, number of vertices and elements in a geometry, after which the vertices can be edited with GetVertex(). An alternative to BeginGeometry() / DefineVertex().
		/// </summary>
		public void DefineGeometry (uint index, PrimitiveType type, uint numVertices, bool hasNormals, bool hasColors, bool hasTexCoords, bool hasTangents)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_DefineGeometry (handle, index, type, numVertices, hasNormals, hasColors, hasTexCoords, hasTangents);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_Commit (IntPtr handle);

		/// <summary>
		/// Update vertex buffer and calculate the bounding box. Call after finishing defining geometry.
		/// </summary>
		public void Commit ()
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_Commit (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CustomGeometry_SetMaterial (IntPtr handle, IntPtr material);

		/// <summary>
		/// Set material on all geometries.
		/// </summary>
		public void SetMaterial (Material material)
		{
			Runtime.ValidateRefCounted (this);
			CustomGeometry_SetMaterial (handle, (object)material == null ? IntPtr.Zero : material.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool CustomGeometry_SetMaterial0 (IntPtr handle, uint index, IntPtr material);

		/// <summary>
		/// Set material on one geometry. Return true if successful.
		/// </summary>
		public bool SetMaterial (uint index, Material material)
		{
			Runtime.ValidateRefCounted (this);
			return CustomGeometry_SetMaterial0 (handle, index, (object)material == null ? IntPtr.Zero : material.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint CustomGeometry_GetNumGeometries (IntPtr handle);

		/// <summary>
		/// Return number of geometries.
		/// </summary>
		private uint GetNumGeometries ()
		{
			Runtime.ValidateRefCounted (this);
			return CustomGeometry_GetNumGeometries (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint CustomGeometry_GetNumVertices (IntPtr handle, uint index);

		/// <summary>
		/// Return number of vertices in a geometry.
		/// </summary>
		public uint GetNumVertices (uint index)
		{
			Runtime.ValidateRefCounted (this);
			return CustomGeometry_GetNumVertices (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool CustomGeometry_IsDynamic (IntPtr handle);

		/// <summary>
		/// Return whether vertex buffer dynamic mode is enabled.
		/// </summary>
		private bool IsDynamic ()
		{
			Runtime.ValidateRefCounted (this);
			return CustomGeometry_IsDynamic (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CustomGeometry_GetMaterial (IntPtr handle, uint index);

		/// <summary>
		/// Return material by geometry index.
		/// </summary>
		public Material GetMaterial (uint index = 0)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Material> (CustomGeometry_GetMaterial (handle, index));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern CustomGeometryVertex* CustomGeometry_GetVertex (IntPtr handle, uint geometryIndex, uint vertexNum);

		/// <summary>
		/// Return a vertex in a geometry for editing, or null if out of bounds. After the edits are finished, calling Commit() updates  the vertex buffer.
		/// </summary>
		public CustomGeometryVertex* GetVertex (uint geometryIndex, uint vertexNum)
		{
			Runtime.ValidateRefCounted (this);
			return CustomGeometry_GetVertex (handle, geometryIndex, vertexNum);
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
		/// Return number of occlusion geometry triangles.
		/// </summary>
		public override uint NumOccluderTriangles {
			get {
				return GetNumOccluderTriangles ();
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
		/// Return whether vertex buffer dynamic mode is enabled.
		/// Or
		/// Set vertex buffer dynamic mode. A dynamic buffer should be faster to update frequently. Effective at the next Commit() call.
		/// </summary>
		public bool Dynamic {
			get {
				return IsDynamic ();
			}
			set {
				SetDynamic (value);
			}
		}
	}
}
