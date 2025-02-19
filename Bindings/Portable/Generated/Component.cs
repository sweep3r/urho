// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// Component.cs
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
	/// Base class for components. Components can be created to scene nodes.
	/// </summary>
	public unsafe partial class Component : Animatable
	{
		unsafe partial void OnComponentCreated ();

		[Preserve]
		public Component (IntPtr handle) : base (handle)
		{
			OnComponentCreated ();
		}

		[Preserve]
		protected Component (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnComponentCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Component_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Component_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Component_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Component_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Component_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Component));
			return new StringHash (Component_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Component_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Component));
			return Marshal.PtrToStringAnsi (Component_GetTypeNameStatic ());
		}

		[Preserve]
		public Component () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Component_Component (IntPtr context);

		[Preserve]
		public Component (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Component));
			handle = Component_Component ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnComponentCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Component_OnSetEnabled (IntPtr handle);

		/// <summary>
		/// Handle enabled/disabled state change.
		/// </summary>
		public virtual void OnSetEnabled ()
		{
			Runtime.ValidateRefCounted (this);
			Component_OnSetEnabled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Component_Save_File (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save as binary data. Return true if successful.
		/// </summary>
		public override bool Save (File dest)
		{
			Runtime.ValidateRefCounted (this);
			return Component_Save_File (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Component_Save_MemoryBuffer (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save as binary data. Return true if successful.
		/// </summary>
		public override bool Save (MemoryBuffer dest)
		{
			Runtime.ValidateRefCounted (this);
			return Component_Save_MemoryBuffer (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Component_SaveXML (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save as XML data. Return true if successful.
		/// </summary>
		public override bool SaveXml (XmlElement dest)
		{
			Runtime.ValidateRefCounted (this);
			return Component_SaveXML (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Component_MarkNetworkUpdate (IntPtr handle);

		/// <summary>
		/// Mark for attribute check on the next network update.
		/// </summary>
		public override void MarkNetworkUpdate ()
		{
			Runtime.ValidateRefCounted (this);
			Component_MarkNetworkUpdate (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Component_DrawDebugGeometry (IntPtr handle, IntPtr debug, bool depthTest);

		/// <summary>
		/// Visualize the component as debug geometry.
		/// </summary>
		public virtual void DrawDebugGeometry (DebugRenderer debug, bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			Component_DrawDebugGeometry (handle, (object)debug == null ? IntPtr.Zero : debug.Handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Component_SetEnabled (IntPtr handle, bool enable);

		/// <summary>
		/// Set enabled/disabled state.
		/// </summary>
		private void SetEnabled (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			Component_SetEnabled (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Component_Remove (IntPtr handle);

		/// <summary>
		/// Remove from the scene node. If no other shared pointer references exist, causes immediate deletion.
		/// </summary>
		public void Remove ()
		{
			Runtime.ValidateRefCounted (this);
			Component_Remove (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Component_GetID (IntPtr handle);

		/// <summary>
		/// Return ID.
		/// </summary>
		private uint GetID ()
		{
			Runtime.ValidateRefCounted (this);
			return Component_GetID (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Component_IsReplicated (IntPtr handle);

		/// <summary>
		/// Return whether the component is replicated or local to a scene.
		/// </summary>
		private bool IsReplicated ()
		{
			Runtime.ValidateRefCounted (this);
			return Component_IsReplicated (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Component_GetNode (IntPtr handle);

		/// <summary>
		/// Return scene node.
		/// </summary>
		private Node GetNode ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Node> (Component_GetNode (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Component_GetScene (IntPtr handle);

		/// <summary>
		/// Return the scene the node belongs to.
		/// </summary>
		private Scene GetScene ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Scene> (Component_GetScene (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Component_IsEnabled (IntPtr handle);

		/// <summary>
		/// Return whether is enabled.
		/// </summary>
		private bool IsEnabled ()
		{
			Runtime.ValidateRefCounted (this);
			return Component_IsEnabled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Component_IsEnabledEffective (IntPtr handle);

		/// <summary>
		/// Return whether is effectively enabled (node is also enabled).
		/// </summary>
		private bool IsEnabledEffective ()
		{
			Runtime.ValidateRefCounted (this);
			return Component_IsEnabledEffective (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Component_GetComponent (IntPtr handle, int type);

		/// <summary>
		/// Return component in the same scene node by type. If there are several, returns the first.
		/// </summary>
		public Component GetComponent (StringHash type)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Component> (Component_GetComponent (handle, type.Code));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Component_AddReplicationState (IntPtr handle, ComponentReplicationState* state);

		/// <summary>
		/// Add a replication state that is tracking this component.
		/// </summary>
		public void AddReplicationState (ComponentReplicationState* state)
		{
			Runtime.ValidateRefCounted (this);
			Component_AddReplicationState (handle, state);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Component_PrepareNetworkUpdate (IntPtr handle);

		/// <summary>
		/// Prepare network update by comparing attributes and marking replication states dirty as necessary.
		/// </summary>
		public void PrepareNetworkUpdate ()
		{
			Runtime.ValidateRefCounted (this);
			Component_PrepareNetworkUpdate (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Component_CleanupConnection (IntPtr handle, IntPtr connection);

		/// <summary>
		/// Clean up all references to a network connection that is about to be removed.
		/// </summary>
		public void CleanupConnection (Connection connection)
		{
			Runtime.ValidateRefCounted (this);
			Component_CleanupConnection (handle, (object)connection == null ? IntPtr.Zero : connection.Handle);
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
		/// Return whether is enabled.
		/// Or
		/// Set enabled/disabled state.
		/// </summary>
		public bool Enabled {
			get {
				return IsEnabled ();
			}
			set {
				SetEnabled (value);
			}
		}

		/// <summary>
		/// Return ID.
		/// </summary>
		public uint ID {
			get {
				return GetID ();
			}
		}

		/// <summary>
		/// Return whether the component is replicated or local to a scene.
		/// </summary>
		public bool Replicated {
			get {
				return IsReplicated ();
			}
		}

		/// <summary>
		/// Return scene node.
		/// </summary>
		public Node Node {
			get {
				return GetNode ();
			}
		}

		/// <summary>
		/// Return the scene the node belongs to.
		/// </summary>
		public Scene Scene {
			get {
				return GetScene ();
			}
		}

		/// <summary>
		/// Return whether is effectively enabled (node is also enabled).
		/// </summary>
		public bool EnabledEffective {
			get {
				return IsEnabledEffective ();
			}
		}
	}
}
