// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// NavigationMesh.cs
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

namespace Urho.Navigation
{
	/// <summary>
	/// Navigation mesh component. Collects the navigation geometry from child nodes with the Navigable component and responds to path queries.
	/// </summary>
	public unsafe partial class NavigationMesh : Component
	{
		unsafe partial void OnNavigationMeshCreated ();

		[Preserve]
		public NavigationMesh (IntPtr handle) : base (handle)
		{
			OnNavigationMeshCreated ();
		}

		[Preserve]
		protected NavigationMesh (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnNavigationMeshCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int NavigationMesh_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (NavigationMesh_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr NavigationMesh_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (NavigationMesh_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int NavigationMesh_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(NavigationMesh));
			return new StringHash (NavigationMesh_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr NavigationMesh_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(NavigationMesh));
			return Marshal.PtrToStringAnsi (NavigationMesh_GetTypeNameStatic ());
		}

		[Preserve]
		public NavigationMesh () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr NavigationMesh_NavigationMesh (IntPtr context);

		[Preserve]
		public NavigationMesh (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(NavigationMesh));
			handle = NavigationMesh_NavigationMesh ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnNavigationMeshCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(NavigationMesh));
			NavigationMesh_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_DrawDebugGeometry (IntPtr handle, IntPtr debug, bool depthTest);

		/// <summary>
		/// Visualize the component as debug geometry.
		/// </summary>
		public override void DrawDebugGeometry (DebugRenderer debug, bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_DrawDebugGeometry (handle, (object)debug == null ? IntPtr.Zero : debug.Handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetTileSize (IntPtr handle, int size);

		/// <summary>
		/// Set tile size.
		/// </summary>
		private void SetTileSize (int size)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetTileSize (handle, size);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetCellSize (IntPtr handle, float size);

		/// <summary>
		/// Set cell size.
		/// </summary>
		private void SetCellSize (float size)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetCellSize (handle, size);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetCellHeight (IntPtr handle, float height);

		/// <summary>
		/// Set cell height.
		/// </summary>
		private void SetCellHeight (float height)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetCellHeight (handle, height);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetAgentHeight (IntPtr handle, float height);

		/// <summary>
		/// Set navigation agent height.
		/// </summary>
		private void SetAgentHeight (float height)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetAgentHeight (handle, height);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetAgentRadius (IntPtr handle, float radius);

		/// <summary>
		/// Set navigation agent radius.
		/// </summary>
		private void SetAgentRadius (float radius)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetAgentRadius (handle, radius);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetAgentMaxClimb (IntPtr handle, float maxClimb);

		/// <summary>
		/// Set navigation agent max vertical climb.
		/// </summary>
		private void SetAgentMaxClimb (float maxClimb)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetAgentMaxClimb (handle, maxClimb);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetAgentMaxSlope (IntPtr handle, float maxSlope);

		/// <summary>
		/// Set navigation agent max slope.
		/// </summary>
		private void SetAgentMaxSlope (float maxSlope)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetAgentMaxSlope (handle, maxSlope);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetRegionMinSize (IntPtr handle, float size);

		/// <summary>
		/// Set region minimum size.
		/// </summary>
		private void SetRegionMinSize (float size)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetRegionMinSize (handle, size);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetRegionMergeSize (IntPtr handle, float size);

		/// <summary>
		/// Set region merge size.
		/// </summary>
		private void SetRegionMergeSize (float size)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetRegionMergeSize (handle, size);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetEdgeMaxLength (IntPtr handle, float length);

		/// <summary>
		/// Set edge max length.
		/// </summary>
		private void SetEdgeMaxLength (float length)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetEdgeMaxLength (handle, length);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetEdgeMaxError (IntPtr handle, float error);

		/// <summary>
		/// Set edge max error.
		/// </summary>
		private void SetEdgeMaxError (float error)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetEdgeMaxError (handle, error);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetDetailSampleDistance (IntPtr handle, float distance);

		/// <summary>
		/// Set detail sampling distance.
		/// </summary>
		private void SetDetailSampleDistance (float distance)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetDetailSampleDistance (handle, distance);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetDetailSampleMaxError (IntPtr handle, float error);

		/// <summary>
		/// Set detail sampling maximum error.
		/// </summary>
		private void SetDetailSampleMaxError (float error)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetDetailSampleMaxError (handle, error);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetPadding (IntPtr handle, ref Urho.Vector3 padding);

		/// <summary>
		/// Set padding of the navigation mesh bounding box. Having enough padding allows to add geometry on the extremities of the navigation mesh when doing partial rebuilds.
		/// </summary>
		private void SetPadding (Urho.Vector3 padding)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetPadding (handle, ref padding);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetAreaCost (IntPtr handle, uint areaID, float cost);

		/// <summary>
		/// Set the cost of an area.
		/// </summary>
		public void SetAreaCost (uint areaID, float cost)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetAreaCost (handle, areaID, cost);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool NavigationMesh_Allocate (IntPtr handle, ref Urho.BoundingBox boundingBox, uint maxTiles);

		/// <summary>
		/// Allocate the navigation mesh without building any tiles. Bounding box is not padded. Return true if successful.
		/// </summary>
		public virtual bool Allocate (Urho.BoundingBox boundingBox, uint maxTiles)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_Allocate (handle, ref boundingBox, maxTiles);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool NavigationMesh_Build (IntPtr handle);

		/// <summary>
		/// Rebuild the navigation mesh. Return true if successful.
		/// </summary>
		public virtual bool Build ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_Build (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool NavigationMesh_Build0 (IntPtr handle, ref Urho.BoundingBox boundingBox);

		/// <summary>
		/// Rebuild part of the navigation mesh contained by the world-space bounding box. Return true if successful.
		/// </summary>
		public virtual bool Build (Urho.BoundingBox boundingBox)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_Build0 (handle, ref boundingBox);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool NavigationMesh_Build1 (IntPtr handle, ref Urho.IntVector2 from, ref Urho.IntVector2 to);

		/// <summary>
		/// Rebuild part of the navigation mesh in the rectangular area. Return true if successful.
		/// </summary>
		public virtual bool Build (Urho.IntVector2 from, Urho.IntVector2 to)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_Build1 (handle, ref from, ref to);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_RemoveTile (IntPtr handle, ref Urho.IntVector2 tile);

		/// <summary>
		/// Remove tile from navigation mesh.
		/// </summary>
		public virtual void RemoveTile (Urho.IntVector2 tile)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_RemoveTile (handle, ref tile);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_RemoveAllTiles (IntPtr handle);

		/// <summary>
		/// Remove all tiles from navigation mesh.
		/// </summary>
		public virtual void RemoveAllTiles ()
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_RemoveAllTiles (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool NavigationMesh_HasTile (IntPtr handle, ref Urho.IntVector2 tile);

		/// <summary>
		/// Return whether the navigation mesh has tile.
		/// </summary>
		public bool HasTile (Urho.IntVector2 tile)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_HasTile (handle, ref tile);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern BoundingBox NavigationMesh_GetTileBoundingBox (IntPtr handle, ref Urho.IntVector2 tile);

		/// <summary>
		/// Return bounding box of the tile in the node space.
		/// </summary>
		public BoundingBox GetTileBoundingBox (Urho.IntVector2 tile)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetTileBoundingBox (handle, ref tile);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 NavigationMesh_GetTileIndex (IntPtr handle, ref Urho.Vector3 position);

		/// <summary>
		/// Return index of the tile at the position.
		/// </summary>
		public Urho.IntVector2 GetTileIndex (Urho.Vector3 position)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetTileIndex (handle, ref position);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector3 NavigationMesh_FindNearestPoint (IntPtr handle, ref Urho.Vector3 point, ref Urho.Vector3 extents, dtQueryFilter* filter, uint* nearestRef);

		/// <summary>
		/// Find the nearest point on the navigation mesh to a given point. Extents specifies how far out from the specified point to check along each axis.
		/// </summary>
		public Vector3 FindNearestPoint (Urho.Vector3 point, Urho.Vector3 extents, dtQueryFilter* filter = null, uint* nearestRef = null)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_FindNearestPoint (handle, ref point, ref extents, filter, nearestRef);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector3 NavigationMesh_MoveAlongSurface (IntPtr handle, ref Urho.Vector3 start, ref Urho.Vector3 end, ref Urho.Vector3 extents, int maxVisited, dtQueryFilter* filter);

		/// <summary>
		/// Try to move along the surface from one point to another.
		/// </summary>
		public Vector3 MoveAlongSurface (Urho.Vector3 start, Urho.Vector3 end, Urho.Vector3 extents, int maxVisited = 3, dtQueryFilter* filter = null)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_MoveAlongSurface (handle, ref start, ref end, ref extents, maxVisited, filter);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector3 NavigationMesh_GetRandomPoint (IntPtr handle, dtQueryFilter* filter, uint* randomRef);

		/// <summary>
		/// Return a random point on the navigation mesh.
		/// </summary>
		public Vector3 GetRandomPoint (dtQueryFilter* filter = null, uint* randomRef = null)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetRandomPoint (handle, filter, randomRef);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector3 NavigationMesh_GetRandomPointInCircle (IntPtr handle, ref Urho.Vector3 center, float radius, ref Urho.Vector3 extents, dtQueryFilter* filter, uint* randomRef);

		/// <summary>
		/// Return a random point on the navigation mesh within a circle. The circle radius is only a guideline and in practice the returned point may be further away.
		/// </summary>
		public Vector3 GetRandomPointInCircle (Urho.Vector3 center, float radius, Urho.Vector3 extents, dtQueryFilter* filter = null, uint* randomRef = null)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetRandomPointInCircle (handle, ref center, radius, ref extents, filter, randomRef);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetDistanceToWall (IntPtr handle, ref Urho.Vector3 point, float radius, ref Urho.Vector3 extents, dtQueryFilter* filter, Vector3* hitPos, Vector3* hitNormal);

		/// <summary>
		/// Return distance to wall from a point. Maximum search radius must be specified.
		/// </summary>
		public float GetDistanceToWall (Urho.Vector3 point, float radius, Urho.Vector3 extents, dtQueryFilter* filter = null, Vector3* hitPos = null, Vector3* hitNormal = null)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetDistanceToWall (handle, ref point, radius, ref extents, filter, hitPos, hitNormal);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector3 NavigationMesh_Raycast (IntPtr handle, ref Urho.Vector3 start, ref Urho.Vector3 end, ref Urho.Vector3 extents, dtQueryFilter* filter, Vector3* hitNormal);

		/// <summary>
		/// Perform a walkability raycast on the navigation mesh between start and end and return the point where a wall was hit, or the end point if no walls.
		/// </summary>
		public Vector3 Raycast (Urho.Vector3 start, Urho.Vector3 end, Urho.Vector3 extents, dtQueryFilter* filter = null, Vector3* hitNormal = null)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_Raycast (handle, ref start, ref end, ref extents, filter, hitNormal);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_DrawDebugGeometry2 (IntPtr handle, bool depthTest);

		/// <summary>
		/// Add debug geometry to the debug renderer.
		/// </summary>
		public virtual void DrawDebugGeometry (bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_DrawDebugGeometry2 (handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr NavigationMesh_GetMeshName (IntPtr handle);

		/// <summary>
		/// Return the given name of this navigation mesh.
		/// </summary>
		private string GetMeshName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (NavigationMesh_GetMeshName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetMeshName (IntPtr handle, string newName);

		/// <summary>
		/// Set the name of this navigation mesh.
		/// </summary>
		public void SetMeshName (string newName)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetMeshName (handle, newName);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int NavigationMesh_GetTileSize (IntPtr handle);

		/// <summary>
		/// Return tile size.
		/// </summary>
		private int GetTileSize ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetTileSize (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetCellSize (IntPtr handle);

		/// <summary>
		/// Return cell size.
		/// </summary>
		private float GetCellSize ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetCellSize (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetCellHeight (IntPtr handle);

		/// <summary>
		/// Return cell height.
		/// </summary>
		private float GetCellHeight ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetCellHeight (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetAgentHeight (IntPtr handle);

		/// <summary>
		/// Return navigation agent height.
		/// </summary>
		private float GetAgentHeight ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetAgentHeight (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetAgentRadius (IntPtr handle);

		/// <summary>
		/// Return navigation agent radius.
		/// </summary>
		private float GetAgentRadius ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetAgentRadius (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetAgentMaxClimb (IntPtr handle);

		/// <summary>
		/// Return navigation agent max vertical climb.
		/// </summary>
		private float GetAgentMaxClimb ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetAgentMaxClimb (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetAgentMaxSlope (IntPtr handle);

		/// <summary>
		/// Return navigation agent max slope.
		/// </summary>
		private float GetAgentMaxSlope ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetAgentMaxSlope (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetRegionMinSize (IntPtr handle);

		/// <summary>
		/// Return region minimum size.
		/// </summary>
		private float GetRegionMinSize ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetRegionMinSize (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetRegionMergeSize (IntPtr handle);

		/// <summary>
		/// Return region merge size.
		/// </summary>
		private float GetRegionMergeSize ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetRegionMergeSize (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetEdgeMaxLength (IntPtr handle);

		/// <summary>
		/// Return edge max length.
		/// </summary>
		private float GetEdgeMaxLength ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetEdgeMaxLength (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetEdgeMaxError (IntPtr handle);

		/// <summary>
		/// Return edge max error.
		/// </summary>
		private float GetEdgeMaxError ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetEdgeMaxError (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetDetailSampleDistance (IntPtr handle);

		/// <summary>
		/// Return detail sampling distance.
		/// </summary>
		private float GetDetailSampleDistance ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetDetailSampleDistance (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetDetailSampleMaxError (IntPtr handle);

		/// <summary>
		/// Return detail sampling maximum error.
		/// </summary>
		private float GetDetailSampleMaxError ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetDetailSampleMaxError (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector3 NavigationMesh_GetPadding (IntPtr handle);

		/// <summary>
		/// Return navigation mesh bounding box padding.
		/// </summary>
		private Urho.Vector3 GetPadding ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetPadding (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float NavigationMesh_GetAreaCost (IntPtr handle, uint areaID);

		/// <summary>
		/// Get the current cost of an area
		/// </summary>
		public float GetAreaCost (uint areaID)
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetAreaCost (handle, areaID);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool NavigationMesh_IsInitialized (IntPtr handle);

		/// <summary>
		/// Return whether has been initialized with valid navigation data.
		/// </summary>
		private bool IsInitialized ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_IsInitialized (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.BoundingBox NavigationMesh_GetBoundingBox (IntPtr handle);

		/// <summary>
		/// Return local space bounding box of the navigation mesh.
		/// </summary>
		private Urho.BoundingBox GetBoundingBox ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetBoundingBox (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern BoundingBox NavigationMesh_GetWorldBoundingBox (IntPtr handle);

		/// <summary>
		/// Return world space bounding box of the navigation mesh.
		/// </summary>
		private BoundingBox GetWorldBoundingBox ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetWorldBoundingBox (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 NavigationMesh_GetNumTiles (IntPtr handle);

		/// <summary>
		/// Return number of tiles.
		/// </summary>
		private Urho.IntVector2 GetNumTiles ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetNumTiles (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetPartitionType (IntPtr handle, NavmeshPartitionType partitionType);

		/// <summary>
		/// Set the partition type used for polygon generation.
		/// </summary>
		private void SetPartitionType (NavmeshPartitionType partitionType)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetPartitionType (handle, partitionType);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern NavmeshPartitionType NavigationMesh_GetPartitionType (IntPtr handle);

		/// <summary>
		/// Return Partition Type.
		/// </summary>
		private NavmeshPartitionType GetPartitionType ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetPartitionType (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetDrawOffMeshConnections (IntPtr handle, bool enable);

		/// <summary>
		/// Draw debug geometry for OffMeshConnection components.
		/// </summary>
		private void SetDrawOffMeshConnections (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetDrawOffMeshConnections (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool NavigationMesh_GetDrawOffMeshConnections (IntPtr handle);

		/// <summary>
		/// Return whether to draw OffMeshConnection components.
		/// </summary>
		private bool GetDrawOffMeshConnections ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetDrawOffMeshConnections (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void NavigationMesh_SetDrawNavAreas (IntPtr handle, bool enable);

		/// <summary>
		/// Draw debug geometry for NavArea components.
		/// </summary>
		private void SetDrawNavAreas (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			NavigationMesh_SetDrawNavAreas (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool NavigationMesh_GetDrawNavAreas (IntPtr handle);

		/// <summary>
		/// Return whether to draw NavArea components.
		/// </summary>
		private bool GetDrawNavAreas ()
		{
			Runtime.ValidateRefCounted (this);
			return NavigationMesh_GetDrawNavAreas (handle);
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
		/// Return tile size.
		/// Or
		/// Set tile size.
		/// </summary>
		public int TileSize {
			get {
				return GetTileSize ();
			}
			set {
				SetTileSize (value);
			}
		}

		/// <summary>
		/// Return cell size.
		/// Or
		/// Set cell size.
		/// </summary>
		public float CellSize {
			get {
				return GetCellSize ();
			}
			set {
				SetCellSize (value);
			}
		}

		/// <summary>
		/// Return cell height.
		/// Or
		/// Set cell height.
		/// </summary>
		public float CellHeight {
			get {
				return GetCellHeight ();
			}
			set {
				SetCellHeight (value);
			}
		}

		/// <summary>
		/// Return navigation agent height.
		/// Or
		/// Set navigation agent height.
		/// </summary>
		public float AgentHeight {
			get {
				return GetAgentHeight ();
			}
			set {
				SetAgentHeight (value);
			}
		}

		/// <summary>
		/// Return navigation agent radius.
		/// Or
		/// Set navigation agent radius.
		/// </summary>
		public float AgentRadius {
			get {
				return GetAgentRadius ();
			}
			set {
				SetAgentRadius (value);
			}
		}

		/// <summary>
		/// Return navigation agent max vertical climb.
		/// Or
		/// Set navigation agent max vertical climb.
		/// </summary>
		public float AgentMaxClimb {
			get {
				return GetAgentMaxClimb ();
			}
			set {
				SetAgentMaxClimb (value);
			}
		}

		/// <summary>
		/// Return navigation agent max slope.
		/// Or
		/// Set navigation agent max slope.
		/// </summary>
		public float AgentMaxSlope {
			get {
				return GetAgentMaxSlope ();
			}
			set {
				SetAgentMaxSlope (value);
			}
		}

		/// <summary>
		/// Return region minimum size.
		/// Or
		/// Set region minimum size.
		/// </summary>
		public float RegionMinSize {
			get {
				return GetRegionMinSize ();
			}
			set {
				SetRegionMinSize (value);
			}
		}

		/// <summary>
		/// Return region merge size.
		/// Or
		/// Set region merge size.
		/// </summary>
		public float RegionMergeSize {
			get {
				return GetRegionMergeSize ();
			}
			set {
				SetRegionMergeSize (value);
			}
		}

		/// <summary>
		/// Return edge max length.
		/// Or
		/// Set edge max length.
		/// </summary>
		public float EdgeMaxLength {
			get {
				return GetEdgeMaxLength ();
			}
			set {
				SetEdgeMaxLength (value);
			}
		}

		/// <summary>
		/// Return edge max error.
		/// Or
		/// Set edge max error.
		/// </summary>
		public float EdgeMaxError {
			get {
				return GetEdgeMaxError ();
			}
			set {
				SetEdgeMaxError (value);
			}
		}

		/// <summary>
		/// Return detail sampling distance.
		/// Or
		/// Set detail sampling distance.
		/// </summary>
		public float DetailSampleDistance {
			get {
				return GetDetailSampleDistance ();
			}
			set {
				SetDetailSampleDistance (value);
			}
		}

		/// <summary>
		/// Return detail sampling maximum error.
		/// Or
		/// Set detail sampling maximum error.
		/// </summary>
		public float DetailSampleMaxError {
			get {
				return GetDetailSampleMaxError ();
			}
			set {
				SetDetailSampleMaxError (value);
			}
		}

		/// <summary>
		/// Return navigation mesh bounding box padding.
		/// Or
		/// Set padding of the navigation mesh bounding box. Having enough padding allows to add geometry on the extremities of the navigation mesh when doing partial rebuilds.
		/// </summary>
		public Urho.Vector3 Padding {
			get {
				return GetPadding ();
			}
			set {
				SetPadding (value);
			}
		}

		/// <summary>
		/// Return the given name of this navigation mesh.
		/// </summary>
		public string MeshName {
			get {
				return GetMeshName ();
			}
		}

		/// <summary>
		/// Return whether has been initialized with valid navigation data.
		/// </summary>
		public bool Initialized {
			get {
				return IsInitialized ();
			}
		}

		/// <summary>
		/// Return local space bounding box of the navigation mesh.
		/// </summary>
		public Urho.BoundingBox BoundingBox {
			get {
				return GetBoundingBox ();
			}
		}

		/// <summary>
		/// Return world space bounding box of the navigation mesh.
		/// </summary>
		public BoundingBox WorldBoundingBox {
			get {
				return GetWorldBoundingBox ();
			}
		}

		/// <summary>
		/// Return number of tiles.
		/// </summary>
		public Urho.IntVector2 NumTiles {
			get {
				return GetNumTiles ();
			}
		}

		/// <summary>
		/// Return Partition Type.
		/// Or
		/// Set the partition type used for polygon generation.
		/// </summary>
		public NavmeshPartitionType PartitionType {
			get {
				return GetPartitionType ();
			}
			set {
				SetPartitionType (value);
			}
		}

		/// <summary>
		/// Return whether to draw OffMeshConnection components.
		/// Or
		/// Draw debug geometry for OffMeshConnection components.
		/// </summary>
		public bool DrawOffMeshConnections {
			get {
				return GetDrawOffMeshConnections ();
			}
			set {
				SetDrawOffMeshConnections (value);
			}
		}

		/// <summary>
		/// Return whether to draw NavArea components.
		/// Or
		/// Draw debug geometry for NavArea components.
		/// </summary>
		public bool DrawNavAreas {
			get {
				return GetDrawNavAreas ();
			}
			set {
				SetDrawNavAreas (value);
			}
		}
	}
}
