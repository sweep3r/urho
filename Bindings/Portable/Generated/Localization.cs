// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// Localization.cs
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

namespace Urho.Resources
{
	/// <summary>
	/// %Localization subsystem. Stores all the strings in all languages.
	/// </summary>
	public unsafe partial class Localization : UrhoObject
	{
		unsafe partial void OnLocalizationCreated ();

		[Preserve]
		public Localization (IntPtr handle) : base (handle)
		{
			OnLocalizationCreated ();
		}

		[Preserve]
		protected Localization (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnLocalizationCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Localization_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Localization_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Localization_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Localization_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Localization_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Localization));
			return new StringHash (Localization_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Localization_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Localization));
			return Marshal.PtrToStringAnsi (Localization_GetTypeNameStatic ());
		}

		[Preserve]
		public Localization () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Localization_Localization (IntPtr context);

		[Preserve]
		public Localization (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Localization));
			handle = Localization_Localization ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnLocalizationCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Localization_GetNumLanguages (IntPtr handle);

		/// <summary>
		/// Return the number of languages.
		/// </summary>
		private int GetNumLanguages ()
		{
			Runtime.ValidateRefCounted (this);
			return Localization_GetNumLanguages (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Localization_GetLanguageIndex (IntPtr handle);

		/// <summary>
		/// Return the index number of current language. The index is determined by the order of loading.
		/// </summary>
		private int GetLanguageIndex ()
		{
			Runtime.ValidateRefCounted (this);
			return Localization_GetLanguageIndex (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Localization_GetLanguageIndex0 (IntPtr handle, string language);

		/// <summary>
		/// Return the index number of language. The index is determined by the order of loading.
		/// </summary>
		public int GetLanguageIndex (string language)
		{
			Runtime.ValidateRefCounted (this);
			return Localization_GetLanguageIndex0 (handle, language);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Localization_GetLanguage (IntPtr handle);

		/// <summary>
		/// Return the name of current language.
		/// </summary>
		private string GetLanguage ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Localization_GetLanguage (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Localization_GetLanguage1 (IntPtr handle, int index);

		/// <summary>
		/// Return the name of language.
		/// </summary>
		public string GetLanguage (int index)
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Localization_GetLanguage1 (handle, index));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Localization_SetLanguage (IntPtr handle, int index);

		/// <summary>
		/// Set current language.
		/// </summary>
		public void SetLanguage (int index)
		{
			Runtime.ValidateRefCounted (this);
			Localization_SetLanguage (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Localization_SetLanguage2 (IntPtr handle, string language);

		/// <summary>
		/// Set current language.
		/// </summary>
		public void SetLanguage (string language)
		{
			Runtime.ValidateRefCounted (this);
			Localization_SetLanguage2 (handle, language);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Localization_Get (IntPtr handle, string id);

		/// <summary>
		/// Return a string in the current language. Returns String::EMPTY if id is empty. Returns id if translation is not found and logs a warning.
		/// </summary>
		public string Get (string id)
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Localization_Get (handle, id));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Localization_Reset (IntPtr handle);

		/// <summary>
		/// Clear all loaded strings.
		/// </summary>
		public void Reset ()
		{
			Runtime.ValidateRefCounted (this);
			Localization_Reset (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Localization_LoadJSONFile (IntPtr handle, string name, string language);

		/// <summary>
		/// Load strings from JSONFile. The file should be UTF8 without BOM.
		/// </summary>
		public void LoadJsonFile (string name, string language = "")
		{
			Runtime.ValidateRefCounted (this);
			Localization_LoadJSONFile (handle, name, language);
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
		/// Return the number of languages.
		/// </summary>
		public int NumLanguages {
			get {
				return GetNumLanguages ();
			}
		}

		/// <summary>
		/// Return the index number of current language. The index is determined by the order of loading.
		/// </summary>
		public int LanguageIndex {
			get {
				return GetLanguageIndex ();
			}
		}

		/// <summary>
		/// Return the name of current language.
		/// </summary>
		public string Language {
			get {
				return GetLanguage ();
			}
		}
	}
}
