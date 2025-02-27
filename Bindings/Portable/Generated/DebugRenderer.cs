// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// DebugRenderer.cs
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
	/// Debug geometry rendering component. Should be added only to the root scene node.
	/// </summary>
	public unsafe partial class DebugRenderer : Component
	{
		unsafe partial void OnDebugRendererCreated ();

		[Preserve]
		public DebugRenderer (IntPtr handle) : base (handle)
		{
			OnDebugRendererCreated ();
		}

		[Preserve]
		protected DebugRenderer (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnDebugRendererCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int DebugRenderer_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (DebugRenderer_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugRenderer_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (DebugRenderer_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int DebugRenderer_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(DebugRenderer));
			return new StringHash (DebugRenderer_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugRenderer_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(DebugRenderer));
			return Marshal.PtrToStringAnsi (DebugRenderer_GetTypeNameStatic ());
		}

		[Preserve]
		public DebugRenderer () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugRenderer_DebugRenderer (IntPtr context);

		[Preserve]
		public DebugRenderer (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(DebugRenderer));
			handle = DebugRenderer_DebugRenderer ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnDebugRendererCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(DebugRenderer));
			DebugRenderer_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_SetLineAntiAlias (IntPtr handle, bool enable);

		/// <summary>
		/// Set line antialiasing on/off. Default false.
		/// </summary>
		private void SetLineAntiAlias (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_SetLineAntiAlias (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_SetView (IntPtr handle, IntPtr camera);

		/// <summary>
		/// Set the camera viewpoint. Call before rendering, or before adding geometry if you want to use culling.
		/// </summary>
		public void SetView (Camera camera)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_SetView (handle, (object)camera == null ? IntPtr.Zero : camera.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddLine (IntPtr handle, ref Urho.Vector3 start, ref Urho.Vector3 end, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a line.
		/// </summary>
		public void AddLine (Urho.Vector3 start, Urho.Vector3 end, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddLine (handle, ref start, ref end, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddLine0 (IntPtr handle, ref Urho.Vector3 start, ref Urho.Vector3 end, uint color, bool depthTest);

		/// <summary>
		/// Add a line with color already converted to unsigned.
		/// </summary>
		public void AddLine (Urho.Vector3 start, Urho.Vector3 end, uint color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddLine0 (handle, ref start, ref end, color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddTriangle (IntPtr handle, ref Urho.Vector3 v1, ref Urho.Vector3 v2, ref Urho.Vector3 v3, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a solid triangle.
		/// </summary>
		public void AddTriangle (Urho.Vector3 v1, Urho.Vector3 v2, Urho.Vector3 v3, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddTriangle (handle, ref v1, ref v2, ref v3, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddTriangle1 (IntPtr handle, ref Urho.Vector3 v1, ref Urho.Vector3 v2, ref Urho.Vector3 v3, uint color, bool depthTest);

		/// <summary>
		/// Add a solid triangle with color already converted to unsigned.
		/// </summary>
		public void AddTriangle (Urho.Vector3 v1, Urho.Vector3 v2, Urho.Vector3 v3, uint color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddTriangle1 (handle, ref v1, ref v2, ref v3, color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddPolygon (IntPtr handle, ref Urho.Vector3 v1, ref Urho.Vector3 v2, ref Urho.Vector3 v3, ref Urho.Vector3 v4, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a solid quadrangular polygon.
		/// </summary>
		public void AddPolygon (Urho.Vector3 v1, Urho.Vector3 v2, Urho.Vector3 v3, Urho.Vector3 v4, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddPolygon (handle, ref v1, ref v2, ref v3, ref v4, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddPolygon2 (IntPtr handle, ref Urho.Vector3 v1, ref Urho.Vector3 v2, ref Urho.Vector3 v3, ref Urho.Vector3 v4, uint color, bool depthTest);

		/// <summary>
		/// Add a solid quadrangular polygon with color already converted to unsigned.
		/// </summary>
		public void AddPolygon (Urho.Vector3 v1, Urho.Vector3 v2, Urho.Vector3 v3, Urho.Vector3 v4, uint color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddPolygon2 (handle, ref v1, ref v2, ref v3, ref v4, color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddNode (IntPtr handle, IntPtr node, float scale, bool depthTest);

		/// <summary>
		/// Add a scene node represented as its coordinate axes.
		/// </summary>
		public void AddNode (Node node, float scale = 1f, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddNode (handle, (object)node == null ? IntPtr.Zero : node.Handle, scale, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddBoundingBox (IntPtr handle, ref Urho.BoundingBox box, ref Urho.Color color, bool depthTest, bool solid);

		/// <summary>
		/// Add a bounding box.
		/// </summary>
		public void AddBoundingBox (Urho.BoundingBox box, Urho.Color color, bool depthTest = true, bool solid = false)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddBoundingBox (handle, ref box, ref color, depthTest, solid);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddBoundingBox3 (IntPtr handle, ref Urho.BoundingBox box, ref Urho.Matrix3x4 transform, ref Urho.Color color, bool depthTest, bool solid);

		/// <summary>
		/// Add a bounding box with transform.
		/// </summary>
		public void AddBoundingBox (Urho.BoundingBox box, Urho.Matrix3x4 transform, Urho.Color color, bool depthTest = true, bool solid = false)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddBoundingBox3 (handle, ref box, ref transform, ref color, depthTest, solid);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddFrustum (IntPtr handle, IntPtr frustum, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a frustum.
		/// </summary>
		public void AddFrustum (Frustum frustum, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddFrustum (handle, (object)frustum == null ? IntPtr.Zero : frustum.Handle, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddPolyhedron (IntPtr handle, IntPtr poly, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a polyhedron.
		/// </summary>
		public void AddPolyhedron (Polyhedron poly, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddPolyhedron (handle, (object)poly == null ? IntPtr.Zero : poly.Handle, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddSphere (IntPtr handle, IntPtr sphere, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a sphere.
		/// </summary>
		public void AddSphere (Sphere sphere, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddSphere (handle, (object)sphere == null ? IntPtr.Zero : sphere.Handle, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddSphereSector (IntPtr handle, IntPtr sphere, ref Urho.Quaternion rotation, float angle, bool drawLines, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a sphere sector. Angle ranges from 0 to 360. Identity Quaternion yields the filled portion of the sector upwards.
		/// </summary>
		public void AddSphereSector (Sphere sphere, Urho.Quaternion rotation, float angle, bool drawLines, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddSphereSector (handle, (object)sphere == null ? IntPtr.Zero : sphere.Handle, ref rotation, angle, drawLines, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddCylinder (IntPtr handle, ref Urho.Vector3 position, float radius, float height, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a cylinder
		/// </summary>
		public void AddCylinder (Urho.Vector3 position, float radius, float height, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddCylinder (handle, ref position, radius, height, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddTriangleMesh (IntPtr handle, void* vertexData, uint vertexSize, void* indexData, uint indexSize, uint indexStart, uint indexCount, ref Urho.Matrix3x4 transform, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a triangle mesh.
		/// </summary>
		public void AddTriangleMesh (void* vertexData, uint vertexSize, void* indexData, uint indexSize, uint indexStart, uint indexCount, Urho.Matrix3x4 transform, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddTriangleMesh (handle, vertexData, vertexSize, indexData, indexSize, indexStart, indexCount, ref transform, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddTriangleMesh4 (IntPtr handle, void* vertexData, uint vertexSize, uint vertexStart, void* indexData, uint indexSize, uint indexStart, uint indexCount, ref Urho.Matrix3x4 transform, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a triangle mesh.
		/// </summary>
		public void AddTriangleMesh (void* vertexData, uint vertexSize, uint vertexStart, void* indexData, uint indexSize, uint indexStart, uint indexCount, Urho.Matrix3x4 transform, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddTriangleMesh4 (handle, vertexData, vertexSize, vertexStart, indexData, indexSize, indexStart, indexCount, ref transform, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddCircle (IntPtr handle, ref Urho.Vector3 center, ref Urho.Vector3 normal, float radius, ref Urho.Color color, int steps, bool depthTest);

		/// <summary>
		/// Add a circle.
		/// </summary>
		public void AddCircle (Urho.Vector3 center, Urho.Vector3 normal, float radius, Urho.Color color, int steps = 64, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddCircle (handle, ref center, ref normal, radius, ref color, steps, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddCross (IntPtr handle, ref Urho.Vector3 center, float size, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a cross.
		/// </summary>
		public void AddCross (Urho.Vector3 center, float size, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddCross (handle, ref center, size, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_AddQuad (IntPtr handle, ref Urho.Vector3 center, float width, float height, ref Urho.Color color, bool depthTest);

		/// <summary>
		/// Add a quad on the XZ plane.
		/// </summary>
		public void AddQuad (Urho.Vector3 center, float width, float height, Urho.Color color, bool depthTest = true)
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_AddQuad (handle, ref center, width, height, ref color, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugRenderer_Render (IntPtr handle);

		/// <summary>
		/// Update vertex buffer and render all debug lines. The viewport and rendertarget should be set before.
		/// </summary>
		public void Render ()
		{
			Runtime.ValidateRefCounted (this);
			DebugRenderer_Render (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool DebugRenderer_GetLineAntiAlias (IntPtr handle);

		/// <summary>
		/// Return whether line antialiasing is enabled.
		/// </summary>
		private bool GetLineAntiAlias ()
		{
			Runtime.ValidateRefCounted (this);
			return DebugRenderer_GetLineAntiAlias (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Matrix3x4 DebugRenderer_GetView (IntPtr handle);

		/// <summary>
		/// Return the view transform.
		/// </summary>
		private Urho.Matrix3x4 GetView ()
		{
			Runtime.ValidateRefCounted (this);
			return DebugRenderer_GetView (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Matrix4 DebugRenderer_GetProjection (IntPtr handle);

		/// <summary>
		/// Return the projection transform.
		/// </summary>
		private Urho.Matrix4 GetProjection ()
		{
			Runtime.ValidateRefCounted (this);
			return DebugRenderer_GetProjection (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugRenderer_GetFrustum (IntPtr handle);

		/// <summary>
		/// Return the view frustum.
		/// </summary>
		private Frustum GetFrustum ()
		{
			Runtime.ValidateRefCounted (this);
			return new Frustum (DebugRenderer_GetFrustum (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool DebugRenderer_IsInside (IntPtr handle, ref Urho.BoundingBox box);

		/// <summary>
		/// Check whether a bounding box is inside the view frustum.
		/// </summary>
		public bool IsInside (Urho.BoundingBox box)
		{
			Runtime.ValidateRefCounted (this);
			return DebugRenderer_IsInside (handle, ref box);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool DebugRenderer_HasContent (IntPtr handle);

		/// <summary>
		/// Return whether has something to render.
		/// </summary>
		public bool HasContent ()
		{
			Runtime.ValidateRefCounted (this);
			return DebugRenderer_HasContent (handle);
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
		/// Return whether line antialiasing is enabled.
		/// Or
		/// Set line antialiasing on/off. Default false.
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
		/// Return the view transform.
		/// </summary>
		public Urho.Matrix3x4 View {
			get {
				return GetView ();
			}
		}

		/// <summary>
		/// Return the projection transform.
		/// </summary>
		public Urho.Matrix4 Projection {
			get {
				return GetProjection ();
			}
		}

		/// <summary>
		/// Return the view frustum.
		/// </summary>
		public Frustum Frustum {
			get {
				return GetFrustum ();
			}
		}
	}
}
