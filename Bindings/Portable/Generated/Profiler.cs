// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// Profiler.cs
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
	/// Hierarchical performance profiler subsystem.
	/// </summary>
	public unsafe partial class Profiler : UrhoObject
	{
		unsafe partial void OnProfilerCreated ();

		[Preserve]
		public Profiler (IntPtr handle) : base (handle)
		{
			OnProfilerCreated ();
		}

		[Preserve]
		protected Profiler (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnProfilerCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Profiler_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Profiler_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Profiler_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Profiler_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Profiler_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Profiler));
			return new StringHash (Profiler_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Profiler_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Profiler));
			return Marshal.PtrToStringAnsi (Profiler_GetTypeNameStatic ());
		}

		[Preserve]
		public Profiler () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Profiler_Profiler (IntPtr context);

		[Preserve]
		public Profiler (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Profiler));
			handle = Profiler_Profiler ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnProfilerCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Profiler_EndBlock (IntPtr handle);

		/// <summary>
		/// End timing the current profiling block.
		/// </summary>
		public void EndBlock ()
		{
			Runtime.ValidateRefCounted (this);
			Profiler_EndBlock (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Profiler_BeginFrame (IntPtr handle);

		/// <summary>
		/// Begin the profiling frame. Called by HandleBeginFrame().
		/// </summary>
		public void BeginFrame ()
		{
			Runtime.ValidateRefCounted (this);
			Profiler_BeginFrame (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Profiler_EndFrame (IntPtr handle);

		/// <summary>
		/// End the profiling frame. Called by HandleEndFrame().
		/// </summary>
		public void EndFrame ()
		{
			Runtime.ValidateRefCounted (this);
			Profiler_EndFrame (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Profiler_BeginInterval (IntPtr handle);

		/// <summary>
		/// Begin a new interval.
		/// </summary>
		public void BeginInterval ()
		{
			Runtime.ValidateRefCounted (this);
			Profiler_BeginInterval (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Profiler_PrintData (IntPtr handle, bool showUnused, bool showTotal, uint maxDepth);

		/// <summary>
		/// Return profiling data as text output. This method is not thread-safe.
		/// </summary>
		public string PrintData (bool showUnused = false, bool showTotal = false, uint maxDepth = uint.MaxValue)
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Profiler_PrintData (handle, showUnused, showTotal, maxDepth));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ProfilerBlock* Profiler_GetCurrentBlock (IntPtr handle);

		/// <summary>
		/// Return the current profiling block.
		/// </summary>
		private ProfilerBlock* GetCurrentBlock ()
		{
			Runtime.ValidateRefCounted (this);
			return Profiler_GetCurrentBlock (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ProfilerBlock* Profiler_GetRootBlock (IntPtr handle);

		/// <summary>
		/// Return the root profiling block.
		/// </summary>
		private ProfilerBlock* GetRootBlock ()
		{
			Runtime.ValidateRefCounted (this);
			return Profiler_GetRootBlock (handle);
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
		public static StringHash TypeStatic {
			get {
				return GetTypeStatic ();
			}
		}

		public static string TypeNameStatic {
			get {
				return GetTypeNameStatic ();
			}
		}

		/// <summary>
		/// Return the current profiling block.
		/// </summary>
		public ProfilerBlock* CurrentBlock {
			get {
				return GetCurrentBlock ();
			}
		}

		/// <summary>
		/// Return the root profiling block.
		/// </summary>
		public ProfilerBlock* RootBlock {
			get {
				return GetRootBlock ();
			}
		}
	}
}
