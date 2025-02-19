// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// LineEdit.cs
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
	/// Single-line text editor %UI element.
	/// </summary>
	public unsafe partial class LineEdit : BorderImage
	{
		unsafe partial void OnLineEditCreated ();

		[Preserve]
		public LineEdit (IntPtr handle) : base (handle)
		{
			OnLineEditCreated ();
		}

		[Preserve]
		protected LineEdit (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnLineEditCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int LineEdit_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (LineEdit_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr LineEdit_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (LineEdit_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int LineEdit_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(LineEdit));
			return new StringHash (LineEdit_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr LineEdit_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(LineEdit));
			return Marshal.PtrToStringAnsi (LineEdit_GetTypeNameStatic ());
		}

		[Preserve]
		public LineEdit () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr LineEdit_LineEdit (IntPtr context);

		[Preserve]
		public LineEdit (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(LineEdit));
			handle = LineEdit_LineEdit ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnLineEditCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(LineEdit));
			LineEdit_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_ApplyAttributes (IntPtr handle);

		/// <summary>
		/// Apply attribute changes that can not be applied immediately.
		/// </summary>
		public override void ApplyAttributes ()
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_ApplyAttributes (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_Update (IntPtr handle, float timeStep);

		/// <summary>
		/// Perform UI element update.
		/// </summary>
		public override void Update (float timeStep)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_Update (handle, timeStep);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_OnClickBegin (IntPtr handle, ref Urho.IntVector2 position, ref Urho.IntVector2 screenPosition, int button, int buttons, int qualifiers, IntPtr cursor);

		/// <summary>
		/// React to mouse click begin.
		/// </summary>
		public override void OnClickBegin (Urho.IntVector2 position, Urho.IntVector2 screenPosition, int button, int buttons, int qualifiers, Cursor cursor)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_OnClickBegin (handle, ref position, ref screenPosition, button, buttons, qualifiers, (object)cursor == null ? IntPtr.Zero : cursor.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_OnDoubleClick (IntPtr handle, ref Urho.IntVector2 position, ref Urho.IntVector2 screenPosition, int button, int buttons, int qualifiers, IntPtr cursor);

		/// <summary>
		/// React to mouse doubleclick.
		/// </summary>
		public override void OnDoubleClick (Urho.IntVector2 position, Urho.IntVector2 screenPosition, int button, int buttons, int qualifiers, Cursor cursor)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_OnDoubleClick (handle, ref position, ref screenPosition, button, buttons, qualifiers, (object)cursor == null ? IntPtr.Zero : cursor.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_OnTextInput (IntPtr handle, string text);

		/// <summary>
		/// React to text input event.
		/// </summary>
		public override void OnTextInput (string text)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_OnTextInput (handle, text);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_SetText (IntPtr handle, string text);

		/// <summary>
		/// Set text.
		/// </summary>
		private void SetText (string text)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_SetText (handle, text);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_SetCursorPosition (IntPtr handle, uint position);

		/// <summary>
		/// Set cursor position.
		/// </summary>
		private void SetCursorPosition (uint position)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_SetCursorPosition (handle, position);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_SetCursorBlinkRate (IntPtr handle, float rate);

		/// <summary>
		/// Set cursor blink rate. 0 disables blinking.
		/// </summary>
		private void SetCursorBlinkRate (float rate)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_SetCursorBlinkRate (handle, rate);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_SetMaxLength (IntPtr handle, uint length);

		/// <summary>
		/// Set maximum text length. 0 for unlimited.
		/// </summary>
		private void SetMaxLength (uint length)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_SetMaxLength (handle, length);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_SetEchoCharacter (IntPtr handle, uint c);

		/// <summary>
		/// Set echo character for password entry and such. 0 (default) shows the actual text.
		/// </summary>
		private void SetEchoCharacter (uint c)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_SetEchoCharacter (handle, c);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_SetCursorMovable (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether can move cursor with arrows or mouse, default true.
		/// </summary>
		private void SetCursorMovable (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_SetCursorMovable (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_SetTextSelectable (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether selections are allowed, default true.
		/// </summary>
		private void SetTextSelectable (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_SetTextSelectable (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void LineEdit_SetTextCopyable (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether copy-paste operations are allowed, default true.
		/// </summary>
		private void SetTextCopyable (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			LineEdit_SetTextCopyable (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr LineEdit_GetText (IntPtr handle);

		/// <summary>
		/// Return text.
		/// </summary>
		private string GetText ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (LineEdit_GetText (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint LineEdit_GetCursorPosition (IntPtr handle);

		/// <summary>
		/// Return cursor position.
		/// </summary>
		private uint GetCursorPosition ()
		{
			Runtime.ValidateRefCounted (this);
			return LineEdit_GetCursorPosition (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float LineEdit_GetCursorBlinkRate (IntPtr handle);

		/// <summary>
		/// Return cursor blink rate.
		/// </summary>
		private float GetCursorBlinkRate ()
		{
			Runtime.ValidateRefCounted (this);
			return LineEdit_GetCursorBlinkRate (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint LineEdit_GetMaxLength (IntPtr handle);

		/// <summary>
		/// Return maximum text length.
		/// </summary>
		private uint GetMaxLength ()
		{
			Runtime.ValidateRefCounted (this);
			return LineEdit_GetMaxLength (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint LineEdit_GetEchoCharacter (IntPtr handle);

		/// <summary>
		/// Return echo character.
		/// </summary>
		private uint GetEchoCharacter ()
		{
			Runtime.ValidateRefCounted (this);
			return LineEdit_GetEchoCharacter (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool LineEdit_IsCursorMovable (IntPtr handle);

		/// <summary>
		/// Return whether can move cursor with arrows or mouse.
		/// </summary>
		private bool IsCursorMovable ()
		{
			Runtime.ValidateRefCounted (this);
			return LineEdit_IsCursorMovable (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool LineEdit_IsTextSelectable (IntPtr handle);

		/// <summary>
		/// Return whether selections are allowed.
		/// </summary>
		private bool IsTextSelectable ()
		{
			Runtime.ValidateRefCounted (this);
			return LineEdit_IsTextSelectable (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool LineEdit_IsTextCopyable (IntPtr handle);

		/// <summary>
		/// Return whether copy-paste operations are allowed.
		/// </summary>
		private bool IsTextCopyable ()
		{
			Runtime.ValidateRefCounted (this);
			return LineEdit_IsTextCopyable (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr LineEdit_GetTextElement (IntPtr handle);

		/// <summary>
		/// Return text element.
		/// </summary>
		private Text GetTextElement ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Text> (LineEdit_GetTextElement (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr LineEdit_GetCursor (IntPtr handle);

		/// <summary>
		/// Return cursor element.
		/// </summary>
		private BorderImage GetCursor ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<BorderImage> (LineEdit_GetCursor (handle));
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
		/// Return text.
		/// Or
		/// Set text.
		/// </summary>
		public string Text {
			get {
				return GetText ();
			}
			set {
				SetText (value);
			}
		}

		/// <summary>
		/// Return cursor position.
		/// Or
		/// Set cursor position.
		/// </summary>
		public uint CursorPosition {
			get {
				return GetCursorPosition ();
			}
			set {
				SetCursorPosition (value);
			}
		}

		/// <summary>
		/// Return cursor blink rate.
		/// Or
		/// Set cursor blink rate. 0 disables blinking.
		/// </summary>
		public float CursorBlinkRate {
			get {
				return GetCursorBlinkRate ();
			}
			set {
				SetCursorBlinkRate (value);
			}
		}

		/// <summary>
		/// Return maximum text length.
		/// Or
		/// Set maximum text length. 0 for unlimited.
		/// </summary>
		public uint MaxLength {
			get {
				return GetMaxLength ();
			}
			set {
				SetMaxLength (value);
			}
		}

		/// <summary>
		/// Return echo character.
		/// Or
		/// Set echo character for password entry and such. 0 (default) shows the actual text.
		/// </summary>
		public uint EchoCharacter {
			get {
				return GetEchoCharacter ();
			}
			set {
				SetEchoCharacter (value);
			}
		}

		/// <summary>
		/// Return whether can move cursor with arrows or mouse.
		/// Or
		/// Set whether can move cursor with arrows or mouse, default true.
		/// </summary>
		public bool CursorMovable {
			get {
				return IsCursorMovable ();
			}
			set {
				SetCursorMovable (value);
			}
		}

		/// <summary>
		/// Return whether selections are allowed.
		/// Or
		/// Set whether selections are allowed, default true.
		/// </summary>
		public bool TextSelectable {
			get {
				return IsTextSelectable ();
			}
			set {
				SetTextSelectable (value);
			}
		}

		/// <summary>
		/// Return whether copy-paste operations are allowed.
		/// Or
		/// Set whether copy-paste operations are allowed, default true.
		/// </summary>
		public bool TextCopyable {
			get {
				return IsTextCopyable ();
			}
			set {
				SetTextCopyable (value);
			}
		}

		/// <summary>
		/// Return text element.
		/// </summary>
		public Text TextElement {
			get {
				return GetTextElement ();
			}
		}

		/// <summary>
		/// Return cursor element.
		/// </summary>
		public BorderImage Cursor {
			get {
				return GetCursor ();
			}
		}
	}
}
