// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// UpdateEvent.cs
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
	/// Bitmask for not using any events.
	/// </summary>
	public enum UpdateEvent
	{
		NoEvent = 0,
		Update = 1,
		Postupdate = 2,
		Fixedupdate = 4,
		Fixedpostupdate = 8
	}
}
