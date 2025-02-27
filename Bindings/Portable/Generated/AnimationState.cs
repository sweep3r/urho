// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// AnimationState.cs
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
	/// %Animation instance.
	/// </summary>
	public unsafe partial class AnimationState : RefCounted
	{
		unsafe partial void OnAnimationStateCreated ();

		[Preserve]
		public AnimationState (IntPtr handle) : base (handle)
		{
			OnAnimationStateCreated ();
		}

		[Preserve]
		protected AnimationState (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnAnimationStateCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationState_AnimationState (IntPtr model, IntPtr animation);

		[Preserve]
		public AnimationState (AnimatedModel model, Animation animation) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(AnimationState));
			handle = AnimationState_AnimationState ((object)model == null ? IntPtr.Zero : model.Handle, (object)animation == null ? IntPtr.Zero : animation.Handle);
			Runtime.RegisterObject (this);
			OnAnimationStateCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationState_AnimationState0 (IntPtr node, IntPtr animation);

		[Preserve]
		public AnimationState (Node node, Animation animation) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(AnimationState));
			handle = AnimationState_AnimationState0 ((object)node == null ? IntPtr.Zero : node.Handle, (object)animation == null ? IntPtr.Zero : animation.Handle);
			Runtime.RegisterObject (this);
			OnAnimationStateCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_SetStartBone (IntPtr handle, Bone* startBone);

		/// <summary>
		/// Set start bone. Not supported in node animation mode. Resets any assigned per-bone weights.
		/// </summary>
		private void SetStartBone (Bone* startBone)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_SetStartBone (handle, startBone);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_SetLooped (IntPtr handle, bool looped);

		/// <summary>
		/// Set looping enabled/disabled.
		/// </summary>
		private void SetLooped (bool looped)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_SetLooped (handle, looped);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_SetWeight (IntPtr handle, float weight);

		/// <summary>
		/// Set blending weight.
		/// </summary>
		private void SetWeight (float weight)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_SetWeight (handle, weight);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_SetBlendMode (IntPtr handle, AnimationBlendMode mode);

		/// <summary>
		/// Set blending mode.
		/// </summary>
		private void SetBlendMode (AnimationBlendMode mode)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_SetBlendMode (handle, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_SetTime (IntPtr handle, float time);

		/// <summary>
		/// Set time position. Does not fire animation triggers.
		/// </summary>
		private void SetTime (float time)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_SetTime (handle, time);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_SetBoneWeight (IntPtr handle, uint index, float weight, bool recursive);

		/// <summary>
		/// Set per-bone blending weight by track index. Default is 1.0 (full), is multiplied  with the state's blending weight when applying the animation. Optionally recurses to child bones.
		/// </summary>
		public void SetBoneWeight (uint index, float weight, bool recursive = false)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_SetBoneWeight (handle, index, weight, recursive);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_SetBoneWeight1 (IntPtr handle, string name, float weight, bool recursive);

		/// <summary>
		/// Set per-bone blending weight by name.
		/// </summary>
		public void SetBoneWeight (string name, float weight, bool recursive = false)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_SetBoneWeight1 (handle, name, weight, recursive);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_SetBoneWeight2 (IntPtr handle, int nameHash, float weight, bool recursive);

		/// <summary>
		/// Set per-bone blending weight by name hash.
		/// </summary>
		public void SetBoneWeight (StringHash nameHash, float weight, bool recursive = false)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_SetBoneWeight2 (handle, nameHash.Code, weight, recursive);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_AddWeight (IntPtr handle, float delta);

		/// <summary>
		/// Modify blending weight.
		/// </summary>
		public void AddWeight (float delta)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_AddWeight (handle, delta);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_AddTime (IntPtr handle, float delta);

		/// <summary>
		/// Modify time position. %Animation triggers will be fired.
		/// </summary>
		public void AddTime (float delta)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_AddTime (handle, delta);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_SetLayer (IntPtr handle, byte layer);

		/// <summary>
		/// Set blending layer.
		/// </summary>
		private void SetLayer (byte layer)
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_SetLayer (handle, layer);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationState_GetAnimation (IntPtr handle);

		/// <summary>
		/// Return animation.
		/// </summary>
		private Animation GetAnimation ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Animation> (AnimationState_GetAnimation (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationState_GetModel (IntPtr handle);

		/// <summary>
		/// Return animated model this state belongs to (model mode.)
		/// </summary>
		private AnimatedModel GetModel ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<AnimatedModel> (AnimationState_GetModel (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimationState_GetNode (IntPtr handle);

		/// <summary>
		/// Return root scene node this state controls (node hierarchy mode.)
		/// </summary>
		private Node GetNode ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Node> (AnimationState_GetNode (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Bone* AnimationState_GetStartBone (IntPtr handle);

		/// <summary>
		/// Return start bone.
		/// </summary>
		private Bone* GetStartBone ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetStartBone (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationState_GetBoneWeight (IntPtr handle, uint index);

		/// <summary>
		/// Return per-bone blending weight by track index.
		/// </summary>
		public float GetBoneWeight (uint index)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetBoneWeight (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationState_GetBoneWeight3 (IntPtr handle, string name);

		/// <summary>
		/// Return per-bone blending weight by name.
		/// </summary>
		public float GetBoneWeight (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetBoneWeight3 (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationState_GetBoneWeight4 (IntPtr handle, int nameHash);

		/// <summary>
		/// Return per-bone blending weight by name.
		/// </summary>
		public float GetBoneWeight (StringHash nameHash)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetBoneWeight4 (handle, nameHash.Code);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint AnimationState_GetTrackIndex (IntPtr handle, IntPtr node);

		/// <summary>
		/// Return track index with matching bone node, or M_MAX_UNSIGNED if not found.
		/// </summary>
		public uint GetTrackIndex (Node node)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetTrackIndex (handle, (object)node == null ? IntPtr.Zero : node.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint AnimationState_GetTrackIndex5 (IntPtr handle, string name);

		/// <summary>
		/// Return track index by bone name, or M_MAX_UNSIGNED if not found.
		/// </summary>
		public uint GetTrackIndex (string name)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetTrackIndex5 (handle, name);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint AnimationState_GetTrackIndex6 (IntPtr handle, int nameHash);

		/// <summary>
		/// Return track index by bone name hash, or M_MAX_UNSIGNED if not found.
		/// </summary>
		public uint GetTrackIndex (StringHash nameHash)
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetTrackIndex6 (handle, nameHash.Code);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationState_IsEnabled (IntPtr handle);

		/// <summary>
		/// Return whether weight is nonzero.
		/// </summary>
		private bool IsEnabled ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_IsEnabled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool AnimationState_IsLooped (IntPtr handle);

		/// <summary>
		/// Return whether looped.
		/// </summary>
		private bool IsLooped ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_IsLooped (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationState_GetWeight (IntPtr handle);

		/// <summary>
		/// Return blending weight.
		/// </summary>
		private float GetWeight ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetWeight (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern AnimationBlendMode AnimationState_GetBlendMode (IntPtr handle);

		/// <summary>
		/// Return blending mode.
		/// </summary>
		private AnimationBlendMode GetBlendMode ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetBlendMode (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationState_GetTime (IntPtr handle);

		/// <summary>
		/// Return time position.
		/// </summary>
		private float GetTime ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetTime (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimationState_GetLength (IntPtr handle);

		/// <summary>
		/// Return animation length.
		/// </summary>
		private float GetLength ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetLength (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern byte AnimationState_GetLayer (IntPtr handle);

		/// <summary>
		/// Return blending layer.
		/// </summary>
		private byte GetLayer ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimationState_GetLayer (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimationState_Apply (IntPtr handle);

		/// <summary>
		/// Apply the animation at the current time position.
		/// </summary>
		public void Apply ()
		{
			Runtime.ValidateRefCounted (this);
			AnimationState_Apply (handle);
		}

		/// <summary>
		/// Return start bone.
		/// Or
		/// Set start bone. Not supported in node animation mode. Resets any assigned per-bone weights.
		/// </summary>
		public Bone* StartBone {
			get {
				return GetStartBone ();
			}
			set {
				SetStartBone (value);
			}
		}

		/// <summary>
		/// Return whether looped.
		/// Or
		/// Set looping enabled/disabled.
		/// </summary>
		public bool Looped {
			get {
				return IsLooped ();
			}
			set {
				SetLooped (value);
			}
		}

		/// <summary>
		/// Return blending weight.
		/// Or
		/// Set blending weight.
		/// </summary>
		public float Weight {
			get {
				return GetWeight ();
			}
			set {
				SetWeight (value);
			}
		}

		/// <summary>
		/// Return blending mode.
		/// Or
		/// Set blending mode.
		/// </summary>
		public AnimationBlendMode BlendMode {
			get {
				return GetBlendMode ();
			}
			set {
				SetBlendMode (value);
			}
		}

		/// <summary>
		/// Return time position.
		/// Or
		/// Set time position. Does not fire animation triggers.
		/// </summary>
		public float Time {
			get {
				return GetTime ();
			}
			set {
				SetTime (value);
			}
		}

		/// <summary>
		/// Return blending layer.
		/// Or
		/// Set blending layer.
		/// </summary>
		public byte Layer {
			get {
				return GetLayer ();
			}
			set {
				SetLayer (value);
			}
		}

		/// <summary>
		/// Return animation.
		/// </summary>
		public Animation Animation {
			get {
				return GetAnimation ();
			}
		}

		/// <summary>
		/// Return animated model this state belongs to (model mode.)
		/// </summary>
		public AnimatedModel Model {
			get {
				return GetModel ();
			}
		}

		/// <summary>
		/// Return root scene node this state controls (node hierarchy mode.)
		/// </summary>
		public Node Node {
			get {
				return GetNode ();
			}
		}

		/// <summary>
		/// Return whether weight is nonzero.
		/// </summary>
		public bool Enabled {
			get {
				return IsEnabled ();
			}
		}

		/// <summary>
		/// Return animation length.
		/// </summary>
		public float Length {
			get {
				return GetLength ();
			}
		}
	}
}
