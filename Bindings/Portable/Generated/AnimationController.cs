// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// AnimationController.cs
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
	/// %Component that drives an AnimatedModel's animations.
	/// </summary>
	public unsafe partial class AnimationController : Component
	{
		unsafe partial void OnAnimationControllerCreated ();

		[Preserve]
		public AnimationController (IntPtr handle) : base (handle)
		{
			OnAnimationControllerCreated ();
		}

		[Preserve]
		protected AnimationController (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnAnimationControllerCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int AnimationController_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (AnimationController_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationController_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (AnimationController_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int AnimationController_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(AnimationController));
			return new StringHash (AnimationController_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationController_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(AnimationController));
			return Marshal.PtrToStringAnsi (AnimationController_GetTypeNameStatic ());
		}

		[Preserve]
		public AnimationController () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationController_AnimationController (IntPtr context);

		[Preserve]
		public AnimationController (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(AnimationController));
			handle = AnimationController_AnimationController ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnAnimationControllerCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationController_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(AnimationController));
			AnimationController_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationController_OnSetEnabled (IntPtr handle);

		/// <summary>
		/// Handle enabled/disabled state change.
		/// </summary>
		public override void OnSetEnabled ()
		{
			Runtime.ValidateRefCounted (this);
			AnimationController_OnSetEnabled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationController_Update (IntPtr handle, float timeStep);

		/// <summary>
		/// Update the animations. Is called from HandleScenePostUpdate().
		/// </summary>
		public void Update (float timeStep)
		{
			Runtime.ValidateRefCounted (this);
			AnimationController_Update (handle, timeStep);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_Play (IntPtr handle, string name, byte layer, bool looped, float fadeInTime);

		/// <summary>
		/// Play an animation and set full target weight. Name must be the full resource name. Return true on success.
		/// </summary>
		public bool Play (string name, byte layer, bool looped, float fadeInTime = 0f)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_Play (handle, name, layer, looped, fadeInTime);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_PlayExclusive (IntPtr handle, string name, byte layer, bool looped, float fadeTime);

		/// <summary>
		/// Play an animation, set full target weight and fade out all other animations on the same layer. Name must be the full resource name. Return true on success.
		/// </summary>
		public bool PlayExclusive (string name, byte layer, bool looped, float fadeTime = 0f)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_PlayExclusive (handle, name, layer, looped, fadeTime);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_Stop (IntPtr handle, string name, float fadeOutTime);

		/// <summary>
		/// Stop an animation. Zero fadetime is instant. Return true on success.
		/// </summary>
		public bool Stop (string name, float fadeOutTime = 0f)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_Stop (handle, name, fadeOutTime);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationController_StopLayer (IntPtr handle, byte layer, float fadeOutTime);

		/// <summary>
		/// Stop all animations on a specific layer. Zero fadetime is instant.
		/// </summary>
		public void StopLayer (byte layer, float fadeOutTime = 0f)
		{
			Runtime.ValidateRefCounted (this);
			AnimationController_StopLayer (handle, layer, fadeOutTime);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationController_StopAll (IntPtr handle, float fadeOutTime);

		/// <summary>
		/// Stop all animations. Zero fadetime is instant.
		/// </summary>
		public void StopAll (float fadeOutTime = 0f)
		{
			Runtime.ValidateRefCounted (this);
			AnimationController_StopAll (handle, fadeOutTime);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_Fade (IntPtr handle, string name, float targetWeight, float fadeTime);

		/// <summary>
		/// Fade animation to target weight. Return true on success.
		/// </summary>
		public bool Fade (string name, float targetWeight, float fadeTime)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_Fade (handle, name, targetWeight, fadeTime);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_FadeOthers (IntPtr handle, string name, float targetWeight, float fadeTime);

		/// <summary>
		/// Fade other animations on the same layer to target weight. Return true on success.
		/// </summary>
		public bool FadeOthers (string name, float targetWeight, float fadeTime)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_FadeOthers (handle, name, targetWeight, fadeTime);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_SetLayer (IntPtr handle, string name, byte layer);

		/// <summary>
		/// Set animation blending layer priority. Return true on success.
		/// </summary>
		public bool SetLayer (string name, byte layer)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_SetLayer (handle, name, layer);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_SetStartBone (IntPtr handle, string name, string startBoneName);

		/// <summary>
		/// Set animation start bone. Return true on success.
		/// </summary>
		public bool SetStartBone (string name, string startBoneName)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_SetStartBone (handle, name, startBoneName);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_SetTime (IntPtr handle, string name, float time);

		/// <summary>
		/// Set animation time position. Return true on success.
		/// </summary>
		public bool SetTime (string name, float time)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_SetTime (handle, name, time);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_SetWeight (IntPtr handle, string name, float weight);

		/// <summary>
		/// Set animation weight. Return true on success.
		/// </summary>
		public bool SetWeight (string name, float weight)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_SetWeight (handle, name, weight);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_SetLooped (IntPtr handle, string name, bool enable);

		/// <summary>
		/// Set animation looping. Return true on success.
		/// </summary>
		public bool SetLooped (string name, bool enable)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_SetLooped (handle, name, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_SetSpeed (IntPtr handle, string name, float speed);

		/// <summary>
		/// Set animation speed. Return true on success.
		/// </summary>
		public bool SetSpeed (string name, float speed)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_SetSpeed (handle, name, speed);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_SetAutoFade (IntPtr handle, string name, float fadeOutTime);

		/// <summary>
		/// Set animation autofade at end (non-looped animations only.) Zero time disables. Return true on success.
		/// </summary>
		public bool SetAutoFade (string name, float fadeOutTime)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_SetAutoFade (handle, name, fadeOutTime);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_SetRemoveOnCompletion (IntPtr handle, string name, bool removeOnCompletion);

		/// <summary>
		/// Set whether an animation auto-removes on completion.
		/// </summary>
		public bool SetRemoveOnCompletion (string name, bool removeOnCompletion)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_SetRemoveOnCompletion (handle, name, removeOnCompletion);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_SetBlendMode (IntPtr handle, string name, AnimationBlendMode mode);

		/// <summary>
		/// Set animation blending mode. Return true on success.
		/// </summary>
		public bool SetBlendMode (string name, AnimationBlendMode mode)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_SetBlendMode (handle, name, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_IsPlaying (IntPtr handle, string name);

		/// <summary>
		/// Return whether an animation is active. Note that non-looping animations that are being clamped at the end also return true.
		/// </summary>
		public bool IsPlaying (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_IsPlaying (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_IsPlaying0 (IntPtr handle, byte layer);

		/// <summary>
		/// Return whether any animation is active on a specific layer.
		/// </summary>
		public bool IsPlaying (byte layer)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_IsPlaying0 (handle, layer);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_IsFadingIn (IntPtr handle, string name);

		/// <summary>
		/// Return whether an animation is fading in.
		/// </summary>
		public bool IsFadingIn (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_IsFadingIn (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_IsFadingOut (IntPtr handle, string name);

		/// <summary>
		/// Return whether an animation is fading out.
		/// </summary>
		public bool IsFadingOut (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_IsFadingOut (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_IsAtEnd (IntPtr handle, string name);

		/// <summary>
		/// Return whether an animation is at its end. Will return false if the animation is not active at all.
		/// </summary>
		public bool IsAtEnd (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_IsAtEnd (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern byte AnimationController_GetLayer (IntPtr handle, string name);

		/// <summary>
		/// Return animation blending layer.
		/// </summary>
		public byte GetLayer (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetLayer (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Bone* AnimationController_GetStartBone (IntPtr handle, string name);

		/// <summary>
		/// Return animation start bone, or null if no such animation.
		/// </summary>
		public Bone* GetStartBone (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetStartBone (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationController_GetStartBoneName (IntPtr handle, string name);

		/// <summary>
		/// Return animation start bone name, or empty string if no such animation.
		/// </summary>
		public string GetStartBoneName (string name)
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (AnimationController_GetStartBoneName (handle, name));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationController_GetTime (IntPtr handle, string name);

		/// <summary>
		/// Return animation time position.
		/// </summary>
		public float GetTime (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetTime (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationController_GetWeight (IntPtr handle, string name);

		/// <summary>
		/// Return animation weight.
		/// </summary>
		public float GetWeight (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetWeight (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_IsLooped (IntPtr handle, string name);

		/// <summary>
		/// Return animation looping.
		/// </summary>
		public bool IsLooped (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_IsLooped (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern AnimationBlendMode AnimationController_GetBlendMode (IntPtr handle, string name);

		/// <summary>
		/// Return animation blending mode.
		/// </summary>
		public AnimationBlendMode GetBlendMode (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetBlendMode (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationController_GetLength (IntPtr handle, string name);

		/// <summary>
		/// Return animation length.
		/// </summary>
		public float GetLength (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetLength (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationController_GetSpeed (IntPtr handle, string name);

		/// <summary>
		/// Return animation speed.
		/// </summary>
		public float GetSpeed (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetSpeed (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationController_GetFadeTarget (IntPtr handle, string name);

		/// <summary>
		/// Return animation fade target weight.
		/// </summary>
		public float GetFadeTarget (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetFadeTarget (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationController_GetFadeTime (IntPtr handle, string name);

		/// <summary>
		/// Return animation fade time.
		/// </summary>
		public float GetFadeTime (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetFadeTime (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationController_GetAutoFade (IntPtr handle, string name);

		/// <summary>
		/// Return animation autofade time.
		/// </summary>
		public float GetAutoFade (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetAutoFade (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationController_GetRemoveOnCompletion (IntPtr handle, string name);

		/// <summary>
		/// Return whether animation auto-removes on completion, or false if no such animation.
		/// </summary>
		public bool GetRemoveOnCompletion (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationController_GetRemoveOnCompletion (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationController_GetAnimationState (IntPtr handle, string name);

		/// <summary>
		/// Find an animation state by animation name.
		/// </summary>
		public AnimationState GetAnimationState (string name)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupRefCounted<AnimationState> (AnimationController_GetAnimationState (handle, name));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationController_GetAnimationState1 (IntPtr handle, int nameHash);

		/// <summary>
		/// Find an animation state by animation name hash.
		/// </summary>
		public AnimationState GetAnimationState (StringHash nameHash)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupRefCounted<AnimationState> (AnimationController_GetAnimationState1 (handle, nameHash.Code));
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
	}
}
