// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// UI.cs
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
	/// %UI subsystem. Manages the graphical user interface.
	/// </summary>
	public unsafe partial class UI : UrhoObject
	{
		unsafe partial void OnUICreated ();

		[Preserve]
		public UI (IntPtr handle) : base (handle)
		{
			OnUICreated ();
		}

		[Preserve]
		protected UI (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnUICreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int UI_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (UI_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (UI_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int UI_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(UI));
			return new StringHash (UI_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(UI));
			return Marshal.PtrToStringAnsi (UI_GetTypeNameStatic ());
		}

		[Preserve]
		public UI () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_UI (IntPtr context);

		[Preserve]
		public UI (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(UI));
			handle = UI_UI ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnUICreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetCursor (IntPtr handle, IntPtr cursor);

		/// <summary>
		/// Set cursor UI element.
		/// </summary>
		private void SetCursor (Cursor cursor)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetCursor (handle, (object)cursor == null ? IntPtr.Zero : cursor.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetFocusElement (IntPtr handle, IntPtr element, bool byKey);

		/// <summary>
		/// Set focused UI element.
		/// </summary>
		public void SetFocusElement (UIElement element, bool byKey = false)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetFocusElement (handle, (object)element == null ? IntPtr.Zero : element.Handle, byKey);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_SetModalElement (IntPtr handle, IntPtr modalElement, bool enable);

		/// <summary>
		/// Set modal element. Until all the modal elements are dismissed, all the inputs and events are only sent to them. Return true when successful.
		/// Only the modal element can clear its modal status or when it is being destructed.
		/// </summary>
		public bool SetModalElement (UIElement modalElement, bool enable)
		{
			Runtime.ValidateRefCounted (this);
			return UI_SetModalElement (handle, (object)modalElement == null ? IntPtr.Zero : modalElement.Handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_Clear (IntPtr handle);

		/// <summary>
		/// Clear the UI (excluding the cursor.)
		/// </summary>
		public void Clear ()
		{
			Runtime.ValidateRefCounted (this);
			UI_Clear (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_Update (IntPtr handle, float timeStep);

		/// <summary>
		/// Update the UI logic. Called by HandlePostUpdate().
		/// </summary>
		public void Update (float timeStep)
		{
			Runtime.ValidateRefCounted (this);
			UI_Update (handle, timeStep);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_RenderUpdate (IntPtr handle);

		/// <summary>
		/// Update the UI for rendering. Called by HandleRenderUpdate().
		/// </summary>
		public void RenderUpdate ()
		{
			Runtime.ValidateRefCounted (this);
			UI_RenderUpdate (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_Render (IntPtr handle, bool renderUICommand);

		/// <summary>
		/// Render the UI. If renderUICommand is false (default), is assumed to be the default UI render to backbuffer called by Engine, and will be performed only once. Additional UI renders to a different rendertarget may be triggered from the renderpath.
		/// </summary>
		public void Render (bool renderUICommand = false)
		{
			Runtime.ValidateRefCounted (this);
			UI_Render (handle, renderUICommand);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_DebugDraw (IntPtr handle, IntPtr element);

		/// <summary>
		/// Debug draw a UI element.
		/// </summary>
		public void DebugDraw (UIElement element)
		{
			Runtime.ValidateRefCounted (this);
			UI_DebugDraw (handle, (object)element == null ? IntPtr.Zero : element.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_LoadLayout_File (IntPtr handle, IntPtr source, IntPtr styleFile);

		/// <summary>
		/// Load a UI layout from an XML file. Optionally specify another XML file for element style. Return the root element.
		/// </summary>
		public UIElement LoadLayout (File source, Urho.Resources.XmlFile styleFile = null)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupRefCounted<UIElement> (UI_LoadLayout_File (handle, (object)source == null ? IntPtr.Zero : source.Handle, (object)styleFile == null ? IntPtr.Zero : styleFile.Handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_LoadLayout_MemoryBuffer (IntPtr handle, IntPtr source, IntPtr styleFile);

		/// <summary>
		/// Load a UI layout from an XML file. Optionally specify another XML file for element style. Return the root element.
		/// </summary>
		public UIElement LoadLayout (MemoryBuffer source, Urho.Resources.XmlFile styleFile = null)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupRefCounted<UIElement> (UI_LoadLayout_MemoryBuffer (handle, (object)source == null ? IntPtr.Zero : source.Handle, (object)styleFile == null ? IntPtr.Zero : styleFile.Handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_LoadLayout0 (IntPtr handle, IntPtr file, IntPtr styleFile);

		/// <summary>
		/// Load a UI layout from an XML file. Optionally specify another XML file for element style. Return the root element.
		/// </summary>
		public UIElement LoadLayout (Urho.Resources.XmlFile file, Urho.Resources.XmlFile styleFile = null)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupRefCounted<UIElement> (UI_LoadLayout0 (handle, (object)file == null ? IntPtr.Zero : file.Handle, (object)styleFile == null ? IntPtr.Zero : styleFile.Handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_SaveLayout_File (IntPtr handle, IntPtr dest, IntPtr element);

		/// <summary>
		/// Save a UI layout to an XML file. Return true if successful.
		/// </summary>
		public bool SaveLayout (File dest, UIElement element)
		{
			Runtime.ValidateRefCounted (this);
			return UI_SaveLayout_File (handle, (object)dest == null ? IntPtr.Zero : dest.Handle, (object)element == null ? IntPtr.Zero : element.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_SaveLayout_MemoryBuffer (IntPtr handle, IntPtr dest, IntPtr element);

		/// <summary>
		/// Save a UI layout to an XML file. Return true if successful.
		/// </summary>
		public bool SaveLayout (MemoryBuffer dest, UIElement element)
		{
			Runtime.ValidateRefCounted (this);
			return UI_SaveLayout_MemoryBuffer (handle, (object)dest == null ? IntPtr.Zero : dest.Handle, (object)element == null ? IntPtr.Zero : element.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetClipboardText (IntPtr handle, string text);

		/// <summary>
		/// Set clipboard text.
		/// </summary>
		private void SetClipboardText (string text)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetClipboardText (handle, text);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetDoubleClickInterval (IntPtr handle, float interval);

		/// <summary>
		/// Set UI element double click interval in seconds.
		/// </summary>
		private void SetDoubleClickInterval (float interval)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetDoubleClickInterval (handle, interval);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetMaxDoubleClickDistance (IntPtr handle, float distPixels);

		/// <summary>
		/// Set max screen distance in pixels between double click clicks.
		/// </summary>
		private void SetMaxDoubleClickDistance (float distPixels)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetMaxDoubleClickDistance (handle, distPixels);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetDragBeginInterval (IntPtr handle, float interval);

		/// <summary>
		/// Set UI drag event start interval in seconds.
		/// </summary>
		private void SetDragBeginInterval (float interval)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetDragBeginInterval (handle, interval);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetDragBeginDistance (IntPtr handle, int pixels);

		/// <summary>
		/// Set UI drag event start distance threshold in pixels.
		/// </summary>
		private void SetDragBeginDistance (int pixels)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetDragBeginDistance (handle, pixels);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetDefaultToolTipDelay (IntPtr handle, float delay);

		/// <summary>
		/// Set tooltip default display delay in seconds.
		/// </summary>
		private void SetDefaultToolTipDelay (float delay)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetDefaultToolTipDelay (handle, delay);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetMaxFontTextureSize (IntPtr handle, int size);

		/// <summary>
		/// Set maximum font face texture size. Must be a power of two. Default is 2048.
		/// </summary>
		private void SetMaxFontTextureSize (int size)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetMaxFontTextureSize (handle, size);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetNonFocusedMouseWheel (IntPtr handle, bool nonFocusedMouseWheel);

		/// <summary>
		/// Set whether mouse wheel can control also a non-focused element.
		/// </summary>
		private void SetNonFocusedMouseWheel (bool nonFocusedMouseWheel)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetNonFocusedMouseWheel (handle, nonFocusedMouseWheel);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetUseSystemClipboard (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether to use system clipboard. Default false.
		/// </summary>
		private void SetUseSystemClipboard (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetUseSystemClipboard (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetUseScreenKeyboard (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether to show the on-screen keyboard (if supported) when a %LineEdit is focused. Default true on mobile devices.
		/// </summary>
		private void SetUseScreenKeyboard (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetUseScreenKeyboard (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetUseMutableGlyphs (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether to use mutable (eraseable) glyphs to ensure a font face never expands to more than one texture. Default false.
		/// </summary>
		private void SetUseMutableGlyphs (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetUseMutableGlyphs (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetForceAutoHint (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether to force font autohinting instead of using FreeType's TTF bytecode interpreter.
		/// </summary>
		private void SetForceAutoHint (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetForceAutoHint (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetFontHintLevel (IntPtr handle, FontHintLevel level);

		/// <summary>
		/// Set the hinting level used by FreeType fonts.
		/// </summary>
		private void SetFontHintLevel (FontHintLevel level)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetFontHintLevel (handle, level);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetFontSubpixelThreshold (IntPtr handle, float threshold);

		/// <summary>
		/// Set the font subpixel threshold. Below this size, if the hint level is LIGHT or NONE, fonts will use subpixel positioning plus oversampling for higher-quality rendering. Has no effect at hint level NORMAL.
		/// </summary>
		private void SetFontSubpixelThreshold (float threshold)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetFontSubpixelThreshold (handle, threshold);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetFontOversampling (IntPtr handle, int oversampling);

		/// <summary>
		/// Set the oversampling (horizonal stretching) used to improve subpixel font rendering. Only affects fonts smaller than the subpixel limit.
		/// </summary>
		private void SetFontOversampling (int oversampling)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetFontOversampling (handle, oversampling);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetScale (IntPtr handle, float scale);

		/// <summary>
		/// Set %UI scale. 1.0 is default (pixel perfect). Resize the root element to match.
		/// </summary>
		private void SetScale (float scale)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetScale (handle, scale);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetWidth (IntPtr handle, float width);

		/// <summary>
		/// Scale %UI to the specified width in pixels.
		/// </summary>
		public void SetWidth (float width)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetWidth (handle, width);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetHeight (IntPtr handle, float height);

		/// <summary>
		/// Scale %UI to the specified height in pixels.
		/// </summary>
		public void SetHeight (float height)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetHeight (handle, height);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetCustomSize (IntPtr handle, ref Urho.IntVector2 size);

		/// <summary>
		/// Set custom size of the root element. This disables automatic resizing of the root element according to window size. Set custom size 0,0 to return to automatic resizing.
		/// </summary>
		private void SetCustomSize (Urho.IntVector2 size)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetCustomSize (handle, ref size);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetCustomSize1 (IntPtr handle, int width, int height);

		/// <summary>
		/// Set custom size of the root element.
		/// </summary>
		public void SetCustomSize (int width, int height)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetCustomSize1 (handle, width, height);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetRoot (IntPtr handle);

		/// <summary>
		/// Return root UI element.
		/// </summary>
		private UIElement GetRoot ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (UI_GetRoot (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetRootModalElement (IntPtr handle);

		/// <summary>
		/// Return root modal element.
		/// </summary>
		private UIElement GetRootModalElement ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (UI_GetRootModalElement (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetCursor (IntPtr handle);

		/// <summary>
		/// Return cursor.
		/// </summary>
		private Cursor GetCursor ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Cursor> (UI_GetCursor (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 UI_GetCursorPosition (IntPtr handle);

		/// <summary>
		/// Return cursor position.
		/// </summary>
		private Urho.IntVector2 GetCursorPosition ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetCursorPosition (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetElementAt (IntPtr handle, ref Urho.IntVector2 position, bool enabledOnly);

		/// <summary>
		/// Return UI element at global screen coordinates. By default returns only input-enabled elements.
		/// </summary>
		public UIElement GetElementAt (Urho.IntVector2 position, bool enabledOnly = true)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (UI_GetElementAt (handle, ref position, enabledOnly));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetElementAt2 (IntPtr handle, int x, int y, bool enabledOnly);

		/// <summary>
		/// Return UI element at global screen coordinates. By default returns only input-enabled elements.
		/// </summary>
		public UIElement GetElementAt (int x, int y, bool enabledOnly = true)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (UI_GetElementAt2 (handle, x, y, enabledOnly));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetElementAt3 (IntPtr handle, IntPtr root, ref Urho.IntVector2 position, bool enabledOnly);

		/// <summary>
		/// Get a child element at element's screen position relative to specified root element.
		/// </summary>
		public UIElement GetElementAt (UIElement root, Urho.IntVector2 position, bool enabledOnly = true)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (UI_GetElementAt3 (handle, (object)root == null ? IntPtr.Zero : root.Handle, ref position, enabledOnly));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetFocusElement (IntPtr handle);

		/// <summary>
		/// Return focused element.
		/// </summary>
		private UIElement GetFocusElement ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (UI_GetFocusElement (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetFrontElement (IntPtr handle);

		/// <summary>
		/// Return topmost enabled root-level non-modal element.
		/// </summary>
		private UIElement GetFrontElement ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (UI_GetFrontElement (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint UI_GetNumDragElements (IntPtr handle);

		/// <summary>
		/// Return the number of currently dragged elements.
		/// </summary>
		private uint GetNumDragElements ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetNumDragElements (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetDragElement (IntPtr handle, uint index);

		/// <summary>
		/// Return the drag element at index.
		/// </summary>
		public UIElement GetDragElement (uint index)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (UI_GetDragElement (handle, index));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr UI_GetClipboardText (IntPtr handle);

		/// <summary>
		/// Return clipboard text.
		/// </summary>
		private string GetClipboardText ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (UI_GetClipboardText (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float UI_GetDoubleClickInterval (IntPtr handle);

		/// <summary>
		/// Return UI element double click interval in seconds.
		/// </summary>
		private float GetDoubleClickInterval ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetDoubleClickInterval (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float UI_GetMaxDoubleClickDistance (IntPtr handle);

		/// <summary>
		/// Get max screen distance in pixels for double clicks to register.
		/// </summary>
		private float GetMaxDoubleClickDistance ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetMaxDoubleClickDistance (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float UI_GetDragBeginInterval (IntPtr handle);

		/// <summary>
		/// Return UI drag start event interval in seconds.
		/// </summary>
		private float GetDragBeginInterval ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetDragBeginInterval (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int UI_GetDragBeginDistance (IntPtr handle);

		/// <summary>
		/// Return UI drag start event distance threshold in pixels.
		/// </summary>
		private int GetDragBeginDistance ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetDragBeginDistance (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float UI_GetDefaultToolTipDelay (IntPtr handle);

		/// <summary>
		/// Return tooltip default display delay in seconds.
		/// </summary>
		private float GetDefaultToolTipDelay ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetDefaultToolTipDelay (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int UI_GetMaxFontTextureSize (IntPtr handle);

		/// <summary>
		/// Return font texture maximum size.
		/// </summary>
		private int GetMaxFontTextureSize ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetMaxFontTextureSize (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_IsNonFocusedMouseWheel (IntPtr handle);

		/// <summary>
		/// Return whether mouse wheel can control also a non-focused element.
		/// </summary>
		private bool IsNonFocusedMouseWheel ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_IsNonFocusedMouseWheel (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_GetUseSystemClipboard (IntPtr handle);

		/// <summary>
		/// Return whether is using the system clipboard.
		/// </summary>
		private bool GetUseSystemClipboard ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetUseSystemClipboard (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_GetUseScreenKeyboard (IntPtr handle);

		/// <summary>
		/// Return whether focusing a %LineEdit will show the on-screen keyboard.
		/// </summary>
		private bool GetUseScreenKeyboard ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetUseScreenKeyboard (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_GetUseMutableGlyphs (IntPtr handle);

		/// <summary>
		/// Return whether is using mutable (eraseable) glyphs for fonts.
		/// </summary>
		private bool GetUseMutableGlyphs ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetUseMutableGlyphs (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_GetForceAutoHint (IntPtr handle);

		/// <summary>
		/// Return whether is using forced autohinting.
		/// </summary>
		private bool GetForceAutoHint ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetForceAutoHint (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern FontHintLevel UI_GetFontHintLevel (IntPtr handle);

		/// <summary>
		/// Return the current FreeType font hinting level.
		/// </summary>
		private FontHintLevel GetFontHintLevel ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetFontHintLevel (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float UI_GetFontSubpixelThreshold (IntPtr handle);

		/// <summary>
		/// Get the font subpixel threshold. Below this size, if the hint level is LIGHT or NONE, fonts will use subpixel positioning plus oversampling for higher-quality rendering. Has no effect at hint level NORMAL.
		/// </summary>
		private float GetFontSubpixelThreshold ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetFontSubpixelThreshold (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int UI_GetFontOversampling (IntPtr handle);

		/// <summary>
		/// Get the oversampling (horizonal stretching) used to improve subpixel font rendering. Only affects fonts smaller than the subpixel limit.
		/// </summary>
		private int GetFontOversampling ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetFontOversampling (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_HasModalElement (IntPtr handle);

		/// <summary>
		/// Return true when UI has modal element(s).
		/// </summary>
		public bool HasModalElement ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_HasModalElement (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool UI_IsDragging (IntPtr handle);

		/// <summary>
		/// Return whether a drag is in progress.
		/// </summary>
		private bool IsDragging ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_IsDragging (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float UI_GetScale (IntPtr handle);

		/// <summary>
		/// Return current UI scale.
		/// </summary>
		private float GetScale ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetScale (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 UI_GetCustomSize (IntPtr handle);

		/// <summary>
		/// Return root element custom size. Returns 0,0 when custom size is not being used and automatic resizing according to window size is in use instead (default.)
		/// </summary>
		private Urho.IntVector2 GetCustomSize ()
		{
			Runtime.ValidateRefCounted (this);
			return UI_GetCustomSize (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void UI_SetElementRenderTexture (IntPtr handle, IntPtr element, IntPtr texture);

		/// <summary>
		/// Set texture to which element will be rendered.
		/// </summary>
		public void SetElementRenderTexture (UIElement element, Texture2D texture)
		{
			Runtime.ValidateRefCounted (this);
			UI_SetElementRenderTexture (handle, (object)element == null ? IntPtr.Zero : element.Handle, (object)texture == null ? IntPtr.Zero : texture.Handle);
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
		/// Return cursor.
		/// Or
		/// Set cursor UI element.
		/// </summary>
		public Cursor Cursor {
			get {
				return GetCursor ();
			}
			set {
				SetCursor (value);
			}
		}

		/// <summary>
		/// Return clipboard text.
		/// Or
		/// Set clipboard text.
		/// </summary>
		public string ClipboardText {
			get {
				return GetClipboardText ();
			}
			set {
				SetClipboardText (value);
			}
		}

		/// <summary>
		/// Return UI element double click interval in seconds.
		/// Or
		/// Set UI element double click interval in seconds.
		/// </summary>
		public float DoubleClickInterval {
			get {
				return GetDoubleClickInterval ();
			}
			set {
				SetDoubleClickInterval (value);
			}
		}

		/// <summary>
		/// Get max screen distance in pixels for double clicks to register.
		/// Or
		/// Set max screen distance in pixels between double click clicks.
		/// </summary>
		public float MaxDoubleClickDistance {
			get {
				return GetMaxDoubleClickDistance ();
			}
			set {
				SetMaxDoubleClickDistance (value);
			}
		}

		/// <summary>
		/// Return UI drag start event interval in seconds.
		/// Or
		/// Set UI drag event start interval in seconds.
		/// </summary>
		public float DragBeginInterval {
			get {
				return GetDragBeginInterval ();
			}
			set {
				SetDragBeginInterval (value);
			}
		}

		/// <summary>
		/// Return UI drag start event distance threshold in pixels.
		/// Or
		/// Set UI drag event start distance threshold in pixels.
		/// </summary>
		public int DragBeginDistance {
			get {
				return GetDragBeginDistance ();
			}
			set {
				SetDragBeginDistance (value);
			}
		}

		/// <summary>
		/// Return tooltip default display delay in seconds.
		/// Or
		/// Set tooltip default display delay in seconds.
		/// </summary>
		public float DefaultToolTipDelay {
			get {
				return GetDefaultToolTipDelay ();
			}
			set {
				SetDefaultToolTipDelay (value);
			}
		}

		/// <summary>
		/// Return font texture maximum size.
		/// Or
		/// Set maximum font face texture size. Must be a power of two. Default is 2048.
		/// </summary>
		public int MaxFontTextureSize {
			get {
				return GetMaxFontTextureSize ();
			}
			set {
				SetMaxFontTextureSize (value);
			}
		}

		/// <summary>
		/// Return whether mouse wheel can control also a non-focused element.
		/// Or
		/// Set whether mouse wheel can control also a non-focused element.
		/// </summary>
		public bool NonFocusedMouseWheel {
			get {
				return IsNonFocusedMouseWheel ();
			}
			set {
				SetNonFocusedMouseWheel (value);
			}
		}

		/// <summary>
		/// Return whether is using the system clipboard.
		/// Or
		/// Set whether to use system clipboard. Default false.
		/// </summary>
		public bool UseSystemClipboard {
			get {
				return GetUseSystemClipboard ();
			}
			set {
				SetUseSystemClipboard (value);
			}
		}

		/// <summary>
		/// Return whether focusing a %LineEdit will show the on-screen keyboard.
		/// Or
		/// Set whether to show the on-screen keyboard (if supported) when a %LineEdit is focused. Default true on mobile devices.
		/// </summary>
		public bool UseScreenKeyboard {
			get {
				return GetUseScreenKeyboard ();
			}
			set {
				SetUseScreenKeyboard (value);
			}
		}

		/// <summary>
		/// Return whether is using mutable (eraseable) glyphs for fonts.
		/// Or
		/// Set whether to use mutable (eraseable) glyphs to ensure a font face never expands to more than one texture. Default false.
		/// </summary>
		public bool UseMutableGlyphs {
			get {
				return GetUseMutableGlyphs ();
			}
			set {
				SetUseMutableGlyphs (value);
			}
		}

		/// <summary>
		/// Return whether is using forced autohinting.
		/// Or
		/// Set whether to force font autohinting instead of using FreeType's TTF bytecode interpreter.
		/// </summary>
		public bool ForceAutoHint {
			get {
				return GetForceAutoHint ();
			}
			set {
				SetForceAutoHint (value);
			}
		}

		/// <summary>
		/// Return the current FreeType font hinting level.
		/// Or
		/// Set the hinting level used by FreeType fonts.
		/// </summary>
		public FontHintLevel FontHintLevel {
			get {
				return GetFontHintLevel ();
			}
			set {
				SetFontHintLevel (value);
			}
		}

		/// <summary>
		/// Get the font subpixel threshold. Below this size, if the hint level is LIGHT or NONE, fonts will use subpixel positioning plus oversampling for higher-quality rendering. Has no effect at hint level NORMAL.
		/// Or
		/// Set the font subpixel threshold. Below this size, if the hint level is LIGHT or NONE, fonts will use subpixel positioning plus oversampling for higher-quality rendering. Has no effect at hint level NORMAL.
		/// </summary>
		public float FontSubpixelThreshold {
			get {
				return GetFontSubpixelThreshold ();
			}
			set {
				SetFontSubpixelThreshold (value);
			}
		}

		/// <summary>
		/// Get the oversampling (horizonal stretching) used to improve subpixel font rendering. Only affects fonts smaller than the subpixel limit.
		/// Or
		/// Set the oversampling (horizonal stretching) used to improve subpixel font rendering. Only affects fonts smaller than the subpixel limit.
		/// </summary>
		public int FontOversampling {
			get {
				return GetFontOversampling ();
			}
			set {
				SetFontOversampling (value);
			}
		}

		/// <summary>
		/// Return current UI scale.
		/// Or
		/// Set %UI scale. 1.0 is default (pixel perfect). Resize the root element to match.
		/// </summary>
		public float Scale {
			get {
				return GetScale ();
			}
			set {
				SetScale (value);
			}
		}

		/// <summary>
		/// Return root element custom size. Returns 0,0 when custom size is not being used and automatic resizing according to window size is in use instead (default.)
		/// Or
		/// Set custom size of the root element. This disables automatic resizing of the root element according to window size. Set custom size 0,0 to return to automatic resizing.
		/// </summary>
		public Urho.IntVector2 CustomSize {
			get {
				return GetCustomSize ();
			}
			set {
				SetCustomSize (value);
			}
		}

		/// <summary>
		/// Return root UI element.
		/// </summary>
		public UIElement Root {
			get {
				return GetRoot ();
			}
		}

		/// <summary>
		/// Return root modal element.
		/// </summary>
		public UIElement RootModalElement {
			get {
				return GetRootModalElement ();
			}
		}

		/// <summary>
		/// Return cursor position.
		/// </summary>
		public Urho.IntVector2 CursorPosition {
			get {
				return GetCursorPosition ();
			}
		}

		/// <summary>
		/// Return focused element.
		/// </summary>
		public UIElement FocusElement {
			get {
				return GetFocusElement ();
			}
		}

		/// <summary>
		/// Return topmost enabled root-level non-modal element.
		/// </summary>
		public UIElement FrontElement {
			get {
				return GetFrontElement ();
			}
		}

		/// <summary>
		/// Return the number of currently dragged elements.
		/// </summary>
		public uint NumDragElements {
			get {
				return GetNumDragElements ();
			}
		}

		/// <summary>
		/// Return whether a drag is in progress.
		/// </summary>
		public bool Dragging {
			get {
				return IsDragging ();
			}
		}
	}
}
