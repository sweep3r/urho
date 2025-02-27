#include "AllUrho.h"
#include "interop.h"

using namespace Urho3D;

extern "C" 

{
DllExport void *
RefCount_RefCount ()
{
	return new RefCount();
}


DllExport void *
RefCounted_RefCounted ()
{
	return new RefCounted();
}


DllExport void
RefCounted_AddRef (Urho3D::RefCounted *_target)
{
	_target->AddRef ();
}


DllExport void
RefCounted_ReleaseRef (Urho3D::RefCounted *_target)
{
	_target->ReleaseRef ();
}


DllExport int
RefCounted_Refs (Urho3D::RefCounted *_target)
{
	return _target->Refs ();
}


DllExport int
RefCounted_WeakRefs (Urho3D::RefCounted *_target)
{
	return _target->WeakRefs ();
}


DllExport Urho3D::RefCount *
RefCounted_RefCountPtr (Urho3D::RefCounted *_target)
{
	return _target->RefCountPtr ();
}


DllExport void *
UrhoString_String ()
{
	return new String();
}


DllExport void *
UrhoString_String0 (const char * str)
{
	return new String(Urho3D::String(str));
}


DllExport void *
UrhoString_String1 (int value)
{
	return new String(value);
}


DllExport void *
UrhoString_String2 (short value)
{
	return new String(value);
}


DllExport void *
UrhoString_String3 (long value)
{
	return new String(value);
}


DllExport void *
UrhoString_String4 (long long value)
{
	return new String(value);
}


DllExport void *
UrhoString_String5 (unsigned int value)
{
	return new String(value);
}


DllExport void *
UrhoString_String6 (unsigned short value)
{
	return new String(value);
}


DllExport void *
UrhoString_String7 (unsigned long value)
{
	return new String(value);
}


DllExport void *
UrhoString_String8 (unsigned long long value)
{
	return new String(value);
}


DllExport void *
UrhoString_String9 (float value)
{
	return new String(value);
}


DllExport void *
UrhoString_String10 (double value)
{
	return new String(value);
}


DllExport void *
UrhoString_String11 (bool value)
{
	return new String(value);
}


DllExport void
UrhoString_Replace (Urho3D::String *_target, const char * replaceThis, const char * replaceWith, bool caseSensitive)
{
	_target->Replace (Urho3D::String(replaceThis), Urho3D::String(replaceWith), caseSensitive);
}


DllExport void
UrhoString_Replace12 (Urho3D::String *_target, unsigned int pos, unsigned int length, const char * replaceWith)
{
	_target->Replace (pos, length, Urho3D::String(replaceWith));
}


DllExport const char *
UrhoString_Replaced (Urho3D::String *_target, const char * replaceThis, const char * replaceWith, bool caseSensitive)
{
	return stringdup((_target->Replaced (Urho3D::String(replaceThis), Urho3D::String(replaceWith), caseSensitive)).CString ());
}


DllExport void
UrhoString_Insert (Urho3D::String *_target, unsigned int pos, const char * str)
{
	_target->Insert (pos, Urho3D::String(str));
}


DllExport void
UrhoString_Erase (Urho3D::String *_target, unsigned int pos, unsigned int length)
{
	_target->Erase (pos, length);
}


DllExport void
UrhoString_Resize (Urho3D::String *_target, unsigned int newLength)
{
	_target->Resize (newLength);
}


DllExport void
UrhoString_Reserve (Urho3D::String *_target, unsigned int newCapacity)
{
	_target->Reserve (newCapacity);
}


DllExport void
UrhoString_Compact (Urho3D::String *_target)
{
	_target->Compact ();
}


DllExport void
UrhoString_Clear (Urho3D::String *_target)
{
	_target->Clear ();
}


DllExport const char *
UrhoString_Substring (Urho3D::String *_target, unsigned int pos)
{
	return stringdup((_target->Substring (pos)).CString ());
}


DllExport const char *
UrhoString_Substring13 (Urho3D::String *_target, unsigned int pos, unsigned int length)
{
	return stringdup((_target->Substring (pos, length)).CString ());
}


DllExport const char *
UrhoString_Trimmed (Urho3D::String *_target)
{
	return stringdup((_target->Trimmed ()).CString ());
}


DllExport const char *
UrhoString_ToUpper (Urho3D::String *_target)
{
	return stringdup((_target->ToUpper ()).CString ());
}


DllExport const char *
UrhoString_ToLower (Urho3D::String *_target)
{
	return stringdup((_target->ToLower ()).CString ());
}


DllExport unsigned int
UrhoString_Find (Urho3D::String *_target, const char * str, unsigned int startPos, bool caseSensitive)
{
	return _target->Find (Urho3D::String(str), startPos, caseSensitive);
}


DllExport unsigned int
UrhoString_FindLast (Urho3D::String *_target, const char * str, unsigned int startPos, bool caseSensitive)
{
	return _target->FindLast (Urho3D::String(str), startPos, caseSensitive);
}


DllExport int
UrhoString_StartsWith (Urho3D::String *_target, const char * str, bool caseSensitive)
{
	return _target->StartsWith (Urho3D::String(str), caseSensitive);
}


DllExport int
UrhoString_EndsWith (Urho3D::String *_target, const char * str, bool caseSensitive)
{
	return _target->EndsWith (Urho3D::String(str), caseSensitive);
}


DllExport unsigned int
UrhoString_Length (Urho3D::String *_target)
{
	return _target->Length ();
}


DllExport unsigned int
UrhoString_Capacity (Urho3D::String *_target)
{
	return _target->Capacity ();
}


DllExport int
UrhoString_Empty (Urho3D::String *_target)
{
	return _target->Empty ();
}


DllExport int
UrhoString_Compare (Urho3D::String *_target, const char * str, bool caseSensitive)
{
	return _target->Compare (Urho3D::String(str), caseSensitive);
}


DllExport int
UrhoString_Contains (Urho3D::String *_target, const char * str, bool caseSensitive)
{
	return _target->Contains (Urho3D::String(str), caseSensitive);
}


DllExport unsigned int
UrhoString_LengthUTF8 (Urho3D::String *_target)
{
	return _target->LengthUTF8 ();
}


DllExport unsigned int
UrhoString_ByteOffsetUTF8 (Urho3D::String *_target, unsigned int index)
{
	return _target->ByteOffsetUTF8 (index);
}


DllExport unsigned int
UrhoString_AtUTF8 (Urho3D::String *_target, unsigned int index)
{
	return _target->AtUTF8 (index);
}


DllExport void
UrhoString_ReplaceUTF8 (Urho3D::String *_target, unsigned int index, unsigned int unicodeChar)
{
	_target->ReplaceUTF8 (index, unicodeChar);
}


DllExport const char *
UrhoString_SubstringUTF8 (Urho3D::String *_target, unsigned int pos)
{
	return stringdup((_target->SubstringUTF8 (pos)).CString ());
}


DllExport const char *
UrhoString_SubstringUTF814 (Urho3D::String *_target, unsigned int pos, unsigned int length)
{
	return stringdup((_target->SubstringUTF8 (pos, length)).CString ());
}


DllExport unsigned int
UrhoString_ToHash (Urho3D::String *_target)
{
	return _target->ToHash ();
}


// Urho3D::Variant overloads begin:
DllExport void
AttributeAccessor_Set_0 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const class Urho3D::Vector3 & src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_1 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const class Urho3D::IntRect & src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_2 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const class Urho3D::Color & src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_3 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const class Urho3D::Vector2 & src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_4 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const class Urho3D::Vector4 & src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_5 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const class Urho3D::IntVector2 & src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_6 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const class Urho3D::Quaternion & src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_7 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const class Urho3D::Matrix4 & src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_8 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const class Urho3D::Matrix3x4 & src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_9 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, int src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_10 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, float src)
{
	_target->Set (ptr, (src));
}

DllExport void
AttributeAccessor_Set_11 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, const char * src)
{
	_target->Set (ptr, Urho3D::String(src));
}

DllExport void
AttributeAccessor_Set_12 (Urho3D::AttributeAccessor *_target, Urho3D::Serializable * ptr, bool src)
{
	_target->Set (ptr, (src));
}

// Urho3D::Variant overloads end.
DllExport int
UrhoObject_GetType (Urho3D::Object *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
UrhoObject_GetTypeName (Urho3D::Object *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport const class Urho3D::TypeInfo *
UrhoObject_GetTypeInfo (Urho3D::Object *_target)
{
	return _target->GetTypeInfo ();
}


DllExport const class Urho3D::TypeInfo *
UrhoObject_GetTypeInfoStatic ()
{
	return Object::GetTypeInfoStatic ();
}


DllExport int
UrhoObject_IsInstanceOf (Urho3D::Object *_target, int type)
{
	return _target->IsInstanceOf (Urho3D::StringHash(type));
}


DllExport int
UrhoObject_IsInstanceOf0 (Urho3D::Object *_target, const class Urho3D::TypeInfo * typeInfo)
{
	return _target->IsInstanceOf (typeInfo);
}


DllExport void
UrhoObject_SubscribeToEvent (Urho3D::Object *_target, int eventType, Urho3D::EventHandler * handler)
{
	_target->SubscribeToEvent (Urho3D::StringHash(eventType), handler);
}


DllExport void
UrhoObject_SubscribeToEvent1 (Urho3D::Object *_target, Urho3D::Object * sender, int eventType, Urho3D::EventHandler * handler)
{
	_target->SubscribeToEvent (sender, Urho3D::StringHash(eventType), handler);
}


DllExport void
UrhoObject_UnsubscribeFromEvent (Urho3D::Object *_target, int eventType)
{
	_target->UnsubscribeFromEvent (Urho3D::StringHash(eventType));
}


DllExport void
UrhoObject_UnsubscribeFromEvent2 (Urho3D::Object *_target, Urho3D::Object * sender, int eventType)
{
	_target->UnsubscribeFromEvent (sender, Urho3D::StringHash(eventType));
}


DllExport void
UrhoObject_UnsubscribeFromEvents (Urho3D::Object *_target, Urho3D::Object * sender)
{
	_target->UnsubscribeFromEvents (sender);
}


DllExport void
UrhoObject_UnsubscribeFromAllEvents (Urho3D::Object *_target)
{
	_target->UnsubscribeFromAllEvents ();
}


DllExport void
UrhoObject_SendEvent (Urho3D::Object *_target, int eventType)
{
	_target->SendEvent (Urho3D::StringHash(eventType));
}


DllExport Urho3D::Context *
UrhoObject_GetContext (Urho3D::Object *_target)
{
	return _target->GetContext ();
}


// Urho3D::Variant overloads begin:
DllExport Interop::Vector3
UrhoObject_GetGlobalVar_0 (Urho3D::Object *_target, int key)
{
	return *((Interop::Vector3 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetVector3()));
}

DllExport Interop::IntRect
UrhoObject_GetGlobalVar_1 (Urho3D::Object *_target, int key)
{
	return *((Interop::IntRect *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetIntRect()));
}

DllExport Interop::Color
UrhoObject_GetGlobalVar_2 (Urho3D::Object *_target, int key)
{
	return *((Interop::Color *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetColor()));
}

DllExport Interop::Vector2
UrhoObject_GetGlobalVar_3 (Urho3D::Object *_target, int key)
{
	return *((Interop::Vector2 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetVector2()));
}

DllExport Interop::Vector4
UrhoObject_GetGlobalVar_4 (Urho3D::Object *_target, int key)
{
	return *((Interop::Vector4 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetVector4()));
}

DllExport Interop::IntVector2
UrhoObject_GetGlobalVar_5 (Urho3D::Object *_target, int key)
{
	return *((Interop::IntVector2 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetIntVector2()));
}

DllExport Interop::Quaternion
UrhoObject_GetGlobalVar_6 (Urho3D::Object *_target, int key)
{
	return *((Interop::Quaternion *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetQuaternion()));
}

DllExport Interop::Matrix4
UrhoObject_GetGlobalVar_7 (Urho3D::Object *_target, int key)
{
	return *((Interop::Matrix4 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetMatrix4()));
}

DllExport Interop::Matrix3x4
UrhoObject_GetGlobalVar_8 (Urho3D::Object *_target, int key)
{
	return *((Interop::Matrix3x4 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetMatrix3x4()));
}

DllExport int
UrhoObject_GetGlobalVar_9 (Urho3D::Object *_target, int key)
{
	return (_target->GetGlobalVar (Urho3D::StringHash(key)).GetInt());
}

DllExport float
UrhoObject_GetGlobalVar_10 (Urho3D::Object *_target, int key)
{
	return (_target->GetGlobalVar (Urho3D::StringHash(key)).GetFloat());
}

DllExport const char *
UrhoObject_GetGlobalVar_11 (Urho3D::Object *_target, int key)
{
	return stringdup(_target->GetGlobalVar (Urho3D::StringHash(key)).GetString().CString());
}

DllExport bool
UrhoObject_GetGlobalVar_12 (Urho3D::Object *_target, int key)
{
	return (_target->GetGlobalVar (Urho3D::StringHash(key)).GetBool());
}

// Urho3D::Variant overloads end.
// Urho3D::Variant overloads begin:
DllExport void
UrhoObject_SetGlobalVar_0 (Urho3D::Object *_target, int key, const class Urho3D::Vector3 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_1 (Urho3D::Object *_target, int key, const class Urho3D::IntRect & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_2 (Urho3D::Object *_target, int key, const class Urho3D::Color & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_3 (Urho3D::Object *_target, int key, const class Urho3D::Vector2 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_4 (Urho3D::Object *_target, int key, const class Urho3D::Vector4 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_5 (Urho3D::Object *_target, int key, const class Urho3D::IntVector2 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_6 (Urho3D::Object *_target, int key, const class Urho3D::Quaternion & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_7 (Urho3D::Object *_target, int key, const class Urho3D::Matrix4 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_8 (Urho3D::Object *_target, int key, const class Urho3D::Matrix3x4 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_9 (Urho3D::Object *_target, int key, int value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_10 (Urho3D::Object *_target, int key, float value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
UrhoObject_SetGlobalVar_11 (Urho3D::Object *_target, int key, const char * value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), Urho3D::String(value));
}

DllExport void
UrhoObject_SetGlobalVar_12 (Urho3D::Object *_target, int key, bool value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

// Urho3D::Variant overloads end.
DllExport Urho3D::Object *
UrhoObject_GetSubsystem (Urho3D::Object *_target, int type)
{
	return _target->GetSubsystem (Urho3D::StringHash(type));
}


DllExport Urho3D::Object *
UrhoObject_GetEventSender (Urho3D::Object *_target)
{
	return _target->GetEventSender ();
}


DllExport Urho3D::EventHandler *
UrhoObject_GetEventHandler (Urho3D::Object *_target)
{
	return _target->GetEventHandler ();
}


DllExport int
UrhoObject_HasSubscribedToEvent (Urho3D::Object *_target, int eventType)
{
	return _target->HasSubscribedToEvent (Urho3D::StringHash(eventType));
}


DllExport int
UrhoObject_HasSubscribedToEvent3 (Urho3D::Object *_target, Urho3D::Object * sender, int eventType)
{
	return _target->HasSubscribedToEvent (sender, Urho3D::StringHash(eventType));
}


DllExport int
UrhoObject_HasEventHandlers (Urho3D::Object *_target)
{
	return _target->HasEventHandlers ();
}


DllExport const char *
UrhoObject_GetCategory (Urho3D::Object *_target)
{
	return stringdup((_target->GetCategory ()).CString ());
}


DllExport void
UrhoObject_SetBlockEvents (Urho3D::Object *_target, bool block)
{
	_target->SetBlockEvents (block);
}


DllExport int
UrhoObject_GetBlockEvents (Urho3D::Object *_target)
{
	return _target->GetBlockEvents ();
}


DllExport Urho3D::Object *
ObjectFactory_CreateObject (Urho3D::ObjectFactory *_target)
{
	auto copy = _target->CreateObject ();
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::Context *
ObjectFactory_GetContext (Urho3D::ObjectFactory *_target)
{
	return _target->GetContext ();
}


DllExport const class Urho3D::TypeInfo *
ObjectFactory_GetTypeInfo (Urho3D::ObjectFactory *_target)
{
	return _target->GetTypeInfo ();
}


DllExport int
ObjectFactory_GetType (Urho3D::ObjectFactory *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ObjectFactory_GetTypeName (Urho3D::ObjectFactory *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Serializable_GetType (Urho3D::Serializable *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Serializable_GetTypeName (Urho3D::Serializable *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Serializable_GetTypeStatic ()
{
	return (Serializable::GetTypeStatic ()).Value ();
}


DllExport const char *
Serializable_GetTypeNameStatic ()
{
	return stringdup((Serializable::GetTypeNameStatic ()).CString ());
}


DllExport void *
Serializable_Serializable (Urho3D::Context * context)
{
	return WeakPtr<Serializable>(new Serializable(context));
}


DllExport int
Serializable_Load_File (Urho3D::Serializable *_target, File * source)
{
	return _target->Load (*source);
}


DllExport int
Serializable_Load_MemoryBuffer (Urho3D::Serializable *_target, MemoryBuffer * source)
{
	return _target->Load (*source);
}


DllExport int
Serializable_Save_File (Urho3D::Serializable *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Serializable_Save_MemoryBuffer (Urho3D::Serializable *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
Serializable_LoadXML (Urho3D::Serializable *_target, const class Urho3D::XMLElement & source)
{
	return _target->LoadXML (source);
}


DllExport int
Serializable_SaveXML (Urho3D::Serializable *_target, Urho3D::XMLElement & dest)
{
	return _target->SaveXML (dest);
}


DllExport void
Serializable_ApplyAttributes (Urho3D::Serializable *_target)
{
	_target->ApplyAttributes ();
}


DllExport int
Serializable_SaveDefaultAttributes (Urho3D::Serializable *_target)
{
	return _target->SaveDefaultAttributes ();
}


DllExport void
Serializable_MarkNetworkUpdate (Urho3D::Serializable *_target)
{
	_target->MarkNetworkUpdate ();
}


// Urho3D::Variant overloads begin:
DllExport int
Serializable_SetAttribute_0 (Urho3D::Serializable *_target, unsigned int index, const class Urho3D::Vector3 & value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_1 (Urho3D::Serializable *_target, unsigned int index, const class Urho3D::IntRect & value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_2 (Urho3D::Serializable *_target, unsigned int index, const class Urho3D::Color & value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_3 (Urho3D::Serializable *_target, unsigned int index, const class Urho3D::Vector2 & value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_4 (Urho3D::Serializable *_target, unsigned int index, const class Urho3D::Vector4 & value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_5 (Urho3D::Serializable *_target, unsigned int index, const class Urho3D::IntVector2 & value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_6 (Urho3D::Serializable *_target, unsigned int index, const class Urho3D::Quaternion & value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_7 (Urho3D::Serializable *_target, unsigned int index, const class Urho3D::Matrix4 & value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_8 (Urho3D::Serializable *_target, unsigned int index, const class Urho3D::Matrix3x4 & value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_9 (Urho3D::Serializable *_target, unsigned int index, int value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_10 (Urho3D::Serializable *_target, unsigned int index, float value)
{
	return _target->SetAttribute (index, (value));
}

DllExport int
Serializable_SetAttribute_11 (Urho3D::Serializable *_target, unsigned int index, const char * value)
{
	return _target->SetAttribute (index, Urho3D::String(value));
}

DllExport int
Serializable_SetAttribute_12 (Urho3D::Serializable *_target, unsigned int index, bool value)
{
	return _target->SetAttribute (index, (value));
}

// Urho3D::Variant overloads end.
// Urho3D::Variant overloads begin:
DllExport int
Serializable_SetAttribute0_0 (Urho3D::Serializable *_target, const char * name, const class Urho3D::Vector3 & value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_1 (Urho3D::Serializable *_target, const char * name, const class Urho3D::IntRect & value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_2 (Urho3D::Serializable *_target, const char * name, const class Urho3D::Color & value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_3 (Urho3D::Serializable *_target, const char * name, const class Urho3D::Vector2 & value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_4 (Urho3D::Serializable *_target, const char * name, const class Urho3D::Vector4 & value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_5 (Urho3D::Serializable *_target, const char * name, const class Urho3D::IntVector2 & value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_6 (Urho3D::Serializable *_target, const char * name, const class Urho3D::Quaternion & value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_7 (Urho3D::Serializable *_target, const char * name, const class Urho3D::Matrix4 & value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_8 (Urho3D::Serializable *_target, const char * name, const class Urho3D::Matrix3x4 & value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_9 (Urho3D::Serializable *_target, const char * name, int value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_10 (Urho3D::Serializable *_target, const char * name, float value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

DllExport int
Serializable_SetAttribute0_11 (Urho3D::Serializable *_target, const char * name, const char * value)
{
	return _target->SetAttribute (Urho3D::String(name), Urho3D::String(value));
}

DllExport int
Serializable_SetAttribute0_12 (Urho3D::Serializable *_target, const char * name, bool value)
{
	return _target->SetAttribute (Urho3D::String(name), (value));
}

// Urho3D::Variant overloads end.
DllExport void
Serializable_SetInstanceDefault (Urho3D::Serializable *_target, bool enable)
{
	_target->SetInstanceDefault (enable);
}


DllExport void
Serializable_ResetToDefault (Urho3D::Serializable *_target)
{
	_target->ResetToDefault ();
}


DllExport void
Serializable_RemoveInstanceDefault (Urho3D::Serializable *_target)
{
	_target->RemoveInstanceDefault ();
}


DllExport void
Serializable_SetTemporary (Urho3D::Serializable *_target, bool enable)
{
	_target->SetTemporary (enable);
}


DllExport void
Serializable_SetInterceptNetworkUpdate (Urho3D::Serializable *_target, const char * attributeName, bool enable)
{
	_target->SetInterceptNetworkUpdate (Urho3D::String(attributeName), enable);
}


DllExport void
Serializable_AllocateNetworkState (Urho3D::Serializable *_target)
{
	_target->AllocateNetworkState ();
}


DllExport void
Serializable_WriteInitialDeltaUpdate_File (Urho3D::Serializable *_target, File * dest, unsigned char timeStamp)
{
	_target->WriteInitialDeltaUpdate (*dest, timeStamp);
}


DllExport void
Serializable_WriteInitialDeltaUpdate_MemoryBuffer (Urho3D::Serializable *_target, MemoryBuffer * dest, unsigned char timeStamp)
{
	_target->WriteInitialDeltaUpdate (*dest, timeStamp);
}


DllExport void
Serializable_WriteLatestDataUpdate_File (Urho3D::Serializable *_target, File * dest, unsigned char timeStamp)
{
	_target->WriteLatestDataUpdate (*dest, timeStamp);
}


DllExport void
Serializable_WriteLatestDataUpdate_MemoryBuffer (Urho3D::Serializable *_target, MemoryBuffer * dest, unsigned char timeStamp)
{
	_target->WriteLatestDataUpdate (*dest, timeStamp);
}


DllExport int
Serializable_ReadDeltaUpdate_File (Urho3D::Serializable *_target, File * source)
{
	return _target->ReadDeltaUpdate (*source);
}


DllExport int
Serializable_ReadDeltaUpdate_MemoryBuffer (Urho3D::Serializable *_target, MemoryBuffer * source)
{
	return _target->ReadDeltaUpdate (*source);
}


DllExport int
Serializable_ReadLatestDataUpdate_File (Urho3D::Serializable *_target, File * source)
{
	return _target->ReadLatestDataUpdate (*source);
}


DllExport int
Serializable_ReadLatestDataUpdate_MemoryBuffer (Urho3D::Serializable *_target, MemoryBuffer * source)
{
	return _target->ReadLatestDataUpdate (*source);
}


DllExport Urho3D::Variant
Serializable_GetAttribute (Urho3D::Serializable *_target, unsigned int index)
{
	return _target->GetAttribute (index);
}


DllExport Urho3D::Variant
Serializable_GetAttribute1 (Urho3D::Serializable *_target, const char * name)
{
	return _target->GetAttribute (Urho3D::String(name));
}


DllExport Urho3D::Variant
Serializable_GetAttributeDefault (Urho3D::Serializable *_target, unsigned int index)
{
	return _target->GetAttributeDefault (index);
}


DllExport Urho3D::Variant
Serializable_GetAttributeDefault2 (Urho3D::Serializable *_target, const char * name)
{
	return _target->GetAttributeDefault (Urho3D::String(name));
}


DllExport unsigned int
Serializable_GetNumAttributes (Urho3D::Serializable *_target)
{
	return _target->GetNumAttributes ();
}


DllExport unsigned int
Serializable_GetNumNetworkAttributes (Urho3D::Serializable *_target)
{
	return _target->GetNumNetworkAttributes ();
}


DllExport int
Serializable_IsTemporary (Urho3D::Serializable *_target)
{
	return _target->IsTemporary ();
}


DllExport int
Serializable_GetInterceptNetworkUpdate (Urho3D::Serializable *_target, const char * attributeName)
{
	return _target->GetInterceptNetworkUpdate (Urho3D::String(attributeName));
}


DllExport Urho3D::NetworkState *
Serializable_GetNetworkState (Urho3D::Serializable *_target)
{
	return _target->GetNetworkState ();
}


DllExport void *
ValueAnimationInfo_ValueAnimationInfo (Urho3D::ValueAnimation * animation, enum Urho3D::WrapMode wrapMode, float speed)
{
	return WeakPtr<ValueAnimationInfo>(new ValueAnimationInfo(animation, wrapMode, speed));
}


DllExport void *
ValueAnimationInfo_ValueAnimationInfo0 (Urho3D::Object * target, Urho3D::ValueAnimation * animation, enum Urho3D::WrapMode wrapMode, float speed)
{
	return WeakPtr<ValueAnimationInfo>(new ValueAnimationInfo(target, animation, wrapMode, speed));
}


DllExport int
ValueAnimationInfo_Update (Urho3D::ValueAnimationInfo *_target, float timeStep)
{
	return _target->Update (timeStep);
}


DllExport int
ValueAnimationInfo_SetTime (Urho3D::ValueAnimationInfo *_target, float time)
{
	return _target->SetTime (time);
}


DllExport void
ValueAnimationInfo_SetWrapMode (Urho3D::ValueAnimationInfo *_target, enum Urho3D::WrapMode wrapMode)
{
	_target->SetWrapMode (wrapMode);
}


DllExport void
ValueAnimationInfo_SetSpeed (Urho3D::ValueAnimationInfo *_target, float speed)
{
	_target->SetSpeed (speed);
}


DllExport Urho3D::Object *
ValueAnimationInfo_GetTarget (Urho3D::ValueAnimationInfo *_target)
{
	return _target->GetTarget ();
}


DllExport Urho3D::ValueAnimation *
ValueAnimationInfo_GetAnimation (Urho3D::ValueAnimationInfo *_target)
{
	return _target->GetAnimation ();
}


DllExport enum Urho3D::WrapMode
ValueAnimationInfo_GetWrapMode (Urho3D::ValueAnimationInfo *_target)
{
	return _target->GetWrapMode ();
}


DllExport float
ValueAnimationInfo_GetTime (Urho3D::ValueAnimationInfo *_target)
{
	return _target->GetTime ();
}


DllExport float
ValueAnimationInfo_GetSpeed (Urho3D::ValueAnimationInfo *_target)
{
	return _target->GetSpeed ();
}


DllExport int
Animatable_GetType (Urho3D::Animatable *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Animatable_GetTypeName (Urho3D::Animatable *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Animatable_GetTypeStatic ()
{
	return (Animatable::GetTypeStatic ()).Value ();
}


DllExport const char *
Animatable_GetTypeNameStatic ()
{
	return stringdup((Animatable::GetTypeNameStatic ()).CString ());
}


DllExport void
Animatable_RegisterObject (Urho3D::Context * context)
{
	Animatable::RegisterObject (context);
}


DllExport int
Animatable_LoadXML (Urho3D::Animatable *_target, const class Urho3D::XMLElement & source)
{
	return _target->LoadXML (source);
}


DllExport int
Animatable_SaveXML (Urho3D::Animatable *_target, Urho3D::XMLElement & dest)
{
	return _target->SaveXML (dest);
}


DllExport void
Animatable_SetAnimationEnabled (Urho3D::Animatable *_target, bool enable)
{
	_target->SetAnimationEnabled (enable);
}


DllExport void
Animatable_SetAnimationTime (Urho3D::Animatable *_target, float time)
{
	_target->SetAnimationTime (time);
}


DllExport void
Animatable_SetObjectAnimation (Urho3D::Animatable *_target, Urho3D::ObjectAnimation * objectAnimation)
{
	_target->SetObjectAnimation (objectAnimation);
}


DllExport void
Animatable_SetAttributeAnimation (Urho3D::Animatable *_target, const char * name, Urho3D::ValueAnimation * attributeAnimation, enum Urho3D::WrapMode wrapMode, float speed)
{
	_target->SetAttributeAnimation (Urho3D::String(name), attributeAnimation, wrapMode, speed);
}


DllExport void
Animatable_SetAttributeAnimationWrapMode (Urho3D::Animatable *_target, const char * name, enum Urho3D::WrapMode wrapMode)
{
	_target->SetAttributeAnimationWrapMode (Urho3D::String(name), wrapMode);
}


DllExport void
Animatable_SetAttributeAnimationSpeed (Urho3D::Animatable *_target, const char * name, float speed)
{
	_target->SetAttributeAnimationSpeed (Urho3D::String(name), speed);
}


DllExport void
Animatable_SetAttributeAnimationTime (Urho3D::Animatable *_target, const char * name, float time)
{
	_target->SetAttributeAnimationTime (Urho3D::String(name), time);
}


DllExport void
Animatable_RemoveObjectAnimation (Urho3D::Animatable *_target)
{
	_target->RemoveObjectAnimation ();
}


DllExport void
Animatable_RemoveAttributeAnimation (Urho3D::Animatable *_target, const char * name)
{
	_target->RemoveAttributeAnimation (Urho3D::String(name));
}


DllExport int
Animatable_GetAnimationEnabled (Urho3D::Animatable *_target)
{
	return _target->GetAnimationEnabled ();
}


DllExport Urho3D::ObjectAnimation *
Animatable_GetObjectAnimation (Urho3D::Animatable *_target)
{
	return _target->GetObjectAnimation ();
}


DllExport Urho3D::ValueAnimation *
Animatable_GetAttributeAnimation (Urho3D::Animatable *_target, const char * name)
{
	return _target->GetAttributeAnimation (Urho3D::String(name));
}


DllExport enum Urho3D::WrapMode
Animatable_GetAttributeAnimationWrapMode (Urho3D::Animatable *_target, const char * name)
{
	return _target->GetAttributeAnimationWrapMode (Urho3D::String(name));
}


DllExport float
Animatable_GetAttributeAnimationSpeed (Urho3D::Animatable *_target, const char * name)
{
	return _target->GetAttributeAnimationSpeed (Urho3D::String(name));
}


DllExport float
Animatable_GetAttributeAnimationTime (Urho3D::Animatable *_target, const char * name)
{
	return _target->GetAttributeAnimationTime (Urho3D::String(name));
}


DllExport Urho3D::ResourceRef
Animatable_GetObjectAnimationAttr (Urho3D::Animatable *_target)
{
	return _target->GetObjectAnimationAttr ();
}


DllExport int
Component_GetType (Urho3D::Component *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Component_GetTypeName (Urho3D::Component *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Component_GetTypeStatic ()
{
	return (Component::GetTypeStatic ()).Value ();
}


DllExport const char *
Component_GetTypeNameStatic ()
{
	return stringdup((Component::GetTypeNameStatic ()).CString ());
}


DllExport void *
Component_Component (Urho3D::Context * context)
{
	return WeakPtr<Component>(new Component(context));
}


DllExport void
Component_OnSetEnabled (Urho3D::Component *_target)
{
	_target->OnSetEnabled ();
}


DllExport int
Component_Save_File (Urho3D::Component *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Component_Save_MemoryBuffer (Urho3D::Component *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
Component_SaveXML (Urho3D::Component *_target, Urho3D::XMLElement & dest)
{
	return _target->SaveXML (dest);
}


DllExport void
Component_MarkNetworkUpdate (Urho3D::Component *_target)
{
	_target->MarkNetworkUpdate ();
}


DllExport void
Component_DrawDebugGeometry (Urho3D::Component *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
Component_SetEnabled (Urho3D::Component *_target, bool enable)
{
	_target->SetEnabled (enable);
}


DllExport void
Component_Remove (Urho3D::Component *_target)
{
	_target->Remove ();
}


DllExport unsigned int
Component_GetID (Urho3D::Component *_target)
{
	return _target->GetID ();
}


DllExport int
Component_IsReplicated (Urho3D::Component *_target)
{
	return _target->IsReplicated ();
}


DllExport Urho3D::Node *
Component_GetNode (Urho3D::Component *_target)
{
	return _target->GetNode ();
}


DllExport Urho3D::Scene *
Component_GetScene (Urho3D::Component *_target)
{
	return _target->GetScene ();
}


DllExport int
Component_IsEnabled (Urho3D::Component *_target)
{
	return _target->IsEnabled ();
}


DllExport int
Component_IsEnabledEffective (Urho3D::Component *_target)
{
	return _target->IsEnabledEffective ();
}


DllExport Urho3D::Component *
Component_GetComponent (Urho3D::Component *_target, int type)
{
	return _target->GetComponent (Urho3D::StringHash(type));
}


DllExport void
Component_AddReplicationState (Urho3D::Component *_target, Urho3D::ComponentReplicationState * state)
{
	_target->AddReplicationState (state);
}


DllExport void
Component_PrepareNetworkUpdate (Urho3D::Component *_target)
{
	_target->PrepareNetworkUpdate ();
}


DllExport void
Component_CleanupConnection (Urho3D::Component *_target, Urho3D::Connection * connection)
{
	_target->CleanupConnection (connection);
}


DllExport int
Time_GetType (Urho3D::Time *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Time_GetTypeName (Urho3D::Time *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Time_GetTypeStatic ()
{
	return (Time::GetTypeStatic ()).Value ();
}


DllExport const char *
Time_GetTypeNameStatic ()
{
	return stringdup((Time::GetTypeNameStatic ()).CString ());
}


DllExport void *
Time_Time (Urho3D::Context * context)
{
	return WeakPtr<Time>(new Time(context));
}


DllExport void
Time_BeginFrame (Urho3D::Time *_target, float timeStep)
{
	_target->BeginFrame (timeStep);
}


DllExport void
Time_EndFrame (Urho3D::Time *_target)
{
	_target->EndFrame ();
}


DllExport void
Time_SetTimerPeriod (Urho3D::Time *_target, unsigned int mSec)
{
	_target->SetTimerPeriod (mSec);
}


DllExport unsigned int
Time_GetFrameNumber (Urho3D::Time *_target)
{
	return _target->GetFrameNumber ();
}


DllExport float
Time_GetTimeStep (Urho3D::Time *_target)
{
	return _target->GetTimeStep ();
}


DllExport unsigned int
Time_GetTimerPeriod (Urho3D::Time *_target)
{
	return _target->GetTimerPeriod ();
}


DllExport float
Time_GetElapsedTime (Urho3D::Time *_target)
{
	return _target->GetElapsedTime ();
}


DllExport float
Time_GetFramesPerSecond (Urho3D::Time *_target)
{
	return _target->GetFramesPerSecond ();
}


DllExport unsigned int
Time_GetSystemTime ()
{
	return Time::GetSystemTime ();
}


DllExport unsigned int
Time_GetTimeSinceEpoch ()
{
	return Time::GetTimeSinceEpoch ();
}


DllExport const char *
Time_GetTimeStamp ()
{
	return stringdup((Time::GetTimeStamp ()).CString ());
}


DllExport void
Time_Sleep (unsigned int mSec)
{
	Time::Sleep (mSec);
}


DllExport int
Resource_GetType (Urho3D::Resource *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Resource_GetTypeName (Urho3D::Resource *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Resource_GetTypeStatic ()
{
	return (Resource::GetTypeStatic ()).Value ();
}


DllExport const char *
Resource_GetTypeNameStatic ()
{
	return stringdup((Resource::GetTypeNameStatic ()).CString ());
}


DllExport void *
Resource_Resource (Urho3D::Context * context)
{
	return WeakPtr<Resource>(new Resource(context));
}


DllExport int
Resource_Load_File (Urho3D::Resource *_target, File * source)
{
	return _target->Load (*source);
}


DllExport int
Resource_Load_MemoryBuffer (Urho3D::Resource *_target, MemoryBuffer * source)
{
	return _target->Load (*source);
}


DllExport int
Resource_BeginLoad_File (Urho3D::Resource *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Resource_BeginLoad_MemoryBuffer (Urho3D::Resource *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Resource_EndLoad (Urho3D::Resource *_target)
{
	return _target->EndLoad ();
}


DllExport int
Resource_Save_File (Urho3D::Resource *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Resource_Save_MemoryBuffer (Urho3D::Resource *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
Resource_LoadFile (Urho3D::Resource *_target, const char * fileName)
{
	return _target->LoadFile (Urho3D::String(fileName));
}


DllExport int
Resource_SaveFile (Urho3D::Resource *_target, const char * fileName)
{
	return _target->SaveFile (Urho3D::String(fileName));
}


DllExport void
Resource_SetName (Urho3D::Resource *_target, const char * name)
{
	_target->SetName (Urho3D::String(name));
}


DllExport void
Resource_SetMemoryUse (Urho3D::Resource *_target, unsigned int size)
{
	_target->SetMemoryUse (size);
}


DllExport void
Resource_ResetUseTimer (Urho3D::Resource *_target)
{
	_target->ResetUseTimer ();
}


DllExport void
Resource_SetAsyncLoadState (Urho3D::Resource *_target, enum Urho3D::AsyncLoadState newState)
{
	_target->SetAsyncLoadState (newState);
}


DllExport const char *
Resource_GetName (Urho3D::Resource *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport int
Resource_GetNameHash (Urho3D::Resource *_target)
{
	return (_target->GetNameHash ()).Value ();
}


DllExport unsigned int
Resource_GetMemoryUse (Urho3D::Resource *_target)
{
	return _target->GetMemoryUse ();
}


DllExport unsigned int
Resource_GetUseTimer (Urho3D::Resource *_target)
{
	return _target->GetUseTimer ();
}


DllExport enum Urho3D::AsyncLoadState
Resource_GetAsyncLoadState (Urho3D::Resource *_target)
{
	return _target->GetAsyncLoadState ();
}


DllExport int
ResourceWithMetadata_GetType (Urho3D::ResourceWithMetadata *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ResourceWithMetadata_GetTypeName (Urho3D::ResourceWithMetadata *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ResourceWithMetadata_GetTypeStatic ()
{
	return (ResourceWithMetadata::GetTypeStatic ()).Value ();
}


DllExport const char *
ResourceWithMetadata_GetTypeNameStatic ()
{
	return stringdup((ResourceWithMetadata::GetTypeNameStatic ()).CString ());
}


DllExport void *
ResourceWithMetadata_ResourceWithMetadata (Urho3D::Context * context)
{
	return WeakPtr<ResourceWithMetadata>(new ResourceWithMetadata(context));
}


// Urho3D::Variant overloads begin:
DllExport void
ResourceWithMetadata_AddMetadata_0 (Urho3D::ResourceWithMetadata *_target, const char * name, const class Urho3D::Vector3 & value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_1 (Urho3D::ResourceWithMetadata *_target, const char * name, const class Urho3D::IntRect & value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_2 (Urho3D::ResourceWithMetadata *_target, const char * name, const class Urho3D::Color & value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_3 (Urho3D::ResourceWithMetadata *_target, const char * name, const class Urho3D::Vector2 & value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_4 (Urho3D::ResourceWithMetadata *_target, const char * name, const class Urho3D::Vector4 & value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_5 (Urho3D::ResourceWithMetadata *_target, const char * name, const class Urho3D::IntVector2 & value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_6 (Urho3D::ResourceWithMetadata *_target, const char * name, const class Urho3D::Quaternion & value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_7 (Urho3D::ResourceWithMetadata *_target, const char * name, const class Urho3D::Matrix4 & value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_8 (Urho3D::ResourceWithMetadata *_target, const char * name, const class Urho3D::Matrix3x4 & value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_9 (Urho3D::ResourceWithMetadata *_target, const char * name, int value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_10 (Urho3D::ResourceWithMetadata *_target, const char * name, float value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

DllExport void
ResourceWithMetadata_AddMetadata_11 (Urho3D::ResourceWithMetadata *_target, const char * name, const char * value)
{
	_target->AddMetadata (Urho3D::String(name), Urho3D::String(value));
}

DllExport void
ResourceWithMetadata_AddMetadata_12 (Urho3D::ResourceWithMetadata *_target, const char * name, bool value)
{
	_target->AddMetadata (Urho3D::String(name), (value));
}

// Urho3D::Variant overloads end.
DllExport void
ResourceWithMetadata_RemoveMetadata (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	_target->RemoveMetadata (Urho3D::String(name));
}


DllExport void
ResourceWithMetadata_RemoveAllMetadata (Urho3D::ResourceWithMetadata *_target)
{
	_target->RemoveAllMetadata ();
}


// Urho3D::Variant overloads begin:
DllExport Interop::Vector3
ResourceWithMetadata_GetMetadata_0 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return *((Interop::Vector3 *) &(_target->GetMetadata (Urho3D::String(name)).GetVector3()));
}

DllExport Interop::IntRect
ResourceWithMetadata_GetMetadata_1 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return *((Interop::IntRect *) &(_target->GetMetadata (Urho3D::String(name)).GetIntRect()));
}

DllExport Interop::Color
ResourceWithMetadata_GetMetadata_2 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return *((Interop::Color *) &(_target->GetMetadata (Urho3D::String(name)).GetColor()));
}

DllExport Interop::Vector2
ResourceWithMetadata_GetMetadata_3 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return *((Interop::Vector2 *) &(_target->GetMetadata (Urho3D::String(name)).GetVector2()));
}

DllExport Interop::Vector4
ResourceWithMetadata_GetMetadata_4 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return *((Interop::Vector4 *) &(_target->GetMetadata (Urho3D::String(name)).GetVector4()));
}

DllExport Interop::IntVector2
ResourceWithMetadata_GetMetadata_5 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return *((Interop::IntVector2 *) &(_target->GetMetadata (Urho3D::String(name)).GetIntVector2()));
}

DllExport Interop::Quaternion
ResourceWithMetadata_GetMetadata_6 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return *((Interop::Quaternion *) &(_target->GetMetadata (Urho3D::String(name)).GetQuaternion()));
}

DllExport Interop::Matrix4
ResourceWithMetadata_GetMetadata_7 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return *((Interop::Matrix4 *) &(_target->GetMetadata (Urho3D::String(name)).GetMatrix4()));
}

DllExport Interop::Matrix3x4
ResourceWithMetadata_GetMetadata_8 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return *((Interop::Matrix3x4 *) &(_target->GetMetadata (Urho3D::String(name)).GetMatrix3x4()));
}

DllExport int
ResourceWithMetadata_GetMetadata_9 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return (_target->GetMetadata (Urho3D::String(name)).GetInt());
}

DllExport float
ResourceWithMetadata_GetMetadata_10 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return (_target->GetMetadata (Urho3D::String(name)).GetFloat());
}

DllExport const char *
ResourceWithMetadata_GetMetadata_11 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return stringdup(_target->GetMetadata (Urho3D::String(name)).GetString().CString());
}

DllExport bool
ResourceWithMetadata_GetMetadata_12 (Urho3D::ResourceWithMetadata *_target, const char * name)
{
	return (_target->GetMetadata (Urho3D::String(name)).GetBool());
}

// Urho3D::Variant overloads end.
DllExport int
ResourceWithMetadata_HasMetadata (Urho3D::ResourceWithMetadata *_target)
{
	return _target->HasMetadata ();
}


DllExport int
Sprite2D_GetType (Urho3D::Sprite2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Sprite2D_GetTypeName (Urho3D::Sprite2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Sprite2D_GetTypeStatic ()
{
	return (Sprite2D::GetTypeStatic ()).Value ();
}


DllExport const char *
Sprite2D_GetTypeNameStatic ()
{
	return stringdup((Sprite2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
Sprite2D_Sprite2D (Urho3D::Context * context)
{
	return WeakPtr<Sprite2D>(new Sprite2D(context));
}


DllExport void
Sprite2D_RegisterObject (Urho3D::Context * context)
{
	Sprite2D::RegisterObject (context);
}


DllExport int
Sprite2D_BeginLoad_File (Urho3D::Sprite2D *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Sprite2D_BeginLoad_MemoryBuffer (Urho3D::Sprite2D *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Sprite2D_EndLoad (Urho3D::Sprite2D *_target)
{
	return _target->EndLoad ();
}


DllExport void
Sprite2D_SetTexture (Urho3D::Sprite2D *_target, Urho3D::Texture2D * texture)
{
	_target->SetTexture (texture);
}


DllExport void
Sprite2D_SetRectangle (Urho3D::Sprite2D *_target, const class Urho3D::IntRect & rectangle)
{
	_target->SetRectangle (rectangle);
}


DllExport void
Sprite2D_SetHotSpot (Urho3D::Sprite2D *_target, const class Urho3D::Vector2 & hotSpot)
{
	_target->SetHotSpot (hotSpot);
}


DllExport void
Sprite2D_SetOffset (Urho3D::Sprite2D *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetOffset (offset);
}


DllExport void
Sprite2D_SetTextureEdgeOffset (Urho3D::Sprite2D *_target, float offset)
{
	_target->SetTextureEdgeOffset (offset);
}


DllExport void
Sprite2D_SetSpriteSheet (Urho3D::Sprite2D *_target, Urho3D::SpriteSheet2D * spriteSheet)
{
	_target->SetSpriteSheet (spriteSheet);
}


DllExport Urho3D::Texture2D *
Sprite2D_GetTexture (Urho3D::Sprite2D *_target)
{
	return _target->GetTexture ();
}


DllExport Interop::IntRect 
Sprite2D_GetRectangle (Urho3D::Sprite2D *_target)
{
	return *((Interop::IntRect  *) &(_target->GetRectangle ()));
}


DllExport Interop::Vector2 
Sprite2D_GetHotSpot (Urho3D::Sprite2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetHotSpot ()));
}


DllExport Interop::IntVector2 
Sprite2D_GetOffset (Urho3D::Sprite2D *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetOffset ()));
}


DllExport float
Sprite2D_GetTextureEdgeOffset (Urho3D::Sprite2D *_target)
{
	return _target->GetTextureEdgeOffset ();
}


DllExport Urho3D::SpriteSheet2D *
Sprite2D_GetSpriteSheet (Urho3D::Sprite2D *_target)
{
	return _target->GetSpriteSheet ();
}


DllExport Urho3D::ResourceRef
Sprite2D_SaveToResourceRef (Urho3D::Sprite2D * sprite)
{
	return Sprite2D::SaveToResourceRef (sprite);
}


DllExport void *
PropertySet2D_PropertySet2D ()
{
	return WeakPtr<PropertySet2D>(new PropertySet2D());
}


DllExport void
PropertySet2D_Load (Urho3D::PropertySet2D *_target, const class Urho3D::XMLElement & element)
{
	_target->Load (element);
}


DllExport int
PropertySet2D_HasProperty (Urho3D::PropertySet2D *_target, const char * name)
{
	return _target->HasProperty (Urho3D::String(name));
}


DllExport const char *
PropertySet2D_GetProperty (Urho3D::PropertySet2D *_target, const char * name)
{
	return stringdup((_target->GetProperty (Urho3D::String(name))).CString ());
}


DllExport void *
Tile2D_Tile2D ()
{
	return WeakPtr<Tile2D>(new Tile2D());
}


DllExport unsigned int
Tile2D_GetGid (Urho3D::Tile2D *_target)
{
	return _target->GetGid ();
}


DllExport int
Tile2D_GetFlipX (Urho3D::Tile2D *_target)
{
	return _target->GetFlipX ();
}


DllExport int
Tile2D_GetFlipY (Urho3D::Tile2D *_target)
{
	return _target->GetFlipY ();
}


DllExport int
Tile2D_GetSwapXY (Urho3D::Tile2D *_target)
{
	return _target->GetSwapXY ();
}


DllExport Urho3D::Sprite2D *
Tile2D_GetSprite (Urho3D::Tile2D *_target)
{
	return _target->GetSprite ();
}


DllExport int
Tile2D_HasProperty (Urho3D::Tile2D *_target, const char * name)
{
	return _target->HasProperty (Urho3D::String(name));
}


DllExport const char *
Tile2D_GetProperty (Urho3D::Tile2D *_target, const char * name)
{
	return stringdup((_target->GetProperty (Urho3D::String(name))).CString ());
}


DllExport void *
TileMapObject2D_TileMapObject2D ()
{
	return WeakPtr<TileMapObject2D>(new TileMapObject2D());
}


DllExport enum Urho3D::TileMapObjectType2D
TileMapObject2D_GetObjectType (Urho3D::TileMapObject2D *_target)
{
	return _target->GetObjectType ();
}


DllExport const char *
TileMapObject2D_GetName (Urho3D::TileMapObject2D *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport const char *
TileMapObject2D_GetType (Urho3D::TileMapObject2D *_target)
{
	return stringdup((_target->GetType ()).CString ());
}


DllExport Interop::Vector2 
TileMapObject2D_GetPosition (Urho3D::TileMapObject2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetPosition ()));
}


DllExport Interop::Vector2 
TileMapObject2D_GetSize (Urho3D::TileMapObject2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetSize ()));
}


DllExport unsigned int
TileMapObject2D_GetNumPoints (Urho3D::TileMapObject2D *_target)
{
	return _target->GetNumPoints ();
}


DllExport Interop::Vector2 
TileMapObject2D_GetPoint (Urho3D::TileMapObject2D *_target, unsigned int index)
{
	return *((Interop::Vector2  *) &(_target->GetPoint (index)));
}


DllExport unsigned int
TileMapObject2D_GetTileGid (Urho3D::TileMapObject2D *_target)
{
	return _target->GetTileGid ();
}


DllExport int
TileMapObject2D_GetTileFlipX (Urho3D::TileMapObject2D *_target)
{
	return _target->GetTileFlipX ();
}


DllExport int
TileMapObject2D_GetTileFlipY (Urho3D::TileMapObject2D *_target)
{
	return _target->GetTileFlipY ();
}


DllExport int
TileMapObject2D_GetTileSwapXY (Urho3D::TileMapObject2D *_target)
{
	return _target->GetTileSwapXY ();
}


DllExport Urho3D::Sprite2D *
TileMapObject2D_GetTileSprite (Urho3D::TileMapObject2D *_target)
{
	return _target->GetTileSprite ();
}


DllExport int
TileMapObject2D_HasProperty (Urho3D::TileMapObject2D *_target, const char * name)
{
	return _target->HasProperty (Urho3D::String(name));
}


DllExport const char *
TileMapObject2D_GetProperty (Urho3D::TileMapObject2D *_target, const char * name)
{
	return stringdup((_target->GetProperty (Urho3D::String(name))).CString ());
}


DllExport int
TileMapLayer2D_GetType (Urho3D::TileMapLayer2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
TileMapLayer2D_GetTypeName (Urho3D::TileMapLayer2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
TileMapLayer2D_GetTypeStatic ()
{
	return (TileMapLayer2D::GetTypeStatic ()).Value ();
}


DllExport const char *
TileMapLayer2D_GetTypeNameStatic ()
{
	return stringdup((TileMapLayer2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
TileMapLayer2D_TileMapLayer2D (Urho3D::Context * context)
{
	return WeakPtr<TileMapLayer2D>(new TileMapLayer2D(context));
}


DllExport void
TileMapLayer2D_RegisterObject (Urho3D::Context * context)
{
	TileMapLayer2D::RegisterObject (context);
}


DllExport void
TileMapLayer2D_DrawDebugGeometry (Urho3D::TileMapLayer2D *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
TileMapLayer2D_Initialize (Urho3D::TileMapLayer2D *_target, Urho3D::TileMap2D * tileMap, const class Urho3D::TmxLayer2D * tmxLayer)
{
	_target->Initialize (tileMap, tmxLayer);
}


DllExport void
TileMapLayer2D_SetDrawOrder (Urho3D::TileMapLayer2D *_target, int drawOrder)
{
	_target->SetDrawOrder (drawOrder);
}


DllExport void
TileMapLayer2D_SetVisible (Urho3D::TileMapLayer2D *_target, bool visible)
{
	_target->SetVisible (visible);
}


DllExport Urho3D::TileMap2D *
TileMapLayer2D_GetTileMap (Urho3D::TileMapLayer2D *_target)
{
	return _target->GetTileMap ();
}


DllExport const class Urho3D::TmxLayer2D *
TileMapLayer2D_GetTmxLayer (Urho3D::TileMapLayer2D *_target)
{
	return _target->GetTmxLayer ();
}


DllExport int
TileMapLayer2D_GetDrawOrder (Urho3D::TileMapLayer2D *_target)
{
	return _target->GetDrawOrder ();
}


DllExport int
TileMapLayer2D_IsVisible (Urho3D::TileMapLayer2D *_target)
{
	return _target->IsVisible ();
}


DllExport int
TileMapLayer2D_HasProperty (Urho3D::TileMapLayer2D *_target, const char * name)
{
	return _target->HasProperty (Urho3D::String(name));
}


DllExport const char *
TileMapLayer2D_GetProperty (Urho3D::TileMapLayer2D *_target, const char * name)
{
	return stringdup((_target->GetProperty (Urho3D::String(name))).CString ());
}


DllExport enum Urho3D::TileMapLayerType2D
TileMapLayer2D_GetLayerType (Urho3D::TileMapLayer2D *_target)
{
	return _target->GetLayerType ();
}


DllExport int
TileMapLayer2D_GetWidth (Urho3D::TileMapLayer2D *_target)
{
	return _target->GetWidth ();
}


DllExport int
TileMapLayer2D_GetHeight (Urho3D::TileMapLayer2D *_target)
{
	return _target->GetHeight ();
}


DllExport Urho3D::Node *
TileMapLayer2D_GetTileNode (Urho3D::TileMapLayer2D *_target, int x, int y)
{
	return _target->GetTileNode (x, y);
}


DllExport Urho3D::Tile2D *
TileMapLayer2D_GetTile (Urho3D::TileMapLayer2D *_target, int x, int y)
{
	return _target->GetTile (x, y);
}


DllExport unsigned int
TileMapLayer2D_GetNumObjects (Urho3D::TileMapLayer2D *_target)
{
	return _target->GetNumObjects ();
}


DllExport Urho3D::TileMapObject2D *
TileMapLayer2D_GetObject (Urho3D::TileMapLayer2D *_target, unsigned int index)
{
	return _target->GetObject (index);
}


DllExport Urho3D::Node *
TileMapLayer2D_GetObjectNode (Urho3D::TileMapLayer2D *_target, unsigned int index)
{
	return _target->GetObjectNode (index);
}


DllExport Urho3D::Node *
TileMapLayer2D_GetImageNode (Urho3D::TileMapLayer2D *_target)
{
	return _target->GetImageNode ();
}


DllExport void *
TmxLayer2D_TmxLayer2D (Urho3D::TmxFile2D * tmxFile, enum Urho3D::TileMapLayerType2D type)
{
	return WeakPtr<TmxLayer2D>(new TmxLayer2D(tmxFile, type));
}


DllExport Urho3D::TmxFile2D *
TmxLayer2D_GetTmxFile (Urho3D::TmxLayer2D *_target)
{
	return _target->GetTmxFile ();
}


DllExport enum Urho3D::TileMapLayerType2D
TmxLayer2D_GetType (Urho3D::TmxLayer2D *_target)
{
	return _target->GetType ();
}


DllExport const char *
TmxLayer2D_GetName (Urho3D::TmxLayer2D *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport int
TmxLayer2D_GetWidth (Urho3D::TmxLayer2D *_target)
{
	return _target->GetWidth ();
}


DllExport int
TmxLayer2D_GetHeight (Urho3D::TmxLayer2D *_target)
{
	return _target->GetHeight ();
}


DllExport int
TmxLayer2D_IsVisible (Urho3D::TmxLayer2D *_target)
{
	return _target->IsVisible ();
}


DllExport int
TmxLayer2D_HasProperty (Urho3D::TmxLayer2D *_target, const char * name)
{
	return _target->HasProperty (Urho3D::String(name));
}


DllExport const char *
TmxLayer2D_GetProperty (Urho3D::TmxLayer2D *_target, const char * name)
{
	return stringdup((_target->GetProperty (Urho3D::String(name))).CString ());
}


DllExport void *
TmxTileLayer2D_TmxTileLayer2D (Urho3D::TmxFile2D * tmxFile)
{
	return WeakPtr<TmxTileLayer2D>(new TmxTileLayer2D(tmxFile));
}


DllExport int
TmxTileLayer2D_Load (Urho3D::TmxTileLayer2D *_target, const class Urho3D::XMLElement & element, const struct Urho3D::TileMapInfo2D & info)
{
	return _target->Load (element, info);
}


DllExport Urho3D::Tile2D *
TmxTileLayer2D_GetTile (Urho3D::TmxTileLayer2D *_target, int x, int y)
{
	return _target->GetTile (x, y);
}


DllExport void *
TmxObjectGroup2D_TmxObjectGroup2D (Urho3D::TmxFile2D * tmxFile)
{
	return WeakPtr<TmxObjectGroup2D>(new TmxObjectGroup2D(tmxFile));
}


DllExport int
TmxObjectGroup2D_Load (Urho3D::TmxObjectGroup2D *_target, const class Urho3D::XMLElement & element, const struct Urho3D::TileMapInfo2D & info)
{
	return _target->Load (element, info);
}


DllExport unsigned int
TmxObjectGroup2D_GetNumObjects (Urho3D::TmxObjectGroup2D *_target)
{
	return _target->GetNumObjects ();
}


DllExport Urho3D::TileMapObject2D *
TmxObjectGroup2D_GetObject (Urho3D::TmxObjectGroup2D *_target, unsigned int index)
{
	return _target->GetObject (index);
}


DllExport void *
TmxImageLayer2D_TmxImageLayer2D (Urho3D::TmxFile2D * tmxFile)
{
	return WeakPtr<TmxImageLayer2D>(new TmxImageLayer2D(tmxFile));
}


DllExport int
TmxImageLayer2D_Load (Urho3D::TmxImageLayer2D *_target, const class Urho3D::XMLElement & element, const struct Urho3D::TileMapInfo2D & info)
{
	return _target->Load (element, info);
}


DllExport Interop::Vector2 
TmxImageLayer2D_GetPosition (Urho3D::TmxImageLayer2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetPosition ()));
}


DllExport const char *
TmxImageLayer2D_GetSource (Urho3D::TmxImageLayer2D *_target)
{
	return stringdup((_target->GetSource ()).CString ());
}


DllExport Urho3D::Sprite2D *
TmxImageLayer2D_GetSprite (Urho3D::TmxImageLayer2D *_target)
{
	return _target->GetSprite ();
}


DllExport int
TmxFile2D_GetType (Urho3D::TmxFile2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
TmxFile2D_GetTypeName (Urho3D::TmxFile2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
TmxFile2D_GetTypeStatic ()
{
	return (TmxFile2D::GetTypeStatic ()).Value ();
}


DllExport const char *
TmxFile2D_GetTypeNameStatic ()
{
	return stringdup((TmxFile2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
TmxFile2D_TmxFile2D (Urho3D::Context * context)
{
	return WeakPtr<TmxFile2D>(new TmxFile2D(context));
}


DllExport void
TmxFile2D_RegisterObject (Urho3D::Context * context)
{
	TmxFile2D::RegisterObject (context);
}


DllExport int
TmxFile2D_BeginLoad_File (Urho3D::TmxFile2D *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
TmxFile2D_BeginLoad_MemoryBuffer (Urho3D::TmxFile2D *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
TmxFile2D_EndLoad (Urho3D::TmxFile2D *_target)
{
	return _target->EndLoad ();
}


DllExport int
TmxFile2D_SetInfo (Urho3D::TmxFile2D *_target, enum Urho3D::Orientation2D orientation, int width, int height, float tileWidth, float tileHeight)
{
	return _target->SetInfo (orientation, width, height, tileWidth, tileHeight);
}


DllExport void
TmxFile2D_AddLayer (Urho3D::TmxFile2D *_target, unsigned int index, Urho3D::TmxLayer2D * layer)
{
	_target->AddLayer (index, layer);
}


DllExport Urho3D::TileMapInfo2D
TmxFile2D_GetInfo (Urho3D::TmxFile2D *_target)
{
	return _target->GetInfo ();
}


DllExport Urho3D::Sprite2D *
TmxFile2D_GetTileSprite (Urho3D::TmxFile2D *_target, unsigned int gid)
{
	return _target->GetTileSprite (gid);
}


DllExport Urho3D::PropertySet2D *
TmxFile2D_GetTilePropertySet (Urho3D::TmxFile2D *_target, unsigned int gid)
{
	return _target->GetTilePropertySet (gid);
}


DllExport unsigned int
TmxFile2D_GetNumLayers (Urho3D::TmxFile2D *_target)
{
	return _target->GetNumLayers ();
}


DllExport const class Urho3D::TmxLayer2D *
TmxFile2D_GetLayer (Urho3D::TmxFile2D *_target, unsigned int index)
{
	return _target->GetLayer (index);
}


DllExport void
TmxFile2D_SetSpriteTextureEdgeOffset (Urho3D::TmxFile2D *_target, float offset)
{
	_target->SetSpriteTextureEdgeOffset (offset);
}


DllExport float
TmxFile2D_GetSpriteTextureEdgeOffset (Urho3D::TmxFile2D *_target)
{
	return _target->GetSpriteTextureEdgeOffset ();
}


DllExport int
MessageBox_GetType (Urho3D::MessageBox *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
MessageBox_GetTypeName (Urho3D::MessageBox *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
MessageBox_GetTypeStatic ()
{
	return (MessageBox::GetTypeStatic ()).Value ();
}


DllExport const char *
MessageBox_GetTypeNameStatic ()
{
	return stringdup((MessageBox::GetTypeNameStatic ()).CString ());
}


DllExport void *
MessageBox_MessageBox (Urho3D::Context * context, const char * messageString, const char * titleString, Urho3D::XMLFile * layoutFile, Urho3D::XMLFile * styleFile)
{
	return WeakPtr<MessageBox>(new MessageBox(context, Urho3D::String(messageString), Urho3D::String(titleString), layoutFile, styleFile));
}


DllExport void
MessageBox_RegisterObject (Urho3D::Context * context)
{
	MessageBox::RegisterObject (context);
}


DllExport void
MessageBox_SetTitle (Urho3D::MessageBox *_target, const char * text)
{
	_target->SetTitle (Urho3D::String(text));
}


DllExport void
MessageBox_SetMessage (Urho3D::MessageBox *_target, const char * text)
{
	_target->SetMessage (Urho3D::String(text));
}


DllExport const char *
MessageBox_GetTitle (Urho3D::MessageBox *_target)
{
	return stringdup((_target->GetTitle ()).CString ());
}


DllExport const char *
MessageBox_GetMessage (Urho3D::MessageBox *_target)
{
	return stringdup((_target->GetMessage ()).CString ());
}


DllExport Urho3D::UIElement *
MessageBox_GetWindow (Urho3D::MessageBox *_target)
{
	return _target->GetWindow ();
}


DllExport int
Audio_GetType (Urho3D::Audio *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Audio_GetTypeName (Urho3D::Audio *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Audio_GetTypeStatic ()
{
	return (Audio::GetTypeStatic ()).Value ();
}


DllExport const char *
Audio_GetTypeNameStatic ()
{
	return stringdup((Audio::GetTypeNameStatic ()).CString ());
}


DllExport void *
Audio_Audio (Urho3D::Context * context)
{
	return WeakPtr<Audio>(new Audio(context));
}


DllExport int
Audio_SetMode (Urho3D::Audio *_target, int bufferLengthMSec, int mixRate, bool stereo, bool interpolation)
{
	return _target->SetMode (bufferLengthMSec, mixRate, stereo, interpolation);
}


DllExport void
Audio_Update (Urho3D::Audio *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport int
Audio_Play (Urho3D::Audio *_target)
{
	return _target->Play ();
}


DllExport void
Audio_Stop (Urho3D::Audio *_target)
{
	_target->Stop ();
}


DllExport void
Audio_SetMasterGain (Urho3D::Audio *_target, const char * type, float gain)
{
	_target->SetMasterGain (Urho3D::String(type), gain);
}


DllExport void
Audio_PauseSoundType (Urho3D::Audio *_target, const char * type)
{
	_target->PauseSoundType (Urho3D::String(type));
}


DllExport void
Audio_ResumeSoundType (Urho3D::Audio *_target, const char * type)
{
	_target->ResumeSoundType (Urho3D::String(type));
}


DllExport void
Audio_ResumeAll (Urho3D::Audio *_target)
{
	_target->ResumeAll ();
}


DllExport void
Audio_SetListener (Urho3D::Audio *_target, Urho3D::SoundListener * listener)
{
	_target->SetListener (listener);
}


DllExport void
Audio_StopSound (Urho3D::Audio *_target, Urho3D::Sound * sound)
{
	_target->StopSound (sound);
}


DllExport unsigned int
Audio_GetSampleSize (Urho3D::Audio *_target)
{
	return _target->GetSampleSize ();
}


DllExport int
Audio_GetMixRate (Urho3D::Audio *_target)
{
	return _target->GetMixRate ();
}


DllExport int
Audio_GetInterpolation (Urho3D::Audio *_target)
{
	return _target->GetInterpolation ();
}


DllExport int
Audio_IsStereo (Urho3D::Audio *_target)
{
	return _target->IsStereo ();
}


DllExport int
Audio_IsPlaying (Urho3D::Audio *_target)
{
	return _target->IsPlaying ();
}


DllExport int
Audio_IsInitialized (Urho3D::Audio *_target)
{
	return _target->IsInitialized ();
}


DllExport float
Audio_GetMasterGain (Urho3D::Audio *_target, const char * type)
{
	return _target->GetMasterGain (Urho3D::String(type));
}


DllExport int
Audio_IsSoundTypePaused (Urho3D::Audio *_target, const char * type)
{
	return _target->IsSoundTypePaused (Urho3D::String(type));
}


DllExport Urho3D::SoundListener *
Audio_GetListener (Urho3D::Audio *_target)
{
	return _target->GetListener ();
}


DllExport int
Audio_HasMasterGain (Urho3D::Audio *_target, const char * type)
{
	return _target->HasMasterGain (Urho3D::String(type));
}


DllExport void
Audio_AddSoundSource (Urho3D::Audio *_target, Urho3D::SoundSource * soundSource)
{
	_target->AddSoundSource (soundSource);
}


DllExport void
Audio_RemoveSoundSource (Urho3D::Audio *_target, Urho3D::SoundSource * soundSource)
{
	_target->RemoveSoundSource (soundSource);
}


DllExport float
Audio_GetSoundSourceMasterGain (Urho3D::Audio *_target, int typeHash)
{
	return _target->GetSoundSourceMasterGain (Urho3D::StringHash(typeHash));
}


DllExport void
Audio_MixOutput (Urho3D::Audio *_target, void * dest, unsigned int samples)
{
	_target->MixOutput (dest, samples);
}


DllExport int
SoundStream_Seek (Urho3D::SoundStream *_target, unsigned int sample_number)
{
	return _target->Seek (sample_number);
}


DllExport unsigned int
SoundStream_GetData (Urho3D::SoundStream *_target, signed char * dest, unsigned int numBytes)
{
	return _target->GetData (dest, numBytes);
}


DllExport void
SoundStream_SetFormat (Urho3D::SoundStream *_target, unsigned int frequency, bool sixteenBit, bool stereo)
{
	_target->SetFormat (frequency, sixteenBit, stereo);
}


DllExport void
SoundStream_SetStopAtEnd (Urho3D::SoundStream *_target, bool enable)
{
	_target->SetStopAtEnd (enable);
}


DllExport unsigned int
SoundStream_GetSampleSize (Urho3D::SoundStream *_target)
{
	return _target->GetSampleSize ();
}


DllExport float
SoundStream_GetFrequency (Urho3D::SoundStream *_target)
{
	return _target->GetFrequency ();
}


DllExport unsigned int
SoundStream_GetIntFrequency (Urho3D::SoundStream *_target)
{
	return _target->GetIntFrequency ();
}


DllExport int
SoundStream_GetStopAtEnd (Urho3D::SoundStream *_target)
{
	return _target->GetStopAtEnd ();
}


DllExport int
SoundStream_IsSixteenBit (Urho3D::SoundStream *_target)
{
	return _target->IsSixteenBit ();
}


DllExport int
SoundStream_IsStereo (Urho3D::SoundStream *_target)
{
	return _target->IsStereo ();
}


DllExport void *
BufferedSoundStream_BufferedSoundStream ()
{
	return WeakPtr<BufferedSoundStream>(new BufferedSoundStream());
}


DllExport unsigned int
BufferedSoundStream_GetData (Urho3D::BufferedSoundStream *_target, signed char * dest, unsigned int numBytes)
{
	return _target->GetData (dest, numBytes);
}


DllExport void
BufferedSoundStream_AddData (Urho3D::BufferedSoundStream *_target, void * data, unsigned int numBytes)
{
	_target->AddData (data, numBytes);
}


DllExport void
BufferedSoundStream_Clear (Urho3D::BufferedSoundStream *_target)
{
	_target->Clear ();
}


DllExport unsigned int
BufferedSoundStream_GetBufferNumBytes (Urho3D::BufferedSoundStream *_target)
{
	return _target->GetBufferNumBytes ();
}


DllExport float
BufferedSoundStream_GetBufferLength (Urho3D::BufferedSoundStream *_target)
{
	return _target->GetBufferLength ();
}


DllExport void *
OggVorbisSoundStream_OggVorbisSoundStream (const class Urho3D::Sound * sound)
{
	return WeakPtr<OggVorbisSoundStream>(new OggVorbisSoundStream(sound));
}


DllExport int
OggVorbisSoundStream_Seek (Urho3D::OggVorbisSoundStream *_target, unsigned int sample_number)
{
	return _target->Seek (sample_number);
}


DllExport unsigned int
OggVorbisSoundStream_GetData (Urho3D::OggVorbisSoundStream *_target, signed char * dest, unsigned int numBytes)
{
	return _target->GetData (dest, numBytes);
}


DllExport int
Sound_GetType (Urho3D::Sound *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Sound_GetTypeName (Urho3D::Sound *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Sound_GetTypeStatic ()
{
	return (Sound::GetTypeStatic ()).Value ();
}


DllExport const char *
Sound_GetTypeNameStatic ()
{
	return stringdup((Sound::GetTypeNameStatic ()).CString ());
}


DllExport void *
Sound_Sound (Urho3D::Context * context)
{
	return WeakPtr<Sound>(new Sound(context));
}


DllExport void
Sound_RegisterObject (Urho3D::Context * context)
{
	Sound::RegisterObject (context);
}


DllExport int
Sound_BeginLoad_File (Urho3D::Sound *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Sound_BeginLoad_MemoryBuffer (Urho3D::Sound *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Sound_LoadRaw_File (Urho3D::Sound *_target, File * source)
{
	return _target->LoadRaw (*source);
}


DllExport int
Sound_LoadRaw_MemoryBuffer (Urho3D::Sound *_target, MemoryBuffer * source)
{
	return _target->LoadRaw (*source);
}


DllExport int
Sound_LoadWav_File (Urho3D::Sound *_target, File * source)
{
	return _target->LoadWav (*source);
}


DllExport int
Sound_LoadWav_MemoryBuffer (Urho3D::Sound *_target, MemoryBuffer * source)
{
	return _target->LoadWav (*source);
}


DllExport int
Sound_LoadOggVorbis_File (Urho3D::Sound *_target, File * source)
{
	return _target->LoadOggVorbis (*source);
}


DllExport int
Sound_LoadOggVorbis_MemoryBuffer (Urho3D::Sound *_target, MemoryBuffer * source)
{
	return _target->LoadOggVorbis (*source);
}


DllExport void
Sound_SetSize (Urho3D::Sound *_target, unsigned int dataSize)
{
	_target->SetSize (dataSize);
}


DllExport void
Sound_SetData (Urho3D::Sound *_target, const void * data, unsigned int dataSize)
{
	_target->SetData (data, dataSize);
}


DllExport void
Sound_SetFormat (Urho3D::Sound *_target, unsigned int frequency, bool sixteenBit, bool stereo)
{
	_target->SetFormat (frequency, sixteenBit, stereo);
}


DllExport void
Sound_SetLooped (Urho3D::Sound *_target, bool enable)
{
	_target->SetLooped (enable);
}


DllExport void
Sound_SetLoop (Urho3D::Sound *_target, unsigned int repeatOffset, unsigned int endOffset)
{
	_target->SetLoop (repeatOffset, endOffset);
}


DllExport Urho3D::SoundStream *
Sound_GetDecoderStream (Urho3D::Sound *_target)
{
	auto copy = _target->GetDecoderStream ();
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport signed char *
Sound_GetStart (Urho3D::Sound *_target)
{
	return _target->GetStart ();
}


DllExport signed char *
Sound_GetRepeat (Urho3D::Sound *_target)
{
	return _target->GetRepeat ();
}


DllExport signed char *
Sound_GetEnd (Urho3D::Sound *_target)
{
	return _target->GetEnd ();
}


DllExport float
Sound_GetLength (Urho3D::Sound *_target)
{
	return _target->GetLength ();
}


DllExport unsigned int
Sound_GetDataSize (Urho3D::Sound *_target)
{
	return _target->GetDataSize ();
}


DllExport unsigned int
Sound_GetSampleSize (Urho3D::Sound *_target)
{
	return _target->GetSampleSize ();
}


DllExport float
Sound_GetFrequency (Urho3D::Sound *_target)
{
	return _target->GetFrequency ();
}


DllExport unsigned int
Sound_GetIntFrequency (Urho3D::Sound *_target)
{
	return _target->GetIntFrequency ();
}


DllExport int
Sound_IsLooped (Urho3D::Sound *_target)
{
	return _target->IsLooped ();
}


DllExport int
Sound_IsSixteenBit (Urho3D::Sound *_target)
{
	return _target->IsSixteenBit ();
}


DllExport int
Sound_IsStereo (Urho3D::Sound *_target)
{
	return _target->IsStereo ();
}


DllExport int
Sound_IsCompressed (Urho3D::Sound *_target)
{
	return _target->IsCompressed ();
}


DllExport void
Sound_FixInterpolation (Urho3D::Sound *_target)
{
	_target->FixInterpolation ();
}


DllExport int
SoundListener_GetType (Urho3D::SoundListener *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
SoundListener_GetTypeName (Urho3D::SoundListener *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
SoundListener_GetTypeStatic ()
{
	return (SoundListener::GetTypeStatic ()).Value ();
}


DllExport const char *
SoundListener_GetTypeNameStatic ()
{
	return stringdup((SoundListener::GetTypeNameStatic ()).CString ());
}


DllExport void *
SoundListener_SoundListener (Urho3D::Context * context)
{
	return WeakPtr<SoundListener>(new SoundListener(context));
}


DllExport void
SoundListener_RegisterObject (Urho3D::Context * context)
{
	SoundListener::RegisterObject (context);
}


DllExport int
SoundSource_GetType (Urho3D::SoundSource *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
SoundSource_GetTypeName (Urho3D::SoundSource *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
SoundSource_GetTypeStatic ()
{
	return (SoundSource::GetTypeStatic ()).Value ();
}


DllExport const char *
SoundSource_GetTypeNameStatic ()
{
	return stringdup((SoundSource::GetTypeNameStatic ()).CString ());
}


DllExport void *
SoundSource_SoundSource (Urho3D::Context * context)
{
	return WeakPtr<SoundSource>(new SoundSource(context));
}


DllExport void
SoundSource_RegisterObject (Urho3D::Context * context)
{
	SoundSource::RegisterObject (context);
}


DllExport void
SoundSource_Seek (Urho3D::SoundSource *_target, float seekTime)
{
	_target->Seek (seekTime);
}


DllExport void
SoundSource_Play (Urho3D::SoundSource *_target, Urho3D::Sound * sound)
{
	_target->Play (sound);
}


DllExport void
SoundSource_Play0 (Urho3D::SoundSource *_target, Urho3D::Sound * sound, float frequency)
{
	_target->Play (sound, frequency);
}


DllExport void
SoundSource_Play1 (Urho3D::SoundSource *_target, Urho3D::Sound * sound, float frequency, float gain)
{
	_target->Play (sound, frequency, gain);
}


DllExport void
SoundSource_Play2 (Urho3D::SoundSource *_target, Urho3D::Sound * sound, float frequency, float gain, float panning)
{
	_target->Play (sound, frequency, gain, panning);
}


DllExport void
SoundSource_Play3 (Urho3D::SoundSource *_target, Urho3D::SoundStream * stream)
{
	_target->Play (stream);
}


DllExport void
SoundSource_Stop (Urho3D::SoundSource *_target)
{
	_target->Stop ();
}


DllExport void
SoundSource_SetSoundType (Urho3D::SoundSource *_target, const char * type)
{
	_target->SetSoundType (Urho3D::String(type));
}


DllExport void
SoundSource_SetFrequency (Urho3D::SoundSource *_target, float frequency)
{
	_target->SetFrequency (frequency);
}


DllExport void
SoundSource_SetGain (Urho3D::SoundSource *_target, float gain)
{
	_target->SetGain (gain);
}


DllExport void
SoundSource_SetAttenuation (Urho3D::SoundSource *_target, float attenuation)
{
	_target->SetAttenuation (attenuation);
}


DllExport void
SoundSource_SetPanning (Urho3D::SoundSource *_target, float panning)
{
	_target->SetPanning (panning);
}


DllExport void
SoundSource_SetAutoRemoveMode (Urho3D::SoundSource *_target, enum Urho3D::AutoRemoveMode mode)
{
	_target->SetAutoRemoveMode (mode);
}


DllExport void
SoundSource_SetPlayPosition (Urho3D::SoundSource *_target, signed char * pos)
{
	_target->SetPlayPosition (pos);
}


DllExport Urho3D::Sound *
SoundSource_GetSound (Urho3D::SoundSource *_target)
{
	return _target->GetSound ();
}


DllExport volatile signed char *
SoundSource_GetPlayPosition (Urho3D::SoundSource *_target)
{
	return _target->GetPlayPosition ();
}


DllExport const char *
SoundSource_GetSoundType (Urho3D::SoundSource *_target)
{
	return stringdup((_target->GetSoundType ()).CString ());
}


DllExport float
SoundSource_GetTimePosition (Urho3D::SoundSource *_target)
{
	return _target->GetTimePosition ();
}


DllExport float
SoundSource_GetFrequency (Urho3D::SoundSource *_target)
{
	return _target->GetFrequency ();
}


DllExport float
SoundSource_GetGain (Urho3D::SoundSource *_target)
{
	return _target->GetGain ();
}


DllExport float
SoundSource_GetAttenuation (Urho3D::SoundSource *_target)
{
	return _target->GetAttenuation ();
}


DllExport float
SoundSource_GetPanning (Urho3D::SoundSource *_target)
{
	return _target->GetPanning ();
}


DllExport enum Urho3D::AutoRemoveMode
SoundSource_GetAutoRemoveMode (Urho3D::SoundSource *_target)
{
	return _target->GetAutoRemoveMode ();
}


DllExport int
SoundSource_IsPlaying (Urho3D::SoundSource *_target)
{
	return _target->IsPlaying ();
}


DllExport void
SoundSource_Update (Urho3D::SoundSource *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
SoundSource_Mix (Urho3D::SoundSource *_target, int * dest, unsigned int samples, int mixRate, bool stereo, bool interpolation)
{
	_target->Mix (dest, samples, mixRate, stereo, interpolation);
}


DllExport void
SoundSource_UpdateMasterGain (Urho3D::SoundSource *_target)
{
	_target->UpdateMasterGain ();
}


DllExport void
SoundSource_SetPositionAttr (Urho3D::SoundSource *_target, int value)
{
	_target->SetPositionAttr (value);
}


DllExport Urho3D::ResourceRef
SoundSource_GetSoundAttr (Urho3D::SoundSource *_target)
{
	return _target->GetSoundAttr ();
}


DllExport void
SoundSource_SetPlayingAttr (Urho3D::SoundSource *_target, bool value)
{
	_target->SetPlayingAttr (value);
}


DllExport int
SoundSource_GetPositionAttr (Urho3D::SoundSource *_target)
{
	return _target->GetPositionAttr ();
}


DllExport int
SoundSource3D_GetType (Urho3D::SoundSource3D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
SoundSource3D_GetTypeName (Urho3D::SoundSource3D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
SoundSource3D_GetTypeStatic ()
{
	return (SoundSource3D::GetTypeStatic ()).Value ();
}


DllExport const char *
SoundSource3D_GetTypeNameStatic ()
{
	return stringdup((SoundSource3D::GetTypeNameStatic ()).CString ());
}


DllExport void *
SoundSource3D_SoundSource3D (Urho3D::Context * context)
{
	return WeakPtr<SoundSource3D>(new SoundSource3D(context));
}


DllExport void
SoundSource3D_RegisterObject (Urho3D::Context * context)
{
	SoundSource3D::RegisterObject (context);
}


DllExport void
SoundSource3D_DrawDebugGeometry (Urho3D::SoundSource3D *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
SoundSource3D_Update (Urho3D::SoundSource3D *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
SoundSource3D_SetDistanceAttenuation (Urho3D::SoundSource3D *_target, float nearDistance, float farDistance, float rolloffFactor)
{
	_target->SetDistanceAttenuation (nearDistance, farDistance, rolloffFactor);
}


DllExport void
SoundSource3D_SetAngleAttenuation (Urho3D::SoundSource3D *_target, float innerAngle, float outerAngle)
{
	_target->SetAngleAttenuation (innerAngle, outerAngle);
}


DllExport void
SoundSource3D_SetNearDistance (Urho3D::SoundSource3D *_target, float distance)
{
	_target->SetNearDistance (distance);
}


DllExport void
SoundSource3D_SetFarDistance (Urho3D::SoundSource3D *_target, float distance)
{
	_target->SetFarDistance (distance);
}


DllExport void
SoundSource3D_SetInnerAngle (Urho3D::SoundSource3D *_target, float angle)
{
	_target->SetInnerAngle (angle);
}


DllExport void
SoundSource3D_SetOuterAngle (Urho3D::SoundSource3D *_target, float angle)
{
	_target->SetOuterAngle (angle);
}


DllExport void
SoundSource3D_SetRolloffFactor (Urho3D::SoundSource3D *_target, float factor)
{
	_target->SetRolloffFactor (factor);
}


DllExport void
SoundSource3D_CalculateAttenuation (Urho3D::SoundSource3D *_target)
{
	_target->CalculateAttenuation ();
}


DllExport float
SoundSource3D_GetNearDistance (Urho3D::SoundSource3D *_target)
{
	return _target->GetNearDistance ();
}


DllExport float
SoundSource3D_GetFarDistance (Urho3D::SoundSource3D *_target)
{
	return _target->GetFarDistance ();
}


DllExport float
SoundSource3D_GetInnerAngle (Urho3D::SoundSource3D *_target)
{
	return _target->GetInnerAngle ();
}


DllExport float
SoundSource3D_GetOuterAngle (Urho3D::SoundSource3D *_target)
{
	return _target->GetOuterAngle ();
}


DllExport float
SoundSource3D_RollAngleoffFactor (Urho3D::SoundSource3D *_target)
{
	return _target->RollAngleoffFactor ();
}


DllExport void *
EventReceiverGroup_EventReceiverGroup ()
{
	return WeakPtr<EventReceiverGroup>(new EventReceiverGroup());
}


DllExport void
EventReceiverGroup_BeginSendEvent (Urho3D::EventReceiverGroup *_target)
{
	_target->BeginSendEvent ();
}


DllExport void
EventReceiverGroup_EndSendEvent (Urho3D::EventReceiverGroup *_target)
{
	_target->EndSendEvent ();
}


DllExport void
EventReceiverGroup_Add (Urho3D::EventReceiverGroup *_target, Urho3D::Object * object)
{
	_target->Add (object);
}


DllExport void
EventReceiverGroup_Remove (Urho3D::EventReceiverGroup *_target, Urho3D::Object * object)
{
	_target->Remove (object);
}


DllExport void *
Context_Context ()
{
	return WeakPtr<Context>(new Context());
}


DllExport Urho3D::Object *
Context_CreateObject (Urho3D::Context *_target, int objectType)
{
	auto copy = _target->CreateObject (Urho3D::StringHash(objectType));
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport void
Context_RegisterFactory (Urho3D::Context *_target, Urho3D::ObjectFactory * factory)
{
	_target->RegisterFactory (factory);
}


DllExport void
Context_RegisterSubsystem (Urho3D::Context *_target, Urho3D::Object * object)
{
	_target->RegisterSubsystem (object);
}


DllExport void
Context_RemoveSubsystem (Urho3D::Context *_target, int objectType)
{
	_target->RemoveSubsystem (Urho3D::StringHash(objectType));
}


DllExport void
Context_RemoveAllAttributes (Urho3D::Context *_target, int objectType)
{
	_target->RemoveAllAttributes (Urho3D::StringHash(objectType));
}


DllExport int
Context_RequireSDL (Urho3D::Context *_target, unsigned int sdlFlags)
{
	return _target->RequireSDL (sdlFlags);
}


DllExport void
Context_ReleaseSDL (Urho3D::Context *_target)
{
	_target->ReleaseSDL ();
}


DllExport void
Context_CopyBaseAttributes (Urho3D::Context *_target, int baseType, int derivedType)
{
	_target->CopyBaseAttributes (Urho3D::StringHash(baseType), Urho3D::StringHash(derivedType));
}


DllExport Urho3D::Object *
Context_GetSubsystem (Urho3D::Context *_target, int type)
{
	return _target->GetSubsystem (Urho3D::StringHash(type));
}


// Urho3D::Variant overloads begin:
DllExport Interop::Vector3
Context_GetGlobalVar_0 (Urho3D::Context *_target, int key)
{
	return *((Interop::Vector3 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetVector3()));
}

DllExport Interop::IntRect
Context_GetGlobalVar_1 (Urho3D::Context *_target, int key)
{
	return *((Interop::IntRect *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetIntRect()));
}

DllExport Interop::Color
Context_GetGlobalVar_2 (Urho3D::Context *_target, int key)
{
	return *((Interop::Color *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetColor()));
}

DllExport Interop::Vector2
Context_GetGlobalVar_3 (Urho3D::Context *_target, int key)
{
	return *((Interop::Vector2 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetVector2()));
}

DllExport Interop::Vector4
Context_GetGlobalVar_4 (Urho3D::Context *_target, int key)
{
	return *((Interop::Vector4 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetVector4()));
}

DllExport Interop::IntVector2
Context_GetGlobalVar_5 (Urho3D::Context *_target, int key)
{
	return *((Interop::IntVector2 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetIntVector2()));
}

DllExport Interop::Quaternion
Context_GetGlobalVar_6 (Urho3D::Context *_target, int key)
{
	return *((Interop::Quaternion *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetQuaternion()));
}

DllExport Interop::Matrix4
Context_GetGlobalVar_7 (Urho3D::Context *_target, int key)
{
	return *((Interop::Matrix4 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetMatrix4()));
}

DllExport Interop::Matrix3x4
Context_GetGlobalVar_8 (Urho3D::Context *_target, int key)
{
	return *((Interop::Matrix3x4 *) &(_target->GetGlobalVar (Urho3D::StringHash(key)).GetMatrix3x4()));
}

DllExport int
Context_GetGlobalVar_9 (Urho3D::Context *_target, int key)
{
	return (_target->GetGlobalVar (Urho3D::StringHash(key)).GetInt());
}

DllExport float
Context_GetGlobalVar_10 (Urho3D::Context *_target, int key)
{
	return (_target->GetGlobalVar (Urho3D::StringHash(key)).GetFloat());
}

DllExport const char *
Context_GetGlobalVar_11 (Urho3D::Context *_target, int key)
{
	return stringdup(_target->GetGlobalVar (Urho3D::StringHash(key)).GetString().CString());
}

DllExport bool
Context_GetGlobalVar_12 (Urho3D::Context *_target, int key)
{
	return (_target->GetGlobalVar (Urho3D::StringHash(key)).GetBool());
}

// Urho3D::Variant overloads end.
// Urho3D::Variant overloads begin:
DllExport void
Context_SetGlobalVar_0 (Urho3D::Context *_target, int key, const class Urho3D::Vector3 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_1 (Urho3D::Context *_target, int key, const class Urho3D::IntRect & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_2 (Urho3D::Context *_target, int key, const class Urho3D::Color & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_3 (Urho3D::Context *_target, int key, const class Urho3D::Vector2 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_4 (Urho3D::Context *_target, int key, const class Urho3D::Vector4 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_5 (Urho3D::Context *_target, int key, const class Urho3D::IntVector2 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_6 (Urho3D::Context *_target, int key, const class Urho3D::Quaternion & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_7 (Urho3D::Context *_target, int key, const class Urho3D::Matrix4 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_8 (Urho3D::Context *_target, int key, const class Urho3D::Matrix3x4 & value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_9 (Urho3D::Context *_target, int key, int value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_10 (Urho3D::Context *_target, int key, float value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

DllExport void
Context_SetGlobalVar_11 (Urho3D::Context *_target, int key, const char * value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), Urho3D::String(value));
}

DllExport void
Context_SetGlobalVar_12 (Urho3D::Context *_target, int key, bool value)
{
	_target->SetGlobalVar (Urho3D::StringHash(key), (value));
}

// Urho3D::Variant overloads end.
DllExport Urho3D::Object *
Context_GetEventSender (Urho3D::Context *_target)
{
	return _target->GetEventSender ();
}


DllExport Urho3D::EventHandler *
Context_GetEventHandler (Urho3D::Context *_target)
{
	return _target->GetEventHandler ();
}


DllExport const char *
Context_GetTypeName (Urho3D::Context *_target, int objectType)
{
	return stringdup((_target->GetTypeName (Urho3D::StringHash(objectType))).CString ());
}


DllExport Urho3D::EventReceiverGroup *
Context_GetEventReceivers (Urho3D::Context *_target, Urho3D::Object * sender, int eventType)
{
	return _target->GetEventReceivers (sender, Urho3D::StringHash(eventType));
}


DllExport Urho3D::EventReceiverGroup *
Context_GetEventReceivers0 (Urho3D::Context *_target, int eventType)
{
	return _target->GetEventReceivers (Urho3D::StringHash(eventType));
}


DllExport int
Profiler_GetType (Urho3D::Profiler *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Profiler_GetTypeName (Urho3D::Profiler *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Profiler_GetTypeStatic ()
{
	return (Profiler::GetTypeStatic ()).Value ();
}


DllExport const char *
Profiler_GetTypeNameStatic ()
{
	return stringdup((Profiler::GetTypeNameStatic ()).CString ());
}


DllExport void *
Profiler_Profiler (Urho3D::Context * context)
{
	return WeakPtr<Profiler>(new Profiler(context));
}


DllExport void
Profiler_EndBlock (Urho3D::Profiler *_target)
{
	_target->EndBlock ();
}


DllExport void
Profiler_BeginFrame (Urho3D::Profiler *_target)
{
	_target->BeginFrame ();
}


DllExport void
Profiler_EndFrame (Urho3D::Profiler *_target)
{
	_target->EndFrame ();
}


DllExport void
Profiler_BeginInterval (Urho3D::Profiler *_target)
{
	_target->BeginInterval ();
}


DllExport const char *
Profiler_PrintData (Urho3D::Profiler *_target, bool showUnused, bool showTotal, unsigned int maxDepth)
{
	return stringdup((_target->PrintData (showUnused, showTotal, maxDepth)).CString ());
}


DllExport const class Urho3D::ProfilerBlock *
Profiler_GetCurrentBlock (Urho3D::Profiler *_target)
{
	return _target->GetCurrentBlock ();
}


DllExport const class Urho3D::ProfilerBlock *
Profiler_GetRootBlock (Urho3D::Profiler *_target)
{
	return _target->GetRootBlock ();
}


DllExport void *
Spline_Spline ()
{
	return new Spline();
}


DllExport void *
Spline_Spline0 (enum Urho3D::InterpolationMode mode)
{
	return new Spline(mode);
}


DllExport enum Urho3D::InterpolationMode
Spline_GetInterpolationMode (Urho3D::Spline *_target)
{
	return _target->GetInterpolationMode ();
}


DllExport Urho3D::Variant
Spline_GetKnot (Urho3D::Spline *_target, unsigned int index)
{
	return _target->GetKnot (index);
}


DllExport Urho3D::Variant
Spline_GetPoint (Urho3D::Spline *_target, float f)
{
	return _target->GetPoint (f);
}


DllExport void
Spline_SetInterpolationMode (Urho3D::Spline *_target, enum Urho3D::InterpolationMode interpolationMode)
{
	_target->SetInterpolationMode (interpolationMode);
}


// Urho3D::Variant overloads begin:
DllExport void
Spline_SetKnot_0 (Urho3D::Spline *_target, const class Urho3D::Vector3 & knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_1 (Urho3D::Spline *_target, const class Urho3D::IntRect & knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_2 (Urho3D::Spline *_target, const class Urho3D::Color & knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_3 (Urho3D::Spline *_target, const class Urho3D::Vector2 & knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_4 (Urho3D::Spline *_target, const class Urho3D::Vector4 & knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_5 (Urho3D::Spline *_target, const class Urho3D::IntVector2 & knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_6 (Urho3D::Spline *_target, const class Urho3D::Quaternion & knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_7 (Urho3D::Spline *_target, const class Urho3D::Matrix4 & knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_8 (Urho3D::Spline *_target, const class Urho3D::Matrix3x4 & knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_9 (Urho3D::Spline *_target, int knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_10 (Urho3D::Spline *_target, float knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

DllExport void
Spline_SetKnot_11 (Urho3D::Spline *_target, const char * knot, unsigned int index)
{
	_target->SetKnot (Urho3D::String(knot), index);
}

DllExport void
Spline_SetKnot_12 (Urho3D::Spline *_target, bool knot, unsigned int index)
{
	_target->SetKnot ((knot), index);
}

// Urho3D::Variant overloads end.
// Urho3D::Variant overloads begin:
DllExport void
Spline_AddKnot_0 (Urho3D::Spline *_target, const class Urho3D::Vector3 & knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_1 (Urho3D::Spline *_target, const class Urho3D::IntRect & knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_2 (Urho3D::Spline *_target, const class Urho3D::Color & knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_3 (Urho3D::Spline *_target, const class Urho3D::Vector2 & knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_4 (Urho3D::Spline *_target, const class Urho3D::Vector4 & knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_5 (Urho3D::Spline *_target, const class Urho3D::IntVector2 & knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_6 (Urho3D::Spline *_target, const class Urho3D::Quaternion & knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_7 (Urho3D::Spline *_target, const class Urho3D::Matrix4 & knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_8 (Urho3D::Spline *_target, const class Urho3D::Matrix3x4 & knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_9 (Urho3D::Spline *_target, int knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_10 (Urho3D::Spline *_target, float knot)
{
	_target->AddKnot ((knot));
}

DllExport void
Spline_AddKnot_11 (Urho3D::Spline *_target, const char * knot)
{
	_target->AddKnot (Urho3D::String(knot));
}

DllExport void
Spline_AddKnot_12 (Urho3D::Spline *_target, bool knot)
{
	_target->AddKnot ((knot));
}

// Urho3D::Variant overloads end.
// Urho3D::Variant overloads begin:
DllExport void
Spline_AddKnot1_0 (Urho3D::Spline *_target, const class Urho3D::Vector3 & knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_1 (Urho3D::Spline *_target, const class Urho3D::IntRect & knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_2 (Urho3D::Spline *_target, const class Urho3D::Color & knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_3 (Urho3D::Spline *_target, const class Urho3D::Vector2 & knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_4 (Urho3D::Spline *_target, const class Urho3D::Vector4 & knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_5 (Urho3D::Spline *_target, const class Urho3D::IntVector2 & knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_6 (Urho3D::Spline *_target, const class Urho3D::Quaternion & knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_7 (Urho3D::Spline *_target, const class Urho3D::Matrix4 & knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_8 (Urho3D::Spline *_target, const class Urho3D::Matrix3x4 & knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_9 (Urho3D::Spline *_target, int knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_10 (Urho3D::Spline *_target, float knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

DllExport void
Spline_AddKnot1_11 (Urho3D::Spline *_target, const char * knot, unsigned int index)
{
	_target->AddKnot (Urho3D::String(knot), index);
}

DllExport void
Spline_AddKnot1_12 (Urho3D::Spline *_target, bool knot, unsigned int index)
{
	_target->AddKnot ((knot), index);
}

// Urho3D::Variant overloads end.
DllExport void
Spline_RemoveKnot (Urho3D::Spline *_target)
{
	_target->RemoveKnot ();
}


DllExport void
Spline_RemoveKnot2 (Urho3D::Spline *_target, unsigned int index)
{
	_target->RemoveKnot (index);
}


DllExport void
Spline_Clear (Urho3D::Spline *_target)
{
	_target->Clear ();
}


DllExport int
WorkQueue_GetType (Urho3D::WorkQueue *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
WorkQueue_GetTypeName (Urho3D::WorkQueue *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
WorkQueue_GetTypeStatic ()
{
	return (WorkQueue::GetTypeStatic ()).Value ();
}


DllExport const char *
WorkQueue_GetTypeNameStatic ()
{
	return stringdup((WorkQueue::GetTypeNameStatic ()).CString ());
}


DllExport void *
WorkQueue_WorkQueue (Urho3D::Context * context)
{
	return WeakPtr<WorkQueue>(new WorkQueue(context));
}


DllExport void
WorkQueue_CreateThreads (Urho3D::WorkQueue *_target, unsigned int numThreads)
{
	_target->CreateThreads (numThreads);
}


DllExport Urho3D::WorkItem *
WorkQueue_GetFreeItem (Urho3D::WorkQueue *_target)
{
	auto copy = _target->GetFreeItem ();
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport void
WorkQueue_Pause (Urho3D::WorkQueue *_target)
{
	_target->Pause ();
}


DllExport void
WorkQueue_Resume (Urho3D::WorkQueue *_target)
{
	_target->Resume ();
}


DllExport void
WorkQueue_Complete (Urho3D::WorkQueue *_target, unsigned int priority)
{
	_target->Complete (priority);
}


DllExport void
WorkQueue_SetTolerance (Urho3D::WorkQueue *_target, int tolerance)
{
	_target->SetTolerance (tolerance);
}


DllExport void
WorkQueue_SetNonThreadedWorkMs (Urho3D::WorkQueue *_target, int ms)
{
	_target->SetNonThreadedWorkMs (ms);
}


DllExport unsigned int
WorkQueue_GetNumThreads (Urho3D::WorkQueue *_target)
{
	return _target->GetNumThreads ();
}


DllExport int
WorkQueue_IsCompleted (Urho3D::WorkQueue *_target, unsigned int priority)
{
	return _target->IsCompleted (priority);
}


DllExport int
WorkQueue_IsCompleting (Urho3D::WorkQueue *_target)
{
	return _target->IsCompleting ();
}


DllExport int
WorkQueue_GetTolerance (Urho3D::WorkQueue *_target)
{
	return _target->GetTolerance ();
}


DllExport int
WorkQueue_GetNonThreadedWorkMs (Urho3D::WorkQueue *_target)
{
	return _target->GetNonThreadedWorkMs ();
}


DllExport int
Engine_GetType (Urho3D::Engine *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Engine_GetTypeName (Urho3D::Engine *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Engine_GetTypeStatic ()
{
	return (Engine::GetTypeStatic ()).Value ();
}


DllExport const char *
Engine_GetTypeNameStatic ()
{
	return stringdup((Engine::GetTypeNameStatic ()).CString ());
}


DllExport void *
Engine_Engine (Urho3D::Context * context)
{
	return WeakPtr<Engine>(new Engine(context));
}


DllExport int
Engine_RunFrame (Urho3D::Engine *_target)
{
	return _target->RunFrame ();
}


DllExport Urho3D::Console *
Engine_CreateConsole (Urho3D::Engine *_target)
{
	return _target->CreateConsole ();
}


DllExport Urho3D::DebugHud *
Engine_CreateDebugHud (Urho3D::Engine *_target)
{
	return _target->CreateDebugHud ();
}


DllExport void
Engine_SetMinFps (Urho3D::Engine *_target, int fps)
{
	_target->SetMinFps (fps);
}


DllExport void
Engine_SetMaxFps (Urho3D::Engine *_target, int fps)
{
	_target->SetMaxFps (fps);
}


DllExport void
Engine_SetMaxInactiveFps (Urho3D::Engine *_target, int fps)
{
	_target->SetMaxInactiveFps (fps);
}


DllExport void
Engine_SetTimeStepSmoothing (Urho3D::Engine *_target, int frames)
{
	_target->SetTimeStepSmoothing (frames);
}


DllExport void
Engine_SetPauseMinimized (Urho3D::Engine *_target, bool enable)
{
	_target->SetPauseMinimized (enable);
}


DllExport void
Engine_SetAutoExit (Urho3D::Engine *_target, bool enable)
{
	_target->SetAutoExit (enable);
}


DllExport void
Engine_SetNextTimeStep (Urho3D::Engine *_target, float seconds)
{
	_target->SetNextTimeStep (seconds);
}


DllExport void
Engine_Exit (Urho3D::Engine *_target)
{
	_target->Exit ();
}


DllExport void
Engine_DumpProfiler (Urho3D::Engine *_target)
{
	_target->DumpProfiler ();
}


DllExport void
Engine_DumpResources (Urho3D::Engine *_target, bool dumpFileName)
{
	_target->DumpResources (dumpFileName);
}


DllExport void
Engine_DumpMemory (Urho3D::Engine *_target)
{
	_target->DumpMemory ();
}


DllExport float
Engine_GetNextTimeStep (Urho3D::Engine *_target)
{
	return _target->GetNextTimeStep ();
}


DllExport int
Engine_GetMinFps (Urho3D::Engine *_target)
{
	return _target->GetMinFps ();
}


DllExport int
Engine_GetMaxFps (Urho3D::Engine *_target)
{
	return _target->GetMaxFps ();
}


DllExport int
Engine_GetMaxInactiveFps (Urho3D::Engine *_target)
{
	return _target->GetMaxInactiveFps ();
}


DllExport int
Engine_GetTimeStepSmoothing (Urho3D::Engine *_target)
{
	return _target->GetTimeStepSmoothing ();
}


DllExport int
Engine_GetPauseMinimized (Urho3D::Engine *_target)
{
	return _target->GetPauseMinimized ();
}


DllExport int
Engine_GetAutoExit (Urho3D::Engine *_target)
{
	return _target->GetAutoExit ();
}


DllExport int
Engine_IsInitialized (Urho3D::Engine *_target)
{
	return _target->IsInitialized ();
}


DllExport int
Engine_IsExiting (Urho3D::Engine *_target)
{
	return _target->IsExiting ();
}


DllExport int
Engine_IsHeadless (Urho3D::Engine *_target)
{
	return _target->IsHeadless ();
}


DllExport void
Engine_Update (Urho3D::Engine *_target)
{
	_target->Update ();
}


DllExport void
Engine_Render (Urho3D::Engine *_target)
{
	_target->Render ();
}


DllExport int
Engine_ApplyFrameLimit (Urho3D::Engine *_target)
{
	return _target->ApplyFrameLimit ();
}


DllExport int
Application_GetType (Urho3D::Application *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Application_GetTypeName (Urho3D::Application *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Application_GetTypeStatic ()
{
	return (Application::GetTypeStatic ()).Value ();
}


DllExport const char *
Application_GetTypeNameStatic ()
{
	return stringdup((Application::GetTypeNameStatic ()).CString ());
}


DllExport int
Application_Run (Urho3D::Application *_target)
{
	return _target->Run ();
}


DllExport void
Application_ErrorExit (Urho3D::Application *_target, const char * message)
{
	_target->ErrorExit (Urho3D::String(message));
}


DllExport int
UrhoConsole_GetType (Urho3D::Console *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
UrhoConsole_GetTypeName (Urho3D::Console *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
UrhoConsole_GetTypeStatic ()
{
	return (Console::GetTypeStatic ()).Value ();
}


DllExport const char *
UrhoConsole_GetTypeNameStatic ()
{
	return stringdup((Console::GetTypeNameStatic ()).CString ());
}


DllExport void *
UrhoConsole_Console (Urho3D::Context * context)
{
	return WeakPtr<Console>(new Console(context));
}


DllExport void
UrhoConsole_SetDefaultStyle (Urho3D::Console *_target, Urho3D::XMLFile * style)
{
	_target->SetDefaultStyle (style);
}


DllExport void
UrhoConsole_SetVisible (Urho3D::Console *_target, bool enable)
{
	_target->SetVisible (enable);
}


DllExport void
UrhoConsole_Toggle (Urho3D::Console *_target)
{
	_target->Toggle ();
}


DllExport void
UrhoConsole_SetAutoVisibleOnError (Urho3D::Console *_target, bool enable)
{
	_target->SetAutoVisibleOnError (enable);
}


DllExport void
UrhoConsole_SetCommandInterpreter (Urho3D::Console *_target, const char * interpreter)
{
	_target->SetCommandInterpreter (Urho3D::String(interpreter));
}


DllExport void
UrhoConsole_SetNumBufferedRows (Urho3D::Console *_target, unsigned int rows)
{
	_target->SetNumBufferedRows (rows);
}


DllExport void
UrhoConsole_SetNumRows (Urho3D::Console *_target, unsigned int rows)
{
	_target->SetNumRows (rows);
}


DllExport void
UrhoConsole_SetNumHistoryRows (Urho3D::Console *_target, unsigned int rows)
{
	_target->SetNumHistoryRows (rows);
}


DllExport void
UrhoConsole_SetFocusOnShow (Urho3D::Console *_target, bool enable)
{
	_target->SetFocusOnShow (enable);
}


DllExport void
UrhoConsole_AddAutoComplete (Urho3D::Console *_target, const char * option)
{
	_target->AddAutoComplete (Urho3D::String(option));
}


DllExport void
UrhoConsole_RemoveAutoComplete (Urho3D::Console *_target, const char * option)
{
	_target->RemoveAutoComplete (Urho3D::String(option));
}


DllExport void
UrhoConsole_UpdateElements (Urho3D::Console *_target)
{
	_target->UpdateElements ();
}


DllExport Urho3D::XMLFile *
UrhoConsole_GetDefaultStyle (Urho3D::Console *_target)
{
	return _target->GetDefaultStyle ();
}


DllExport Urho3D::BorderImage *
UrhoConsole_GetBackground (Urho3D::Console *_target)
{
	return _target->GetBackground ();
}


DllExport Urho3D::LineEdit *
UrhoConsole_GetLineEdit (Urho3D::Console *_target)
{
	return _target->GetLineEdit ();
}


DllExport Urho3D::Button *
UrhoConsole_GetCloseButton (Urho3D::Console *_target)
{
	return _target->GetCloseButton ();
}


DllExport int
UrhoConsole_IsVisible (Urho3D::Console *_target)
{
	return _target->IsVisible ();
}


DllExport int
UrhoConsole_IsAutoVisibleOnError (Urho3D::Console *_target)
{
	return _target->IsAutoVisibleOnError ();
}


DllExport const char *
UrhoConsole_GetCommandInterpreter (Urho3D::Console *_target)
{
	return stringdup((_target->GetCommandInterpreter ()).CString ());
}


DllExport unsigned int
UrhoConsole_GetNumBufferedRows (Urho3D::Console *_target)
{
	return _target->GetNumBufferedRows ();
}


DllExport unsigned int
UrhoConsole_GetNumRows (Urho3D::Console *_target)
{
	return _target->GetNumRows ();
}


DllExport void
UrhoConsole_CopySelectedRows (Urho3D::Console *_target)
{
	_target->CopySelectedRows ();
}


DllExport unsigned int
UrhoConsole_GetNumHistoryRows (Urho3D::Console *_target)
{
	return _target->GetNumHistoryRows ();
}


DllExport unsigned int
UrhoConsole_GetHistoryPosition (Urho3D::Console *_target)
{
	return _target->GetHistoryPosition ();
}


DllExport const char *
UrhoConsole_GetHistoryRow (Urho3D::Console *_target, unsigned int index)
{
	return stringdup((_target->GetHistoryRow (index)).CString ());
}


DllExport int
UrhoConsole_GetFocusOnShow (Urho3D::Console *_target)
{
	return _target->GetFocusOnShow ();
}


DllExport int
DebugHud_GetType (Urho3D::DebugHud *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
DebugHud_GetTypeName (Urho3D::DebugHud *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
DebugHud_GetTypeStatic ()
{
	return (DebugHud::GetTypeStatic ()).Value ();
}


DllExport const char *
DebugHud_GetTypeNameStatic ()
{
	return stringdup((DebugHud::GetTypeNameStatic ()).CString ());
}


DllExport void *
DebugHud_DebugHud (Urho3D::Context * context)
{
	return WeakPtr<DebugHud>(new DebugHud(context));
}


DllExport void
DebugHud_Update (Urho3D::DebugHud *_target)
{
	_target->Update ();
}


DllExport void
DebugHud_SetDefaultStyle (Urho3D::DebugHud *_target, Urho3D::XMLFile * style)
{
	_target->SetDefaultStyle (style);
}


DllExport void
DebugHud_SetMode (Urho3D::DebugHud *_target, unsigned int mode)
{
	_target->SetMode (mode);
}


DllExport void
DebugHud_SetProfilerMaxDepth (Urho3D::DebugHud *_target, unsigned int depth)
{
	_target->SetProfilerMaxDepth (depth);
}


DllExport void
DebugHud_SetProfilerInterval (Urho3D::DebugHud *_target, float interval)
{
	_target->SetProfilerInterval (interval);
}


DllExport void
DebugHud_SetUseRendererStats (Urho3D::DebugHud *_target, bool enable)
{
	_target->SetUseRendererStats (enable);
}


DllExport void
DebugHud_Toggle (Urho3D::DebugHud *_target, unsigned int mode)
{
	_target->Toggle (mode);
}


DllExport void
DebugHud_ToggleAll (Urho3D::DebugHud *_target)
{
	_target->ToggleAll ();
}


DllExport Urho3D::XMLFile *
DebugHud_GetDefaultStyle (Urho3D::DebugHud *_target)
{
	return _target->GetDefaultStyle ();
}


DllExport Urho3D::Text *
DebugHud_GetStatsText (Urho3D::DebugHud *_target)
{
	return _target->GetStatsText ();
}


DllExport Urho3D::Text *
DebugHud_GetModeText (Urho3D::DebugHud *_target)
{
	return _target->GetModeText ();
}


DllExport Urho3D::Text *
DebugHud_GetProfilerText (Urho3D::DebugHud *_target)
{
	return _target->GetProfilerText ();
}


DllExport Urho3D::Text *
DebugHud_GetMemoryText (Urho3D::DebugHud *_target)
{
	return _target->GetMemoryText ();
}


DllExport unsigned int
DebugHud_GetMode (Urho3D::DebugHud *_target)
{
	return _target->GetMode ();
}


DllExport unsigned int
DebugHud_GetProfilerMaxDepth (Urho3D::DebugHud *_target)
{
	return _target->GetProfilerMaxDepth ();
}


DllExport float
DebugHud_GetProfilerInterval (Urho3D::DebugHud *_target)
{
	return _target->GetProfilerInterval ();
}


DllExport int
DebugHud_GetUseRendererStats (Urho3D::DebugHud *_target)
{
	return _target->GetUseRendererStats ();
}


DllExport void
DebugHud_SetAppStats (Urho3D::DebugHud *_target, const char * label, const char * stats)
{
	_target->SetAppStats (Urho3D::String(label), Urho3D::String(stats));
}


DllExport int
DebugHud_ResetAppStats (Urho3D::DebugHud *_target, const char * label)
{
	return _target->ResetAppStats (Urho3D::String(label));
}


DllExport void
DebugHud_ClearAppStats (Urho3D::DebugHud *_target)
{
	_target->ClearAppStats ();
}


DllExport int
Node_GetType (Urho3D::Node *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Node_GetTypeName (Urho3D::Node *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Node_GetTypeStatic ()
{
	return (Node::GetTypeStatic ()).Value ();
}


DllExport const char *
Node_GetTypeNameStatic ()
{
	return stringdup((Node::GetTypeNameStatic ()).CString ());
}


DllExport void *
Node_Node (Urho3D::Context * context)
{
	return WeakPtr<Node>(new Node(context));
}


DllExport void
Node_RegisterObject (Urho3D::Context * context)
{
	Node::RegisterObject (context);
}


DllExport int
Node_Load_File (Urho3D::Node *_target, File * source)
{
	return _target->Load (*source);
}


DllExport int
Node_Load_MemoryBuffer (Urho3D::Node *_target, MemoryBuffer * source)
{
	return _target->Load (*source);
}


DllExport int
Node_LoadXML (Urho3D::Node *_target, const class Urho3D::XMLElement & source)
{
	return _target->LoadXML (source);
}


DllExport int
Node_Save_File (Urho3D::Node *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Node_Save_MemoryBuffer (Urho3D::Node *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
Node_SaveXML (Urho3D::Node *_target, Urho3D::XMLElement & dest)
{
	return _target->SaveXML (dest);
}


DllExport void
Node_ApplyAttributes (Urho3D::Node *_target)
{
	_target->ApplyAttributes ();
}


DllExport int
Node_SaveDefaultAttributes (Urho3D::Node *_target)
{
	return _target->SaveDefaultAttributes ();
}


DllExport void
Node_MarkNetworkUpdate (Urho3D::Node *_target)
{
	_target->MarkNetworkUpdate ();
}


DllExport void
Node_AddReplicationState (Urho3D::Node *_target, Urho3D::NodeReplicationState * state)
{
	_target->AddReplicationState (state);
}


DllExport int
Node_SaveXML0_File (Urho3D::Node *_target, File * dest, const char * indentation)
{
	return _target->SaveXML (*dest, Urho3D::String(indentation));
}


DllExport int
Node_SaveXML0_MemoryBuffer (Urho3D::Node *_target, MemoryBuffer * dest, const char * indentation)
{
	return _target->SaveXML (*dest, Urho3D::String(indentation));
}


DllExport int
Node_SaveJSON_File (Urho3D::Node *_target, File * dest, const char * indentation)
{
	return _target->SaveJSON (*dest, Urho3D::String(indentation));
}


DllExport int
Node_SaveJSON_MemoryBuffer (Urho3D::Node *_target, MemoryBuffer * dest, const char * indentation)
{
	return _target->SaveJSON (*dest, Urho3D::String(indentation));
}


DllExport void
Node_SetName (Urho3D::Node *_target, const char * name)
{
	_target->SetName (Urho3D::String(name));
}


DllExport void
Node_AddTag (Urho3D::Node *_target, const char * tag)
{
	_target->AddTag (Urho3D::String(tag));
}


DllExport int
Node_RemoveTag (Urho3D::Node *_target, const char * tag)
{
	return _target->RemoveTag (Urho3D::String(tag));
}


DllExport void
Node_RemoveAllTags (Urho3D::Node *_target)
{
	_target->RemoveAllTags ();
}


DllExport void
Node_SetPosition (Urho3D::Node *_target, const class Urho3D::Vector3 & position)
{
	_target->SetPosition (position);
}


DllExport void
Node_SetPosition2D (Urho3D::Node *_target, const class Urho3D::Vector2 & position)
{
	_target->SetPosition2D (position);
}


DllExport void
Node_SetPosition2D1 (Urho3D::Node *_target, float x, float y)
{
	_target->SetPosition2D (x, y);
}


DllExport void
Node_SetRotation (Urho3D::Node *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetRotation (rotation);
}


DllExport void
Node_SetRotation2D (Urho3D::Node *_target, float rotation)
{
	_target->SetRotation2D (rotation);
}


DllExport void
Node_SetDirection (Urho3D::Node *_target, const class Urho3D::Vector3 & direction)
{
	_target->SetDirection (direction);
}


DllExport void
Node_SetScale (Urho3D::Node *_target, float scale)
{
	_target->SetScale (scale);
}


DllExport void
Node_SetScale2 (Urho3D::Node *_target, const class Urho3D::Vector3 & scale)
{
	_target->SetScale (scale);
}


DllExport void
Node_SetScale2D (Urho3D::Node *_target, const class Urho3D::Vector2 & scale)
{
	_target->SetScale2D (scale);
}


DllExport void
Node_SetScale2D3 (Urho3D::Node *_target, float x, float y)
{
	_target->SetScale2D (x, y);
}


DllExport void
Node_SetTransform (Urho3D::Node *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetTransform (position, rotation);
}


DllExport void
Node_SetTransform4 (Urho3D::Node *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, float scale)
{
	_target->SetTransform (position, rotation, scale);
}


DllExport void
Node_SetTransform5 (Urho3D::Node *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, const class Urho3D::Vector3 & scale)
{
	_target->SetTransform (position, rotation, scale);
}


DllExport void
Node_SetTransform6 (Urho3D::Node *_target, const class Urho3D::Matrix3x4 & matrix)
{
	_target->SetTransform (matrix);
}


DllExport void
Node_SetTransform2D (Urho3D::Node *_target, const class Urho3D::Vector2 & position, float rotation)
{
	_target->SetTransform2D (position, rotation);
}


DllExport void
Node_SetTransform2D7 (Urho3D::Node *_target, const class Urho3D::Vector2 & position, float rotation, float scale)
{
	_target->SetTransform2D (position, rotation, scale);
}


DllExport void
Node_SetTransform2D8 (Urho3D::Node *_target, const class Urho3D::Vector2 & position, float rotation, const class Urho3D::Vector2 & scale)
{
	_target->SetTransform2D (position, rotation, scale);
}


DllExport void
Node_SetWorldPosition (Urho3D::Node *_target, const class Urho3D::Vector3 & position)
{
	_target->SetWorldPosition (position);
}


DllExport void
Node_SetWorldPosition2D (Urho3D::Node *_target, const class Urho3D::Vector2 & position)
{
	_target->SetWorldPosition2D (position);
}


DllExport void
Node_SetWorldPosition2D9 (Urho3D::Node *_target, float x, float y)
{
	_target->SetWorldPosition2D (x, y);
}


DllExport void
Node_SetWorldRotation (Urho3D::Node *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetWorldRotation (rotation);
}


DllExport void
Node_SetWorldRotation2D (Urho3D::Node *_target, float rotation)
{
	_target->SetWorldRotation2D (rotation);
}


DllExport void
Node_SetWorldDirection (Urho3D::Node *_target, const class Urho3D::Vector3 & direction)
{
	_target->SetWorldDirection (direction);
}


DllExport void
Node_SetWorldScale (Urho3D::Node *_target, float scale)
{
	_target->SetWorldScale (scale);
}


DllExport void
Node_SetWorldScale10 (Urho3D::Node *_target, const class Urho3D::Vector3 & scale)
{
	_target->SetWorldScale (scale);
}


DllExport void
Node_SetWorldScale2D (Urho3D::Node *_target, const class Urho3D::Vector2 & scale)
{
	_target->SetWorldScale2D (scale);
}


DllExport void
Node_SetWorldScale2D11 (Urho3D::Node *_target, float x, float y)
{
	_target->SetWorldScale2D (x, y);
}


DllExport void
Node_SetWorldTransform (Urho3D::Node *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetWorldTransform (position, rotation);
}


DllExport void
Node_SetWorldTransform12 (Urho3D::Node *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, float scale)
{
	_target->SetWorldTransform (position, rotation, scale);
}


DllExport void
Node_SetWorldTransform13 (Urho3D::Node *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, const class Urho3D::Vector3 & scale)
{
	_target->SetWorldTransform (position, rotation, scale);
}


DllExport void
Node_SetWorldTransform14 (Urho3D::Node *_target, const class Urho3D::Matrix3x4 & worldTransform)
{
	_target->SetWorldTransform (worldTransform);
}


DllExport void
Node_SetWorldTransform2D (Urho3D::Node *_target, const class Urho3D::Vector2 & position, float rotation)
{
	_target->SetWorldTransform2D (position, rotation);
}


DllExport void
Node_SetWorldTransform2D15 (Urho3D::Node *_target, const class Urho3D::Vector2 & position, float rotation, float scale)
{
	_target->SetWorldTransform2D (position, rotation, scale);
}


DllExport void
Node_SetWorldTransform2D16 (Urho3D::Node *_target, const class Urho3D::Vector2 & position, float rotation, const class Urho3D::Vector2 & scale)
{
	_target->SetWorldTransform2D (position, rotation, scale);
}


DllExport void
Node_Translate (Urho3D::Node *_target, const class Urho3D::Vector3 & delta, enum Urho3D::TransformSpace space)
{
	_target->Translate (delta, space);
}


DllExport void
Node_Translate2D (Urho3D::Node *_target, const class Urho3D::Vector2 & delta, enum Urho3D::TransformSpace space)
{
	_target->Translate2D (delta, space);
}


DllExport void
Node_Rotate (Urho3D::Node *_target, const class Urho3D::Quaternion & delta, enum Urho3D::TransformSpace space)
{
	_target->Rotate (delta, space);
}


DllExport void
Node_Rotate2D (Urho3D::Node *_target, float delta, enum Urho3D::TransformSpace space)
{
	_target->Rotate2D (delta, space);
}


DllExport void
Node_RotateAround (Urho3D::Node *_target, const class Urho3D::Vector3 & point, const class Urho3D::Quaternion & delta, enum Urho3D::TransformSpace space)
{
	_target->RotateAround (point, delta, space);
}


DllExport void
Node_RotateAround2D (Urho3D::Node *_target, const class Urho3D::Vector2 & point, float delta, enum Urho3D::TransformSpace space)
{
	_target->RotateAround2D (point, delta, space);
}


DllExport void
Node_Pitch (Urho3D::Node *_target, float angle, enum Urho3D::TransformSpace space)
{
	_target->Pitch (angle, space);
}


DllExport void
Node_Yaw (Urho3D::Node *_target, float angle, enum Urho3D::TransformSpace space)
{
	_target->Yaw (angle, space);
}


DllExport void
Node_Roll (Urho3D::Node *_target, float angle, enum Urho3D::TransformSpace space)
{
	_target->Roll (angle, space);
}


DllExport int
Node_LookAt (Urho3D::Node *_target, const class Urho3D::Vector3 & target, const class Urho3D::Vector3 & up, enum Urho3D::TransformSpace space)
{
	return _target->LookAt (target, up, space);
}


DllExport void
Node_Scale (Urho3D::Node *_target, float scale)
{
	_target->Scale (scale);
}


DllExport void
Node_Scale17 (Urho3D::Node *_target, const class Urho3D::Vector3 & scale)
{
	_target->Scale (scale);
}


DllExport void
Node_Scale2D (Urho3D::Node *_target, const class Urho3D::Vector2 & scale)
{
	_target->Scale2D (scale);
}


DllExport void
Node_SetEnabled (Urho3D::Node *_target, bool enable)
{
	_target->SetEnabled (enable);
}


DllExport void
Node_SetDeepEnabled (Urho3D::Node *_target, bool enable)
{
	_target->SetDeepEnabled (enable);
}


DllExport void
Node_ResetDeepEnabled (Urho3D::Node *_target)
{
	_target->ResetDeepEnabled ();
}


DllExport void
Node_SetEnabledRecursive (Urho3D::Node *_target, bool enable)
{
	_target->SetEnabledRecursive (enable);
}


DllExport void
Node_SetOwner (Urho3D::Node *_target, Urho3D::Connection * owner)
{
	_target->SetOwner (owner);
}


DllExport void
Node_MarkDirty (Urho3D::Node *_target)
{
	_target->MarkDirty ();
}


DllExport Urho3D::Node *
Node_CreateChild (Urho3D::Node *_target, const char * name, enum Urho3D::CreateMode mode, unsigned int id, bool temporary)
{
	return _target->CreateChild (Urho3D::String(name), mode, id, temporary);
}


DllExport Urho3D::Node *
Node_CreateTemporaryChild (Urho3D::Node *_target, const char * name, enum Urho3D::CreateMode mode, unsigned int id)
{
	return _target->CreateTemporaryChild (Urho3D::String(name), mode, id);
}


DllExport void
Node_AddChild (Urho3D::Node *_target, Urho3D::Node * node, unsigned int index)
{
	_target->AddChild (node, index);
}


DllExport void
Node_RemoveChild (Urho3D::Node *_target, Urho3D::Node * node)
{
	_target->RemoveChild (node);
}


DllExport void
Node_RemoveAllChildren (Urho3D::Node *_target)
{
	_target->RemoveAllChildren ();
}


DllExport void
Node_RemoveChildren (Urho3D::Node *_target, bool removeReplicated, bool removeLocal, bool recursive)
{
	_target->RemoveChildren (removeReplicated, removeLocal, recursive);
}


DllExport Urho3D::Component *
Node_CreateComponent (Urho3D::Node *_target, int type, enum Urho3D::CreateMode mode, unsigned int id)
{
	return _target->CreateComponent (Urho3D::StringHash(type), mode, id);
}


DllExport Urho3D::Component *
Node_GetOrCreateComponent (Urho3D::Node *_target, int type, enum Urho3D::CreateMode mode, unsigned int id)
{
	return _target->GetOrCreateComponent (Urho3D::StringHash(type), mode, id);
}


DllExport Urho3D::Component *
Node_CloneComponent (Urho3D::Node *_target, Urho3D::Component * component, unsigned int id)
{
	return _target->CloneComponent (component, id);
}


DllExport Urho3D::Component *
Node_CloneComponent18 (Urho3D::Node *_target, Urho3D::Component * component, enum Urho3D::CreateMode mode, unsigned int id)
{
	return _target->CloneComponent (component, mode, id);
}


DllExport void
Node_RemoveComponent (Urho3D::Node *_target, Urho3D::Component * component)
{
	_target->RemoveComponent (component);
}


DllExport void
Node_RemoveComponent19 (Urho3D::Node *_target, int type)
{
	_target->RemoveComponent (Urho3D::StringHash(type));
}


DllExport void
Node_RemoveComponents (Urho3D::Node *_target, bool removeReplicated, bool removeLocal)
{
	_target->RemoveComponents (removeReplicated, removeLocal);
}


DllExport void
Node_RemoveComponents20 (Urho3D::Node *_target, int type)
{
	_target->RemoveComponents (Urho3D::StringHash(type));
}


DllExport void
Node_RemoveAllComponents (Urho3D::Node *_target)
{
	_target->RemoveAllComponents ();
}


DllExport void
Node_ReorderComponent (Urho3D::Node *_target, Urho3D::Component * component, unsigned int index)
{
	_target->ReorderComponent (component, index);
}


DllExport Urho3D::Node *
Node_Clone (Urho3D::Node *_target, enum Urho3D::CreateMode mode)
{
	return _target->Clone (mode);
}


DllExport void
Node_Remove (Urho3D::Node *_target)
{
	_target->Remove ();
}


DllExport void
Node_SetParent (Urho3D::Node *_target, Urho3D::Node * parent)
{
	_target->SetParent (parent);
}


// Urho3D::Variant overloads begin:
DllExport void
Node_SetVar_0 (Urho3D::Node *_target, int key, const class Urho3D::Vector3 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_1 (Urho3D::Node *_target, int key, const class Urho3D::IntRect & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_2 (Urho3D::Node *_target, int key, const class Urho3D::Color & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_3 (Urho3D::Node *_target, int key, const class Urho3D::Vector2 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_4 (Urho3D::Node *_target, int key, const class Urho3D::Vector4 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_5 (Urho3D::Node *_target, int key, const class Urho3D::IntVector2 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_6 (Urho3D::Node *_target, int key, const class Urho3D::Quaternion & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_7 (Urho3D::Node *_target, int key, const class Urho3D::Matrix4 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_8 (Urho3D::Node *_target, int key, const class Urho3D::Matrix3x4 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_9 (Urho3D::Node *_target, int key, int value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_10 (Urho3D::Node *_target, int key, float value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
Node_SetVar_11 (Urho3D::Node *_target, int key, const char * value)
{
	_target->SetVar (Urho3D::StringHash(key), Urho3D::String(value));
}

DllExport void
Node_SetVar_12 (Urho3D::Node *_target, int key, bool value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

// Urho3D::Variant overloads end.
DllExport void
Node_AddListener (Urho3D::Node *_target, Urho3D::Component * component)
{
	_target->AddListener (component);
}


DllExport void
Node_RemoveListener (Urho3D::Node *_target, Urho3D::Component * component)
{
	_target->RemoveListener (component);
}


DllExport unsigned int
Node_GetID (Urho3D::Node *_target)
{
	return _target->GetID ();
}


DllExport int
Node_IsReplicated (Urho3D::Node *_target)
{
	return _target->IsReplicated ();
}


DllExport const char *
Node_GetName (Urho3D::Node *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport int
Node_GetNameHash (Urho3D::Node *_target)
{
	return (_target->GetNameHash ()).Value ();
}


DllExport int
Node_HasTag (Urho3D::Node *_target, const char * tag)
{
	return _target->HasTag (Urho3D::String(tag));
}


DllExport Urho3D::Node *
Node_GetParent (Urho3D::Node *_target)
{
	return _target->GetParent ();
}


DllExport Urho3D::Scene *
Node_GetScene (Urho3D::Node *_target)
{
	return _target->GetScene ();
}


DllExport int
Node_IsChildOf (Urho3D::Node *_target, Urho3D::Node * node)
{
	return _target->IsChildOf (node);
}


DllExport int
Node_IsEnabled (Urho3D::Node *_target)
{
	return _target->IsEnabled ();
}


DllExport int
Node_IsEnabledSelf (Urho3D::Node *_target)
{
	return _target->IsEnabledSelf ();
}


DllExport Urho3D::Connection *
Node_GetOwner (Urho3D::Node *_target)
{
	return _target->GetOwner ();
}


DllExport Interop::Vector3 
Node_GetPosition (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetPosition ()));
}


DllExport Interop::Vector2 
Node_GetPosition2D (Urho3D::Node *_target)
{
	return *((Interop::Vector2  *) &(_target->GetPosition2D ()));
}


DllExport Interop::Quaternion 
Node_GetRotation (Urho3D::Node *_target)
{
	return *((Interop::Quaternion  *) &(_target->GetRotation ()));
}


DllExport float
Node_GetRotation2D (Urho3D::Node *_target)
{
	return _target->GetRotation2D ();
}


DllExport Interop::Vector3 
Node_GetDirection (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetDirection ()));
}


DllExport Interop::Vector3 
Node_GetUp (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetUp ()));
}


DllExport Interop::Vector3 
Node_GetRight (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetRight ()));
}


DllExport Interop::Vector3 
Node_GetScale (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetScale ()));
}


DllExport Interop::Vector2 
Node_GetScale2D (Urho3D::Node *_target)
{
	return *((Interop::Vector2  *) &(_target->GetScale2D ()));
}


DllExport Interop::Matrix3x4 
Node_GetTransform (Urho3D::Node *_target)
{
	return *((Interop::Matrix3x4  *) &(_target->GetTransform ()));
}


DllExport Interop::Vector3 
Node_GetWorldPosition (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetWorldPosition ()));
}


DllExport Interop::Vector2 
Node_GetWorldPosition2D (Urho3D::Node *_target)
{
	return *((Interop::Vector2  *) &(_target->GetWorldPosition2D ()));
}


DllExport Interop::Quaternion 
Node_GetWorldRotation (Urho3D::Node *_target)
{
	return *((Interop::Quaternion  *) &(_target->GetWorldRotation ()));
}


DllExport float
Node_GetWorldRotation2D (Urho3D::Node *_target)
{
	return _target->GetWorldRotation2D ();
}


DllExport Interop::Vector3 
Node_GetWorldDirection (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetWorldDirection ()));
}


DllExport Interop::Vector3 
Node_GetWorldUp (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetWorldUp ()));
}


DllExport Interop::Vector3 
Node_GetWorldRight (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetWorldRight ()));
}


DllExport Interop::Vector3 
Node_GetWorldScale (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetWorldScale ()));
}


DllExport Interop::Vector3 
Node_GetSignedWorldScale (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetSignedWorldScale ()));
}


DllExport Interop::Vector2 
Node_GetWorldScale2D (Urho3D::Node *_target)
{
	return *((Interop::Vector2  *) &(_target->GetWorldScale2D ()));
}


DllExport Interop::Matrix3x4 
Node_GetWorldTransform (Urho3D::Node *_target)
{
	return *((Interop::Matrix3x4  *) &(_target->GetWorldTransform ()));
}


DllExport Interop::Vector3 
Node_LocalToWorld (Urho3D::Node *_target, const class Urho3D::Vector3 & position)
{
	return *((Interop::Vector3  *) &(_target->LocalToWorld (position)));
}


DllExport Interop::Vector3 
Node_LocalToWorld21 (Urho3D::Node *_target, const class Urho3D::Vector4 & vector)
{
	return *((Interop::Vector3  *) &(_target->LocalToWorld (vector)));
}


DllExport Interop::Vector2 
Node_LocalToWorld2D (Urho3D::Node *_target, const class Urho3D::Vector2 & vector)
{
	return *((Interop::Vector2  *) &(_target->LocalToWorld2D (vector)));
}


DllExport Interop::Vector3 
Node_WorldToLocal (Urho3D::Node *_target, const class Urho3D::Vector3 & position)
{
	return *((Interop::Vector3  *) &(_target->WorldToLocal (position)));
}


DllExport Interop::Vector3 
Node_WorldToLocal22 (Urho3D::Node *_target, const class Urho3D::Vector4 & vector)
{
	return *((Interop::Vector3  *) &(_target->WorldToLocal (vector)));
}


DllExport Interop::Vector2 
Node_WorldToLocal2D (Urho3D::Node *_target, const class Urho3D::Vector2 & vector)
{
	return *((Interop::Vector2  *) &(_target->WorldToLocal2D (vector)));
}


DllExport int
Node_IsDirty (Urho3D::Node *_target)
{
	return _target->IsDirty ();
}


DllExport unsigned int
Node_GetNumChildren (Urho3D::Node *_target, bool recursive)
{
	return _target->GetNumChildren (recursive);
}


DllExport const Vector<SharedPtr<class Urho3D::Node> > &
Node_GetChildren (Urho3D::Node *_target)
{
	return _target->GetChildren ();
}


DllExport Urho3D::Node *
Node_GetChild (Urho3D::Node *_target, unsigned int index)
{
	return _target->GetChild (index);
}


DllExport Urho3D::Node *
Node_GetChild23 (Urho3D::Node *_target, const char * name, bool recursive)
{
	return _target->GetChild (Urho3D::String(name), recursive);
}


DllExport Urho3D::Node *
Node_GetChild24 (Urho3D::Node *_target, int nameHash, bool recursive)
{
	return _target->GetChild (Urho3D::StringHash(nameHash), recursive);
}


DllExport unsigned int
Node_GetNumComponents (Urho3D::Node *_target)
{
	return _target->GetNumComponents ();
}


DllExport unsigned int
Node_GetNumNetworkComponents (Urho3D::Node *_target)
{
	return _target->GetNumNetworkComponents ();
}


DllExport const Vector<SharedPtr<class Urho3D::Component> > &
Node_GetComponents (Urho3D::Node *_target)
{
	return _target->GetComponents ();
}


DllExport Urho3D::Component *
Node_GetComponent (Urho3D::Node *_target, int type, bool recursive)
{
	return _target->GetComponent (Urho3D::StringHash(type), recursive);
}


DllExport Urho3D::Component *
Node_GetParentComponent (Urho3D::Node *_target, int type, bool fullTraversal)
{
	return _target->GetParentComponent (Urho3D::StringHash(type), fullTraversal);
}


DllExport int
Node_HasComponent (Urho3D::Node *_target, int type)
{
	return _target->HasComponent (Urho3D::StringHash(type));
}


// Urho3D::Variant overloads begin:
DllExport Interop::Vector3
Node_GetVar_0 (Urho3D::Node *_target, int key)
{
	return *((Interop::Vector3 *) &(_target->GetVar (Urho3D::StringHash(key)).GetVector3()));
}

DllExport Interop::IntRect
Node_GetVar_1 (Urho3D::Node *_target, int key)
{
	return *((Interop::IntRect *) &(_target->GetVar (Urho3D::StringHash(key)).GetIntRect()));
}

DllExport Interop::Color
Node_GetVar_2 (Urho3D::Node *_target, int key)
{
	return *((Interop::Color *) &(_target->GetVar (Urho3D::StringHash(key)).GetColor()));
}

DllExport Interop::Vector2
Node_GetVar_3 (Urho3D::Node *_target, int key)
{
	return *((Interop::Vector2 *) &(_target->GetVar (Urho3D::StringHash(key)).GetVector2()));
}

DllExport Interop::Vector4
Node_GetVar_4 (Urho3D::Node *_target, int key)
{
	return *((Interop::Vector4 *) &(_target->GetVar (Urho3D::StringHash(key)).GetVector4()));
}

DllExport Interop::IntVector2
Node_GetVar_5 (Urho3D::Node *_target, int key)
{
	return *((Interop::IntVector2 *) &(_target->GetVar (Urho3D::StringHash(key)).GetIntVector2()));
}

DllExport Interop::Quaternion
Node_GetVar_6 (Urho3D::Node *_target, int key)
{
	return *((Interop::Quaternion *) &(_target->GetVar (Urho3D::StringHash(key)).GetQuaternion()));
}

DllExport Interop::Matrix4
Node_GetVar_7 (Urho3D::Node *_target, int key)
{
	return *((Interop::Matrix4 *) &(_target->GetVar (Urho3D::StringHash(key)).GetMatrix4()));
}

DllExport Interop::Matrix3x4
Node_GetVar_8 (Urho3D::Node *_target, int key)
{
	return *((Interop::Matrix3x4 *) &(_target->GetVar (Urho3D::StringHash(key)).GetMatrix3x4()));
}

DllExport int
Node_GetVar_9 (Urho3D::Node *_target, int key)
{
	return (_target->GetVar (Urho3D::StringHash(key)).GetInt());
}

DllExport float
Node_GetVar_10 (Urho3D::Node *_target, int key)
{
	return (_target->GetVar (Urho3D::StringHash(key)).GetFloat());
}

DllExport const char *
Node_GetVar_11 (Urho3D::Node *_target, int key)
{
	return stringdup(_target->GetVar (Urho3D::StringHash(key)).GetString().CString());
}

DllExport bool
Node_GetVar_12 (Urho3D::Node *_target, int key)
{
	return (_target->GetVar (Urho3D::StringHash(key)).GetBool());
}

// Urho3D::Variant overloads end.
DllExport void
Node_SetID (Urho3D::Node *_target, unsigned int id)
{
	_target->SetID (id);
}


DllExport void
Node_SetScene (Urho3D::Node *_target, Urho3D::Scene * scene)
{
	_target->SetScene (scene);
}


DllExport void
Node_ResetScene (Urho3D::Node *_target)
{
	_target->ResetScene ();
}


DllExport void
Node_SetNetPositionAttr (Urho3D::Node *_target, const class Urho3D::Vector3 & value)
{
	_target->SetNetPositionAttr (value);
}


DllExport Interop::Vector3 
Node_GetNetPositionAttr (Urho3D::Node *_target)
{
	return *((Interop::Vector3  *) &(_target->GetNetPositionAttr ()));
}


DllExport void
Node_PrepareNetworkUpdate (Urho3D::Node *_target)
{
	_target->PrepareNetworkUpdate ();
}


DllExport void
Node_CleanupConnection (Urho3D::Node *_target, Urho3D::Connection * connection)
{
	_target->CleanupConnection (connection);
}


DllExport void
Node_MarkReplicationDirty (Urho3D::Node *_target)
{
	_target->MarkReplicationDirty ();
}


DllExport Urho3D::Node *
Node_CreateChild25 (Urho3D::Node *_target, unsigned int id, enum Urho3D::CreateMode mode, bool temporary)
{
	return _target->CreateChild (id, mode, temporary);
}


DllExport void
Node_AddComponent (Urho3D::Node *_target, Urho3D::Component * component, unsigned int id, enum Urho3D::CreateMode mode)
{
	_target->AddComponent (component, id, mode);
}


DllExport unsigned int
Node_GetNumPersistentChildren (Urho3D::Node *_target)
{
	return _target->GetNumPersistentChildren ();
}


DllExport unsigned int
Node_GetNumPersistentComponents (Urho3D::Node *_target)
{
	return _target->GetNumPersistentComponents ();
}


DllExport void
Node_SetPositionSilent (Urho3D::Node *_target, const class Urho3D::Vector3 & position)
{
	_target->SetPositionSilent (position);
}


DllExport void
Node_SetRotationSilent (Urho3D::Node *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetRotationSilent (rotation);
}


DllExport void
Node_SetScaleSilent (Urho3D::Node *_target, const class Urho3D::Vector3 & scale)
{
	_target->SetScaleSilent (scale);
}


DllExport void
Node_SetTransformSilent (Urho3D::Node *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, const class Urho3D::Vector3 & scale)
{
	_target->SetTransformSilent (position, rotation, scale);
}


DllExport int
Skeleton_Load_File (Urho3D::Skeleton *_target, File * source)
{
	return _target->Load (*source);
}


DllExport int
Skeleton_Load_MemoryBuffer (Urho3D::Skeleton *_target, MemoryBuffer * source)
{
	return _target->Load (*source);
}


DllExport int
Skeleton_Save_File (Urho3D::Skeleton *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Skeleton_Save_MemoryBuffer (Urho3D::Skeleton *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport void
Skeleton_SetRootBoneIndex (Urho3D::Skeleton *_target, unsigned int index)
{
	_target->SetRootBoneIndex (index);
}


DllExport void
Skeleton_ClearBones (Urho3D::Skeleton *_target)
{
	_target->ClearBones ();
}


DllExport void
Skeleton_Reset (Urho3D::Skeleton *_target)
{
	_target->Reset ();
}


DllExport unsigned int
Skeleton_GetNumBones (Urho3D::Skeleton *_target)
{
	return _target->GetNumBones ();
}


DllExport Urho3D::Bone *
Skeleton_GetRootBone (Urho3D::Skeleton *_target)
{
	return _target->GetRootBone ();
}


DllExport unsigned int
Skeleton_GetBoneIndex (Urho3D::Skeleton *_target, const char * boneName)
{
	return _target->GetBoneIndex (Urho3D::String(boneName));
}


DllExport unsigned int
Skeleton_GetBoneIndex0 (Urho3D::Skeleton *_target, const struct Urho3D::Bone * bone)
{
	return _target->GetBoneIndex (bone);
}


DllExport Urho3D::Bone *
Skeleton_GetBoneParent (Urho3D::Skeleton *_target, const struct Urho3D::Bone * bone)
{
	return _target->GetBoneParent (bone);
}


DllExport Urho3D::Bone *
Skeleton_GetBone (Urho3D::Skeleton *_target, unsigned int index)
{
	return _target->GetBone (index);
}


DllExport void
Skeleton_ResetSilent (Urho3D::Skeleton *_target)
{
	_target->ResetSilent ();
}


DllExport int
Model_GetType (Urho3D::Model *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Model_GetTypeName (Urho3D::Model *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Model_GetTypeStatic ()
{
	return (Model::GetTypeStatic ()).Value ();
}


DllExport const char *
Model_GetTypeNameStatic ()
{
	return stringdup((Model::GetTypeNameStatic ()).CString ());
}


DllExport void *
Model_Model (Urho3D::Context * context)
{
	return WeakPtr<Model>(new Model(context));
}


DllExport void
Model_RegisterObject (Urho3D::Context * context)
{
	Model::RegisterObject (context);
}


DllExport int
Model_BeginLoad_File (Urho3D::Model *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Model_BeginLoad_MemoryBuffer (Urho3D::Model *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Model_EndLoad (Urho3D::Model *_target)
{
	return _target->EndLoad ();
}


DllExport int
Model_Save_File (Urho3D::Model *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Model_Save_MemoryBuffer (Urho3D::Model *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport void
Model_SetBoundingBox (Urho3D::Model *_target, const class Urho3D::BoundingBox & box)
{
	_target->SetBoundingBox (box);
}


DllExport void
Model_SetNumGeometries (Urho3D::Model *_target, unsigned int num)
{
	_target->SetNumGeometries (num);
}


DllExport int
Model_SetNumGeometryLodLevels (Urho3D::Model *_target, unsigned int index, unsigned int num)
{
	return _target->SetNumGeometryLodLevels (index, num);
}


DllExport int
Model_SetGeometry (Urho3D::Model *_target, unsigned int index, unsigned int lodLevel, Urho3D::Geometry * geometry)
{
	return _target->SetGeometry (index, lodLevel, geometry);
}


DllExport int
Model_SetGeometryCenter (Urho3D::Model *_target, unsigned int index, const class Urho3D::Vector3 & center)
{
	return _target->SetGeometryCenter (index, center);
}


DllExport Urho3D::Model *
Model_Clone (Urho3D::Model *_target, const char * cloneName)
{
	auto copy = _target->Clone (Urho3D::String(cloneName));
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Interop::BoundingBox 
Model_GetBoundingBox (Urho3D::Model *_target)
{
	return *((Interop::BoundingBox  *) &(_target->GetBoundingBox ()));
}


DllExport const Vector<SharedPtr<class Urho3D::VertexBuffer> > &
Model_GetVertexBuffers (Urho3D::Model *_target)
{
	return _target->GetVertexBuffers ();
}


DllExport const Vector<SharedPtr<class Urho3D::IndexBuffer> > &
Model_GetIndexBuffers (Urho3D::Model *_target)
{
	return _target->GetIndexBuffers ();
}


DllExport unsigned int
Model_GetNumGeometries (Urho3D::Model *_target)
{
	return _target->GetNumGeometries ();
}


DllExport unsigned int
Model_GetNumGeometryLodLevels (Urho3D::Model *_target, unsigned int index)
{
	return _target->GetNumGeometryLodLevels (index);
}


DllExport Urho3D::Geometry *
Model_GetGeometry (Urho3D::Model *_target, unsigned int index, unsigned int lodLevel)
{
	return _target->GetGeometry (index, lodLevel);
}


DllExport Interop::Vector3 
Model_GetGeometryCenter (Urho3D::Model *_target, unsigned int index)
{
	return *((Interop::Vector3  *) &(_target->GetGeometryCenter (index)));
}


DllExport unsigned int
Model_GetNumMorphs (Urho3D::Model *_target)
{
	return _target->GetNumMorphs ();
}


DllExport const struct Urho3D::ModelMorph *
Model_GetMorph (Urho3D::Model *_target, unsigned int index)
{
	return _target->GetMorph (index);
}


DllExport const struct Urho3D::ModelMorph *
Model_GetMorph0 (Urho3D::Model *_target, const char * name)
{
	return _target->GetMorph (Urho3D::String(name));
}


DllExport const struct Urho3D::ModelMorph *
Model_GetMorph1 (Urho3D::Model *_target, int nameHash)
{
	return _target->GetMorph (Urho3D::StringHash(nameHash));
}


DllExport unsigned int
Model_GetMorphRangeStart (Urho3D::Model *_target, unsigned int bufferIndex)
{
	return _target->GetMorphRangeStart (bufferIndex);
}


DllExport unsigned int
Model_GetMorphRangeCount (Urho3D::Model *_target, unsigned int bufferIndex)
{
	return _target->GetMorphRangeCount (bufferIndex);
}


DllExport int
Drawable_GetType (Urho3D::Drawable *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Drawable_GetTypeName (Urho3D::Drawable *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Drawable_GetTypeStatic ()
{
	return (Drawable::GetTypeStatic ()).Value ();
}


DllExport const char *
Drawable_GetTypeNameStatic ()
{
	return stringdup((Drawable::GetTypeNameStatic ()).CString ());
}


DllExport void
Drawable_RegisterObject (Urho3D::Context * context)
{
	Drawable::RegisterObject (context);
}


DllExport void
Drawable_OnSetEnabled (Urho3D::Drawable *_target)
{
	_target->OnSetEnabled ();
}


DllExport enum Urho3D::UpdateGeometryType
Drawable_GetUpdateGeometryType (Urho3D::Drawable *_target)
{
	return _target->GetUpdateGeometryType ();
}


DllExport Urho3D::Geometry *
Drawable_GetLodGeometry (Urho3D::Drawable *_target, unsigned int batchIndex, unsigned int level)
{
	return _target->GetLodGeometry (batchIndex, level);
}


DllExport unsigned int
Drawable_GetNumOccluderTriangles (Urho3D::Drawable *_target)
{
	return _target->GetNumOccluderTriangles ();
}


DllExport int
Drawable_DrawOcclusion (Urho3D::Drawable *_target, Urho3D::OcclusionBuffer * buffer)
{
	return _target->DrawOcclusion (buffer);
}


DllExport void
Drawable_DrawDebugGeometry (Urho3D::Drawable *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
Drawable_SetDrawDistance (Urho3D::Drawable *_target, float distance)
{
	_target->SetDrawDistance (distance);
}


DllExport void
Drawable_SetShadowDistance (Urho3D::Drawable *_target, float distance)
{
	_target->SetShadowDistance (distance);
}


DllExport void
Drawable_SetLodBias (Urho3D::Drawable *_target, float bias)
{
	_target->SetLodBias (bias);
}


DllExport void
Drawable_SetViewMask (Urho3D::Drawable *_target, unsigned int mask)
{
	_target->SetViewMask (mask);
}


DllExport void
Drawable_SetLightMask (Urho3D::Drawable *_target, unsigned int mask)
{
	_target->SetLightMask (mask);
}


DllExport void
Drawable_SetShadowMask (Urho3D::Drawable *_target, unsigned int mask)
{
	_target->SetShadowMask (mask);
}


DllExport void
Drawable_SetZoneMask (Urho3D::Drawable *_target, unsigned int mask)
{
	_target->SetZoneMask (mask);
}


DllExport void
Drawable_SetMaxLights (Urho3D::Drawable *_target, unsigned int num)
{
	_target->SetMaxLights (num);
}


DllExport void
Drawable_SetCastShadows (Urho3D::Drawable *_target, bool enable)
{
	_target->SetCastShadows (enable);
}


DllExport void
Drawable_SetOccluder (Urho3D::Drawable *_target, bool enable)
{
	_target->SetOccluder (enable);
}


DllExport void
Drawable_SetOccludee (Urho3D::Drawable *_target, bool enable)
{
	_target->SetOccludee (enable);
}


DllExport void
Drawable_MarkForUpdate (Urho3D::Drawable *_target)
{
	_target->MarkForUpdate ();
}


DllExport Interop::BoundingBox 
Drawable_GetBoundingBox (Urho3D::Drawable *_target)
{
	return *((Interop::BoundingBox  *) &(_target->GetBoundingBox ()));
}


DllExport Interop::BoundingBox 
Drawable_GetWorldBoundingBox (Urho3D::Drawable *_target)
{
	return *((Interop::BoundingBox  *) &(_target->GetWorldBoundingBox ()));
}


DllExport unsigned char
Drawable_GetDrawableFlags (Urho3D::Drawable *_target)
{
	return _target->GetDrawableFlags ();
}


DllExport float
Drawable_GetDrawDistance (Urho3D::Drawable *_target)
{
	return _target->GetDrawDistance ();
}


DllExport float
Drawable_GetShadowDistance (Urho3D::Drawable *_target)
{
	return _target->GetShadowDistance ();
}


DllExport float
Drawable_GetLodBias (Urho3D::Drawable *_target)
{
	return _target->GetLodBias ();
}


DllExport unsigned int
Drawable_GetViewMask (Urho3D::Drawable *_target)
{
	return _target->GetViewMask ();
}


DllExport unsigned int
Drawable_GetLightMask (Urho3D::Drawable *_target)
{
	return _target->GetLightMask ();
}


DllExport unsigned int
Drawable_GetShadowMask (Urho3D::Drawable *_target)
{
	return _target->GetShadowMask ();
}


DllExport unsigned int
Drawable_GetZoneMask (Urho3D::Drawable *_target)
{
	return _target->GetZoneMask ();
}


DllExport unsigned int
Drawable_GetMaxLights (Urho3D::Drawable *_target)
{
	return _target->GetMaxLights ();
}


DllExport int
Drawable_GetCastShadows (Urho3D::Drawable *_target)
{
	return _target->GetCastShadows ();
}


DllExport int
Drawable_IsOccluder (Urho3D::Drawable *_target)
{
	return _target->IsOccluder ();
}


DllExport int
Drawable_IsOccludee (Urho3D::Drawable *_target)
{
	return _target->IsOccludee ();
}


DllExport int
Drawable_IsInView (Urho3D::Drawable *_target)
{
	return _target->IsInView ();
}


DllExport int
Drawable_IsInView0 (Urho3D::Drawable *_target, Urho3D::Camera * camera)
{
	return _target->IsInView (camera);
}


DllExport void
Drawable_SetZone (Urho3D::Drawable *_target, Urho3D::Zone * zone, bool temporary)
{
	_target->SetZone (zone, temporary);
}


DllExport void
Drawable_SetSortValue (Urho3D::Drawable *_target, float value)
{
	_target->SetSortValue (value);
}


DllExport void
Drawable_SetMinMaxZ (Urho3D::Drawable *_target, float minZ, float maxZ)
{
	_target->SetMinMaxZ (minZ, maxZ);
}


DllExport void
Drawable_MarkInView (Urho3D::Drawable *_target, unsigned int frameNumber)
{
	_target->MarkInView (frameNumber);
}


DllExport void
Drawable_LimitLights (Urho3D::Drawable *_target)
{
	_target->LimitLights ();
}


DllExport void
Drawable_LimitVertexLights (Urho3D::Drawable *_target, bool removeConvertedLights)
{
	_target->LimitVertexLights (removeConvertedLights);
}


DllExport void
Drawable_SetBasePass (Urho3D::Drawable *_target, unsigned int batchIndex)
{
	_target->SetBasePass (batchIndex);
}


DllExport Urho3D::Octant *
Drawable_GetOctant (Urho3D::Drawable *_target)
{
	return _target->GetOctant ();
}


DllExport Urho3D::Zone *
Drawable_GetZone (Urho3D::Drawable *_target)
{
	return _target->GetZone ();
}


DllExport int
Drawable_IsZoneDirty (Urho3D::Drawable *_target)
{
	return _target->IsZoneDirty ();
}


DllExport float
Drawable_GetDistance (Urho3D::Drawable *_target)
{
	return _target->GetDistance ();
}


DllExport float
Drawable_GetLodDistance (Urho3D::Drawable *_target)
{
	return _target->GetLodDistance ();
}


DllExport float
Drawable_GetSortValue (Urho3D::Drawable *_target)
{
	return _target->GetSortValue ();
}


DllExport int
Drawable_HasBasePass (Urho3D::Drawable *_target, unsigned int batchIndex)
{
	return _target->HasBasePass (batchIndex);
}


DllExport Urho3D::Light *
Drawable_GetFirstLight (Urho3D::Drawable *_target)
{
	return _target->GetFirstLight ();
}


DllExport float
Drawable_GetMinZ (Urho3D::Drawable *_target)
{
	return _target->GetMinZ ();
}


DllExport float
Drawable_GetMaxZ (Urho3D::Drawable *_target)
{
	return _target->GetMaxZ ();
}


DllExport void
Drawable_AddLight (Urho3D::Drawable *_target, Urho3D::Light * light)
{
	_target->AddLight (light);
}


DllExport void
Drawable_AddVertexLight (Urho3D::Drawable *_target, Urho3D::Light * light)
{
	_target->AddVertexLight (light);
}


DllExport int
StaticModel_GetType (Urho3D::StaticModel *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
StaticModel_GetTypeName (Urho3D::StaticModel *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
StaticModel_GetTypeStatic ()
{
	return (StaticModel::GetTypeStatic ()).Value ();
}


DllExport const char *
StaticModel_GetTypeNameStatic ()
{
	return stringdup((StaticModel::GetTypeNameStatic ()).CString ());
}


DllExport void *
StaticModel_StaticModel (Urho3D::Context * context)
{
	return WeakPtr<StaticModel>(new StaticModel(context));
}


DllExport void
StaticModel_RegisterObject (Urho3D::Context * context)
{
	StaticModel::RegisterObject (context);
}


DllExport Urho3D::Geometry *
StaticModel_GetLodGeometry (Urho3D::StaticModel *_target, unsigned int batchIndex, unsigned int level)
{
	return _target->GetLodGeometry (batchIndex, level);
}


DllExport unsigned int
StaticModel_GetNumOccluderTriangles (Urho3D::StaticModel *_target)
{
	return _target->GetNumOccluderTriangles ();
}


DllExport int
StaticModel_DrawOcclusion (Urho3D::StaticModel *_target, Urho3D::OcclusionBuffer * buffer)
{
	return _target->DrawOcclusion (buffer);
}


DllExport void
StaticModel_SetModel (Urho3D::StaticModel *_target, Urho3D::Model * model)
{
	_target->SetModel (model);
}


DllExport void
StaticModel_SetMaterial (Urho3D::StaticModel *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport int
StaticModel_SetMaterial0 (Urho3D::StaticModel *_target, unsigned int index, Urho3D::Material * material)
{
	return _target->SetMaterial (index, material);
}


DllExport void
StaticModel_SetOcclusionLodLevel (Urho3D::StaticModel *_target, unsigned int level)
{
	_target->SetOcclusionLodLevel (level);
}


DllExport void
StaticModel_ApplyMaterialList (Urho3D::StaticModel *_target, const char * fileName)
{
	_target->ApplyMaterialList (Urho3D::String(fileName));
}


DllExport Urho3D::Model *
StaticModel_GetModel (Urho3D::StaticModel *_target)
{
	return _target->GetModel ();
}


DllExport unsigned int
StaticModel_GetNumGeometries (Urho3D::StaticModel *_target)
{
	return _target->GetNumGeometries ();
}


DllExport Urho3D::Material *
StaticModel_GetMaterial (Urho3D::StaticModel *_target)
{
	return _target->GetMaterial ();
}


DllExport Urho3D::Material *
StaticModel_GetMaterial1 (Urho3D::StaticModel *_target, unsigned int index)
{
	return _target->GetMaterial (index);
}


DllExport unsigned int
StaticModel_GetOcclusionLodLevel (Urho3D::StaticModel *_target)
{
	return _target->GetOcclusionLodLevel ();
}


DllExport int
StaticModel_IsInside (Urho3D::StaticModel *_target, const class Urho3D::Vector3 & point)
{
	return _target->IsInside (point);
}


DllExport int
StaticModel_IsInsideLocal (Urho3D::StaticModel *_target, const class Urho3D::Vector3 & point)
{
	return _target->IsInsideLocal (point);
}


DllExport Urho3D::ResourceRef
StaticModel_GetModelAttr (Urho3D::StaticModel *_target)
{
	return _target->GetModelAttr ();
}


DllExport int
AnimatedModel_GetType (Urho3D::AnimatedModel *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
AnimatedModel_GetTypeName (Urho3D::AnimatedModel *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
AnimatedModel_GetTypeStatic ()
{
	return (AnimatedModel::GetTypeStatic ()).Value ();
}


DllExport const char *
AnimatedModel_GetTypeNameStatic ()
{
	return stringdup((AnimatedModel::GetTypeNameStatic ()).CString ());
}


DllExport void *
AnimatedModel_AnimatedModel (Urho3D::Context * context)
{
	return WeakPtr<AnimatedModel>(new AnimatedModel(context));
}


DllExport void
AnimatedModel_RegisterObject (Urho3D::Context * context)
{
	AnimatedModel::RegisterObject (context);
}


DllExport int
AnimatedModel_Load_File (Urho3D::AnimatedModel *_target, File * source)
{
	return _target->Load (*source);
}


DllExport int
AnimatedModel_Load_MemoryBuffer (Urho3D::AnimatedModel *_target, MemoryBuffer * source)
{
	return _target->Load (*source);
}


DllExport int
AnimatedModel_LoadXML (Urho3D::AnimatedModel *_target, const class Urho3D::XMLElement & source)
{
	return _target->LoadXML (source);
}


DllExport void
AnimatedModel_ApplyAttributes (Urho3D::AnimatedModel *_target)
{
	_target->ApplyAttributes ();
}


DllExport enum Urho3D::UpdateGeometryType
AnimatedModel_GetUpdateGeometryType (Urho3D::AnimatedModel *_target)
{
	return _target->GetUpdateGeometryType ();
}


DllExport void
AnimatedModel_DrawDebugGeometry (Urho3D::AnimatedModel *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
AnimatedModel_SetModel (Urho3D::AnimatedModel *_target, Urho3D::Model * model, bool createBones)
{
	_target->SetModel (model, createBones);
}


DllExport Urho3D::AnimationState *
AnimatedModel_AddAnimationState (Urho3D::AnimatedModel *_target, Urho3D::Animation * animation)
{
	return _target->AddAnimationState (animation);
}


DllExport void
AnimatedModel_RemoveAnimationState (Urho3D::AnimatedModel *_target, Urho3D::Animation * animation)
{
	_target->RemoveAnimationState (animation);
}


DllExport void
AnimatedModel_RemoveAnimationState0 (Urho3D::AnimatedModel *_target, const char * animationName)
{
	_target->RemoveAnimationState (Urho3D::String(animationName));
}


DllExport void
AnimatedModel_RemoveAnimationState1 (Urho3D::AnimatedModel *_target, int animationNameHash)
{
	_target->RemoveAnimationState (Urho3D::StringHash(animationNameHash));
}


DllExport void
AnimatedModel_RemoveAnimationState2 (Urho3D::AnimatedModel *_target, Urho3D::AnimationState * state)
{
	_target->RemoveAnimationState (state);
}


DllExport void
AnimatedModel_RemoveAnimationState3 (Urho3D::AnimatedModel *_target, unsigned int index)
{
	_target->RemoveAnimationState (index);
}


DllExport void
AnimatedModel_RemoveAllAnimationStates (Urho3D::AnimatedModel *_target)
{
	_target->RemoveAllAnimationStates ();
}


DllExport void
AnimatedModel_SetAnimationLodBias (Urho3D::AnimatedModel *_target, float bias)
{
	_target->SetAnimationLodBias (bias);
}


DllExport void
AnimatedModel_SetUpdateInvisible (Urho3D::AnimatedModel *_target, bool enable)
{
	_target->SetUpdateInvisible (enable);
}


DllExport void
AnimatedModel_SetMorphWeight (Urho3D::AnimatedModel *_target, unsigned int index, float weight)
{
	_target->SetMorphWeight (index, weight);
}


DllExport void
AnimatedModel_SetMorphWeight4 (Urho3D::AnimatedModel *_target, const char * name, float weight)
{
	_target->SetMorphWeight (Urho3D::String(name), weight);
}


DllExport void
AnimatedModel_SetMorphWeight5 (Urho3D::AnimatedModel *_target, int nameHash, float weight)
{
	_target->SetMorphWeight (Urho3D::StringHash(nameHash), weight);
}


DllExport void
AnimatedModel_ResetMorphWeights (Urho3D::AnimatedModel *_target)
{
	_target->ResetMorphWeights ();
}


DllExport void
AnimatedModel_ApplyAnimation (Urho3D::AnimatedModel *_target)
{
	_target->ApplyAnimation ();
}


DllExport const Vector<SharedPtr<class Urho3D::AnimationState> > &
AnimatedModel_GetAnimationStates (Urho3D::AnimatedModel *_target)
{
	return _target->GetAnimationStates ();
}


DllExport unsigned int
AnimatedModel_GetNumAnimationStates (Urho3D::AnimatedModel *_target)
{
	return _target->GetNumAnimationStates ();
}


DllExport Urho3D::AnimationState *
AnimatedModel_GetAnimationState (Urho3D::AnimatedModel *_target, Urho3D::Animation * animation)
{
	return _target->GetAnimationState (animation);
}


DllExport Urho3D::AnimationState *
AnimatedModel_GetAnimationState6 (Urho3D::AnimatedModel *_target, const char * animationName)
{
	return _target->GetAnimationState (Urho3D::String(animationName));
}


DllExport Urho3D::AnimationState *
AnimatedModel_GetAnimationState7 (Urho3D::AnimatedModel *_target, int animationNameHash)
{
	return _target->GetAnimationState (Urho3D::StringHash(animationNameHash));
}


DllExport Urho3D::AnimationState *
AnimatedModel_GetAnimationState8 (Urho3D::AnimatedModel *_target, unsigned int index)
{
	return _target->GetAnimationState (index);
}


DllExport float
AnimatedModel_GetAnimationLodBias (Urho3D::AnimatedModel *_target)
{
	return _target->GetAnimationLodBias ();
}


DllExport int
AnimatedModel_GetUpdateInvisible (Urho3D::AnimatedModel *_target)
{
	return _target->GetUpdateInvisible ();
}


DllExport const Vector<SharedPtr<class Urho3D::VertexBuffer> > &
AnimatedModel_GetMorphVertexBuffers (Urho3D::AnimatedModel *_target)
{
	return _target->GetMorphVertexBuffers ();
}


DllExport unsigned int
AnimatedModel_GetNumMorphs (Urho3D::AnimatedModel *_target)
{
	return _target->GetNumMorphs ();
}


DllExport float
AnimatedModel_GetMorphWeight (Urho3D::AnimatedModel *_target, unsigned int index)
{
	return _target->GetMorphWeight (index);
}


DllExport float
AnimatedModel_GetMorphWeight9 (Urho3D::AnimatedModel *_target, const char * name)
{
	return _target->GetMorphWeight (Urho3D::String(name));
}


DllExport float
AnimatedModel_GetMorphWeight10 (Urho3D::AnimatedModel *_target, int nameHash)
{
	return _target->GetMorphWeight (Urho3D::StringHash(nameHash));
}


DllExport int
AnimatedModel_IsMaster (Urho3D::AnimatedModel *_target)
{
	return _target->IsMaster ();
}


DllExport Urho3D::ResourceRef
AnimatedModel_GetModelAttr (Urho3D::AnimatedModel *_target)
{
	return _target->GetModelAttr ();
}


DllExport void
AnimatedModel_UpdateBoneBoundingBox (Urho3D::AnimatedModel *_target)
{
	_target->UpdateBoneBoundingBox ();
}


DllExport int
Animation_GetType (Urho3D::Animation *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Animation_GetTypeName (Urho3D::Animation *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Animation_GetTypeStatic ()
{
	return (Animation::GetTypeStatic ()).Value ();
}


DllExport const char *
Animation_GetTypeNameStatic ()
{
	return stringdup((Animation::GetTypeNameStatic ()).CString ());
}


DllExport void *
Animation_Animation (Urho3D::Context * context)
{
	return WeakPtr<Animation>(new Animation(context));
}


DllExport void
Animation_RegisterObject (Urho3D::Context * context)
{
	Animation::RegisterObject (context);
}


DllExport int
Animation_BeginLoad_File (Urho3D::Animation *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Animation_BeginLoad_MemoryBuffer (Urho3D::Animation *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Animation_Save_File (Urho3D::Animation *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Animation_Save_MemoryBuffer (Urho3D::Animation *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport void
Animation_SetAnimationName (Urho3D::Animation *_target, const char * name)
{
	_target->SetAnimationName (Urho3D::String(name));
}


DllExport void
Animation_SetLength (Urho3D::Animation *_target, float length)
{
	_target->SetLength (length);
}


DllExport Urho3D::AnimationTrack *
Animation_CreateTrack (Urho3D::Animation *_target, const char * name)
{
	return _target->CreateTrack (Urho3D::String(name));
}


DllExport int
Animation_RemoveTrack (Urho3D::Animation *_target, const char * name)
{
	return _target->RemoveTrack (Urho3D::String(name));
}


DllExport void
Animation_RemoveAllTracks (Urho3D::Animation *_target)
{
	_target->RemoveAllTracks ();
}


// Urho3D::Variant overloads begin:
DllExport void
Animation_AddTrigger_0 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const class Urho3D::Vector3 & data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_1 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const class Urho3D::IntRect & data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_2 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const class Urho3D::Color & data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_3 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const class Urho3D::Vector2 & data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_4 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const class Urho3D::Vector4 & data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_5 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const class Urho3D::IntVector2 & data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_6 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const class Urho3D::Quaternion & data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_7 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const class Urho3D::Matrix4 & data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_8 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const class Urho3D::Matrix3x4 & data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_9 (Urho3D::Animation *_target, float time, bool timeIsNormalized, int data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_10 (Urho3D::Animation *_target, float time, bool timeIsNormalized, float data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

DllExport void
Animation_AddTrigger_11 (Urho3D::Animation *_target, float time, bool timeIsNormalized, const char * data)
{
	_target->AddTrigger (time, timeIsNormalized, Urho3D::String(data));
}

DllExport void
Animation_AddTrigger_12 (Urho3D::Animation *_target, float time, bool timeIsNormalized, bool data)
{
	_target->AddTrigger (time, timeIsNormalized, (data));
}

// Urho3D::Variant overloads end.
DllExport void
Animation_RemoveTrigger (Urho3D::Animation *_target, unsigned int index)
{
	_target->RemoveTrigger (index);
}


DllExport void
Animation_RemoveAllTriggers (Urho3D::Animation *_target)
{
	_target->RemoveAllTriggers ();
}


DllExport void
Animation_SetNumTriggers (Urho3D::Animation *_target, unsigned int num)
{
	_target->SetNumTriggers (num);
}


DllExport Urho3D::Animation *
Animation_Clone (Urho3D::Animation *_target, const char * cloneName)
{
	auto copy = _target->Clone (Urho3D::String(cloneName));
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport const char *
Animation_GetAnimationName (Urho3D::Animation *_target)
{
	return stringdup((_target->GetAnimationName ()).CString ());
}


DllExport int
Animation_GetAnimationNameHash (Urho3D::Animation *_target)
{
	return (_target->GetAnimationNameHash ()).Value ();
}


DllExport float
Animation_GetLength (Urho3D::Animation *_target)
{
	return _target->GetLength ();
}


DllExport unsigned int
Animation_GetNumTracks (Urho3D::Animation *_target)
{
	return _target->GetNumTracks ();
}


DllExport Urho3D::AnimationTrack *
Animation_GetTrack (Urho3D::Animation *_target, unsigned int index)
{
	return _target->GetTrack (index);
}


DllExport Urho3D::AnimationTrack *
Animation_GetTrack0 (Urho3D::Animation *_target, const char * name)
{
	return _target->GetTrack (Urho3D::String(name));
}


DllExport Urho3D::AnimationTrack *
Animation_GetTrack1 (Urho3D::Animation *_target, int nameHash)
{
	return _target->GetTrack (Urho3D::StringHash(nameHash));
}


DllExport unsigned int
Animation_GetNumTriggers (Urho3D::Animation *_target)
{
	return _target->GetNumTriggers ();
}


DllExport Urho3D::AnimationTriggerPoint *
Animation_GetTrigger (Urho3D::Animation *_target, unsigned int index)
{
	return _target->GetTrigger (index);
}


DllExport void *
AnimationState_AnimationState (Urho3D::AnimatedModel * model, Urho3D::Animation * animation)
{
	return WeakPtr<AnimationState>(new AnimationState(model, animation));
}


DllExport void *
AnimationState_AnimationState0 (Urho3D::Node * node, Urho3D::Animation * animation)
{
	return WeakPtr<AnimationState>(new AnimationState(node, animation));
}


DllExport void
AnimationState_SetStartBone (Urho3D::AnimationState *_target, Urho3D::Bone * startBone)
{
	_target->SetStartBone (startBone);
}


DllExport void
AnimationState_SetLooped (Urho3D::AnimationState *_target, bool looped)
{
	_target->SetLooped (looped);
}


DllExport void
AnimationState_SetWeight (Urho3D::AnimationState *_target, float weight)
{
	_target->SetWeight (weight);
}


DllExport void
AnimationState_SetBlendMode (Urho3D::AnimationState *_target, enum Urho3D::AnimationBlendMode mode)
{
	_target->SetBlendMode (mode);
}


DllExport void
AnimationState_SetTime (Urho3D::AnimationState *_target, float time)
{
	_target->SetTime (time);
}


DllExport void
AnimationState_SetBoneWeight (Urho3D::AnimationState *_target, unsigned int index, float weight, bool recursive)
{
	_target->SetBoneWeight (index, weight, recursive);
}


DllExport void
AnimationState_SetBoneWeight1 (Urho3D::AnimationState *_target, const char * name, float weight, bool recursive)
{
	_target->SetBoneWeight (Urho3D::String(name), weight, recursive);
}


DllExport void
AnimationState_SetBoneWeight2 (Urho3D::AnimationState *_target, int nameHash, float weight, bool recursive)
{
	_target->SetBoneWeight (Urho3D::StringHash(nameHash), weight, recursive);
}


DllExport void
AnimationState_AddWeight (Urho3D::AnimationState *_target, float delta)
{
	_target->AddWeight (delta);
}


DllExport void
AnimationState_AddTime (Urho3D::AnimationState *_target, float delta)
{
	_target->AddTime (delta);
}


DllExport void
AnimationState_SetLayer (Urho3D::AnimationState *_target, unsigned char layer)
{
	_target->SetLayer (layer);
}


DllExport Urho3D::Animation *
AnimationState_GetAnimation (Urho3D::AnimationState *_target)
{
	return _target->GetAnimation ();
}


DllExport Urho3D::AnimatedModel *
AnimationState_GetModel (Urho3D::AnimationState *_target)
{
	return _target->GetModel ();
}


DllExport Urho3D::Node *
AnimationState_GetNode (Urho3D::AnimationState *_target)
{
	return _target->GetNode ();
}


DllExport Urho3D::Bone *
AnimationState_GetStartBone (Urho3D::AnimationState *_target)
{
	return _target->GetStartBone ();
}


DllExport float
AnimationState_GetBoneWeight (Urho3D::AnimationState *_target, unsigned int index)
{
	return _target->GetBoneWeight (index);
}


DllExport float
AnimationState_GetBoneWeight3 (Urho3D::AnimationState *_target, const char * name)
{
	return _target->GetBoneWeight (Urho3D::String(name));
}


DllExport float
AnimationState_GetBoneWeight4 (Urho3D::AnimationState *_target, int nameHash)
{
	return _target->GetBoneWeight (Urho3D::StringHash(nameHash));
}


DllExport unsigned int
AnimationState_GetTrackIndex (Urho3D::AnimationState *_target, Urho3D::Node * node)
{
	return _target->GetTrackIndex (node);
}


DllExport unsigned int
AnimationState_GetTrackIndex5 (Urho3D::AnimationState *_target, const char * name)
{
	return _target->GetTrackIndex (Urho3D::String(name));
}


DllExport unsigned int
AnimationState_GetTrackIndex6 (Urho3D::AnimationState *_target, int nameHash)
{
	return _target->GetTrackIndex (Urho3D::StringHash(nameHash));
}


DllExport int
AnimationState_IsEnabled (Urho3D::AnimationState *_target)
{
	return _target->IsEnabled ();
}


DllExport int
AnimationState_IsLooped (Urho3D::AnimationState *_target)
{
	return _target->IsLooped ();
}


DllExport float
AnimationState_GetWeight (Urho3D::AnimationState *_target)
{
	return _target->GetWeight ();
}


DllExport enum Urho3D::AnimationBlendMode
AnimationState_GetBlendMode (Urho3D::AnimationState *_target)
{
	return _target->GetBlendMode ();
}


DllExport float
AnimationState_GetTime (Urho3D::AnimationState *_target)
{
	return _target->GetTime ();
}


DllExport float
AnimationState_GetLength (Urho3D::AnimationState *_target)
{
	return _target->GetLength ();
}


DllExport unsigned char
AnimationState_GetLayer (Urho3D::AnimationState *_target)
{
	return _target->GetLayer ();
}


DllExport void
AnimationState_Apply (Urho3D::AnimationState *_target)
{
	_target->Apply ();
}


DllExport int
AnimationController_GetType (Urho3D::AnimationController *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
AnimationController_GetTypeName (Urho3D::AnimationController *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
AnimationController_GetTypeStatic ()
{
	return (AnimationController::GetTypeStatic ()).Value ();
}


DllExport const char *
AnimationController_GetTypeNameStatic ()
{
	return stringdup((AnimationController::GetTypeNameStatic ()).CString ());
}


DllExport void *
AnimationController_AnimationController (Urho3D::Context * context)
{
	return WeakPtr<AnimationController>(new AnimationController(context));
}


DllExport void
AnimationController_RegisterObject (Urho3D::Context * context)
{
	AnimationController::RegisterObject (context);
}


DllExport void
AnimationController_OnSetEnabled (Urho3D::AnimationController *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
AnimationController_Update (Urho3D::AnimationController *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport int
AnimationController_Play (Urho3D::AnimationController *_target, const char * name, unsigned char layer, bool looped, float fadeInTime)
{
	return _target->Play (Urho3D::String(name), layer, looped, fadeInTime);
}


DllExport int
AnimationController_PlayExclusive (Urho3D::AnimationController *_target, const char * name, unsigned char layer, bool looped, float fadeTime)
{
	return _target->PlayExclusive (Urho3D::String(name), layer, looped, fadeTime);
}


DllExport int
AnimationController_Stop (Urho3D::AnimationController *_target, const char * name, float fadeOutTime)
{
	return _target->Stop (Urho3D::String(name), fadeOutTime);
}


DllExport void
AnimationController_StopLayer (Urho3D::AnimationController *_target, unsigned char layer, float fadeOutTime)
{
	_target->StopLayer (layer, fadeOutTime);
}


DllExport void
AnimationController_StopAll (Urho3D::AnimationController *_target, float fadeOutTime)
{
	_target->StopAll (fadeOutTime);
}


DllExport int
AnimationController_Fade (Urho3D::AnimationController *_target, const char * name, float targetWeight, float fadeTime)
{
	return _target->Fade (Urho3D::String(name), targetWeight, fadeTime);
}


DllExport int
AnimationController_FadeOthers (Urho3D::AnimationController *_target, const char * name, float targetWeight, float fadeTime)
{
	return _target->FadeOthers (Urho3D::String(name), targetWeight, fadeTime);
}


DllExport int
AnimationController_SetLayer (Urho3D::AnimationController *_target, const char * name, unsigned char layer)
{
	return _target->SetLayer (Urho3D::String(name), layer);
}


DllExport int
AnimationController_SetStartBone (Urho3D::AnimationController *_target, const char * name, const char * startBoneName)
{
	return _target->SetStartBone (Urho3D::String(name), Urho3D::String(startBoneName));
}


DllExport int
AnimationController_SetTime (Urho3D::AnimationController *_target, const char * name, float time)
{
	return _target->SetTime (Urho3D::String(name), time);
}


DllExport int
AnimationController_SetWeight (Urho3D::AnimationController *_target, const char * name, float weight)
{
	return _target->SetWeight (Urho3D::String(name), weight);
}


DllExport int
AnimationController_SetLooped (Urho3D::AnimationController *_target, const char * name, bool enable)
{
	return _target->SetLooped (Urho3D::String(name), enable);
}


DllExport int
AnimationController_SetSpeed (Urho3D::AnimationController *_target, const char * name, float speed)
{
	return _target->SetSpeed (Urho3D::String(name), speed);
}


DllExport int
AnimationController_SetAutoFade (Urho3D::AnimationController *_target, const char * name, float fadeOutTime)
{
	return _target->SetAutoFade (Urho3D::String(name), fadeOutTime);
}


DllExport int
AnimationController_SetRemoveOnCompletion (Urho3D::AnimationController *_target, const char * name, bool removeOnCompletion)
{
	return _target->SetRemoveOnCompletion (Urho3D::String(name), removeOnCompletion);
}


DllExport int
AnimationController_SetBlendMode (Urho3D::AnimationController *_target, const char * name, enum Urho3D::AnimationBlendMode mode)
{
	return _target->SetBlendMode (Urho3D::String(name), mode);
}


DllExport int
AnimationController_IsPlaying (Urho3D::AnimationController *_target, const char * name)
{
	return _target->IsPlaying (Urho3D::String(name));
}


DllExport int
AnimationController_IsPlaying0 (Urho3D::AnimationController *_target, unsigned char layer)
{
	return _target->IsPlaying (layer);
}


DllExport int
AnimationController_IsFadingIn (Urho3D::AnimationController *_target, const char * name)
{
	return _target->IsFadingIn (Urho3D::String(name));
}


DllExport int
AnimationController_IsFadingOut (Urho3D::AnimationController *_target, const char * name)
{
	return _target->IsFadingOut (Urho3D::String(name));
}


DllExport int
AnimationController_IsAtEnd (Urho3D::AnimationController *_target, const char * name)
{
	return _target->IsAtEnd (Urho3D::String(name));
}


DllExport unsigned char
AnimationController_GetLayer (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetLayer (Urho3D::String(name));
}


DllExport Urho3D::Bone *
AnimationController_GetStartBone (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetStartBone (Urho3D::String(name));
}


DllExport const char *
AnimationController_GetStartBoneName (Urho3D::AnimationController *_target, const char * name)
{
	return stringdup((_target->GetStartBoneName (Urho3D::String(name))).CString ());
}


DllExport float
AnimationController_GetTime (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetTime (Urho3D::String(name));
}


DllExport float
AnimationController_GetWeight (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetWeight (Urho3D::String(name));
}


DllExport int
AnimationController_IsLooped (Urho3D::AnimationController *_target, const char * name)
{
	return _target->IsLooped (Urho3D::String(name));
}


DllExport enum Urho3D::AnimationBlendMode
AnimationController_GetBlendMode (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetBlendMode (Urho3D::String(name));
}


DllExport float
AnimationController_GetLength (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetLength (Urho3D::String(name));
}


DllExport float
AnimationController_GetSpeed (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetSpeed (Urho3D::String(name));
}


DllExport float
AnimationController_GetFadeTarget (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetFadeTarget (Urho3D::String(name));
}


DllExport float
AnimationController_GetFadeTime (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetFadeTime (Urho3D::String(name));
}


DllExport float
AnimationController_GetAutoFade (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetAutoFade (Urho3D::String(name));
}


DllExport int
AnimationController_GetRemoveOnCompletion (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetRemoveOnCompletion (Urho3D::String(name));
}


DllExport Urho3D::AnimationState *
AnimationController_GetAnimationState (Urho3D::AnimationController *_target, const char * name)
{
	return _target->GetAnimationState (Urho3D::String(name));
}


DllExport Urho3D::AnimationState *
AnimationController_GetAnimationState1 (Urho3D::AnimationController *_target, int nameHash)
{
	return _target->GetAnimationState (Urho3D::StringHash(nameHash));
}


DllExport void *
Sphere_Sphere ()
{
	return new Sphere();
}


DllExport void *
Sphere_Sphere0 (const class Urho3D::Sphere & sphere)
{
	return new Sphere(sphere);
}


DllExport void *
Sphere_Sphere1 (const class Urho3D::Vector3 & center, float radius)
{
	return new Sphere(center, radius);
}


DllExport void *
Sphere_Sphere2 (const class Urho3D::Vector3 * vertices, unsigned int count)
{
	return new Sphere(vertices, count);
}


DllExport void *
Sphere_Sphere3 (const class Urho3D::BoundingBox & box)
{
	return new Sphere(box);
}


DllExport void *
Sphere_Sphere4 (const class Urho3D::Frustum & frustum)
{
	return new Sphere(frustum);
}


DllExport void *
Sphere_Sphere5 (const class Urho3D::Polyhedron & poly)
{
	return new Sphere(poly);
}


DllExport void
Sphere_Define (Urho3D::Sphere *_target, const class Urho3D::Sphere & sphere)
{
	_target->Define (sphere);
}


DllExport void
Sphere_Define6 (Urho3D::Sphere *_target, const class Urho3D::Vector3 & center, float radius)
{
	_target->Define (center, radius);
}


DllExport void
Sphere_Define7 (Urho3D::Sphere *_target, const class Urho3D::Vector3 * vertices, unsigned int count)
{
	_target->Define (vertices, count);
}


DllExport void
Sphere_Define8 (Urho3D::Sphere *_target, const class Urho3D::BoundingBox & box)
{
	_target->Define (box);
}


DllExport void
Sphere_Define9 (Urho3D::Sphere *_target, const class Urho3D::Frustum & frustum)
{
	_target->Define (frustum);
}


DllExport void
Sphere_Define10 (Urho3D::Sphere *_target, const class Urho3D::Polyhedron & poly)
{
	_target->Define (poly);
}


DllExport void
Sphere_Merge (Urho3D::Sphere *_target, const class Urho3D::Vector3 & point)
{
	_target->Merge (point);
}


DllExport void
Sphere_Merge11 (Urho3D::Sphere *_target, const class Urho3D::Vector3 * vertices, unsigned int count)
{
	_target->Merge (vertices, count);
}


DllExport void
Sphere_Merge12 (Urho3D::Sphere *_target, const class Urho3D::BoundingBox & box)
{
	_target->Merge (box);
}


DllExport void
Sphere_Merge13 (Urho3D::Sphere *_target, const class Urho3D::Frustum & frustum)
{
	_target->Merge (frustum);
}


DllExport void
Sphere_Merge14 (Urho3D::Sphere *_target, const class Urho3D::Polyhedron & poly)
{
	_target->Merge (poly);
}


DllExport void
Sphere_Merge15 (Urho3D::Sphere *_target, const class Urho3D::Sphere & sphere)
{
	_target->Merge (sphere);
}


DllExport void
Sphere_Clear (Urho3D::Sphere *_target)
{
	_target->Clear ();
}


DllExport int
Sphere_Defined (Urho3D::Sphere *_target)
{
	return _target->Defined ();
}


DllExport enum Urho3D::Intersection
Sphere_IsInside (Urho3D::Sphere *_target, const class Urho3D::Vector3 & point)
{
	return _target->IsInside (point);
}


DllExport enum Urho3D::Intersection
Sphere_IsInside16 (Urho3D::Sphere *_target, const class Urho3D::Sphere & sphere)
{
	return _target->IsInside (sphere);
}


DllExport enum Urho3D::Intersection
Sphere_IsInsideFast (Urho3D::Sphere *_target, const class Urho3D::Sphere & sphere)
{
	return _target->IsInsideFast (sphere);
}


DllExport enum Urho3D::Intersection
Sphere_IsInside17 (Urho3D::Sphere *_target, const class Urho3D::BoundingBox & box)
{
	return _target->IsInside (box);
}


DllExport enum Urho3D::Intersection
Sphere_IsInsideFast18 (Urho3D::Sphere *_target, const class Urho3D::BoundingBox & box)
{
	return _target->IsInsideFast (box);
}


DllExport float
Sphere_Distance (Urho3D::Sphere *_target, const class Urho3D::Vector3 & point)
{
	return _target->Distance (point);
}


DllExport Interop::Vector3 
Sphere_GetLocalPoint (Urho3D::Sphere *_target, float theta, float phi)
{
	return *((Interop::Vector3  *) &(_target->GetLocalPoint (theta, phi)));
}


DllExport Interop::Vector3 
Sphere_GetPoint (Urho3D::Sphere *_target, float theta, float phi)
{
	return *((Interop::Vector3  *) &(_target->GetPoint (theta, phi)));
}


DllExport void *
Frustum_Frustum ()
{
	return new Frustum();
}


DllExport void *
Frustum_Frustum0 (const class Urho3D::Frustum & frustum)
{
	return new Frustum(frustum);
}


DllExport void
Frustum_Define (Urho3D::Frustum *_target, float fov, float aspectRatio, float zoom, float nearZ, float farZ, const class Urho3D::Matrix3x4 & transform)
{
	_target->Define (fov, aspectRatio, zoom, nearZ, farZ, transform);
}


DllExport void
Frustum_Define1 (Urho3D::Frustum *_target, const class Urho3D::Vector3 & nearValue, const class Urho3D::Vector3 & farValue, const class Urho3D::Matrix3x4 & transform)
{
	_target->Define (nearValue, farValue, transform);
}


DllExport void
Frustum_Define2 (Urho3D::Frustum *_target, const class Urho3D::BoundingBox & box, const class Urho3D::Matrix3x4 & transform)
{
	_target->Define (box, transform);
}


DllExport void
Frustum_Define3 (Urho3D::Frustum *_target, const class Urho3D::Matrix4 & projection)
{
	_target->Define (projection);
}


DllExport void
Frustum_DefineOrtho (Urho3D::Frustum *_target, float orthoSize, float aspectRatio, float zoom, float nearZ, float farZ, const class Urho3D::Matrix3x4 & transform)
{
	_target->DefineOrtho (orthoSize, aspectRatio, zoom, nearZ, farZ, transform);
}


DllExport void
Frustum_DefineSplit (Urho3D::Frustum *_target, const class Urho3D::Matrix4 & projection, float nearValue, float farValue)
{
	_target->DefineSplit (projection, nearValue, farValue);
}


DllExport void
Frustum_Transform (Urho3D::Frustum *_target, const class Urho3D::Matrix3x4 & transform)
{
	_target->Transform (transform);
}


DllExport enum Urho3D::Intersection
Frustum_IsInside (Urho3D::Frustum *_target, const class Urho3D::Vector3 & point)
{
	return _target->IsInside (point);
}


DllExport enum Urho3D::Intersection
Frustum_IsInside4 (Urho3D::Frustum *_target, const class Urho3D::Sphere & sphere)
{
	return _target->IsInside (sphere);
}


DllExport enum Urho3D::Intersection
Frustum_IsInsideFast (Urho3D::Frustum *_target, const class Urho3D::Sphere & sphere)
{
	return _target->IsInsideFast (sphere);
}


DllExport enum Urho3D::Intersection
Frustum_IsInside5 (Urho3D::Frustum *_target, const class Urho3D::BoundingBox & box)
{
	return _target->IsInside (box);
}


DllExport enum Urho3D::Intersection
Frustum_IsInsideFast6 (Urho3D::Frustum *_target, const class Urho3D::BoundingBox & box)
{
	return _target->IsInsideFast (box);
}


DllExport float
Frustum_Distance (Urho3D::Frustum *_target, const class Urho3D::Vector3 & point)
{
	return _target->Distance (point);
}


DllExport Urho3D::Frustum *
Frustum_Transformed (Urho3D::Frustum *_target, const class Urho3D::Matrix3x4 & transform)
{
	return new Urho3D::Frustum (_target->Transformed (transform));
}


DllExport Urho3D::Rect
Frustum_Projected (Urho3D::Frustum *_target, const class Urho3D::Matrix4 & projection)
{
	return _target->Projected (projection);
}


DllExport void
Frustum_UpdatePlanes (Urho3D::Frustum *_target)
{
	_target->UpdatePlanes ();
}


DllExport void *
GPUObject_GPUObject (Urho3D::Graphics * graphics)
{
	return new GPUObject(graphics);
}


DllExport void
GPUObject_OnDeviceLost (Urho3D::GPUObject *_target)
{
	_target->OnDeviceLost ();
}


DllExport void
GPUObject_OnDeviceReset (Urho3D::GPUObject *_target)
{
	_target->OnDeviceReset ();
}


DllExport void
GPUObject_Release (Urho3D::GPUObject *_target)
{
	_target->Release ();
}


DllExport void
GPUObject_ClearDataLost (Urho3D::GPUObject *_target)
{
	_target->ClearDataLost ();
}


DllExport Urho3D::Graphics *
GPUObject_GetGraphics (Urho3D::GPUObject *_target)
{
	return _target->GetGraphics ();
}


DllExport void *
GPUObject_GetGPUObject (Urho3D::GPUObject *_target)
{
	return _target->GetGPUObject ();
}


DllExport unsigned int
GPUObject_GetGPUObjectName (Urho3D::GPUObject *_target)
{
	return _target->GetGPUObjectName ();
}


DllExport int
GPUObject_IsDataLost (Urho3D::GPUObject *_target)
{
	return _target->IsDataLost ();
}


DllExport int
GPUObject_HasPendingData (Urho3D::GPUObject *_target)
{
	return _target->HasPendingData ();
}


DllExport GPUObject*
Texture_CastToGPUObject(Urho3D::Texture *_target)
{
	return static_cast<GPUObject*>(_target);
}
DllExport int
Texture_GetType (Urho3D::Texture *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Texture_GetTypeName (Urho3D::Texture *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Texture_GetTypeStatic ()
{
	return (Texture::GetTypeStatic ()).Value ();
}


DllExport const char *
Texture_GetTypeNameStatic ()
{
	return stringdup((Texture::GetTypeNameStatic ()).CString ());
}


DllExport void *
Texture_Texture (Urho3D::Context * context)
{
	return WeakPtr<Texture>(new Texture(context));
}


DllExport void
Texture_SetNumLevels (Urho3D::Texture *_target, unsigned int levels)
{
	_target->SetNumLevels (levels);
}


DllExport void
Texture_SetFilterMode (Urho3D::Texture *_target, enum Urho3D::TextureFilterMode mode)
{
	_target->SetFilterMode (mode);
}


DllExport void
Texture_SetAddressMode (Urho3D::Texture *_target, enum Urho3D::TextureCoordinate coord, enum Urho3D::TextureAddressMode mode)
{
	_target->SetAddressMode (coord, mode);
}


DllExport void
Texture_SetAnisotropy (Urho3D::Texture *_target, unsigned int level)
{
	_target->SetAnisotropy (level);
}


DllExport void
Texture_SetShadowCompare (Urho3D::Texture *_target, bool enable)
{
	_target->SetShadowCompare (enable);
}


DllExport void
Texture_SetBorderColor (Urho3D::Texture *_target, const class Urho3D::Color & color)
{
	_target->SetBorderColor (color);
}


DllExport void
Texture_SetSRGB (Urho3D::Texture *_target, bool enable)
{
	_target->SetSRGB (enable);
}


DllExport void
Texture_SetBackupTexture (Urho3D::Texture *_target, Urho3D::Texture * texture)
{
	_target->SetBackupTexture (texture);
}


DllExport void
Texture_SetMipsToSkip (Urho3D::Texture *_target, enum Urho3D::MaterialQuality quality, int toSkip)
{
	_target->SetMipsToSkip (quality, toSkip);
}


DllExport unsigned int
Texture_GetFormat (Urho3D::Texture *_target)
{
	return _target->GetFormat ();
}


DllExport int
Texture_IsCompressed (Urho3D::Texture *_target)
{
	return _target->IsCompressed ();
}


DllExport unsigned int
Texture_GetLevels (Urho3D::Texture *_target)
{
	return _target->GetLevels ();
}


DllExport int
Texture_GetWidth (Urho3D::Texture *_target)
{
	return _target->GetWidth ();
}


DllExport int
Texture_GetHeight (Urho3D::Texture *_target)
{
	return _target->GetHeight ();
}


DllExport int
Texture_GetDepth (Urho3D::Texture *_target)
{
	return _target->GetDepth ();
}


DllExport enum Urho3D::TextureFilterMode
Texture_GetFilterMode (Urho3D::Texture *_target)
{
	return _target->GetFilterMode ();
}


DllExport enum Urho3D::TextureAddressMode
Texture_GetAddressMode (Urho3D::Texture *_target, enum Urho3D::TextureCoordinate coord)
{
	return _target->GetAddressMode (coord);
}


DllExport unsigned int
Texture_GetAnisotropy (Urho3D::Texture *_target)
{
	return _target->GetAnisotropy ();
}


DllExport int
Texture_GetShadowCompare (Urho3D::Texture *_target)
{
	return _target->GetShadowCompare ();
}


DllExport Interop::Color 
Texture_GetBorderColor (Urho3D::Texture *_target)
{
	return *((Interop::Color  *) &(_target->GetBorderColor ()));
}


DllExport int
Texture_GetSRGB (Urho3D::Texture *_target)
{
	return _target->GetSRGB ();
}


DllExport int
Texture_GetMultiSample (Urho3D::Texture *_target)
{
	return _target->GetMultiSample ();
}


DllExport int
Texture_GetAutoResolve (Urho3D::Texture *_target)
{
	return _target->GetAutoResolve ();
}


DllExport int
Texture_IsResolveDirty (Urho3D::Texture *_target)
{
	return _target->IsResolveDirty ();
}


DllExport int
Texture_GetLevelsDirty (Urho3D::Texture *_target)
{
	return _target->GetLevelsDirty ();
}


DllExport Urho3D::Texture *
Texture_GetBackupTexture (Urho3D::Texture *_target)
{
	return _target->GetBackupTexture ();
}


DllExport int
Texture_GetMipsToSkip (Urho3D::Texture *_target, enum Urho3D::MaterialQuality quality)
{
	return _target->GetMipsToSkip (quality);
}


DllExport int
Texture_GetLevelWidth (Urho3D::Texture *_target, unsigned int level)
{
	return _target->GetLevelWidth (level);
}


DllExport int
Texture_GetLevelHeight (Urho3D::Texture *_target, unsigned int level)
{
	return _target->GetLevelHeight (level);
}


DllExport int
Texture_GetLevelDepth (Urho3D::Texture *_target, unsigned int level)
{
	return _target->GetLevelDepth (level);
}


DllExport enum Urho3D::TextureUsage
Texture_GetUsage (Urho3D::Texture *_target)
{
	return _target->GetUsage ();
}


DllExport unsigned int
Texture_GetDataSize (Urho3D::Texture *_target, int width, int height)
{
	return _target->GetDataSize (width, height);
}


DllExport unsigned int
Texture_GetDataSize0 (Urho3D::Texture *_target, int width, int height, int depth)
{
	return _target->GetDataSize (width, height, depth);
}


DllExport unsigned int
Texture_GetRowDataSize (Urho3D::Texture *_target, int width)
{
	return _target->GetRowDataSize (width);
}


DllExport unsigned int
Texture_GetComponents (Urho3D::Texture *_target)
{
	return _target->GetComponents ();
}


DllExport int
Texture_GetParametersDirty (Urho3D::Texture *_target)
{
	return _target->GetParametersDirty ();
}


DllExport void
Texture_SetParameters (Urho3D::Texture *_target, Urho3D::XMLFile * file)
{
	_target->SetParameters (file);
}


DllExport void
Texture_SetParameters1 (Urho3D::Texture *_target, const class Urho3D::XMLElement & element)
{
	_target->SetParameters (element);
}


DllExport void
Texture_SetParametersDirty (Urho3D::Texture *_target)
{
	_target->SetParametersDirty ();
}


DllExport void
Texture_UpdateParameters (Urho3D::Texture *_target)
{
	_target->UpdateParameters ();
}


DllExport void *
Texture_GetShaderResourceView (Urho3D::Texture *_target)
{
	return _target->GetShaderResourceView ();
}


DllExport void *
Texture_GetSampler (Urho3D::Texture *_target)
{
	return _target->GetSampler ();
}


DllExport void *
Texture_GetResolveTexture (Urho3D::Texture *_target)
{
	return _target->GetResolveTexture ();
}


DllExport unsigned int
Texture_GetSRGBFormat (Urho3D::Texture *_target, unsigned int format)
{
	return _target->GetSRGBFormat (format);
}


DllExport void
Texture_SetResolveDirty (Urho3D::Texture *_target, bool enable)
{
	_target->SetResolveDirty (enable);
}


DllExport void
Texture_SetLevelsDirty (Urho3D::Texture *_target)
{
	_target->SetLevelsDirty ();
}


DllExport void
Texture_RegenerateLevels (Urho3D::Texture *_target)
{
	_target->RegenerateLevels ();
}


DllExport unsigned int
Texture_CheckMaxLevels (int width, int height, unsigned int requestedLevels)
{
	return Texture::CheckMaxLevels (width, height, requestedLevels);
}


DllExport unsigned int
Texture_CheckMaxLevels2 (int width, int height, int depth, unsigned int requestedLevels)
{
	return Texture::CheckMaxLevels (width, height, depth, requestedLevels);
}


DllExport int
Light_GetType (Urho3D::Light *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Light_GetTypeName (Urho3D::Light *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Light_GetTypeStatic ()
{
	return (Light::GetTypeStatic ()).Value ();
}


DllExport const char *
Light_GetTypeNameStatic ()
{
	return stringdup((Light::GetTypeNameStatic ()).CString ());
}


DllExport void *
Light_Light (Urho3D::Context * context)
{
	return WeakPtr<Light>(new Light(context));
}


DllExport void
Light_RegisterObject (Urho3D::Context * context)
{
	Light::RegisterObject (context);
}


DllExport void
Light_DrawDebugGeometry (Urho3D::Light *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
Light_SetLightType (Urho3D::Light *_target, enum Urho3D::LightType type)
{
	_target->SetLightType (type);
}


DllExport void
Light_SetPerVertex (Urho3D::Light *_target, bool enable)
{
	_target->SetPerVertex (enable);
}


DllExport void
Light_SetColor (Urho3D::Light *_target, const class Urho3D::Color & color)
{
	_target->SetColor (color);
}


DllExport void
Light_SetTemperature (Urho3D::Light *_target, float temperature)
{
	_target->SetTemperature (temperature);
}


DllExport void
Light_SetRadius (Urho3D::Light *_target, float radius)
{
	_target->SetRadius (radius);
}


DllExport void
Light_SetLength (Urho3D::Light *_target, float length)
{
	_target->SetLength (length);
}


DllExport void
Light_SetUsePhysicalValues (Urho3D::Light *_target, bool enable)
{
	_target->SetUsePhysicalValues (enable);
}


DllExport void
Light_SetSpecularIntensity (Urho3D::Light *_target, float intensity)
{
	_target->SetSpecularIntensity (intensity);
}


DllExport void
Light_SetBrightness (Urho3D::Light *_target, float brightness)
{
	_target->SetBrightness (brightness);
}


DllExport void
Light_SetRange (Urho3D::Light *_target, float range)
{
	_target->SetRange (range);
}


DllExport void
Light_SetFov (Urho3D::Light *_target, float fov)
{
	_target->SetFov (fov);
}


DllExport void
Light_SetAspectRatio (Urho3D::Light *_target, float aspectRatio)
{
	_target->SetAspectRatio (aspectRatio);
}


DllExport void
Light_SetFadeDistance (Urho3D::Light *_target, float distance)
{
	_target->SetFadeDistance (distance);
}


DllExport void
Light_SetShadowFadeDistance (Urho3D::Light *_target, float distance)
{
	_target->SetShadowFadeDistance (distance);
}


DllExport void
Light_SetShadowBias (Urho3D::Light *_target, const struct Urho3D::BiasParameters & parameters)
{
	_target->SetShadowBias (parameters);
}


DllExport void
Light_SetShadowCascade (Urho3D::Light *_target, const struct Urho3D::CascadeParameters & parameters)
{
	_target->SetShadowCascade (parameters);
}


DllExport void
Light_SetShadowFocus (Urho3D::Light *_target, const struct Urho3D::FocusParameters & parameters)
{
	_target->SetShadowFocus (parameters);
}


DllExport void
Light_SetShadowIntensity (Urho3D::Light *_target, float intensity)
{
	_target->SetShadowIntensity (intensity);
}


DllExport void
Light_SetShadowResolution (Urho3D::Light *_target, float resolution)
{
	_target->SetShadowResolution (resolution);
}


DllExport void
Light_SetShadowNearFarRatio (Urho3D::Light *_target, float nearFarRatio)
{
	_target->SetShadowNearFarRatio (nearFarRatio);
}


DllExport void
Light_SetShadowMaxExtrusion (Urho3D::Light *_target, float extrusion)
{
	_target->SetShadowMaxExtrusion (extrusion);
}


DllExport void
Light_SetRampTexture (Urho3D::Light *_target, Urho3D::Texture * texture)
{
	_target->SetRampTexture (texture);
}


DllExport void
Light_SetShapeTexture (Urho3D::Light *_target, Urho3D::Texture * texture)
{
	_target->SetShapeTexture (texture);
}


DllExport enum Urho3D::LightType
Light_GetLightType (Urho3D::Light *_target)
{
	return _target->GetLightType ();
}


DllExport int
Light_GetPerVertex (Urho3D::Light *_target)
{
	return _target->GetPerVertex ();
}


DllExport Interop::Color 
Light_GetColor (Urho3D::Light *_target)
{
	return *((Interop::Color  *) &(_target->GetColor ()));
}


DllExport float
Light_GetTemperature (Urho3D::Light *_target)
{
	return _target->GetTemperature ();
}


DllExport float
Light_GetRadius (Urho3D::Light *_target)
{
	return _target->GetRadius ();
}


DllExport float
Light_GetLength (Urho3D::Light *_target)
{
	return _target->GetLength ();
}


DllExport int
Light_GetUsePhysicalValues (Urho3D::Light *_target)
{
	return _target->GetUsePhysicalValues ();
}


DllExport Interop::Color 
Light_GetColorFromTemperature (Urho3D::Light *_target)
{
	return *((Interop::Color  *) &(_target->GetColorFromTemperature ()));
}


DllExport float
Light_GetSpecularIntensity (Urho3D::Light *_target)
{
	return _target->GetSpecularIntensity ();
}


DllExport float
Light_GetBrightness (Urho3D::Light *_target)
{
	return _target->GetBrightness ();
}


DllExport Interop::Color 
Light_GetEffectiveColor (Urho3D::Light *_target)
{
	return *((Interop::Color  *) &(_target->GetEffectiveColor ()));
}


DllExport float
Light_GetEffectiveSpecularIntensity (Urho3D::Light *_target)
{
	return _target->GetEffectiveSpecularIntensity ();
}


DllExport float
Light_GetRange (Urho3D::Light *_target)
{
	return _target->GetRange ();
}


DllExport float
Light_GetFov (Urho3D::Light *_target)
{
	return _target->GetFov ();
}


DllExport float
Light_GetAspectRatio (Urho3D::Light *_target)
{
	return _target->GetAspectRatio ();
}


DllExport float
Light_GetFadeDistance (Urho3D::Light *_target)
{
	return _target->GetFadeDistance ();
}


DllExport float
Light_GetShadowFadeDistance (Urho3D::Light *_target)
{
	return _target->GetShadowFadeDistance ();
}


DllExport const struct Urho3D::BiasParameters &
Light_GetShadowBias (Urho3D::Light *_target)
{
	return _target->GetShadowBias ();
}


DllExport const struct Urho3D::CascadeParameters &
Light_GetShadowCascade (Urho3D::Light *_target)
{
	return _target->GetShadowCascade ();
}


DllExport const struct Urho3D::FocusParameters &
Light_GetShadowFocus (Urho3D::Light *_target)
{
	return _target->GetShadowFocus ();
}


DllExport float
Light_GetShadowIntensity (Urho3D::Light *_target)
{
	return _target->GetShadowIntensity ();
}


DllExport float
Light_GetShadowResolution (Urho3D::Light *_target)
{
	return _target->GetShadowResolution ();
}


DllExport float
Light_GetShadowNearFarRatio (Urho3D::Light *_target)
{
	return _target->GetShadowNearFarRatio ();
}


DllExport float
Light_GetShadowMaxExtrusion (Urho3D::Light *_target)
{
	return _target->GetShadowMaxExtrusion ();
}


DllExport Urho3D::Texture *
Light_GetRampTexture (Urho3D::Light *_target)
{
	return _target->GetRampTexture ();
}


DllExport Urho3D::Texture *
Light_GetShapeTexture (Urho3D::Light *_target)
{
	return _target->GetShapeTexture ();
}


DllExport Urho3D::Frustum *
Light_GetFrustum (Urho3D::Light *_target)
{
	return new Urho3D::Frustum (_target->GetFrustum ());
}


DllExport Urho3D::Frustum *
Light_GetViewSpaceFrustum (Urho3D::Light *_target, const class Urho3D::Matrix3x4 & view)
{
	return new Urho3D::Frustum (_target->GetViewSpaceFrustum (view));
}


DllExport int
Light_GetNumShadowSplits (Urho3D::Light *_target)
{
	return _target->GetNumShadowSplits ();
}


DllExport int
Light_IsNegative (Urho3D::Light *_target)
{
	return _target->IsNegative ();
}


DllExport void
Light_SetIntensitySortValue (Urho3D::Light *_target, float distance)
{
	_target->SetIntensitySortValue (distance);
}


DllExport void
Light_SetIntensitySortValue0 (Urho3D::Light *_target, const class Urho3D::BoundingBox & box)
{
	_target->SetIntensitySortValue (box);
}


DllExport void
Light_SetLightQueue (Urho3D::Light *_target, Urho3D::LightBatchQueue * queue)
{
	_target->SetLightQueue (queue);
}


DllExport Interop::Matrix3x4 
Light_GetVolumeTransform (Urho3D::Light *_target, Urho3D::Camera * camera)
{
	return *((Interop::Matrix3x4  *) &(_target->GetVolumeTransform (camera)));
}


DllExport Urho3D::LightBatchQueue *
Light_GetLightQueue (Urho3D::Light *_target)
{
	return _target->GetLightQueue ();
}


DllExport float
Light_GetIntensityDivisor (Urho3D::Light *_target, float attenuation)
{
	return _target->GetIntensityDivisor (attenuation);
}


DllExport Urho3D::ResourceRef
Light_GetRampTextureAttr (Urho3D::Light *_target)
{
	return _target->GetRampTextureAttr ();
}


DllExport Urho3D::ResourceRef
Light_GetShapeTextureAttr (Urho3D::Light *_target)
{
	return _target->GetShapeTextureAttr ();
}


DllExport Interop::Matrix3x4 
Light_GetFullscreenQuadTransform (Urho3D::Camera * camera)
{
	return *((Interop::Matrix3x4  *) &(Light::GetFullscreenQuadTransform (camera)));
}


DllExport void *
ShaderParameterAnimationInfo_ShaderParameterAnimationInfo (Urho3D::Material * material, const char * name, Urho3D::ValueAnimation * attributeAnimation, enum Urho3D::WrapMode wrapMode, float speed)
{
	return WeakPtr<ShaderParameterAnimationInfo>(new ShaderParameterAnimationInfo(material, Urho3D::String(name), attributeAnimation, wrapMode, speed));
}


DllExport const char *
ShaderParameterAnimationInfo_GetName (Urho3D::ShaderParameterAnimationInfo *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport int
Material_GetType (Urho3D::Material *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Material_GetTypeName (Urho3D::Material *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Material_GetTypeStatic ()
{
	return (Material::GetTypeStatic ()).Value ();
}


DllExport const char *
Material_GetTypeNameStatic ()
{
	return stringdup((Material::GetTypeNameStatic ()).CString ());
}


DllExport void *
Material_Material (Urho3D::Context * context)
{
	return WeakPtr<Material>(new Material(context));
}


DllExport void
Material_RegisterObject (Urho3D::Context * context)
{
	Material::RegisterObject (context);
}


DllExport int
Material_BeginLoad_File (Urho3D::Material *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Material_BeginLoad_MemoryBuffer (Urho3D::Material *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Material_EndLoad (Urho3D::Material *_target)
{
	return _target->EndLoad ();
}


DllExport int
Material_Save_File (Urho3D::Material *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Material_Save_MemoryBuffer (Urho3D::Material *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
Material_Load (Urho3D::Material *_target, const class Urho3D::XMLElement & source)
{
	return _target->Load (source);
}


DllExport int
Material_Save0 (Urho3D::Material *_target, Urho3D::XMLElement & dest)
{
	return _target->Save (dest);
}


DllExport void
Material_SetNumTechniques (Urho3D::Material *_target, unsigned int num)
{
	_target->SetNumTechniques (num);
}


DllExport void
Material_SetTechnique (Urho3D::Material *_target, unsigned int index, Urho3D::Technique * tech, enum Urho3D::MaterialQuality qualityLevel, float lodDistance)
{
	_target->SetTechnique (index, tech, qualityLevel, lodDistance);
}


DllExport void
Material_SetVertexShaderDefines (Urho3D::Material *_target, const char * defines)
{
	_target->SetVertexShaderDefines (Urho3D::String(defines));
}


DllExport void
Material_SetPixelShaderDefines (Urho3D::Material *_target, const char * defines)
{
	_target->SetPixelShaderDefines (Urho3D::String(defines));
}


// Urho3D::Variant overloads begin:
DllExport void
Material_SetShaderParameter_0 (Urho3D::Material *_target, const char * name, const class Urho3D::Vector3 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_1 (Urho3D::Material *_target, const char * name, const class Urho3D::IntRect & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_2 (Urho3D::Material *_target, const char * name, const class Urho3D::Color & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_3 (Urho3D::Material *_target, const char * name, const class Urho3D::Vector2 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_4 (Urho3D::Material *_target, const char * name, const class Urho3D::Vector4 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_5 (Urho3D::Material *_target, const char * name, const class Urho3D::IntVector2 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_6 (Urho3D::Material *_target, const char * name, const class Urho3D::Quaternion & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_7 (Urho3D::Material *_target, const char * name, const class Urho3D::Matrix4 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_8 (Urho3D::Material *_target, const char * name, const class Urho3D::Matrix3x4 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_9 (Urho3D::Material *_target, const char * name, int value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_10 (Urho3D::Material *_target, const char * name, float value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
Material_SetShaderParameter_11 (Urho3D::Material *_target, const char * name, const char * value)
{
	_target->SetShaderParameter (Urho3D::String(name), Urho3D::String(value));
}

DllExport void
Material_SetShaderParameter_12 (Urho3D::Material *_target, const char * name, bool value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

// Urho3D::Variant overloads end.
DllExport void
Material_SetShaderParameterAnimation (Urho3D::Material *_target, const char * name, Urho3D::ValueAnimation * animation, enum Urho3D::WrapMode wrapMode, float speed)
{
	_target->SetShaderParameterAnimation (Urho3D::String(name), animation, wrapMode, speed);
}


DllExport void
Material_SetShaderParameterAnimationWrapMode (Urho3D::Material *_target, const char * name, enum Urho3D::WrapMode wrapMode)
{
	_target->SetShaderParameterAnimationWrapMode (Urho3D::String(name), wrapMode);
}


DllExport void
Material_SetShaderParameterAnimationSpeed (Urho3D::Material *_target, const char * name, float speed)
{
	_target->SetShaderParameterAnimationSpeed (Urho3D::String(name), speed);
}


DllExport void
Material_SetTexture (Urho3D::Material *_target, enum Urho3D::TextureUnit unit, Urho3D::Texture * texture)
{
	_target->SetTexture (unit, texture);
}


DllExport void
Material_SetUVTransform (Urho3D::Material *_target, const class Urho3D::Vector2 & offset, float rotation, const class Urho3D::Vector2 & repeat)
{
	_target->SetUVTransform (offset, rotation, repeat);
}


DllExport void
Material_SetUVTransform1 (Urho3D::Material *_target, const class Urho3D::Vector2 & offset, float rotation, float repeat)
{
	_target->SetUVTransform (offset, rotation, repeat);
}


DllExport void
Material_SetCullMode (Urho3D::Material *_target, enum Urho3D::CullMode mode)
{
	_target->SetCullMode (mode);
}


DllExport void
Material_SetShadowCullMode (Urho3D::Material *_target, enum Urho3D::CullMode mode)
{
	_target->SetShadowCullMode (mode);
}


DllExport void
Material_SetFillMode (Urho3D::Material *_target, enum Urho3D::FillMode mode)
{
	_target->SetFillMode (mode);
}


DllExport void
Material_SetDepthBias (Urho3D::Material *_target, const struct Urho3D::BiasParameters & parameters)
{
	_target->SetDepthBias (parameters);
}


DllExport void
Material_SetAlphaToCoverage (Urho3D::Material *_target, bool enable)
{
	_target->SetAlphaToCoverage (enable);
}


DllExport void
Material_SetLineAntiAlias (Urho3D::Material *_target, bool enable)
{
	_target->SetLineAntiAlias (enable);
}


DllExport void
Material_SetRenderOrder (Urho3D::Material *_target, unsigned char order)
{
	_target->SetRenderOrder (order);
}


DllExport void
Material_SetOcclusion (Urho3D::Material *_target, bool enable)
{
	_target->SetOcclusion (enable);
}


DllExport void
Material_SetScene (Urho3D::Material *_target, Urho3D::Scene * scene)
{
	_target->SetScene (scene);
}


DllExport void
Material_RemoveShaderParameter (Urho3D::Material *_target, const char * name)
{
	_target->RemoveShaderParameter (Urho3D::String(name));
}


DllExport void
Material_ReleaseShaders (Urho3D::Material *_target)
{
	_target->ReleaseShaders ();
}


DllExport Urho3D::Material *
Material_Clone (Urho3D::Material *_target, const char * cloneName)
{
	auto copy = _target->Clone (Urho3D::String(cloneName));
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport void
Material_SortTechniques (Urho3D::Material *_target)
{
	_target->SortTechniques ();
}


DllExport void
Material_MarkForAuxView (Urho3D::Material *_target, unsigned int frameNumber)
{
	_target->MarkForAuxView (frameNumber);
}


DllExport unsigned int
Material_GetNumTechniques (Urho3D::Material *_target)
{
	return _target->GetNumTechniques ();
}


DllExport Urho3D::Technique *
Material_GetTechnique (Urho3D::Material *_target, unsigned int index)
{
	return _target->GetTechnique (index);
}


DllExport Urho3D::Pass *
Material_GetPass (Urho3D::Material *_target, unsigned int index, const char * passName)
{
	return _target->GetPass (index, Urho3D::String(passName));
}


DllExport Urho3D::Texture *
Material_GetTexture (Urho3D::Material *_target, enum Urho3D::TextureUnit unit)
{
	return _target->GetTexture (unit);
}


DllExport const char *
Material_GetVertexShaderDefines (Urho3D::Material *_target)
{
	return stringdup((_target->GetVertexShaderDefines ()).CString ());
}


DllExport const char *
Material_GetPixelShaderDefines (Urho3D::Material *_target)
{
	return stringdup((_target->GetPixelShaderDefines ()).CString ());
}


// Urho3D::Variant overloads begin:
DllExport Interop::Vector3
Material_GetShaderParameter_0 (Urho3D::Material *_target, const char * name)
{
	return *((Interop::Vector3 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetVector3()));
}

DllExport Interop::IntRect
Material_GetShaderParameter_1 (Urho3D::Material *_target, const char * name)
{
	return *((Interop::IntRect *) &(_target->GetShaderParameter (Urho3D::String(name)).GetIntRect()));
}

DllExport Interop::Color
Material_GetShaderParameter_2 (Urho3D::Material *_target, const char * name)
{
	return *((Interop::Color *) &(_target->GetShaderParameter (Urho3D::String(name)).GetColor()));
}

DllExport Interop::Vector2
Material_GetShaderParameter_3 (Urho3D::Material *_target, const char * name)
{
	return *((Interop::Vector2 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetVector2()));
}

DllExport Interop::Vector4
Material_GetShaderParameter_4 (Urho3D::Material *_target, const char * name)
{
	return *((Interop::Vector4 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetVector4()));
}

DllExport Interop::IntVector2
Material_GetShaderParameter_5 (Urho3D::Material *_target, const char * name)
{
	return *((Interop::IntVector2 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetIntVector2()));
}

DllExport Interop::Quaternion
Material_GetShaderParameter_6 (Urho3D::Material *_target, const char * name)
{
	return *((Interop::Quaternion *) &(_target->GetShaderParameter (Urho3D::String(name)).GetQuaternion()));
}

DllExport Interop::Matrix4
Material_GetShaderParameter_7 (Urho3D::Material *_target, const char * name)
{
	return *((Interop::Matrix4 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetMatrix4()));
}

DllExport Interop::Matrix3x4
Material_GetShaderParameter_8 (Urho3D::Material *_target, const char * name)
{
	return *((Interop::Matrix3x4 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetMatrix3x4()));
}

DllExport int
Material_GetShaderParameter_9 (Urho3D::Material *_target, const char * name)
{
	return (_target->GetShaderParameter (Urho3D::String(name)).GetInt());
}

DllExport float
Material_GetShaderParameter_10 (Urho3D::Material *_target, const char * name)
{
	return (_target->GetShaderParameter (Urho3D::String(name)).GetFloat());
}

DllExport const char *
Material_GetShaderParameter_11 (Urho3D::Material *_target, const char * name)
{
	return stringdup(_target->GetShaderParameter (Urho3D::String(name)).GetString().CString());
}

DllExport bool
Material_GetShaderParameter_12 (Urho3D::Material *_target, const char * name)
{
	return (_target->GetShaderParameter (Urho3D::String(name)).GetBool());
}

// Urho3D::Variant overloads end.
DllExport Urho3D::ValueAnimation *
Material_GetShaderParameterAnimation (Urho3D::Material *_target, const char * name)
{
	return _target->GetShaderParameterAnimation (Urho3D::String(name));
}


DllExport enum Urho3D::WrapMode
Material_GetShaderParameterAnimationWrapMode (Urho3D::Material *_target, const char * name)
{
	return _target->GetShaderParameterAnimationWrapMode (Urho3D::String(name));
}


DllExport float
Material_GetShaderParameterAnimationSpeed (Urho3D::Material *_target, const char * name)
{
	return _target->GetShaderParameterAnimationSpeed (Urho3D::String(name));
}


DllExport enum Urho3D::CullMode
Material_GetCullMode (Urho3D::Material *_target)
{
	return _target->GetCullMode ();
}


DllExport enum Urho3D::CullMode
Material_GetShadowCullMode (Urho3D::Material *_target)
{
	return _target->GetShadowCullMode ();
}


DllExport enum Urho3D::FillMode
Material_GetFillMode (Urho3D::Material *_target)
{
	return _target->GetFillMode ();
}


DllExport const struct Urho3D::BiasParameters &
Material_GetDepthBias (Urho3D::Material *_target)
{
	return _target->GetDepthBias ();
}


DllExport int
Material_GetAlphaToCoverage (Urho3D::Material *_target)
{
	return _target->GetAlphaToCoverage ();
}


DllExport int
Material_GetLineAntiAlias (Urho3D::Material *_target)
{
	return _target->GetLineAntiAlias ();
}


DllExport unsigned char
Material_GetRenderOrder (Urho3D::Material *_target)
{
	return _target->GetRenderOrder ();
}


DllExport unsigned int
Material_GetAuxViewFrameNumber (Urho3D::Material *_target)
{
	return _target->GetAuxViewFrameNumber ();
}


DllExport int
Material_GetOcclusion (Urho3D::Material *_target)
{
	return _target->GetOcclusion ();
}


DllExport int
Material_GetSpecular (Urho3D::Material *_target)
{
	return _target->GetSpecular ();
}


DllExport Urho3D::Scene *
Material_GetScene (Urho3D::Material *_target)
{
	return _target->GetScene ();
}


DllExport unsigned int
Material_GetShaderParameterHash (Urho3D::Material *_target)
{
	return _target->GetShaderParameterHash ();
}


DllExport const char *
Material_GetTextureUnitName (enum Urho3D::TextureUnit unit)
{
	return stringdup((Material::GetTextureUnitName (unit)).CString ());
}


DllExport Urho3D::Variant
Material_ParseShaderParameterValue (const char * value)
{
	return Material::ParseShaderParameterValue (Urho3D::String(value));
}


DllExport int
BillboardSet_GetType (Urho3D::BillboardSet *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
BillboardSet_GetTypeName (Urho3D::BillboardSet *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
BillboardSet_GetTypeStatic ()
{
	return (BillboardSet::GetTypeStatic ()).Value ();
}


DllExport const char *
BillboardSet_GetTypeNameStatic ()
{
	return stringdup((BillboardSet::GetTypeNameStatic ()).CString ());
}


DllExport void *
BillboardSet_BillboardSet (Urho3D::Context * context)
{
	return WeakPtr<BillboardSet>(new BillboardSet(context));
}


DllExport void
BillboardSet_RegisterObject (Urho3D::Context * context)
{
	BillboardSet::RegisterObject (context);
}


DllExport enum Urho3D::UpdateGeometryType
BillboardSet_GetUpdateGeometryType (Urho3D::BillboardSet *_target)
{
	return _target->GetUpdateGeometryType ();
}


DllExport void
BillboardSet_SetMaterial (Urho3D::BillboardSet *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport void
BillboardSet_SetNumBillboards (Urho3D::BillboardSet *_target, unsigned int num)
{
	_target->SetNumBillboards (num);
}


DllExport void
BillboardSet_SetRelative (Urho3D::BillboardSet *_target, bool enable)
{
	_target->SetRelative (enable);
}


DllExport void
BillboardSet_SetScaled (Urho3D::BillboardSet *_target, bool enable)
{
	_target->SetScaled (enable);
}


DllExport void
BillboardSet_SetSorted (Urho3D::BillboardSet *_target, bool enable)
{
	_target->SetSorted (enable);
}


DllExport void
BillboardSet_SetFixedScreenSize (Urho3D::BillboardSet *_target, bool enable)
{
	_target->SetFixedScreenSize (enable);
}


DllExport void
BillboardSet_SetFaceCameraMode (Urho3D::BillboardSet *_target, enum Urho3D::FaceCameraMode mode)
{
	_target->SetFaceCameraMode (mode);
}


DllExport void
BillboardSet_SetMinAngle (Urho3D::BillboardSet *_target, float angle)
{
	_target->SetMinAngle (angle);
}


DllExport void
BillboardSet_SetAnimationLodBias (Urho3D::BillboardSet *_target, float bias)
{
	_target->SetAnimationLodBias (bias);
}


DllExport void
BillboardSet_Commit (Urho3D::BillboardSet *_target)
{
	_target->Commit ();
}


DllExport Urho3D::Material *
BillboardSet_GetMaterial (Urho3D::BillboardSet *_target)
{
	return _target->GetMaterial ();
}


DllExport unsigned int
BillboardSet_GetNumBillboards (Urho3D::BillboardSet *_target)
{
	return _target->GetNumBillboards ();
}


DllExport Urho3D::Billboard *
BillboardSet_GetBillboard (Urho3D::BillboardSet *_target, unsigned int index)
{
	return _target->GetBillboard (index);
}


DllExport int
BillboardSet_IsRelative (Urho3D::BillboardSet *_target)
{
	return _target->IsRelative ();
}


DllExport int
BillboardSet_IsScaled (Urho3D::BillboardSet *_target)
{
	return _target->IsScaled ();
}


DllExport int
BillboardSet_IsSorted (Urho3D::BillboardSet *_target)
{
	return _target->IsSorted ();
}


DllExport int
BillboardSet_IsFixedScreenSize (Urho3D::BillboardSet *_target)
{
	return _target->IsFixedScreenSize ();
}


DllExport enum Urho3D::FaceCameraMode
BillboardSet_GetFaceCameraMode (Urho3D::BillboardSet *_target)
{
	return _target->GetFaceCameraMode ();
}


DllExport float
BillboardSet_GetMinAngle (Urho3D::BillboardSet *_target)
{
	return _target->GetMinAngle ();
}


DllExport float
BillboardSet_GetAnimationLodBias (Urho3D::BillboardSet *_target)
{
	return _target->GetAnimationLodBias ();
}


DllExport Urho3D::ResourceRef
BillboardSet_GetMaterialAttr (Urho3D::BillboardSet *_target)
{
	return _target->GetMaterialAttr ();
}


DllExport int
Camera_GetType (Urho3D::Camera *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Camera_GetTypeName (Urho3D::Camera *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Camera_GetTypeStatic ()
{
	return (Camera::GetTypeStatic ()).Value ();
}


DllExport const char *
Camera_GetTypeNameStatic ()
{
	return stringdup((Camera::GetTypeNameStatic ()).CString ());
}


DllExport void *
Camera_Camera (Urho3D::Context * context)
{
	return WeakPtr<Camera>(new Camera(context));
}


DllExport void
Camera_RegisterObject (Urho3D::Context * context)
{
	Camera::RegisterObject (context);
}


DllExport void
Camera_DrawDebugGeometry (Urho3D::Camera *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
Camera_SetNearClip (Urho3D::Camera *_target, float nearClip)
{
	_target->SetNearClip (nearClip);
}


DllExport void
Camera_SetFarClip (Urho3D::Camera *_target, float farClip)
{
	_target->SetFarClip (farClip);
}


DllExport void
Camera_SetFov (Urho3D::Camera *_target, float fov)
{
	_target->SetFov (fov);
}


DllExport void
Camera_SetSkew (Urho3D::Camera *_target, float skew)
{
	_target->SetSkew (skew);
}


DllExport void
Camera_SetOrthoSize (Urho3D::Camera *_target, float orthoSize)
{
	_target->SetOrthoSize (orthoSize);
}


DllExport void
Camera_SetOrthoSize0 (Urho3D::Camera *_target, const class Urho3D::Vector2 & orthoSize)
{
	_target->SetOrthoSize (orthoSize);
}


DllExport void
Camera_SetAspectRatio (Urho3D::Camera *_target, float aspectRatio)
{
	_target->SetAspectRatio (aspectRatio);
}


DllExport void
Camera_SetFillMode (Urho3D::Camera *_target, enum Urho3D::FillMode mode)
{
	_target->SetFillMode (mode);
}


DllExport void
Camera_SetZoom (Urho3D::Camera *_target, float zoom)
{
	_target->SetZoom (zoom);
}


DllExport void
Camera_SetLodBias (Urho3D::Camera *_target, float bias)
{
	_target->SetLodBias (bias);
}


DllExport void
Camera_SetViewMask (Urho3D::Camera *_target, unsigned int mask)
{
	_target->SetViewMask (mask);
}


DllExport void
Camera_SetOrthographic (Urho3D::Camera *_target, bool enable)
{
	_target->SetOrthographic (enable);
}


DllExport void
Camera_SetAutoAspectRatio (Urho3D::Camera *_target, bool enable)
{
	_target->SetAutoAspectRatio (enable);
}


DllExport void
Camera_SetProjectionOffset (Urho3D::Camera *_target, const class Urho3D::Vector2 & offset)
{
	_target->SetProjectionOffset (offset);
}


DllExport void
Camera_SetUseReflection (Urho3D::Camera *_target, bool enable)
{
	_target->SetUseReflection (enable);
}


DllExport void
Camera_SetReflectionPlane (Urho3D::Camera *_target, const class Urho3D::Plane & plane)
{
	_target->SetReflectionPlane (plane);
}


DllExport void
Camera_SetUseClipping (Urho3D::Camera *_target, bool enable)
{
	_target->SetUseClipping (enable);
}


DllExport void
Camera_SetClipPlane (Urho3D::Camera *_target, const class Urho3D::Plane & plane)
{
	_target->SetClipPlane (plane);
}


DllExport void
Camera_SetFlipVertical (Urho3D::Camera *_target, bool enable)
{
	_target->SetFlipVertical (enable);
}


DllExport void
Camera_SetProjection (Urho3D::Camera *_target, const class Urho3D::Matrix4 & projection)
{
	_target->SetProjection (projection);
}


DllExport float
Camera_GetFarClip (Urho3D::Camera *_target)
{
	return _target->GetFarClip ();
}


DllExport float
Camera_GetNearClip (Urho3D::Camera *_target)
{
	return _target->GetNearClip ();
}


DllExport float
Camera_GetSkew (Urho3D::Camera *_target)
{
	return _target->GetSkew ();
}


DllExport float
Camera_GetFov (Urho3D::Camera *_target)
{
	return _target->GetFov ();
}


DllExport float
Camera_GetOrthoSize (Urho3D::Camera *_target)
{
	return _target->GetOrthoSize ();
}


DllExport float
Camera_GetAspectRatio (Urho3D::Camera *_target)
{
	return _target->GetAspectRatio ();
}


DllExport float
Camera_GetZoom (Urho3D::Camera *_target)
{
	return _target->GetZoom ();
}


DllExport float
Camera_GetLodBias (Urho3D::Camera *_target)
{
	return _target->GetLodBias ();
}


DllExport unsigned int
Camera_GetViewMask (Urho3D::Camera *_target)
{
	return _target->GetViewMask ();
}


DllExport enum Urho3D::FillMode
Camera_GetFillMode (Urho3D::Camera *_target)
{
	return _target->GetFillMode ();
}


DllExport int
Camera_IsOrthographic (Urho3D::Camera *_target)
{
	return _target->IsOrthographic ();
}


DllExport int
Camera_GetAutoAspectRatio (Urho3D::Camera *_target)
{
	return _target->GetAutoAspectRatio ();
}


DllExport const class Urho3D::Frustum &
Camera_GetFrustum (Urho3D::Camera *_target)
{
	return _target->GetFrustum ();
}


DllExport Interop::Matrix4 
Camera_GetProjection (Urho3D::Camera *_target)
{
	return *((Interop::Matrix4  *) &(_target->GetProjection ()));
}


DllExport Interop::Matrix4 
Camera_GetGPUProjection (Urho3D::Camera *_target)
{
	return *((Interop::Matrix4  *) &(_target->GetGPUProjection ()));
}


DllExport Interop::Matrix3x4 
Camera_GetView (Urho3D::Camera *_target)
{
	return *((Interop::Matrix3x4  *) &(_target->GetView ()));
}


DllExport float
Camera_GetHalfViewSize (Urho3D::Camera *_target)
{
	return _target->GetHalfViewSize ();
}


DllExport Urho3D::Frustum *
Camera_GetSplitFrustum (Urho3D::Camera *_target, float nearClip, float farClip)
{
	return new Urho3D::Frustum (_target->GetSplitFrustum (nearClip, farClip));
}


DllExport Urho3D::Frustum *
Camera_GetViewSpaceFrustum (Urho3D::Camera *_target)
{
	return new Urho3D::Frustum (_target->GetViewSpaceFrustum ());
}


DllExport Urho3D::Frustum *
Camera_GetViewSpaceSplitFrustum (Urho3D::Camera *_target, float nearClip, float farClip)
{
	return new Urho3D::Frustum (_target->GetViewSpaceSplitFrustum (nearClip, farClip));
}


DllExport Urho3D::Ray
Camera_GetScreenRay (Urho3D::Camera *_target, float x, float y)
{
	return _target->GetScreenRay (x, y);
}


DllExport Interop::Vector2 
Camera_WorldToScreenPoint (Urho3D::Camera *_target, const class Urho3D::Vector3 & worldPos)
{
	return *((Interop::Vector2  *) &(_target->WorldToScreenPoint (worldPos)));
}


DllExport Interop::Vector3 
Camera_ScreenToWorldPoint (Urho3D::Camera *_target, const class Urho3D::Vector3 & screenPos)
{
	return *((Interop::Vector3  *) &(_target->ScreenToWorldPoint (screenPos)));
}


DllExport Interop::Vector2 
Camera_GetProjectionOffset (Urho3D::Camera *_target)
{
	return *((Interop::Vector2  *) &(_target->GetProjectionOffset ()));
}


DllExport int
Camera_GetUseReflection (Urho3D::Camera *_target)
{
	return _target->GetUseReflection ();
}


DllExport Interop::Plane 
Camera_GetReflectionPlane (Urho3D::Camera *_target)
{
	return *((Interop::Plane  *) &(_target->GetReflectionPlane ()));
}


DllExport int
Camera_GetUseClipping (Urho3D::Camera *_target)
{
	return _target->GetUseClipping ();
}


DllExport Interop::Plane 
Camera_GetClipPlane (Urho3D::Camera *_target)
{
	return *((Interop::Plane  *) &(_target->GetClipPlane ()));
}


DllExport int
Camera_GetFlipVertical (Urho3D::Camera *_target)
{
	return _target->GetFlipVertical ();
}


DllExport int
Camera_GetReverseCulling (Urho3D::Camera *_target)
{
	return _target->GetReverseCulling ();
}


DllExport float
Camera_GetDistance (Urho3D::Camera *_target, const class Urho3D::Vector3 & worldPos)
{
	return _target->GetDistance (worldPos);
}


DllExport float
Camera_GetDistanceSquared (Urho3D::Camera *_target, const class Urho3D::Vector3 & worldPos)
{
	return _target->GetDistanceSquared (worldPos);
}


DllExport float
Camera_GetLodDistance (Urho3D::Camera *_target, float distance, float scale, float bias)
{
	return _target->GetLodDistance (distance, scale, bias);
}


DllExport Interop::Quaternion 
Camera_GetFaceCameraRotation (Urho3D::Camera *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, enum Urho3D::FaceCameraMode mode, float minAngle)
{
	return *((Interop::Quaternion  *) &(_target->GetFaceCameraRotation (position, rotation, mode, minAngle)));
}


DllExport Interop::Matrix3x4 
Camera_GetEffectiveWorldTransform (Urho3D::Camera *_target)
{
	return *((Interop::Matrix3x4  *) &(_target->GetEffectiveWorldTransform ()));
}


DllExport int
Camera_IsProjectionValid (Urho3D::Camera *_target)
{
	return _target->IsProjectionValid ();
}


DllExport void
Camera_SetAspectRatioInternal (Urho3D::Camera *_target, float aspectRatio)
{
	_target->SetAspectRatioInternal (aspectRatio);
}


DllExport void
Camera_SetOrthoSizeAttr (Urho3D::Camera *_target, float orthoSize)
{
	_target->SetOrthoSizeAttr (orthoSize);
}


DllExport void
Camera_SetReflectionPlaneAttr (Urho3D::Camera *_target, const class Urho3D::Vector4 & value)
{
	_target->SetReflectionPlaneAttr (value);
}


DllExport Interop::Vector4 
Camera_GetReflectionPlaneAttr (Urho3D::Camera *_target)
{
	return *((Interop::Vector4  *) &(_target->GetReflectionPlaneAttr ()));
}


DllExport void
Camera_SetClipPlaneAttr (Urho3D::Camera *_target, const class Urho3D::Vector4 & value)
{
	_target->SetClipPlaneAttr (value);
}


DllExport Interop::Vector4 
Camera_GetClipPlaneAttr (Urho3D::Camera *_target)
{
	return *((Interop::Vector4  *) &(_target->GetClipPlaneAttr ()));
}


DllExport GPUObject*
ConstantBuffer_CastToGPUObject(Urho3D::ConstantBuffer *_target)
{
	return static_cast<GPUObject*>(_target);
}
DllExport int
ConstantBuffer_GetType (Urho3D::ConstantBuffer *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstantBuffer_GetTypeName (Urho3D::ConstantBuffer *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstantBuffer_GetTypeStatic ()
{
	return (ConstantBuffer::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstantBuffer_GetTypeNameStatic ()
{
	return stringdup((ConstantBuffer::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstantBuffer_ConstantBuffer (Urho3D::Context * context)
{
	return WeakPtr<ConstantBuffer>(new ConstantBuffer(context));
}


DllExport void
ConstantBuffer_Release (Urho3D::ConstantBuffer *_target)
{
	_target->Release ();
}


DllExport int
ConstantBuffer_SetSize (Urho3D::ConstantBuffer *_target, unsigned int size)
{
	return _target->SetSize (size);
}


DllExport void
ConstantBuffer_SetParameter (Urho3D::ConstantBuffer *_target, unsigned int offset, unsigned int size, const void * data)
{
	_target->SetParameter (offset, size, data);
}


DllExport void
ConstantBuffer_SetVector3ArrayParameter (Urho3D::ConstantBuffer *_target, unsigned int offset, unsigned int rows, const void * data)
{
	_target->SetVector3ArrayParameter (offset, rows, data);
}


DllExport void
ConstantBuffer_Apply (Urho3D::ConstantBuffer *_target)
{
	_target->Apply ();
}


DllExport unsigned int
ConstantBuffer_GetSize (Urho3D::ConstantBuffer *_target)
{
	return _target->GetSize ();
}


DllExport int
ConstantBuffer_IsDirty (Urho3D::ConstantBuffer *_target)
{
	return _target->IsDirty ();
}


DllExport int
CustomGeometry_GetType (Urho3D::CustomGeometry *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CustomGeometry_GetTypeName (Urho3D::CustomGeometry *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CustomGeometry_GetTypeStatic ()
{
	return (CustomGeometry::GetTypeStatic ()).Value ();
}


DllExport const char *
CustomGeometry_GetTypeNameStatic ()
{
	return stringdup((CustomGeometry::GetTypeNameStatic ()).CString ());
}


DllExport void *
CustomGeometry_CustomGeometry (Urho3D::Context * context)
{
	return WeakPtr<CustomGeometry>(new CustomGeometry(context));
}


DllExport void
CustomGeometry_RegisterObject (Urho3D::Context * context)
{
	CustomGeometry::RegisterObject (context);
}


DllExport Urho3D::Geometry *
CustomGeometry_GetLodGeometry (Urho3D::CustomGeometry *_target, unsigned int batchIndex, unsigned int level)
{
	return _target->GetLodGeometry (batchIndex, level);
}


DllExport unsigned int
CustomGeometry_GetNumOccluderTriangles (Urho3D::CustomGeometry *_target)
{
	return _target->GetNumOccluderTriangles ();
}


DllExport int
CustomGeometry_DrawOcclusion (Urho3D::CustomGeometry *_target, Urho3D::OcclusionBuffer * buffer)
{
	return _target->DrawOcclusion (buffer);
}


DllExport void
CustomGeometry_MakeCircle (Urho3D::CustomGeometry *_target, float radius, size_t iterations, float startTheta, float endTheta, bool clear, int geomNum)
{
	_target->MakeCircle (radius, iterations, startTheta, endTheta, clear, geomNum);
}


DllExport void
CustomGeometry_MakeSquare (Urho3D::CustomGeometry *_target, float size)
{
	_target->MakeSquare (size);
}


DllExport void
CustomGeometry_MakeSphere (Urho3D::CustomGeometry *_target, float radius, size_t iterations)
{
	_target->MakeSphere (radius, iterations);
}


DllExport void
CustomGeometry_Clear (Urho3D::CustomGeometry *_target)
{
	_target->Clear ();
}


DllExport void
CustomGeometry_SetNumGeometries (Urho3D::CustomGeometry *_target, unsigned int num)
{
	_target->SetNumGeometries (num);
}


DllExport void
CustomGeometry_SetDynamic (Urho3D::CustomGeometry *_target, bool enable)
{
	_target->SetDynamic (enable);
}


DllExport void
CustomGeometry_BeginGeometry (Urho3D::CustomGeometry *_target, unsigned int index, enum Urho3D::PrimitiveType type)
{
	_target->BeginGeometry (index, type);
}


DllExport void
CustomGeometry_DefineVertex (Urho3D::CustomGeometry *_target, const class Urho3D::Vector3 & position)
{
	_target->DefineVertex (position);
}


DllExport void
CustomGeometry_DefineNormal (Urho3D::CustomGeometry *_target, const class Urho3D::Vector3 & normal)
{
	_target->DefineNormal (normal);
}


DllExport void
CustomGeometry_DefineColor (Urho3D::CustomGeometry *_target, const class Urho3D::Color & color)
{
	_target->DefineColor (color);
}


DllExport void
CustomGeometry_DefineTexCoord (Urho3D::CustomGeometry *_target, const class Urho3D::Vector2 & texCoord)
{
	_target->DefineTexCoord (texCoord);
}


DllExport void
CustomGeometry_DefineTangent (Urho3D::CustomGeometry *_target, const class Urho3D::Vector4 & tangent)
{
	_target->DefineTangent (tangent);
}


DllExport void
CustomGeometry_DefineGeometry (Urho3D::CustomGeometry *_target, unsigned int index, enum Urho3D::PrimitiveType type, unsigned int numVertices, bool hasNormals, bool hasColors, bool hasTexCoords, bool hasTangents)
{
	_target->DefineGeometry (index, type, numVertices, hasNormals, hasColors, hasTexCoords, hasTangents);
}


DllExport void
CustomGeometry_Commit (Urho3D::CustomGeometry *_target)
{
	_target->Commit ();
}


DllExport void
CustomGeometry_SetMaterial (Urho3D::CustomGeometry *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport int
CustomGeometry_SetMaterial0 (Urho3D::CustomGeometry *_target, unsigned int index, Urho3D::Material * material)
{
	return _target->SetMaterial (index, material);
}


DllExport unsigned int
CustomGeometry_GetNumGeometries (Urho3D::CustomGeometry *_target)
{
	return _target->GetNumGeometries ();
}


DllExport unsigned int
CustomGeometry_GetNumVertices (Urho3D::CustomGeometry *_target, unsigned int index)
{
	return _target->GetNumVertices (index);
}


DllExport int
CustomGeometry_IsDynamic (Urho3D::CustomGeometry *_target)
{
	return _target->IsDynamic ();
}


DllExport Urho3D::Material *
CustomGeometry_GetMaterial (Urho3D::CustomGeometry *_target, unsigned int index)
{
	return _target->GetMaterial (index);
}


DllExport Urho3D::CustomGeometryVertex *
CustomGeometry_GetVertex (Urho3D::CustomGeometry *_target, unsigned int geometryIndex, unsigned int vertexNum)
{
	return _target->GetVertex (geometryIndex, vertexNum);
}


DllExport int
DebugRenderer_GetType (Urho3D::DebugRenderer *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
DebugRenderer_GetTypeName (Urho3D::DebugRenderer *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
DebugRenderer_GetTypeStatic ()
{
	return (DebugRenderer::GetTypeStatic ()).Value ();
}


DllExport const char *
DebugRenderer_GetTypeNameStatic ()
{
	return stringdup((DebugRenderer::GetTypeNameStatic ()).CString ());
}


DllExport void *
DebugRenderer_DebugRenderer (Urho3D::Context * context)
{
	return WeakPtr<DebugRenderer>(new DebugRenderer(context));
}


DllExport void
DebugRenderer_RegisterObject (Urho3D::Context * context)
{
	DebugRenderer::RegisterObject (context);
}


DllExport void
DebugRenderer_SetLineAntiAlias (Urho3D::DebugRenderer *_target, bool enable)
{
	_target->SetLineAntiAlias (enable);
}


DllExport void
DebugRenderer_SetView (Urho3D::DebugRenderer *_target, Urho3D::Camera * camera)
{
	_target->SetView (camera);
}


DllExport void
DebugRenderer_AddLine (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & start, const class Urho3D::Vector3 & end, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddLine (start, end, color, depthTest);
}


DllExport void
DebugRenderer_AddLine0 (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & start, const class Urho3D::Vector3 & end, unsigned int color, bool depthTest)
{
	_target->AddLine (start, end, color, depthTest);
}


DllExport void
DebugRenderer_AddTriangle (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & v1, const class Urho3D::Vector3 & v2, const class Urho3D::Vector3 & v3, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddTriangle (v1, v2, v3, color, depthTest);
}


DllExport void
DebugRenderer_AddTriangle1 (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & v1, const class Urho3D::Vector3 & v2, const class Urho3D::Vector3 & v3, unsigned int color, bool depthTest)
{
	_target->AddTriangle (v1, v2, v3, color, depthTest);
}


DllExport void
DebugRenderer_AddPolygon (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & v1, const class Urho3D::Vector3 & v2, const class Urho3D::Vector3 & v3, const class Urho3D::Vector3 & v4, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddPolygon (v1, v2, v3, v4, color, depthTest);
}


DllExport void
DebugRenderer_AddPolygon2 (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & v1, const class Urho3D::Vector3 & v2, const class Urho3D::Vector3 & v3, const class Urho3D::Vector3 & v4, unsigned int color, bool depthTest)
{
	_target->AddPolygon (v1, v2, v3, v4, color, depthTest);
}


DllExport void
DebugRenderer_AddNode (Urho3D::DebugRenderer *_target, Urho3D::Node * node, float scale, bool depthTest)
{
	_target->AddNode (node, scale, depthTest);
}


DllExport void
DebugRenderer_AddBoundingBox (Urho3D::DebugRenderer *_target, const class Urho3D::BoundingBox & box, const class Urho3D::Color & color, bool depthTest, bool solid)
{
	_target->AddBoundingBox (box, color, depthTest, solid);
}


DllExport void
DebugRenderer_AddBoundingBox3 (Urho3D::DebugRenderer *_target, const class Urho3D::BoundingBox & box, const class Urho3D::Matrix3x4 & transform, const class Urho3D::Color & color, bool depthTest, bool solid)
{
	_target->AddBoundingBox (box, transform, color, depthTest, solid);
}


DllExport void
DebugRenderer_AddFrustum (Urho3D::DebugRenderer *_target, const class Urho3D::Frustum & frustum, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddFrustum (frustum, color, depthTest);
}


DllExport void
DebugRenderer_AddPolyhedron (Urho3D::DebugRenderer *_target, const class Urho3D::Polyhedron & poly, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddPolyhedron (poly, color, depthTest);
}


DllExport void
DebugRenderer_AddSphere (Urho3D::DebugRenderer *_target, const class Urho3D::Sphere & sphere, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddSphere (sphere, color, depthTest);
}


DllExport void
DebugRenderer_AddSphereSector (Urho3D::DebugRenderer *_target, const class Urho3D::Sphere & sphere, const class Urho3D::Quaternion & rotation, float angle, bool drawLines, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddSphereSector (sphere, rotation, angle, drawLines, color, depthTest);
}


DllExport void
DebugRenderer_AddCylinder (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & position, float radius, float height, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddCylinder (position, radius, height, color, depthTest);
}


DllExport void
DebugRenderer_AddTriangleMesh (Urho3D::DebugRenderer *_target, const void * vertexData, unsigned int vertexSize, const void * indexData, unsigned int indexSize, unsigned int indexStart, unsigned int indexCount, const class Urho3D::Matrix3x4 & transform, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddTriangleMesh (vertexData, vertexSize, indexData, indexSize, indexStart, indexCount, transform, color, depthTest);
}


DllExport void
DebugRenderer_AddTriangleMesh4 (Urho3D::DebugRenderer *_target, const void * vertexData, unsigned int vertexSize, unsigned int vertexStart, const void * indexData, unsigned int indexSize, unsigned int indexStart, unsigned int indexCount, const class Urho3D::Matrix3x4 & transform, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddTriangleMesh (vertexData, vertexSize, vertexStart, indexData, indexSize, indexStart, indexCount, transform, color, depthTest);
}


DllExport void
DebugRenderer_AddCircle (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & center, const class Urho3D::Vector3 & normal, float radius, const class Urho3D::Color & color, int steps, bool depthTest)
{
	_target->AddCircle (center, normal, radius, color, steps, depthTest);
}


DllExport void
DebugRenderer_AddCross (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & center, float size, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddCross (center, size, color, depthTest);
}


DllExport void
DebugRenderer_AddQuad (Urho3D::DebugRenderer *_target, const class Urho3D::Vector3 & center, float width, float height, const class Urho3D::Color & color, bool depthTest)
{
	_target->AddQuad (center, width, height, color, depthTest);
}


DllExport void
DebugRenderer_Render (Urho3D::DebugRenderer *_target)
{
	_target->Render ();
}


DllExport int
DebugRenderer_GetLineAntiAlias (Urho3D::DebugRenderer *_target)
{
	return _target->GetLineAntiAlias ();
}


DllExport Interop::Matrix3x4 
DebugRenderer_GetView (Urho3D::DebugRenderer *_target)
{
	return *((Interop::Matrix3x4  *) &(_target->GetView ()));
}


DllExport Interop::Matrix4 
DebugRenderer_GetProjection (Urho3D::DebugRenderer *_target)
{
	return *((Interop::Matrix4  *) &(_target->GetProjection ()));
}


DllExport const class Urho3D::Frustum &
DebugRenderer_GetFrustum (Urho3D::DebugRenderer *_target)
{
	return _target->GetFrustum ();
}


DllExport int
DebugRenderer_IsInside (Urho3D::DebugRenderer *_target, const class Urho3D::BoundingBox & box)
{
	return _target->IsInside (box);
}


DllExport int
DebugRenderer_HasContent (Urho3D::DebugRenderer *_target)
{
	return _target->HasContent ();
}


DllExport int
DecalSet_GetType (Urho3D::DecalSet *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
DecalSet_GetTypeName (Urho3D::DecalSet *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
DecalSet_GetTypeStatic ()
{
	return (DecalSet::GetTypeStatic ()).Value ();
}


DllExport const char *
DecalSet_GetTypeNameStatic ()
{
	return stringdup((DecalSet::GetTypeNameStatic ()).CString ());
}


DllExport void *
DecalSet_DecalSet (Urho3D::Context * context)
{
	return WeakPtr<DecalSet>(new DecalSet(context));
}


DllExport void
DecalSet_RegisterObject (Urho3D::Context * context)
{
	DecalSet::RegisterObject (context);
}


DllExport void
DecalSet_ApplyAttributes (Urho3D::DecalSet *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
DecalSet_OnSetEnabled (Urho3D::DecalSet *_target)
{
	_target->OnSetEnabled ();
}


DllExport enum Urho3D::UpdateGeometryType
DecalSet_GetUpdateGeometryType (Urho3D::DecalSet *_target)
{
	return _target->GetUpdateGeometryType ();
}


DllExport void
DecalSet_SetMaterial (Urho3D::DecalSet *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport void
DecalSet_SetMaxVertices (Urho3D::DecalSet *_target, unsigned int num)
{
	_target->SetMaxVertices (num);
}


DllExport void
DecalSet_SetMaxIndices (Urho3D::DecalSet *_target, unsigned int num)
{
	_target->SetMaxIndices (num);
}


DllExport void
DecalSet_SetOptimizeBufferSize (Urho3D::DecalSet *_target, bool enable)
{
	_target->SetOptimizeBufferSize (enable);
}


DllExport int
DecalSet_AddDecal (Urho3D::DecalSet *_target, Urho3D::Drawable * target, const class Urho3D::Vector3 & worldPosition, const class Urho3D::Quaternion & worldRotation, float size, float aspectRatio, float depth, const class Urho3D::Vector2 & topLeftUV, const class Urho3D::Vector2 & bottomRightUV, float timeToLive, float normalCutoff, unsigned int subGeometry)
{
	return _target->AddDecal (target, worldPosition, worldRotation, size, aspectRatio, depth, topLeftUV, bottomRightUV, timeToLive, normalCutoff, subGeometry);
}


DllExport void
DecalSet_RemoveDecals (Urho3D::DecalSet *_target, unsigned int num)
{
	_target->RemoveDecals (num);
}


DllExport void
DecalSet_RemoveAllDecals (Urho3D::DecalSet *_target)
{
	_target->RemoveAllDecals ();
}


DllExport Urho3D::Material *
DecalSet_GetMaterial (Urho3D::DecalSet *_target)
{
	return _target->GetMaterial ();
}


DllExport unsigned int
DecalSet_GetNumDecals (Urho3D::DecalSet *_target)
{
	return _target->GetNumDecals ();
}


DllExport unsigned int
DecalSet_GetNumVertices (Urho3D::DecalSet *_target)
{
	return _target->GetNumVertices ();
}


DllExport unsigned int
DecalSet_GetNumIndices (Urho3D::DecalSet *_target)
{
	return _target->GetNumIndices ();
}


DllExport unsigned int
DecalSet_GetMaxVertices (Urho3D::DecalSet *_target)
{
	return _target->GetMaxVertices ();
}


DllExport unsigned int
DecalSet_GetMaxIndices (Urho3D::DecalSet *_target)
{
	return _target->GetMaxIndices ();
}


DllExport int
DecalSet_GetOptimizeBufferSize (Urho3D::DecalSet *_target)
{
	return _target->GetOptimizeBufferSize ();
}


DllExport Urho3D::ResourceRef
DecalSet_GetMaterialAttr (Urho3D::DecalSet *_target)
{
	return _target->GetMaterialAttr ();
}


DllExport int
Geometry_GetType (Urho3D::Geometry *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Geometry_GetTypeName (Urho3D::Geometry *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Geometry_GetTypeStatic ()
{
	return (Geometry::GetTypeStatic ()).Value ();
}


DllExport const char *
Geometry_GetTypeNameStatic ()
{
	return stringdup((Geometry::GetTypeNameStatic ()).CString ());
}


DllExport void *
Geometry_Geometry (Urho3D::Context * context)
{
	return WeakPtr<Geometry>(new Geometry(context));
}


DllExport int
Geometry_SetNumVertexBuffers (Urho3D::Geometry *_target, unsigned int num)
{
	return _target->SetNumVertexBuffers (num);
}


DllExport int
Geometry_SetVertexBuffer (Urho3D::Geometry *_target, unsigned int index, Urho3D::VertexBuffer * buffer)
{
	return _target->SetVertexBuffer (index, buffer);
}


DllExport void
Geometry_SetIndexBuffer (Urho3D::Geometry *_target, Urho3D::IndexBuffer * buffer)
{
	_target->SetIndexBuffer (buffer);
}


DllExport int
Geometry_SetDrawRange (Urho3D::Geometry *_target, enum Urho3D::PrimitiveType type, unsigned int indexStart, unsigned int indexCount, bool getUsedVertexRange)
{
	return _target->SetDrawRange (type, indexStart, indexCount, getUsedVertexRange);
}


DllExport int
Geometry_SetDrawRange0 (Urho3D::Geometry *_target, enum Urho3D::PrimitiveType type, unsigned int indexStart, unsigned int indexCount, unsigned int vertexStart, unsigned int vertexCount, bool checkIllegal)
{
	return _target->SetDrawRange (type, indexStart, indexCount, vertexStart, vertexCount, checkIllegal);
}


DllExport void
Geometry_SetLodDistance (Urho3D::Geometry *_target, float distance)
{
	_target->SetLodDistance (distance);
}


DllExport void
Geometry_Draw (Urho3D::Geometry *_target, Urho3D::Graphics * graphics)
{
	_target->Draw (graphics);
}


DllExport const Vector<SharedPtr<class Urho3D::VertexBuffer> > &
Geometry_GetVertexBuffers (Urho3D::Geometry *_target)
{
	return _target->GetVertexBuffers ();
}


DllExport unsigned int
Geometry_GetNumVertexBuffers (Urho3D::Geometry *_target)
{
	return _target->GetNumVertexBuffers ();
}


DllExport Urho3D::VertexBuffer *
Geometry_GetVertexBuffer (Urho3D::Geometry *_target, unsigned int index)
{
	return _target->GetVertexBuffer (index);
}


DllExport Urho3D::IndexBuffer *
Geometry_GetIndexBuffer (Urho3D::Geometry *_target)
{
	return _target->GetIndexBuffer ();
}


DllExport enum Urho3D::PrimitiveType
Geometry_GetPrimitiveType (Urho3D::Geometry *_target)
{
	return _target->GetPrimitiveType ();
}


DllExport unsigned int
Geometry_GetIndexStart (Urho3D::Geometry *_target)
{
	return _target->GetIndexStart ();
}


DllExport unsigned int
Geometry_GetIndexCount (Urho3D::Geometry *_target)
{
	return _target->GetIndexCount ();
}


DllExport unsigned int
Geometry_GetVertexStart (Urho3D::Geometry *_target)
{
	return _target->GetVertexStart ();
}


DllExport unsigned int
Geometry_GetVertexCount (Urho3D::Geometry *_target)
{
	return _target->GetVertexCount ();
}


DllExport float
Geometry_GetLodDistance (Urho3D::Geometry *_target)
{
	return _target->GetLodDistance ();
}


DllExport unsigned short
Geometry_GetBufferHash (Urho3D::Geometry *_target)
{
	return _target->GetBufferHash ();
}


DllExport float
Geometry_GetHitDistance (Urho3D::Geometry *_target, const class Urho3D::Ray & ray, Urho3D::Vector3 * outNormal, Urho3D::Vector2 * outUV)
{
	return _target->GetHitDistance (ray, outNormal, outUV);
}


DllExport int
Geometry_IsInside (Urho3D::Geometry *_target, const class Urho3D::Ray & ray)
{
	return _target->IsInside (ray);
}


DllExport int
Geometry_IsEmpty (Urho3D::Geometry *_target)
{
	return _target->IsEmpty ();
}


DllExport GPUObject*
ShaderVariation_CastToGPUObject(Urho3D::ShaderVariation *_target)
{
	return static_cast<GPUObject*>(_target);
}
DllExport void *
ShaderVariation_ShaderVariation (Urho3D::Shader * owner, enum Urho3D::ShaderType type)
{
	return WeakPtr<ShaderVariation>(new ShaderVariation(owner, type));
}


DllExport void
ShaderVariation_Release (Urho3D::ShaderVariation *_target)
{
	_target->Release ();
}


DllExport int
ShaderVariation_Create (Urho3D::ShaderVariation *_target)
{
	return _target->Create ();
}


DllExport void
ShaderVariation_SetName (Urho3D::ShaderVariation *_target, const char * name)
{
	_target->SetName (Urho3D::String(name));
}


DllExport void
ShaderVariation_SetDefines (Urho3D::ShaderVariation *_target, const char * defines)
{
	_target->SetDefines (Urho3D::String(defines));
}


DllExport Urho3D::Shader *
ShaderVariation_GetOwner (Urho3D::ShaderVariation *_target)
{
	return _target->GetOwner ();
}


DllExport enum Urho3D::ShaderType
ShaderVariation_GetShaderType (Urho3D::ShaderVariation *_target)
{
	return _target->GetShaderType ();
}


DllExport const char *
ShaderVariation_GetName (Urho3D::ShaderVariation *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport const char *
ShaderVariation_GetFullName (Urho3D::ShaderVariation *_target)
{
	return stringdup((_target->GetFullName ()).CString ());
}


DllExport int
ShaderVariation_HasParameter (Urho3D::ShaderVariation *_target, int param)
{
	return _target->HasParameter (Urho3D::StringHash(param));
}


DllExport int
ShaderVariation_HasTextureUnit (Urho3D::ShaderVariation *_target, enum Urho3D::TextureUnit unit)
{
	return _target->HasTextureUnit (unit);
}


DllExport unsigned long long
ShaderVariation_GetElementHash (Urho3D::ShaderVariation *_target)
{
	return _target->GetElementHash ();
}


DllExport const char *
ShaderVariation_GetDefines (Urho3D::ShaderVariation *_target)
{
	return stringdup((_target->GetDefines ()).CString ());
}


DllExport const char *
ShaderVariation_GetCompilerOutput (Urho3D::ShaderVariation *_target)
{
	return stringdup((_target->GetCompilerOutput ()).CString ());
}


DllExport const unsigned int *
ShaderVariation_GetConstantBufferSizes (Urho3D::ShaderVariation *_target)
{
	return _target->GetConstantBufferSizes ();
}


DllExport const char *
ShaderVariation_GetDefinesClipPlane (Urho3D::ShaderVariation *_target)
{
	return stringdup((_target->GetDefinesClipPlane ()).CString ());
}


DllExport int
Image_GetType (Urho3D::Image *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Image_GetTypeName (Urho3D::Image *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Image_GetTypeStatic ()
{
	return (Image::GetTypeStatic ()).Value ();
}


DllExport const char *
Image_GetTypeNameStatic ()
{
	return stringdup((Image::GetTypeNameStatic ()).CString ());
}


DllExport void *
Image_Image (Urho3D::Context * context)
{
	return WeakPtr<Image>(new Image(context));
}


DllExport void
Image_RegisterObject (Urho3D::Context * context)
{
	Image::RegisterObject (context);
}


DllExport int
Image_BeginLoad_File (Urho3D::Image *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Image_BeginLoad_MemoryBuffer (Urho3D::Image *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Image_Save_File (Urho3D::Image *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Image_Save_MemoryBuffer (Urho3D::Image *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
Image_SaveFile (Urho3D::Image *_target, const char * fileName)
{
	return _target->SaveFile (Urho3D::String(fileName));
}


DllExport int
Image_SetSize (Urho3D::Image *_target, int width, int height, unsigned int components)
{
	return _target->SetSize (width, height, components);
}


DllExport int
Image_SetSize0 (Urho3D::Image *_target, int width, int height, int depth, unsigned int components)
{
	return _target->SetSize (width, height, depth, components);
}


DllExport void
Image_SetData (Urho3D::Image *_target, const unsigned char * pixelData)
{
	_target->SetData (pixelData);
}


DllExport void
Image_SetPixel (Urho3D::Image *_target, int x, int y, const class Urho3D::Color & color)
{
	_target->SetPixel (x, y, color);
}


DllExport void
Image_SetPixel1 (Urho3D::Image *_target, int x, int y, int z, const class Urho3D::Color & color)
{
	_target->SetPixel (x, y, z, color);
}


DllExport void
Image_SetPixelInt (Urho3D::Image *_target, int x, int y, unsigned int uintColor)
{
	_target->SetPixelInt (x, y, uintColor);
}


DllExport void
Image_SetPixelInt2 (Urho3D::Image *_target, int x, int y, int z, unsigned int uintColor)
{
	_target->SetPixelInt (x, y, z, uintColor);
}


DllExport int
Image_LoadColorLUT_File (Urho3D::Image *_target, File * source)
{
	return _target->LoadColorLUT (*source);
}


DllExport int
Image_LoadColorLUT_MemoryBuffer (Urho3D::Image *_target, MemoryBuffer * source)
{
	return _target->LoadColorLUT (*source);
}


DllExport int
Image_FlipHorizontal (Urho3D::Image *_target)
{
	return _target->FlipHorizontal ();
}


DllExport int
Image_FlipVertical (Urho3D::Image *_target)
{
	return _target->FlipVertical ();
}


DllExport int
Image_Resize (Urho3D::Image *_target, int width, int height)
{
	return _target->Resize (width, height);
}


DllExport void
Image_Clear (Urho3D::Image *_target, const class Urho3D::Color & color)
{
	_target->Clear (color);
}


DllExport void
Image_ClearInt (Urho3D::Image *_target, unsigned int uintColor)
{
	_target->ClearInt (uintColor);
}


DllExport int
Image_SaveBMP (Urho3D::Image *_target, const char * fileName)
{
	return _target->SaveBMP (Urho3D::String(fileName));
}


DllExport int
Image_SavePNG (Urho3D::Image *_target, const char * fileName)
{
	return _target->SavePNG (Urho3D::String(fileName));
}


DllExport int
Image_SaveTGA (Urho3D::Image *_target, const char * fileName)
{
	return _target->SaveTGA (Urho3D::String(fileName));
}


DllExport int
Image_SaveJPG (Urho3D::Image *_target, const char * fileName, int quality)
{
	return _target->SaveJPG (Urho3D::String(fileName), quality);
}


DllExport int
Image_SaveDDS (Urho3D::Image *_target, const char * fileName)
{
	return _target->SaveDDS (Urho3D::String(fileName));
}


DllExport int
Image_SaveWEBP (Urho3D::Image *_target, const char * fileName, float compression)
{
	return _target->SaveWEBP (Urho3D::String(fileName), compression);
}


DllExport int
Image_IsCubemap (Urho3D::Image *_target)
{
	return _target->IsCubemap ();
}


DllExport int
Image_IsArray (Urho3D::Image *_target)
{
	return _target->IsArray ();
}


DllExport int
Image_IsSRGB (Urho3D::Image *_target)
{
	return _target->IsSRGB ();
}


DllExport Interop::Color 
Image_GetPixel (Urho3D::Image *_target, int x, int y)
{
	return *((Interop::Color  *) &(_target->GetPixel (x, y)));
}


DllExport Interop::Color 
Image_GetPixel3 (Urho3D::Image *_target, int x, int y, int z)
{
	return *((Interop::Color  *) &(_target->GetPixel (x, y, z)));
}


DllExport unsigned int
Image_GetPixelInt (Urho3D::Image *_target, int x, int y)
{
	return _target->GetPixelInt (x, y);
}


DllExport unsigned int
Image_GetPixelInt4 (Urho3D::Image *_target, int x, int y, int z)
{
	return _target->GetPixelInt (x, y, z);
}


DllExport Interop::Color 
Image_GetPixelBilinear (Urho3D::Image *_target, float x, float y)
{
	return *((Interop::Color  *) &(_target->GetPixelBilinear (x, y)));
}


DllExport Interop::Color 
Image_GetPixelTrilinear (Urho3D::Image *_target, float x, float y, float z)
{
	return *((Interop::Color  *) &(_target->GetPixelTrilinear (x, y, z)));
}


DllExport int
Image_GetWidth (Urho3D::Image *_target)
{
	return _target->GetWidth ();
}


DllExport int
Image_GetHeight (Urho3D::Image *_target)
{
	return _target->GetHeight ();
}


DllExport int
Image_GetDepth (Urho3D::Image *_target)
{
	return _target->GetDepth ();
}


DllExport unsigned int
Image_GetComponents (Urho3D::Image *_target)
{
	return _target->GetComponents ();
}


DllExport unsigned char *
Image_GetData (Urho3D::Image *_target)
{
	return _target->GetData ();
}


DllExport int
Image_IsCompressed (Urho3D::Image *_target)
{
	return _target->IsCompressed ();
}


DllExport enum Urho3D::CompressedFormat
Image_GetCompressedFormat (Urho3D::Image *_target)
{
	return _target->GetCompressedFormat ();
}


DllExport unsigned int
Image_GetNumCompressedLevels (Urho3D::Image *_target)
{
	return _target->GetNumCompressedLevels ();
}


DllExport Urho3D::Image *
Image_GetNextLevel (Urho3D::Image *_target)
{
	auto copy = _target->GetNextLevel ();
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::Image *
Image_GetNextSibling (Urho3D::Image *_target)
{
	auto copy = _target->GetNextSibling ();
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::Image *
Image_ConvertToRGBA (Urho3D::Image *_target)
{
	auto copy = _target->ConvertToRGBA ();
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::CompressedLevel
Image_GetCompressedLevel (Urho3D::Image *_target, unsigned int index)
{
	return _target->GetCompressedLevel (index);
}


DllExport Urho3D::Image *
Image_GetSubimage (Urho3D::Image *_target, const class Urho3D::IntRect & rect)
{
	return _target->GetSubimage (rect);
}


DllExport void
Image_PrecalculateLevels (Urho3D::Image *_target)
{
	_target->PrecalculateLevels ();
}


DllExport int
Image_HasAlphaChannel (Urho3D::Image *_target)
{
	return _target->HasAlphaChannel ();
}


DllExport int
Image_SetSubimage (Urho3D::Image *_target, const class Urho3D::Image * image, const class Urho3D::IntRect & rect)
{
	return _target->SetSubimage (image, rect);
}


DllExport void
Image_CleanupLevels (Urho3D::Image *_target)
{
	_target->CleanupLevels ();
}


DllExport int
Graphics_GetType (Urho3D::Graphics *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Graphics_GetTypeName (Urho3D::Graphics *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Graphics_GetTypeStatic ()
{
	return (Graphics::GetTypeStatic ()).Value ();
}


DllExport const char *
Graphics_GetTypeNameStatic ()
{
	return stringdup((Graphics::GetTypeNameStatic ()).CString ());
}


DllExport void *
Graphics_Graphics (Urho3D::Context * context)
{
	return WeakPtr<Graphics>(new Graphics(context));
}


DllExport void
Graphics_SetExternalWindow (Urho3D::Graphics *_target, void * window)
{
	_target->SetExternalWindow (window);
}


DllExport void
Graphics_SetWindowTitle (Urho3D::Graphics *_target, const char * windowTitle)
{
	_target->SetWindowTitle (Urho3D::String(windowTitle));
}


DllExport void
Graphics_SetWindowIcon (Urho3D::Graphics *_target, Urho3D::Image * windowIcon)
{
	_target->SetWindowIcon (windowIcon);
}


DllExport void
Graphics_SetWindowPosition (Urho3D::Graphics *_target, const class Urho3D::IntVector2 & position)
{
	_target->SetWindowPosition (position);
}


DllExport void
Graphics_SetWindowPosition0 (Urho3D::Graphics *_target, int x, int y)
{
	_target->SetWindowPosition (x, y);
}


DllExport int
Graphics_SetMode (Urho3D::Graphics *_target, int width, int height, bool fullscreen, bool borderless, bool resizable, bool highDPI, bool vsync, bool tripleBuffer, int multiSample, int monitor, int refreshRate)
{
	return _target->SetMode (width, height, fullscreen, borderless, resizable, highDPI, vsync, tripleBuffer, multiSample, monitor, refreshRate);
}


DllExport int
Graphics_SetMode1 (Urho3D::Graphics *_target, int width, int height)
{
	return _target->SetMode (width, height);
}


DllExport void
Graphics_SetSRGB (Urho3D::Graphics *_target, bool enable)
{
	_target->SetSRGB (enable);
}


DllExport void
Graphics_SetDither (Urho3D::Graphics *_target, bool enable)
{
	_target->SetDither (enable);
}


DllExport void
Graphics_SetFlushGPU (Urho3D::Graphics *_target, bool enable)
{
	_target->SetFlushGPU (enable);
}


DllExport void
Graphics_SetOrientations (Urho3D::Graphics *_target, const char * orientations)
{
	_target->SetOrientations (Urho3D::String(orientations));
}


DllExport int
Graphics_ToggleFullscreen (Urho3D::Graphics *_target)
{
	return _target->ToggleFullscreen ();
}


DllExport void
Graphics_Close (Urho3D::Graphics *_target)
{
	_target->Close ();
}


DllExport int
Graphics_TakeScreenShot (Urho3D::Graphics *_target, Image * destImage)
{
	return _target->TakeScreenShot (*destImage);
}


DllExport int
Graphics_BeginFrame (Urho3D::Graphics *_target)
{
	return _target->BeginFrame ();
}


DllExport void
Graphics_EndFrame (Urho3D::Graphics *_target)
{
	_target->EndFrame ();
}


DllExport int
Graphics_ResolveToTexture (Urho3D::Graphics *_target, Urho3D::Texture2D * destination, const class Urho3D::IntRect & viewport)
{
	return _target->ResolveToTexture (destination, viewport);
}


DllExport int
Graphics_ResolveToTexture2 (Urho3D::Graphics *_target, Urho3D::Texture2D * texture)
{
	return _target->ResolveToTexture (texture);
}


DllExport int
Graphics_ResolveToTexture3 (Urho3D::Graphics *_target, Urho3D::TextureCube * texture)
{
	return _target->ResolveToTexture (texture);
}


DllExport void
Graphics_Draw (Urho3D::Graphics *_target, enum Urho3D::PrimitiveType type, unsigned int vertexStart, unsigned int vertexCount)
{
	_target->Draw (type, vertexStart, vertexCount);
}


DllExport void
Graphics_Draw4 (Urho3D::Graphics *_target, enum Urho3D::PrimitiveType type, unsigned int indexStart, unsigned int indexCount, unsigned int minVertex, unsigned int vertexCount)
{
	_target->Draw (type, indexStart, indexCount, minVertex, vertexCount);
}


DllExport void
Graphics_Draw5 (Urho3D::Graphics *_target, enum Urho3D::PrimitiveType type, unsigned int indexStart, unsigned int indexCount, unsigned int baseVertexIndex, unsigned int minVertex, unsigned int vertexCount)
{
	_target->Draw (type, indexStart, indexCount, baseVertexIndex, minVertex, vertexCount);
}


DllExport void
Graphics_DrawInstanced (Urho3D::Graphics *_target, enum Urho3D::PrimitiveType type, unsigned int indexStart, unsigned int indexCount, unsigned int minVertex, unsigned int vertexCount, unsigned int instanceCount)
{
	_target->DrawInstanced (type, indexStart, indexCount, minVertex, vertexCount, instanceCount);
}


DllExport void
Graphics_DrawInstanced6 (Urho3D::Graphics *_target, enum Urho3D::PrimitiveType type, unsigned int indexStart, unsigned int indexCount, unsigned int baseVertexIndex, unsigned int minVertex, unsigned int vertexCount, unsigned int instanceCount)
{
	_target->DrawInstanced (type, indexStart, indexCount, baseVertexIndex, minVertex, vertexCount, instanceCount);
}


DllExport void
Graphics_SetVertexBuffer (Urho3D::Graphics *_target, Urho3D::VertexBuffer * buffer)
{
	_target->SetVertexBuffer (buffer);
}


DllExport void
Graphics_SetIndexBuffer (Urho3D::Graphics *_target, Urho3D::IndexBuffer * buffer)
{
	_target->SetIndexBuffer (buffer);
}


DllExport void
Graphics_SetShaders (Urho3D::Graphics *_target, Urho3D::ShaderVariation * vs, Urho3D::ShaderVariation * ps)
{
	_target->SetShaders (vs, ps);
}


DllExport void
Graphics_SetShaderParameter (Urho3D::Graphics *_target, int param, const float * data, unsigned int count)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), data, count);
}


DllExport void
Graphics_SetShaderParameter7 (Urho3D::Graphics *_target, int param, float value)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), value);
}


DllExport void
Graphics_SetShaderParameter8 (Urho3D::Graphics *_target, int param, int value)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), value);
}


DllExport void
Graphics_SetShaderParameter9 (Urho3D::Graphics *_target, int param, bool value)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), value);
}


DllExport void
Graphics_SetShaderParameter10 (Urho3D::Graphics *_target, int param, const class Urho3D::Color & color)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), color);
}


DllExport void
Graphics_SetShaderParameter11 (Urho3D::Graphics *_target, int param, const class Urho3D::Vector2 & vector)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), vector);
}


DllExport void
Graphics_SetShaderParameter12 (Urho3D::Graphics *_target, int param, const class Urho3D::Vector3 & vector)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), vector);
}


DllExport void
Graphics_SetShaderParameter13 (Urho3D::Graphics *_target, int param, const class Urho3D::Matrix4 & matrix)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), matrix);
}


DllExport void
Graphics_SetShaderParameter14 (Urho3D::Graphics *_target, int param, const class Urho3D::Vector4 & vector)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), vector);
}


DllExport void
Graphics_SetShaderParameter15 (Urho3D::Graphics *_target, int param, const class Urho3D::Matrix3x4 & matrix)
{
	_target->SetShaderParameter (Urho3D::StringHash(param), matrix);
}


DllExport int
Graphics_NeedParameterUpdate (Urho3D::Graphics *_target, enum Urho3D::ShaderParameterGroup group, const void * source)
{
	return _target->NeedParameterUpdate (group, source);
}


DllExport int
Graphics_HasShaderParameter (Urho3D::Graphics *_target, int param)
{
	return _target->HasShaderParameter (Urho3D::StringHash(param));
}


DllExport int
Graphics_HasTextureUnit (Urho3D::Graphics *_target, enum Urho3D::TextureUnit unit)
{
	return _target->HasTextureUnit (unit);
}


DllExport void
Graphics_ClearParameterSource (Urho3D::Graphics *_target, enum Urho3D::ShaderParameterGroup group)
{
	_target->ClearParameterSource (group);
}


DllExport void
Graphics_ClearParameterSources (Urho3D::Graphics *_target)
{
	_target->ClearParameterSources ();
}


DllExport void
Graphics_ClearTransformSources (Urho3D::Graphics *_target)
{
	_target->ClearTransformSources ();
}


DllExport void
Graphics_SetTexture (Urho3D::Graphics *_target, unsigned int index, Urho3D::Texture * texture)
{
	_target->SetTexture (index, texture);
}


DllExport void
Graphics_SetTextureParametersDirty (Urho3D::Graphics *_target)
{
	_target->SetTextureParametersDirty ();
}


DllExport void
Graphics_SetDefaultTextureFilterMode (Urho3D::Graphics *_target, enum Urho3D::TextureFilterMode mode)
{
	_target->SetDefaultTextureFilterMode (mode);
}


DllExport void
Graphics_SetDefaultTextureAnisotropy (Urho3D::Graphics *_target, unsigned int level)
{
	_target->SetDefaultTextureAnisotropy (level);
}


DllExport void
Graphics_ResetRenderTargets (Urho3D::Graphics *_target)
{
	_target->ResetRenderTargets ();
}


DllExport void
Graphics_ResetRenderTarget (Urho3D::Graphics *_target, unsigned int index)
{
	_target->ResetRenderTarget (index);
}


DllExport void
Graphics_ResetDepthStencil (Urho3D::Graphics *_target)
{
	_target->ResetDepthStencil ();
}


DllExport void
Graphics_SetRenderTarget (Urho3D::Graphics *_target, unsigned int index, Urho3D::RenderSurface * renderTarget)
{
	_target->SetRenderTarget (index, renderTarget);
}


DllExport void
Graphics_SetRenderTarget16 (Urho3D::Graphics *_target, unsigned int index, Urho3D::Texture2D * texture)
{
	_target->SetRenderTarget (index, texture);
}


DllExport void
Graphics_SetDepthStencil (Urho3D::Graphics *_target, Urho3D::RenderSurface * depthStencil)
{
	_target->SetDepthStencil (depthStencil);
}


DllExport void
Graphics_SetDepthStencil17 (Urho3D::Graphics *_target, Urho3D::Texture2D * texture)
{
	_target->SetDepthStencil (texture);
}


DllExport void
Graphics_SetViewport (Urho3D::Graphics *_target, const class Urho3D::IntRect & rect)
{
	_target->SetViewport (rect);
}


DllExport void
Graphics_SetBlendMode (Urho3D::Graphics *_target, enum Urho3D::BlendMode mode, bool alphaToCoverage)
{
	_target->SetBlendMode (mode, alphaToCoverage);
}


DllExport void
Graphics_SetColorWrite (Urho3D::Graphics *_target, bool enable)
{
	_target->SetColorWrite (enable);
}


DllExport void
Graphics_SetCullMode (Urho3D::Graphics *_target, enum Urho3D::CullMode mode)
{
	_target->SetCullMode (mode);
}


DllExport void
Graphics_SetDepthBias (Urho3D::Graphics *_target, float constantBias, float slopeScaledBias)
{
	_target->SetDepthBias (constantBias, slopeScaledBias);
}


DllExport void
Graphics_SetDepthTest (Urho3D::Graphics *_target, enum Urho3D::CompareMode mode)
{
	_target->SetDepthTest (mode);
}


DllExport void
Graphics_SetDepthWrite (Urho3D::Graphics *_target, bool enable)
{
	_target->SetDepthWrite (enable);
}


DllExport void
Graphics_SetFillMode (Urho3D::Graphics *_target, enum Urho3D::FillMode mode)
{
	_target->SetFillMode (mode);
}


DllExport void
Graphics_SetStereo (Urho3D::Graphics *_target, bool stereo)
{
	_target->SetStereo (stereo);
}


DllExport void
Graphics_SetLineAntiAlias (Urho3D::Graphics *_target, bool enable)
{
	_target->SetLineAntiAlias (enable);
}


DllExport void
Graphics_SetScissorTest (Urho3D::Graphics *_target, bool enable, const class Urho3D::IntRect & rect)
{
	_target->SetScissorTest (enable, rect);
}


DllExport void
Graphics_SetStencilTest (Urho3D::Graphics *_target, bool enable, enum Urho3D::CompareMode mode, enum Urho3D::StencilOp pass, enum Urho3D::StencilOp fail, enum Urho3D::StencilOp zFail, unsigned int stencilRef, unsigned int compareMask, unsigned int writeMask)
{
	_target->SetStencilTest (enable, mode, pass, fail, zFail, stencilRef, compareMask, writeMask);
}


DllExport void
Graphics_SetClipPlane (Urho3D::Graphics *_target, bool enable, const class Urho3D::Plane & clipPlane, const class Urho3D::Matrix3x4 & view, const class Urho3D::Matrix4 & projection)
{
	_target->SetClipPlane (enable, clipPlane, view, projection);
}


DllExport void
Graphics_BeginDumpShaders (Urho3D::Graphics *_target, const char * fileName)
{
	_target->BeginDumpShaders (Urho3D::String(fileName));
}


DllExport void
Graphics_EndDumpShaders (Urho3D::Graphics *_target)
{
	_target->EndDumpShaders ();
}


DllExport void
Graphics_PrecacheShaders_File (Urho3D::Graphics *_target, File * source)
{
	_target->PrecacheShaders (*source);
}


DllExport void
Graphics_PrecacheShaders_MemoryBuffer (Urho3D::Graphics *_target, MemoryBuffer * source)
{
	_target->PrecacheShaders (*source);
}


DllExport void
Graphics_SetShaderCacheDir (Urho3D::Graphics *_target, const char * path)
{
	_target->SetShaderCacheDir (Urho3D::String(path));
}


DllExport int
Graphics_IsInitialized (Urho3D::Graphics *_target)
{
	return _target->IsInitialized ();
}


DllExport Urho3D::GraphicsImpl *
Graphics_GetImpl (Urho3D::Graphics *_target)
{
	return _target->GetImpl ();
}


DllExport void *
Graphics_GetExternalWindow (Urho3D::Graphics *_target)
{
	return _target->GetExternalWindow ();
}


DllExport const char *
Graphics_GetWindowTitle (Urho3D::Graphics *_target)
{
	return stringdup((_target->GetWindowTitle ()).CString ());
}


DllExport const char *
Graphics_GetApiName (Urho3D::Graphics *_target)
{
	return stringdup((_target->GetApiName ()).CString ());
}


DllExport Interop::IntVector2 
Graphics_GetWindowPosition (Urho3D::Graphics *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetWindowPosition ()));
}


DllExport int
Graphics_GetWidth (Urho3D::Graphics *_target)
{
	return _target->GetWidth ();
}


DllExport int
Graphics_GetHeight (Urho3D::Graphics *_target)
{
	return _target->GetHeight ();
}


DllExport int
Graphics_GetMultiSample (Urho3D::Graphics *_target)
{
	return _target->GetMultiSample ();
}


DllExport Interop::IntVector2 
Graphics_GetSize (Urho3D::Graphics *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetSize ()));
}


DllExport int
Graphics_GetFullscreen (Urho3D::Graphics *_target)
{
	return _target->GetFullscreen ();
}


DllExport int
Graphics_GetBorderless (Urho3D::Graphics *_target)
{
	return _target->GetBorderless ();
}


DllExport int
Graphics_GetResizable (Urho3D::Graphics *_target)
{
	return _target->GetResizable ();
}


DllExport int
Graphics_GetHighDPI (Urho3D::Graphics *_target)
{
	return _target->GetHighDPI ();
}


DllExport int
Graphics_GetVSync (Urho3D::Graphics *_target)
{
	return _target->GetVSync ();
}


DllExport int
Graphics_GetRefreshRate (Urho3D::Graphics *_target)
{
	return _target->GetRefreshRate ();
}


DllExport int
Graphics_GetMonitor (Urho3D::Graphics *_target)
{
	return _target->GetMonitor ();
}


DllExport int
Graphics_GetTripleBuffer (Urho3D::Graphics *_target)
{
	return _target->GetTripleBuffer ();
}


DllExport int
Graphics_GetSRGB (Urho3D::Graphics *_target)
{
	return _target->GetSRGB ();
}


DllExport int
Graphics_GetDither (Urho3D::Graphics *_target)
{
	return _target->GetDither ();
}


DllExport int
Graphics_GetFlushGPU (Urho3D::Graphics *_target)
{
	return _target->GetFlushGPU ();
}


DllExport const char *
Graphics_GetOrientations (Urho3D::Graphics *_target)
{
	return stringdup((_target->GetOrientations ()).CString ());
}


DllExport int
Graphics_IsDeviceLost (Urho3D::Graphics *_target)
{
	return _target->IsDeviceLost ();
}


DllExport unsigned int
Graphics_GetNumPrimitives (Urho3D::Graphics *_target)
{
	return _target->GetNumPrimitives ();
}


DllExport unsigned int
Graphics_GetNumBatches (Urho3D::Graphics *_target)
{
	return _target->GetNumBatches ();
}


DllExport unsigned int
Graphics_GetDummyColorFormat (Urho3D::Graphics *_target)
{
	return _target->GetDummyColorFormat ();
}


DllExport unsigned int
Graphics_GetShadowMapFormat (Urho3D::Graphics *_target)
{
	return _target->GetShadowMapFormat ();
}


DllExport unsigned int
Graphics_GetHiresShadowMapFormat (Urho3D::Graphics *_target)
{
	return _target->GetHiresShadowMapFormat ();
}


DllExport int
Graphics_GetInstancingSupport (Urho3D::Graphics *_target)
{
	return _target->GetInstancingSupport ();
}


DllExport int
Graphics_GetLightPrepassSupport (Urho3D::Graphics *_target)
{
	return _target->GetLightPrepassSupport ();
}


DllExport int
Graphics_GetDeferredSupport (Urho3D::Graphics *_target)
{
	return _target->GetDeferredSupport ();
}


DllExport int
Graphics_GetHardwareShadowSupport (Urho3D::Graphics *_target)
{
	return _target->GetHardwareShadowSupport ();
}


DllExport int
Graphics_GetReadableDepthSupport (Urho3D::Graphics *_target)
{
	return _target->GetReadableDepthSupport ();
}


DllExport int
Graphics_GetSRGBSupport (Urho3D::Graphics *_target)
{
	return _target->GetSRGBSupport ();
}


DllExport int
Graphics_GetSRGBWriteSupport (Urho3D::Graphics *_target)
{
	return _target->GetSRGBWriteSupport ();
}


DllExport Interop::IntVector2 
Graphics_GetDesktopResolution (Urho3D::Graphics *_target, int monitor)
{
	return *((Interop::IntVector2  *) &(_target->GetDesktopResolution (monitor)));
}


DllExport int
Graphics_GetMonitorCount (Urho3D::Graphics *_target)
{
	return _target->GetMonitorCount ();
}


DllExport int
Graphics_GetCurrentMonitor (Urho3D::Graphics *_target)
{
	return _target->GetCurrentMonitor ();
}


DllExport int
Graphics_GetMaximized (Urho3D::Graphics *_target)
{
	return _target->GetMaximized ();
}


DllExport Interop::Vector3 
Graphics_GetDisplayDPI (Urho3D::Graphics *_target, int monitor)
{
	return *((Interop::Vector3  *) &(_target->GetDisplayDPI (monitor)));
}


DllExport unsigned int
Graphics_GetFormat (Urho3D::Graphics *_target, enum Urho3D::CompressedFormat format)
{
	return _target->GetFormat (format);
}


DllExport Urho3D::ShaderVariation *
Graphics_GetShader (Urho3D::Graphics *_target, enum Urho3D::ShaderType type, const char * name, const char * defines)
{
	return _target->GetShader (type, Urho3D::String(name), Urho3D::String(defines));
}


DllExport Urho3D::VertexBuffer *
Graphics_GetVertexBuffer (Urho3D::Graphics *_target, unsigned int index)
{
	return _target->GetVertexBuffer (index);
}


DllExport Urho3D::IndexBuffer *
Graphics_GetIndexBuffer (Urho3D::Graphics *_target)
{
	return _target->GetIndexBuffer ();
}


DllExport Urho3D::ShaderVariation *
Graphics_GetVertexShader (Urho3D::Graphics *_target)
{
	return _target->GetVertexShader ();
}


DllExport Urho3D::ShaderVariation *
Graphics_GetPixelShader (Urho3D::Graphics *_target)
{
	return _target->GetPixelShader ();
}


DllExport enum Urho3D::TextureUnit
Graphics_GetTextureUnit (Urho3D::Graphics *_target, const char * name)
{
	return _target->GetTextureUnit (Urho3D::String(name));
}


DllExport const char *
Graphics_GetTextureUnitName (Urho3D::Graphics *_target, enum Urho3D::TextureUnit unit)
{
	return stringdup((_target->GetTextureUnitName (unit)).CString ());
}


DllExport Urho3D::Texture *
Graphics_GetTexture (Urho3D::Graphics *_target, unsigned int index)
{
	return _target->GetTexture (index);
}


DllExport enum Urho3D::TextureFilterMode
Graphics_GetDefaultTextureFilterMode (Urho3D::Graphics *_target)
{
	return _target->GetDefaultTextureFilterMode ();
}


DllExport unsigned int
Graphics_GetDefaultTextureAnisotropy (Urho3D::Graphics *_target)
{
	return _target->GetDefaultTextureAnisotropy ();
}


DllExport Urho3D::RenderSurface *
Graphics_GetRenderTarget (Urho3D::Graphics *_target, unsigned int index)
{
	return _target->GetRenderTarget (index);
}


DllExport Urho3D::RenderSurface *
Graphics_GetDepthStencil (Urho3D::Graphics *_target)
{
	return _target->GetDepthStencil ();
}


DllExport Interop::IntRect 
Graphics_GetViewport (Urho3D::Graphics *_target)
{
	return *((Interop::IntRect  *) &(_target->GetViewport ()));
}


DllExport enum Urho3D::BlendMode
Graphics_GetBlendMode (Urho3D::Graphics *_target)
{
	return _target->GetBlendMode ();
}


DllExport int
Graphics_GetAlphaToCoverage (Urho3D::Graphics *_target)
{
	return _target->GetAlphaToCoverage ();
}


DllExport int
Graphics_GetColorWrite (Urho3D::Graphics *_target)
{
	return _target->GetColorWrite ();
}


DllExport enum Urho3D::CullMode
Graphics_GetCullMode (Urho3D::Graphics *_target)
{
	return _target->GetCullMode ();
}


DllExport float
Graphics_GetDepthConstantBias (Urho3D::Graphics *_target)
{
	return _target->GetDepthConstantBias ();
}


DllExport float
Graphics_GetDepthSlopeScaledBias (Urho3D::Graphics *_target)
{
	return _target->GetDepthSlopeScaledBias ();
}


DllExport enum Urho3D::CompareMode
Graphics_GetDepthTest (Urho3D::Graphics *_target)
{
	return _target->GetDepthTest ();
}


DllExport int
Graphics_GetDepthWrite (Urho3D::Graphics *_target)
{
	return _target->GetDepthWrite ();
}


DllExport enum Urho3D::FillMode
Graphics_GetFillMode (Urho3D::Graphics *_target)
{
	return _target->GetFillMode ();
}


DllExport int
Graphics_GetLineAntiAlias (Urho3D::Graphics *_target)
{
	return _target->GetLineAntiAlias ();
}


DllExport int
Graphics_GetStencilTest (Urho3D::Graphics *_target)
{
	return _target->GetStencilTest ();
}


DllExport int
Graphics_GetScissorTest (Urho3D::Graphics *_target)
{
	return _target->GetScissorTest ();
}


DllExport Interop::IntRect 
Graphics_GetScissorRect (Urho3D::Graphics *_target)
{
	return *((Interop::IntRect  *) &(_target->GetScissorRect ()));
}


DllExport enum Urho3D::CompareMode
Graphics_GetStencilTestMode (Urho3D::Graphics *_target)
{
	return _target->GetStencilTestMode ();
}


DllExport enum Urho3D::StencilOp
Graphics_GetStencilPass (Urho3D::Graphics *_target)
{
	return _target->GetStencilPass ();
}


DllExport enum Urho3D::StencilOp
Graphics_GetStencilFail (Urho3D::Graphics *_target)
{
	return _target->GetStencilFail ();
}


DllExport enum Urho3D::StencilOp
Graphics_GetStencilZFail (Urho3D::Graphics *_target)
{
	return _target->GetStencilZFail ();
}


DllExport unsigned int
Graphics_GetStencilRef (Urho3D::Graphics *_target)
{
	return _target->GetStencilRef ();
}


DllExport unsigned int
Graphics_GetStencilCompareMask (Urho3D::Graphics *_target)
{
	return _target->GetStencilCompareMask ();
}


DllExport unsigned int
Graphics_GetStencilWriteMask (Urho3D::Graphics *_target)
{
	return _target->GetStencilWriteMask ();
}


DllExport int
Graphics_GetUseClipPlane (Urho3D::Graphics *_target)
{
	return _target->GetUseClipPlane ();
}


DllExport const char *
Graphics_GetShaderCacheDir (Urho3D::Graphics *_target)
{
	return stringdup((_target->GetShaderCacheDir ()).CString ());
}


DllExport Interop::IntVector2 
Graphics_GetRenderTargetDimensions (Urho3D::Graphics *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetRenderTargetDimensions ()));
}


DllExport void
Graphics_OnWindowResized (Urho3D::Graphics *_target)
{
	_target->OnWindowResized ();
}


DllExport void
Graphics_OnWindowMoved (Urho3D::Graphics *_target)
{
	_target->OnWindowMoved ();
}


DllExport void
Graphics_Maximize (Urho3D::Graphics *_target)
{
	_target->Maximize ();
}


DllExport void
Graphics_Minimize (Urho3D::Graphics *_target)
{
	_target->Minimize ();
}


DllExport void
Graphics_Raise (Urho3D::Graphics *_target)
{
	_target->Raise ();
}


DllExport void
Graphics_AddGPUObject (Urho3D::Graphics *_target, Urho3D::GPUObject * object)
{
	_target->AddGPUObject (object);
}


DllExport void
Graphics_RemoveGPUObject (Urho3D::Graphics *_target, Urho3D::GPUObject * object)
{
	_target->RemoveGPUObject (object);
}


DllExport void *
Graphics_ReserveScratchBuffer (Urho3D::Graphics *_target, unsigned int size)
{
	return _target->ReserveScratchBuffer (size);
}


DllExport void
Graphics_FreeScratchBuffer (Urho3D::Graphics *_target, void * buffer)
{
	_target->FreeScratchBuffer (buffer);
}


DllExport void
Graphics_CleanupScratchBuffers (Urho3D::Graphics *_target)
{
	_target->CleanupScratchBuffers ();
}


DllExport unsigned int
Graphics_GetAlphaFormat ()
{
	return Graphics::GetAlphaFormat ();
}


DllExport unsigned int
Graphics_GetLuminanceFormat ()
{
	return Graphics::GetLuminanceFormat ();
}


DllExport unsigned int
Graphics_GetLuminanceAlphaFormat ()
{
	return Graphics::GetLuminanceAlphaFormat ();
}


DllExport unsigned int
Graphics_GetRGBFormat ()
{
	return Graphics::GetRGBFormat ();
}


DllExport unsigned int
Graphics_GetRGBAFormat ()
{
	return Graphics::GetRGBAFormat ();
}


DllExport unsigned int
Graphics_GetRGBA16Format ()
{
	return Graphics::GetRGBA16Format ();
}


DllExport unsigned int
Graphics_GetRGBAFloat16Format ()
{
	return Graphics::GetRGBAFloat16Format ();
}


DllExport unsigned int
Graphics_GetRGBAFloat32Format ()
{
	return Graphics::GetRGBAFloat32Format ();
}


DllExport unsigned int
Graphics_GetRG16Format ()
{
	return Graphics::GetRG16Format ();
}


DllExport unsigned int
Graphics_GetRGFloat16Format ()
{
	return Graphics::GetRGFloat16Format ();
}


DllExport unsigned int
Graphics_GetRGFloat32Format ()
{
	return Graphics::GetRGFloat32Format ();
}


DllExport unsigned int
Graphics_GetFloat16Format ()
{
	return Graphics::GetFloat16Format ();
}


DllExport unsigned int
Graphics_GetFloat32Format ()
{
	return Graphics::GetFloat32Format ();
}


DllExport unsigned int
Graphics_GetLinearDepthFormat ()
{
	return Graphics::GetLinearDepthFormat ();
}


DllExport unsigned int
Graphics_GetDepthStencilFormat ()
{
	return Graphics::GetDepthStencilFormat ();
}


DllExport unsigned int
Graphics_GetReadableDepthFormat ()
{
	return Graphics::GetReadableDepthFormat ();
}


DllExport unsigned int
Graphics_GetFormat18 (const char * formatName)
{
	return Graphics::GetFormat (Urho3D::String(formatName));
}


DllExport Interop::Vector2 
Graphics_GetPixelUVOffset ()
{
	return *((Interop::Vector2  *) &(Graphics::GetPixelUVOffset ()));
}


DllExport unsigned int
Graphics_GetMaxBones ()
{
	return Graphics::GetMaxBones ();
}


#if defined(URHO3D_OPENGL)
DllExport GPUObject*
ShaderProgram_CastToGPUObject(Urho3D::ShaderProgram *_target)
{
	return static_cast<GPUObject*>(_target);
}
#endif
DllExport void *
ShaderProgram_ShaderProgram (Urho3D::Graphics * graphics, Urho3D::ShaderVariation * vertexShader, Urho3D::ShaderVariation * pixelShader)
{
	return WeakPtr<ShaderProgram>(new ShaderProgram(graphics, vertexShader, pixelShader));
}


DllExport int
Viewport_GetType (Urho3D::Viewport *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Viewport_GetTypeName (Urho3D::Viewport *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Viewport_GetTypeStatic ()
{
	return (Viewport::GetTypeStatic ()).Value ();
}


DllExport const char *
Viewport_GetTypeNameStatic ()
{
	return stringdup((Viewport::GetTypeNameStatic ()).CString ());
}


DllExport void *
Viewport_Viewport (Urho3D::Context * context)
{
	return WeakPtr<Viewport>(new Viewport(context));
}


DllExport void *
Viewport_Viewport0 (Urho3D::Context * context, Urho3D::Scene * scene, Urho3D::Camera * camera, Urho3D::RenderPath * renderPath)
{
	return WeakPtr<Viewport>(new Viewport(context, scene, camera, renderPath));
}


DllExport void *
Viewport_Viewport1 (Urho3D::Context * context, Urho3D::Scene * scene, Urho3D::Camera * camera, const class Urho3D::IntRect & rect, Urho3D::RenderPath * renderPath)
{
	return WeakPtr<Viewport>(new Viewport(context, scene, camera, rect, renderPath));
}


DllExport void
Viewport_SetScene (Urho3D::Viewport *_target, Urho3D::Scene * scene)
{
	_target->SetScene (scene);
}


DllExport void
Viewport_SetCamera (Urho3D::Viewport *_target, Urho3D::Camera * camera)
{
	_target->SetCamera (camera);
}


DllExport void
Viewport_SetRect (Urho3D::Viewport *_target, const class Urho3D::IntRect & rect)
{
	_target->SetRect (rect);
}


DllExport void
Viewport_SetRenderPath (Urho3D::Viewport *_target, Urho3D::RenderPath * renderPath)
{
	_target->SetRenderPath (renderPath);
}


DllExport void
Viewport_SetStereoMode (Urho3D::Viewport *_target, bool stereo)
{
	_target->SetStereoMode (stereo);
}


DllExport void
Viewport_SetRenderPath2 (Urho3D::Viewport *_target, Urho3D::XMLFile * file)
{
	_target->SetRenderPath (file);
}


DllExport void
Viewport_SetDrawDebug (Urho3D::Viewport *_target, bool enable)
{
	_target->SetDrawDebug (enable);
}


DllExport void
Viewport_SetCullCamera (Urho3D::Viewport *_target, Urho3D::Camera * camera)
{
	_target->SetCullCamera (camera);
}


DllExport Urho3D::Scene *
Viewport_GetScene (Urho3D::Viewport *_target)
{
	return _target->GetScene ();
}


DllExport Urho3D::Camera *
Viewport_GetCamera (Urho3D::Viewport *_target)
{
	return _target->GetCamera ();
}


DllExport Urho3D::View *
Viewport_GetView (Urho3D::Viewport *_target)
{
	return _target->GetView ();
}


DllExport Interop::IntRect 
Viewport_GetRect (Urho3D::Viewport *_target)
{
	return *((Interop::IntRect  *) &(_target->GetRect ()));
}


DllExport Urho3D::RenderPath *
Viewport_GetRenderPath (Urho3D::Viewport *_target)
{
	return _target->GetRenderPath ();
}


DllExport int
Viewport_GetDrawDebug (Urho3D::Viewport *_target)
{
	return _target->GetDrawDebug ();
}


DllExport Urho3D::Camera *
Viewport_GetCullCamera (Urho3D::Viewport *_target)
{
	return _target->GetCullCamera ();
}


DllExport Urho3D::Ray
Viewport_GetScreenRay (Urho3D::Viewport *_target, int x, int y)
{
	return _target->GetScreenRay (x, y);
}


DllExport Interop::IntVector2 
Viewport_WorldToScreenPoint (Urho3D::Viewport *_target, const class Urho3D::Vector3 & worldPos)
{
	return *((Interop::IntVector2  *) &(_target->WorldToScreenPoint (worldPos)));
}


DllExport Interop::Vector3 
Viewport_ScreenToWorldPoint (Urho3D::Viewport *_target, int x, int y, float depth)
{
	return *((Interop::Vector3  *) &(_target->ScreenToWorldPoint (x, y, depth)));
}


DllExport void
Viewport_AllocateView (Urho3D::Viewport *_target)
{
	_target->AllocateView ();
}


DllExport void *
RenderSurface_RenderSurface (Urho3D::Texture * parentTexture)
{
	return WeakPtr<RenderSurface>(new RenderSurface(parentTexture));
}


DllExport void
RenderSurface_SetNumViewports (Urho3D::RenderSurface *_target, unsigned int num)
{
	_target->SetNumViewports (num);
}


DllExport void
RenderSurface_SetViewport (Urho3D::RenderSurface *_target, unsigned int index, Urho3D::Viewport * viewport)
{
	_target->SetViewport (index, viewport);
}


DllExport void
RenderSurface_SetUpdateMode (Urho3D::RenderSurface *_target, enum Urho3D::RenderSurfaceUpdateMode mode)
{
	_target->SetUpdateMode (mode);
}


DllExport void
RenderSurface_SetLinkedRenderTarget (Urho3D::RenderSurface *_target, Urho3D::RenderSurface * renderTarget)
{
	_target->SetLinkedRenderTarget (renderTarget);
}


DllExport void
RenderSurface_SetLinkedDepthStencil (Urho3D::RenderSurface *_target, Urho3D::RenderSurface * depthStencil)
{
	_target->SetLinkedDepthStencil (depthStencil);
}


DllExport void
RenderSurface_QueueUpdate (Urho3D::RenderSurface *_target)
{
	_target->QueueUpdate ();
}


DllExport void
RenderSurface_Release (Urho3D::RenderSurface *_target)
{
	_target->Release ();
}


DllExport int
RenderSurface_CreateRenderBuffer (Urho3D::RenderSurface *_target, unsigned int width, unsigned int height, unsigned int format, int multiSample)
{
	return _target->CreateRenderBuffer (width, height, format, multiSample);
}


DllExport int
RenderSurface_GetWidth (Urho3D::RenderSurface *_target)
{
	return _target->GetWidth ();
}


DllExport int
RenderSurface_GetHeight (Urho3D::RenderSurface *_target)
{
	return _target->GetHeight ();
}


DllExport enum Urho3D::TextureUsage
RenderSurface_GetUsage (Urho3D::RenderSurface *_target)
{
	return _target->GetUsage ();
}


DllExport int
RenderSurface_GetMultiSample (Urho3D::RenderSurface *_target)
{
	return _target->GetMultiSample ();
}


DllExport int
RenderSurface_GetAutoResolve (Urho3D::RenderSurface *_target)
{
	return _target->GetAutoResolve ();
}


DllExport unsigned int
RenderSurface_GetNumViewports (Urho3D::RenderSurface *_target)
{
	return _target->GetNumViewports ();
}


DllExport Urho3D::Viewport *
RenderSurface_GetViewport (Urho3D::RenderSurface *_target, unsigned int index)
{
	return _target->GetViewport (index);
}


DllExport enum Urho3D::RenderSurfaceUpdateMode
RenderSurface_GetUpdateMode (Urho3D::RenderSurface *_target)
{
	return _target->GetUpdateMode ();
}


DllExport Urho3D::RenderSurface *
RenderSurface_GetLinkedRenderTarget (Urho3D::RenderSurface *_target)
{
	return _target->GetLinkedRenderTarget ();
}


DllExport Urho3D::RenderSurface *
RenderSurface_GetLinkedDepthStencil (Urho3D::RenderSurface *_target)
{
	return _target->GetLinkedDepthStencil ();
}


DllExport int
RenderSurface_IsUpdateQueued (Urho3D::RenderSurface *_target)
{
	return _target->IsUpdateQueued ();
}


DllExport void
RenderSurface_ResetUpdateQueued (Urho3D::RenderSurface *_target)
{
	_target->ResetUpdateQueued ();
}


DllExport Urho3D::Texture *
RenderSurface_GetParentTexture (Urho3D::RenderSurface *_target)
{
	return _target->GetParentTexture ();
}


DllExport void *
RenderSurface_GetSurface (Urho3D::RenderSurface *_target)
{
	return _target->GetSurface ();
}


DllExport void *
RenderSurface_GetRenderTargetView (Urho3D::RenderSurface *_target)
{
	return _target->GetRenderTargetView ();
}


DllExport void *
RenderSurface_GetReadOnlyView (Urho3D::RenderSurface *_target)
{
	return _target->GetReadOnlyView ();
}


DllExport unsigned int
RenderSurface_GetTarget (Urho3D::RenderSurface *_target)
{
	return _target->GetTarget ();
}


DllExport unsigned int
RenderSurface_GetRenderBuffer (Urho3D::RenderSurface *_target)
{
	return _target->GetRenderBuffer ();
}


DllExport int
RenderSurface_IsResolveDirty (Urho3D::RenderSurface *_target)
{
	return _target->IsResolveDirty ();
}


DllExport void
RenderSurface_SetResolveDirty (Urho3D::RenderSurface *_target, bool enable)
{
	_target->SetResolveDirty (enable);
}


DllExport int
Texture2D_GetType (Urho3D::Texture2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Texture2D_GetTypeName (Urho3D::Texture2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Texture2D_GetTypeStatic ()
{
	return (Texture2D::GetTypeStatic ()).Value ();
}


DllExport const char *
Texture2D_GetTypeNameStatic ()
{
	return stringdup((Texture2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
Texture2D_Texture2D (Urho3D::Context * context)
{
	return WeakPtr<Texture2D>(new Texture2D(context));
}


DllExport void
Texture2D_RegisterObject (Urho3D::Context * context)
{
	Texture2D::RegisterObject (context);
}


DllExport int
Texture2D_BeginLoad_File (Urho3D::Texture2D *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Texture2D_BeginLoad_MemoryBuffer (Urho3D::Texture2D *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Texture2D_EndLoad (Urho3D::Texture2D *_target)
{
	return _target->EndLoad ();
}


DllExport void
Texture2D_Release (Urho3D::Texture2D *_target)
{
	_target->Release ();
}


DllExport void
Texture2D_SetCustomTarget (Urho3D::Texture2D *_target, unsigned int target)
{
	_target->SetCustomTarget (target);
}


DllExport int
Texture2D_SetSize (Urho3D::Texture2D *_target, int width, int height, unsigned int format, enum Urho3D::TextureUsage usage, int multiSample, bool autoResolve)
{
	return _target->SetSize (width, height, format, usage, multiSample, autoResolve);
}


DllExport int
Texture2D_SetData (Urho3D::Texture2D *_target, unsigned int level, int x, int y, int width, int height, const void * data)
{
	return _target->SetData (level, x, y, width, height, data);
}


DllExport int
Texture2D_SetData0 (Urho3D::Texture2D *_target, Urho3D::Image * image, bool useAlpha)
{
	return _target->SetData (image, useAlpha);
}


DllExport int
Texture2D_GetData (Urho3D::Texture2D *_target, unsigned int level, void * dest)
{
	return _target->GetData (level, dest);
}


DllExport int
Texture2D_GetImage (Urho3D::Texture2D *_target, Image * image)
{
	return _target->GetImage (*image);
}


DllExport Urho3D::Image *
Texture2D_GetImage1 (Urho3D::Texture2D *_target)
{
	auto copy = _target->GetImage ();
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::RenderSurface *
Texture2D_GetRenderSurface (Urho3D::Texture2D *_target)
{
	return _target->GetRenderSurface ();
}


DllExport GPUObject*
IndexBuffer_CastToGPUObject(Urho3D::IndexBuffer *_target)
{
	return static_cast<GPUObject*>(_target);
}
DllExport int
IndexBuffer_GetType (Urho3D::IndexBuffer *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
IndexBuffer_GetTypeName (Urho3D::IndexBuffer *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
IndexBuffer_GetTypeStatic ()
{
	return (IndexBuffer::GetTypeStatic ()).Value ();
}


DllExport const char *
IndexBuffer_GetTypeNameStatic ()
{
	return stringdup((IndexBuffer::GetTypeNameStatic ()).CString ());
}


DllExport void *
IndexBuffer_IndexBuffer (Urho3D::Context * context, bool forceHeadless)
{
	return WeakPtr<IndexBuffer>(new IndexBuffer(context, forceHeadless));
}


DllExport void
IndexBuffer_OnDeviceLost (Urho3D::IndexBuffer *_target)
{
	_target->OnDeviceLost ();
}


DllExport void
IndexBuffer_Release (Urho3D::IndexBuffer *_target)
{
	_target->Release ();
}


DllExport void
IndexBuffer_SetShadowed (Urho3D::IndexBuffer *_target, bool enable)
{
	_target->SetShadowed (enable);
}


DllExport int
IndexBuffer_SetSize (Urho3D::IndexBuffer *_target, unsigned int indexCount, bool largeIndices, bool dynamic)
{
	return _target->SetSize (indexCount, largeIndices, dynamic);
}


DllExport int
IndexBuffer_SetData (Urho3D::IndexBuffer *_target, const void * data)
{
	return _target->SetData (data);
}


DllExport int
IndexBuffer_SetDataRange (Urho3D::IndexBuffer *_target, const void * data, unsigned int start, unsigned int count, bool discard)
{
	return _target->SetDataRange (data, start, count, discard);
}


DllExport void *
IndexBuffer_Lock (Urho3D::IndexBuffer *_target, unsigned int start, unsigned int count, bool discard)
{
	return _target->Lock (start, count, discard);
}


DllExport void
IndexBuffer_Unlock (Urho3D::IndexBuffer *_target)
{
	_target->Unlock ();
}


DllExport int
IndexBuffer_IsShadowed (Urho3D::IndexBuffer *_target)
{
	return _target->IsShadowed ();
}


DllExport int
IndexBuffer_IsDynamic (Urho3D::IndexBuffer *_target)
{
	return _target->IsDynamic ();
}


DllExport int
IndexBuffer_IsLocked (Urho3D::IndexBuffer *_target)
{
	return _target->IsLocked ();
}


DllExport unsigned int
IndexBuffer_GetIndexCount (Urho3D::IndexBuffer *_target)
{
	return _target->GetIndexCount ();
}


DllExport unsigned int
IndexBuffer_GetIndexSize (Urho3D::IndexBuffer *_target)
{
	return _target->GetIndexSize ();
}


DllExport unsigned char *
IndexBuffer_GetShadowData (Urho3D::IndexBuffer *_target)
{
	return _target->GetShadowData ();
}


DllExport int
OcclusionBuffer_GetType (Urho3D::OcclusionBuffer *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
OcclusionBuffer_GetTypeName (Urho3D::OcclusionBuffer *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
OcclusionBuffer_GetTypeStatic ()
{
	return (OcclusionBuffer::GetTypeStatic ()).Value ();
}


DllExport const char *
OcclusionBuffer_GetTypeNameStatic ()
{
	return stringdup((OcclusionBuffer::GetTypeNameStatic ()).CString ());
}


DllExport void *
OcclusionBuffer_OcclusionBuffer (Urho3D::Context * context)
{
	return WeakPtr<OcclusionBuffer>(new OcclusionBuffer(context));
}


DllExport int
OcclusionBuffer_SetSize (Urho3D::OcclusionBuffer *_target, int width, int height, bool threaded)
{
	return _target->SetSize (width, height, threaded);
}


DllExport void
OcclusionBuffer_SetView (Urho3D::OcclusionBuffer *_target, Urho3D::Camera * camera)
{
	_target->SetView (camera);
}


DllExport void
OcclusionBuffer_SetMaxTriangles (Urho3D::OcclusionBuffer *_target, unsigned int triangles)
{
	_target->SetMaxTriangles (triangles);
}


DllExport void
OcclusionBuffer_SetCullMode (Urho3D::OcclusionBuffer *_target, enum Urho3D::CullMode mode)
{
	_target->SetCullMode (mode);
}


DllExport void
OcclusionBuffer_Reset (Urho3D::OcclusionBuffer *_target)
{
	_target->Reset ();
}


DllExport void
OcclusionBuffer_Clear (Urho3D::OcclusionBuffer *_target)
{
	_target->Clear ();
}


DllExport int
OcclusionBuffer_AddTriangles (Urho3D::OcclusionBuffer *_target, const class Urho3D::Matrix3x4 & model, const void * vertexData, unsigned int vertexSize, unsigned int vertexStart, unsigned int vertexCount)
{
	return _target->AddTriangles (model, vertexData, vertexSize, vertexStart, vertexCount);
}


DllExport int
OcclusionBuffer_AddTriangles0 (Urho3D::OcclusionBuffer *_target, const class Urho3D::Matrix3x4 & model, const void * vertexData, unsigned int vertexSize, const void * indexData, unsigned int indexSize, unsigned int indexStart, unsigned int indexCount)
{
	return _target->AddTriangles (model, vertexData, vertexSize, indexData, indexSize, indexStart, indexCount);
}


DllExport void
OcclusionBuffer_DrawTriangles (Urho3D::OcclusionBuffer *_target)
{
	_target->DrawTriangles ();
}


DllExport void
OcclusionBuffer_BuildDepthHierarchy (Urho3D::OcclusionBuffer *_target)
{
	_target->BuildDepthHierarchy ();
}


DllExport void
OcclusionBuffer_ResetUseTimer (Urho3D::OcclusionBuffer *_target)
{
	_target->ResetUseTimer ();
}


DllExport int *
OcclusionBuffer_GetBuffer (Urho3D::OcclusionBuffer *_target)
{
	return _target->GetBuffer ();
}


DllExport Interop::Matrix3x4 
OcclusionBuffer_GetView (Urho3D::OcclusionBuffer *_target)
{
	return *((Interop::Matrix3x4  *) &(_target->GetView ()));
}


DllExport Interop::Matrix4 
OcclusionBuffer_GetProjection (Urho3D::OcclusionBuffer *_target)
{
	return *((Interop::Matrix4  *) &(_target->GetProjection ()));
}


DllExport int
OcclusionBuffer_GetWidth (Urho3D::OcclusionBuffer *_target)
{
	return _target->GetWidth ();
}


DllExport int
OcclusionBuffer_GetHeight (Urho3D::OcclusionBuffer *_target)
{
	return _target->GetHeight ();
}


DllExport unsigned int
OcclusionBuffer_GetNumTriangles (Urho3D::OcclusionBuffer *_target)
{
	return _target->GetNumTriangles ();
}


DllExport unsigned int
OcclusionBuffer_GetMaxTriangles (Urho3D::OcclusionBuffer *_target)
{
	return _target->GetMaxTriangles ();
}


DllExport enum Urho3D::CullMode
OcclusionBuffer_GetCullMode (Urho3D::OcclusionBuffer *_target)
{
	return _target->GetCullMode ();
}


DllExport int
OcclusionBuffer_IsThreaded (Urho3D::OcclusionBuffer *_target)
{
	return _target->IsThreaded ();
}


DllExport int
OcclusionBuffer_IsVisible (Urho3D::OcclusionBuffer *_target, const class Urho3D::BoundingBox & worldSpaceBox)
{
	return _target->IsVisible (worldSpaceBox);
}


DllExport unsigned int
OcclusionBuffer_GetUseTimer (Urho3D::OcclusionBuffer *_target)
{
	return _target->GetUseTimer ();
}


DllExport int
Octree_GetType (Urho3D::Octree *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Octree_GetTypeName (Urho3D::Octree *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Octree_GetTypeStatic ()
{
	return (Octree::GetTypeStatic ()).Value ();
}


DllExport const char *
Octree_GetTypeNameStatic ()
{
	return stringdup((Octree::GetTypeNameStatic ()).CString ());
}


DllExport void *
Octree_Octree (Urho3D::Context * context)
{
	return WeakPtr<Octree>(new Octree(context));
}


DllExport void
Octree_RegisterObject (Urho3D::Context * context)
{
	Octree::RegisterObject (context);
}


DllExport void
Octree_DrawDebugGeometry (Urho3D::Octree *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
Octree_SetSize (Urho3D::Octree *_target, const class Urho3D::BoundingBox & box, unsigned int numLevels)
{
	_target->SetSize (box, numLevels);
}


DllExport void
Octree_AddManualDrawable (Urho3D::Octree *_target, Urho3D::Drawable * drawable)
{
	_target->AddManualDrawable (drawable);
}


DllExport void
Octree_RemoveManualDrawable (Urho3D::Octree *_target, Urho3D::Drawable * drawable)
{
	_target->RemoveManualDrawable (drawable);
}


DllExport unsigned int
Octree_GetNumLevels (Urho3D::Octree *_target)
{
	return _target->GetNumLevels ();
}


DllExport void
Octree_QueueUpdate (Urho3D::Octree *_target, Urho3D::Drawable * drawable)
{
	_target->QueueUpdate (drawable);
}


DllExport void
Octree_CancelUpdate (Urho3D::Octree *_target, Urho3D::Drawable * drawable)
{
	_target->CancelUpdate (drawable);
}


DllExport void
Octree_DrawDebugGeometry0 (Urho3D::Octree *_target, bool depthTest)
{
	_target->DrawDebugGeometry (depthTest);
}


DllExport int
ParticleEffect_GetType (Urho3D::ParticleEffect *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ParticleEffect_GetTypeName (Urho3D::ParticleEffect *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ParticleEffect_GetTypeStatic ()
{
	return (ParticleEffect::GetTypeStatic ()).Value ();
}


DllExport const char *
ParticleEffect_GetTypeNameStatic ()
{
	return stringdup((ParticleEffect::GetTypeNameStatic ()).CString ());
}


DllExport void *
ParticleEffect_ParticleEffect (Urho3D::Context * context)
{
	return WeakPtr<ParticleEffect>(new ParticleEffect(context));
}


DllExport void
ParticleEffect_RegisterObject (Urho3D::Context * context)
{
	ParticleEffect::RegisterObject (context);
}


DllExport int
ParticleEffect_BeginLoad_File (Urho3D::ParticleEffect *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
ParticleEffect_BeginLoad_MemoryBuffer (Urho3D::ParticleEffect *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
ParticleEffect_EndLoad (Urho3D::ParticleEffect *_target)
{
	return _target->EndLoad ();
}


DllExport int
ParticleEffect_Save_File (Urho3D::ParticleEffect *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
ParticleEffect_Save_MemoryBuffer (Urho3D::ParticleEffect *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
ParticleEffect_Save0 (Urho3D::ParticleEffect *_target, Urho3D::XMLElement & dest)
{
	return _target->Save (dest);
}


DllExport int
ParticleEffect_Load (Urho3D::ParticleEffect *_target, const class Urho3D::XMLElement & source)
{
	return _target->Load (source);
}


DllExport void
ParticleEffect_SetMaterial (Urho3D::ParticleEffect *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport void
ParticleEffect_SetNumParticles (Urho3D::ParticleEffect *_target, unsigned int num)
{
	_target->SetNumParticles (num);
}


DllExport void
ParticleEffect_SetUpdateInvisible (Urho3D::ParticleEffect *_target, bool enable)
{
	_target->SetUpdateInvisible (enable);
}


DllExport void
ParticleEffect_SetRelative (Urho3D::ParticleEffect *_target, bool enable)
{
	_target->SetRelative (enable);
}


DllExport void
ParticleEffect_SetScaled (Urho3D::ParticleEffect *_target, bool enable)
{
	_target->SetScaled (enable);
}


DllExport void
ParticleEffect_SetSorted (Urho3D::ParticleEffect *_target, bool enable)
{
	_target->SetSorted (enable);
}


DllExport void
ParticleEffect_SetFixedScreenSize (Urho3D::ParticleEffect *_target, bool enable)
{
	_target->SetFixedScreenSize (enable);
}


DllExport void
ParticleEffect_SetAnimationLodBias (Urho3D::ParticleEffect *_target, float lodBias)
{
	_target->SetAnimationLodBias (lodBias);
}


DllExport void
ParticleEffect_SetEmitterType (Urho3D::ParticleEffect *_target, enum Urho3D::EmitterType type)
{
	_target->SetEmitterType (type);
}


DllExport void
ParticleEffect_SetEmitterSize (Urho3D::ParticleEffect *_target, const class Urho3D::Vector3 & size)
{
	_target->SetEmitterSize (size);
}


DllExport void
ParticleEffect_SetMinDirection (Urho3D::ParticleEffect *_target, const class Urho3D::Vector3 & direction)
{
	_target->SetMinDirection (direction);
}


DllExport void
ParticleEffect_SetMaxDirection (Urho3D::ParticleEffect *_target, const class Urho3D::Vector3 & direction)
{
	_target->SetMaxDirection (direction);
}


DllExport void
ParticleEffect_SetConstantForce (Urho3D::ParticleEffect *_target, const class Urho3D::Vector3 & force)
{
	_target->SetConstantForce (force);
}


DllExport void
ParticleEffect_SetDampingForce (Urho3D::ParticleEffect *_target, float force)
{
	_target->SetDampingForce (force);
}


DllExport void
ParticleEffect_SetActiveTime (Urho3D::ParticleEffect *_target, float time)
{
	_target->SetActiveTime (time);
}


DllExport void
ParticleEffect_SetInactiveTime (Urho3D::ParticleEffect *_target, float time)
{
	_target->SetInactiveTime (time);
}


DllExport void
ParticleEffect_SetMinEmissionRate (Urho3D::ParticleEffect *_target, float rate)
{
	_target->SetMinEmissionRate (rate);
}


DllExport void
ParticleEffect_SetMaxEmissionRate (Urho3D::ParticleEffect *_target, float rate)
{
	_target->SetMaxEmissionRate (rate);
}


DllExport void
ParticleEffect_SetMinParticleSize (Urho3D::ParticleEffect *_target, const class Urho3D::Vector2 & size)
{
	_target->SetMinParticleSize (size);
}


DllExport void
ParticleEffect_SetMaxParticleSize (Urho3D::ParticleEffect *_target, const class Urho3D::Vector2 & size)
{
	_target->SetMaxParticleSize (size);
}


DllExport void
ParticleEffect_SetMinTimeToLive (Urho3D::ParticleEffect *_target, float time)
{
	_target->SetMinTimeToLive (time);
}


DllExport void
ParticleEffect_SetMaxTimeToLive (Urho3D::ParticleEffect *_target, float time)
{
	_target->SetMaxTimeToLive (time);
}


DllExport void
ParticleEffect_SetMinVelocity (Urho3D::ParticleEffect *_target, float velocity)
{
	_target->SetMinVelocity (velocity);
}


DllExport void
ParticleEffect_SetMaxVelocity (Urho3D::ParticleEffect *_target, float velocity)
{
	_target->SetMaxVelocity (velocity);
}


DllExport void
ParticleEffect_SetMinRotation (Urho3D::ParticleEffect *_target, float rotation)
{
	_target->SetMinRotation (rotation);
}


DllExport void
ParticleEffect_SetMaxRotation (Urho3D::ParticleEffect *_target, float rotation)
{
	_target->SetMaxRotation (rotation);
}


DllExport void
ParticleEffect_SetMinRotationSpeed (Urho3D::ParticleEffect *_target, float speed)
{
	_target->SetMinRotationSpeed (speed);
}


DllExport void
ParticleEffect_SetMaxRotationSpeed (Urho3D::ParticleEffect *_target, float speed)
{
	_target->SetMaxRotationSpeed (speed);
}


DllExport void
ParticleEffect_SetSizeAdd (Urho3D::ParticleEffect *_target, float sizeAdd)
{
	_target->SetSizeAdd (sizeAdd);
}


DllExport void
ParticleEffect_SetSizeMul (Urho3D::ParticleEffect *_target, float sizeMul)
{
	_target->SetSizeMul (sizeMul);
}


DllExport void
ParticleEffect_SetFaceCameraMode (Urho3D::ParticleEffect *_target, enum Urho3D::FaceCameraMode mode)
{
	_target->SetFaceCameraMode (mode);
}


DllExport void
ParticleEffect_AddColorTime (Urho3D::ParticleEffect *_target, const class Urho3D::Color & color, float time)
{
	_target->AddColorTime (color, time);
}


DllExport void
ParticleEffect_RemoveColorFrame (Urho3D::ParticleEffect *_target, unsigned int index)
{
	_target->RemoveColorFrame (index);
}


DllExport void
ParticleEffect_SetNumColorFrames (Urho3D::ParticleEffect *_target, unsigned int number)
{
	_target->SetNumColorFrames (number);
}


DllExport void
ParticleEffect_SortColorFrames (Urho3D::ParticleEffect *_target)
{
	_target->SortColorFrames ();
}


DllExport void
ParticleEffect_RemoveTextureFrame (Urho3D::ParticleEffect *_target, unsigned int index)
{
	_target->RemoveTextureFrame (index);
}


DllExport void
ParticleEffect_SetNumTextureFrames (Urho3D::ParticleEffect *_target, unsigned int number)
{
	_target->SetNumTextureFrames (number);
}


DllExport void
ParticleEffect_SortTextureFrames (Urho3D::ParticleEffect *_target)
{
	_target->SortTextureFrames ();
}


DllExport Urho3D::ParticleEffect *
ParticleEffect_Clone (Urho3D::ParticleEffect *_target, const char * cloneName)
{
	auto copy = _target->Clone (Urho3D::String(cloneName));
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::Material *
ParticleEffect_GetMaterial (Urho3D::ParticleEffect *_target)
{
	return _target->GetMaterial ();
}


DllExport unsigned int
ParticleEffect_GetNumParticles (Urho3D::ParticleEffect *_target)
{
	return _target->GetNumParticles ();
}


DllExport int
ParticleEffect_GetUpdateInvisible (Urho3D::ParticleEffect *_target)
{
	return _target->GetUpdateInvisible ();
}


DllExport int
ParticleEffect_IsRelative (Urho3D::ParticleEffect *_target)
{
	return _target->IsRelative ();
}


DllExport int
ParticleEffect_IsScaled (Urho3D::ParticleEffect *_target)
{
	return _target->IsScaled ();
}


DllExport int
ParticleEffect_IsSorted (Urho3D::ParticleEffect *_target)
{
	return _target->IsSorted ();
}


DllExport int
ParticleEffect_IsFixedScreenSize (Urho3D::ParticleEffect *_target)
{
	return _target->IsFixedScreenSize ();
}


DllExport float
ParticleEffect_GetAnimationLodBias (Urho3D::ParticleEffect *_target)
{
	return _target->GetAnimationLodBias ();
}


DllExport enum Urho3D::EmitterType
ParticleEffect_GetEmitterType (Urho3D::ParticleEffect *_target)
{
	return _target->GetEmitterType ();
}


DllExport Interop::Vector3 
ParticleEffect_GetEmitterSize (Urho3D::ParticleEffect *_target)
{
	return *((Interop::Vector3  *) &(_target->GetEmitterSize ()));
}


DllExport Interop::Vector3 
ParticleEffect_GetMinDirection (Urho3D::ParticleEffect *_target)
{
	return *((Interop::Vector3  *) &(_target->GetMinDirection ()));
}


DllExport Interop::Vector3 
ParticleEffect_GetMaxDirection (Urho3D::ParticleEffect *_target)
{
	return *((Interop::Vector3  *) &(_target->GetMaxDirection ()));
}


DllExport Interop::Vector3 
ParticleEffect_GetConstantForce (Urho3D::ParticleEffect *_target)
{
	return *((Interop::Vector3  *) &(_target->GetConstantForce ()));
}


DllExport float
ParticleEffect_GetDampingForce (Urho3D::ParticleEffect *_target)
{
	return _target->GetDampingForce ();
}


DllExport float
ParticleEffect_GetActiveTime (Urho3D::ParticleEffect *_target)
{
	return _target->GetActiveTime ();
}


DllExport float
ParticleEffect_GetInactiveTime (Urho3D::ParticleEffect *_target)
{
	return _target->GetInactiveTime ();
}


DllExport float
ParticleEffect_GetMinEmissionRate (Urho3D::ParticleEffect *_target)
{
	return _target->GetMinEmissionRate ();
}


DllExport float
ParticleEffect_GetMaxEmissionRate (Urho3D::ParticleEffect *_target)
{
	return _target->GetMaxEmissionRate ();
}


DllExport Interop::Vector2 
ParticleEffect_GetMinParticleSize (Urho3D::ParticleEffect *_target)
{
	return *((Interop::Vector2  *) &(_target->GetMinParticleSize ()));
}


DllExport Interop::Vector2 
ParticleEffect_GetMaxParticleSize (Urho3D::ParticleEffect *_target)
{
	return *((Interop::Vector2  *) &(_target->GetMaxParticleSize ()));
}


DllExport float
ParticleEffect_GetMinTimeToLive (Urho3D::ParticleEffect *_target)
{
	return _target->GetMinTimeToLive ();
}


DllExport float
ParticleEffect_GetMaxTimeToLive (Urho3D::ParticleEffect *_target)
{
	return _target->GetMaxTimeToLive ();
}


DllExport float
ParticleEffect_GetMinVelocity (Urho3D::ParticleEffect *_target)
{
	return _target->GetMinVelocity ();
}


DllExport float
ParticleEffect_GetMaxVelocity (Urho3D::ParticleEffect *_target)
{
	return _target->GetMaxVelocity ();
}


DllExport float
ParticleEffect_GetMinRotation (Urho3D::ParticleEffect *_target)
{
	return _target->GetMinRotation ();
}


DllExport float
ParticleEffect_GetMaxRotation (Urho3D::ParticleEffect *_target)
{
	return _target->GetMaxRotation ();
}


DllExport float
ParticleEffect_GetMinRotationSpeed (Urho3D::ParticleEffect *_target)
{
	return _target->GetMinRotationSpeed ();
}


DllExport float
ParticleEffect_GetMaxRotationSpeed (Urho3D::ParticleEffect *_target)
{
	return _target->GetMaxRotationSpeed ();
}


DllExport float
ParticleEffect_GetSizeAdd (Urho3D::ParticleEffect *_target)
{
	return _target->GetSizeAdd ();
}


DllExport float
ParticleEffect_GetSizeMul (Urho3D::ParticleEffect *_target)
{
	return _target->GetSizeMul ();
}


DllExport unsigned int
ParticleEffect_GetNumColorFrames (Urho3D::ParticleEffect *_target)
{
	return _target->GetNumColorFrames ();
}


DllExport const struct Urho3D::ColorFrame *
ParticleEffect_GetColorFrame (Urho3D::ParticleEffect *_target, unsigned int index)
{
	return _target->GetColorFrame (index);
}


DllExport unsigned int
ParticleEffect_GetNumTextureFrames (Urho3D::ParticleEffect *_target)
{
	return _target->GetNumTextureFrames ();
}


DllExport const struct Urho3D::TextureFrame *
ParticleEffect_GetTextureFrame (Urho3D::ParticleEffect *_target, unsigned int index)
{
	return _target->GetTextureFrame (index);
}


DllExport enum Urho3D::FaceCameraMode
ParticleEffect_GetFaceCameraMode (Urho3D::ParticleEffect *_target)
{
	return _target->GetFaceCameraMode ();
}


DllExport Interop::Vector3 
ParticleEffect_GetRandomDirection (Urho3D::ParticleEffect *_target)
{
	return *((Interop::Vector3  *) &(_target->GetRandomDirection ()));
}


DllExport Interop::Vector2 
ParticleEffect_GetRandomSize (Urho3D::ParticleEffect *_target)
{
	return *((Interop::Vector2  *) &(_target->GetRandomSize ()));
}


DllExport float
ParticleEffect_GetRandomVelocity (Urho3D::ParticleEffect *_target)
{
	return _target->GetRandomVelocity ();
}


DllExport float
ParticleEffect_GetRandomTimeToLive (Urho3D::ParticleEffect *_target)
{
	return _target->GetRandomTimeToLive ();
}


DllExport float
ParticleEffect_GetRandomRotationSpeed (Urho3D::ParticleEffect *_target)
{
	return _target->GetRandomRotationSpeed ();
}


DllExport float
ParticleEffect_GetRandomRotation (Urho3D::ParticleEffect *_target)
{
	return _target->GetRandomRotation ();
}


DllExport int
ParticleEmitter_GetType (Urho3D::ParticleEmitter *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ParticleEmitter_GetTypeName (Urho3D::ParticleEmitter *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ParticleEmitter_GetTypeStatic ()
{
	return (ParticleEmitter::GetTypeStatic ()).Value ();
}


DllExport const char *
ParticleEmitter_GetTypeNameStatic ()
{
	return stringdup((ParticleEmitter::GetTypeNameStatic ()).CString ());
}


DllExport void *
ParticleEmitter_ParticleEmitter (Urho3D::Context * context)
{
	return WeakPtr<ParticleEmitter>(new ParticleEmitter(context));
}


DllExport void
ParticleEmitter_RegisterObject (Urho3D::Context * context)
{
	ParticleEmitter::RegisterObject (context);
}


DllExport void
ParticleEmitter_OnSetEnabled (Urho3D::ParticleEmitter *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
ParticleEmitter_SetEffect (Urho3D::ParticleEmitter *_target, Urho3D::ParticleEffect * effect)
{
	_target->SetEffect (effect);
}


DllExport void
ParticleEmitter_SetNumParticles (Urho3D::ParticleEmitter *_target, unsigned int num)
{
	_target->SetNumParticles (num);
}


DllExport void
ParticleEmitter_SetEmitting (Urho3D::ParticleEmitter *_target, bool enable)
{
	_target->SetEmitting (enable);
}


DllExport void
ParticleEmitter_SetSerializeParticles (Urho3D::ParticleEmitter *_target, bool enable)
{
	_target->SetSerializeParticles (enable);
}


DllExport void
ParticleEmitter_SetAutoRemoveMode (Urho3D::ParticleEmitter *_target, enum Urho3D::AutoRemoveMode mode)
{
	_target->SetAutoRemoveMode (mode);
}


DllExport void
ParticleEmitter_ResetEmissionTimer (Urho3D::ParticleEmitter *_target)
{
	_target->ResetEmissionTimer ();
}


DllExport void
ParticleEmitter_RemoveAllParticles (Urho3D::ParticleEmitter *_target)
{
	_target->RemoveAllParticles ();
}


DllExport void
ParticleEmitter_Reset (Urho3D::ParticleEmitter *_target)
{
	_target->Reset ();
}


DllExport void
ParticleEmitter_ApplyEffect (Urho3D::ParticleEmitter *_target)
{
	_target->ApplyEffect ();
}


DllExport Urho3D::ParticleEffect *
ParticleEmitter_GetEffect (Urho3D::ParticleEmitter *_target)
{
	return _target->GetEffect ();
}


DllExport unsigned int
ParticleEmitter_GetNumParticles (Urho3D::ParticleEmitter *_target)
{
	return _target->GetNumParticles ();
}


DllExport int
ParticleEmitter_IsEmitting (Urho3D::ParticleEmitter *_target)
{
	return _target->IsEmitting ();
}


DllExport int
ParticleEmitter_GetSerializeParticles (Urho3D::ParticleEmitter *_target)
{
	return _target->GetSerializeParticles ();
}


DllExport enum Urho3D::AutoRemoveMode
ParticleEmitter_GetAutoRemoveMode (Urho3D::ParticleEmitter *_target)
{
	return _target->GetAutoRemoveMode ();
}


DllExport Urho3D::ResourceRef
ParticleEmitter_GetEffectAttr (Urho3D::ParticleEmitter *_target)
{
	return _target->GetEffectAttr ();
}


DllExport void *
RenderPath_RenderPath ()
{
	return WeakPtr<RenderPath>(new RenderPath());
}


DllExport Urho3D::RenderPath *
RenderPath_Clone (Urho3D::RenderPath *_target)
{
	auto copy = _target->Clone ();
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport int
RenderPath_Load (Urho3D::RenderPath *_target, Urho3D::XMLFile * file)
{
	return _target->Load (file);
}


DllExport int
RenderPath_Append (Urho3D::RenderPath *_target, Urho3D::XMLFile * file)
{
	return _target->Append (file);
}


DllExport void
RenderPath_SetEnabled (Urho3D::RenderPath *_target, const char * tag, bool active)
{
	_target->SetEnabled (Urho3D::String(tag), active);
}


DllExport int
RenderPath_IsEnabled (Urho3D::RenderPath *_target, const char * tag)
{
	return _target->IsEnabled (Urho3D::String(tag));
}


DllExport int
RenderPath_IsAdded (Urho3D::RenderPath *_target, const char * tag)
{
	return _target->IsAdded (Urho3D::String(tag));
}


DllExport void
RenderPath_ToggleEnabled (Urho3D::RenderPath *_target, const char * tag)
{
	_target->ToggleEnabled (Urho3D::String(tag));
}


DllExport void
RenderPath_RemoveRenderTarget (Urho3D::RenderPath *_target, unsigned int index)
{
	_target->RemoveRenderTarget (index);
}


DllExport void
RenderPath_RemoveRenderTarget0 (Urho3D::RenderPath *_target, const char * name)
{
	_target->RemoveRenderTarget (Urho3D::String(name));
}


DllExport void
RenderPath_RemoveRenderTargets (Urho3D::RenderPath *_target, const char * tag)
{
	_target->RemoveRenderTargets (Urho3D::String(tag));
}


DllExport void
RenderPath_SetCommand (Urho3D::RenderPath *_target, unsigned int index, const struct Urho3D::RenderPathCommand & command)
{
	_target->SetCommand (index, command);
}


DllExport void
RenderPath_AddCommand (Urho3D::RenderPath *_target, const struct Urho3D::RenderPathCommand & command)
{
	_target->AddCommand (command);
}


DllExport void
RenderPath_InsertCommand (Urho3D::RenderPath *_target, unsigned int index, const struct Urho3D::RenderPathCommand & command)
{
	_target->InsertCommand (index, command);
}


DllExport void
RenderPath_RemoveCommand (Urho3D::RenderPath *_target, unsigned int index)
{
	_target->RemoveCommand (index);
}


DllExport void
RenderPath_RemoveCommands (Urho3D::RenderPath *_target, const char * tag)
{
	_target->RemoveCommands (Urho3D::String(tag));
}


// Urho3D::Variant overloads begin:
DllExport void
RenderPath_SetShaderParameter_0 (Urho3D::RenderPath *_target, const char * name, const class Urho3D::Vector3 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_1 (Urho3D::RenderPath *_target, const char * name, const class Urho3D::IntRect & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_2 (Urho3D::RenderPath *_target, const char * name, const class Urho3D::Color & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_3 (Urho3D::RenderPath *_target, const char * name, const class Urho3D::Vector2 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_4 (Urho3D::RenderPath *_target, const char * name, const class Urho3D::Vector4 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_5 (Urho3D::RenderPath *_target, const char * name, const class Urho3D::IntVector2 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_6 (Urho3D::RenderPath *_target, const char * name, const class Urho3D::Quaternion & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_7 (Urho3D::RenderPath *_target, const char * name, const class Urho3D::Matrix4 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_8 (Urho3D::RenderPath *_target, const char * name, const class Urho3D::Matrix3x4 & value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_9 (Urho3D::RenderPath *_target, const char * name, int value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_10 (Urho3D::RenderPath *_target, const char * name, float value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

DllExport void
RenderPath_SetShaderParameter_11 (Urho3D::RenderPath *_target, const char * name, const char * value)
{
	_target->SetShaderParameter (Urho3D::String(name), Urho3D::String(value));
}

DllExport void
RenderPath_SetShaderParameter_12 (Urho3D::RenderPath *_target, const char * name, bool value)
{
	_target->SetShaderParameter (Urho3D::String(name), (value));
}

// Urho3D::Variant overloads end.
DllExport unsigned int
RenderPath_GetNumRenderTargets (Urho3D::RenderPath *_target)
{
	return _target->GetNumRenderTargets ();
}


DllExport unsigned int
RenderPath_GetNumCommands (Urho3D::RenderPath *_target)
{
	return _target->GetNumCommands ();
}


DllExport Urho3D::RenderPathCommand *
RenderPath_GetCommand (Urho3D::RenderPath *_target, unsigned int index)
{
	return _target->GetCommand (index);
}


// Urho3D::Variant overloads begin:
DllExport Interop::Vector3
RenderPath_GetShaderParameter_0 (Urho3D::RenderPath *_target, const char * name)
{
	return *((Interop::Vector3 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetVector3()));
}

DllExport Interop::IntRect
RenderPath_GetShaderParameter_1 (Urho3D::RenderPath *_target, const char * name)
{
	return *((Interop::IntRect *) &(_target->GetShaderParameter (Urho3D::String(name)).GetIntRect()));
}

DllExport Interop::Color
RenderPath_GetShaderParameter_2 (Urho3D::RenderPath *_target, const char * name)
{
	return *((Interop::Color *) &(_target->GetShaderParameter (Urho3D::String(name)).GetColor()));
}

DllExport Interop::Vector2
RenderPath_GetShaderParameter_3 (Urho3D::RenderPath *_target, const char * name)
{
	return *((Interop::Vector2 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetVector2()));
}

DllExport Interop::Vector4
RenderPath_GetShaderParameter_4 (Urho3D::RenderPath *_target, const char * name)
{
	return *((Interop::Vector4 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetVector4()));
}

DllExport Interop::IntVector2
RenderPath_GetShaderParameter_5 (Urho3D::RenderPath *_target, const char * name)
{
	return *((Interop::IntVector2 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetIntVector2()));
}

DllExport Interop::Quaternion
RenderPath_GetShaderParameter_6 (Urho3D::RenderPath *_target, const char * name)
{
	return *((Interop::Quaternion *) &(_target->GetShaderParameter (Urho3D::String(name)).GetQuaternion()));
}

DllExport Interop::Matrix4
RenderPath_GetShaderParameter_7 (Urho3D::RenderPath *_target, const char * name)
{
	return *((Interop::Matrix4 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetMatrix4()));
}

DllExport Interop::Matrix3x4
RenderPath_GetShaderParameter_8 (Urho3D::RenderPath *_target, const char * name)
{
	return *((Interop::Matrix3x4 *) &(_target->GetShaderParameter (Urho3D::String(name)).GetMatrix3x4()));
}

DllExport int
RenderPath_GetShaderParameter_9 (Urho3D::RenderPath *_target, const char * name)
{
	return (_target->GetShaderParameter (Urho3D::String(name)).GetInt());
}

DllExport float
RenderPath_GetShaderParameter_10 (Urho3D::RenderPath *_target, const char * name)
{
	return (_target->GetShaderParameter (Urho3D::String(name)).GetFloat());
}

DllExport const char *
RenderPath_GetShaderParameter_11 (Urho3D::RenderPath *_target, const char * name)
{
	return stringdup(_target->GetShaderParameter (Urho3D::String(name)).GetString().CString());
}

DllExport bool
RenderPath_GetShaderParameter_12 (Urho3D::RenderPath *_target, const char * name)
{
	return (_target->GetShaderParameter (Urho3D::String(name)).GetBool());
}

// Urho3D::Variant overloads end.
DllExport int
Renderer_GetType (Urho3D::Renderer *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Renderer_GetTypeName (Urho3D::Renderer *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Renderer_GetTypeStatic ()
{
	return (Renderer::GetTypeStatic ()).Value ();
}


DllExport const char *
Renderer_GetTypeNameStatic ()
{
	return stringdup((Renderer::GetTypeNameStatic ()).CString ());
}


DllExport void *
Renderer_Renderer (Urho3D::Context * context)
{
	return WeakPtr<Renderer>(new Renderer(context));
}


DllExport void
Renderer_SetNumViewports (Urho3D::Renderer *_target, unsigned int num)
{
	_target->SetNumViewports (num);
}


DllExport void
Renderer_SetViewport (Urho3D::Renderer *_target, unsigned int index, Urho3D::Viewport * viewport)
{
	_target->SetViewport (index, viewport);
}


DllExport void
Renderer_SetDefaultRenderPath (Urho3D::Renderer *_target, Urho3D::RenderPath * renderPath)
{
	_target->SetDefaultRenderPath (renderPath);
}


DllExport void
Renderer_SetDefaultRenderPath0 (Urho3D::Renderer *_target, Urho3D::XMLFile * xmlFile)
{
	_target->SetDefaultRenderPath (xmlFile);
}


DllExport void
Renderer_SetDefaultTechnique (Urho3D::Renderer *_target, Urho3D::Technique * technique)
{
	_target->SetDefaultTechnique (technique);
}


DllExport void
Renderer_SetHDRRendering (Urho3D::Renderer *_target, bool enable)
{
	_target->SetHDRRendering (enable);
}


DllExport void
Renderer_SetSpecularLighting (Urho3D::Renderer *_target, bool enable)
{
	_target->SetSpecularLighting (enable);
}


DllExport void
Renderer_SetTextureAnisotropy (Urho3D::Renderer *_target, int level)
{
	_target->SetTextureAnisotropy (level);
}


DllExport void
Renderer_SetTextureFilterMode (Urho3D::Renderer *_target, enum Urho3D::TextureFilterMode mode)
{
	_target->SetTextureFilterMode (mode);
}


DllExport void
Renderer_SetTextureQuality (Urho3D::Renderer *_target, enum Urho3D::MaterialQuality quality)
{
	_target->SetTextureQuality (quality);
}


DllExport void
Renderer_SetMaterialQuality (Urho3D::Renderer *_target, enum Urho3D::MaterialQuality quality)
{
	_target->SetMaterialQuality (quality);
}


DllExport void
Renderer_SetDrawShadows (Urho3D::Renderer *_target, bool enable)
{
	_target->SetDrawShadows (enable);
}


DllExport void
Renderer_SetShadowMapSize (Urho3D::Renderer *_target, int size)
{
	_target->SetShadowMapSize (size);
}


DllExport void
Renderer_SetShadowQuality (Urho3D::Renderer *_target, enum Urho3D::ShadowQuality quality)
{
	_target->SetShadowQuality (quality);
}


DllExport void
Renderer_SetShadowSoftness (Urho3D::Renderer *_target, float shadowSoftness)
{
	_target->SetShadowSoftness (shadowSoftness);
}


DllExport void
Renderer_SetVSMShadowParameters (Urho3D::Renderer *_target, float minVariance, float lightBleedingReduction)
{
	_target->SetVSMShadowParameters (minVariance, lightBleedingReduction);
}


DllExport void
Renderer_SetVSMMultiSample (Urho3D::Renderer *_target, int multiSample)
{
	_target->SetVSMMultiSample (multiSample);
}


DllExport void
Renderer_SetReuseShadowMaps (Urho3D::Renderer *_target, bool enable)
{
	_target->SetReuseShadowMaps (enable);
}


DllExport void
Renderer_SetMaxShadowMaps (Urho3D::Renderer *_target, int shadowMaps)
{
	_target->SetMaxShadowMaps (shadowMaps);
}


DllExport void
Renderer_SetDynamicInstancing (Urho3D::Renderer *_target, bool enable)
{
	_target->SetDynamicInstancing (enable);
}


DllExport void
Renderer_SetNumExtraInstancingBufferElements (Urho3D::Renderer *_target, int elements)
{
	_target->SetNumExtraInstancingBufferElements (elements);
}


DllExport void
Renderer_SetMinInstances (Urho3D::Renderer *_target, int instances)
{
	_target->SetMinInstances (instances);
}


DllExport void
Renderer_SetMaxSortedInstances (Urho3D::Renderer *_target, int instances)
{
	_target->SetMaxSortedInstances (instances);
}


DllExport void
Renderer_SetMaxOccluderTriangles (Urho3D::Renderer *_target, int triangles)
{
	_target->SetMaxOccluderTriangles (triangles);
}


DllExport void
Renderer_SetOcclusionBufferSize (Urho3D::Renderer *_target, int size)
{
	_target->SetOcclusionBufferSize (size);
}


DllExport void
Renderer_SetOccluderSizeThreshold (Urho3D::Renderer *_target, float screenSize)
{
	_target->SetOccluderSizeThreshold (screenSize);
}


DllExport void
Renderer_SetThreadedOcclusion (Urho3D::Renderer *_target, bool enable)
{
	_target->SetThreadedOcclusion (enable);
}


DllExport void
Renderer_SetMobileShadowBiasMul (Urho3D::Renderer *_target, float mul)
{
	_target->SetMobileShadowBiasMul (mul);
}


DllExport void
Renderer_SetMobileShadowBiasAdd (Urho3D::Renderer *_target, float add)
{
	_target->SetMobileShadowBiasAdd (add);
}


DllExport void
Renderer_SetMobileNormalOffsetMul (Urho3D::Renderer *_target, float mul)
{
	_target->SetMobileNormalOffsetMul (mul);
}


DllExport void
Renderer_ReloadShaders (Urho3D::Renderer *_target)
{
	_target->ReloadShaders ();
}


DllExport void
Renderer_ApplyShadowMapFilter (Urho3D::Renderer *_target, Urho3D::View * view, Urho3D::Texture2D * shadowMap, float blurScale)
{
	_target->ApplyShadowMapFilter (view, shadowMap, blurScale);
}


DllExport unsigned int
Renderer_GetNumViewports (Urho3D::Renderer *_target)
{
	return _target->GetNumViewports ();
}


DllExport Urho3D::Viewport *
Renderer_GetViewport (Urho3D::Renderer *_target, unsigned int index)
{
	return _target->GetViewport (index);
}


DllExport Urho3D::Viewport *
Renderer_GetViewportForScene (Urho3D::Renderer *_target, Urho3D::Scene * scene, unsigned int index)
{
	return _target->GetViewportForScene (scene, index);
}


DllExport Urho3D::RenderPath *
Renderer_GetDefaultRenderPath (Urho3D::Renderer *_target)
{
	return _target->GetDefaultRenderPath ();
}


DllExport Urho3D::Technique *
Renderer_GetDefaultTechnique (Urho3D::Renderer *_target)
{
	return _target->GetDefaultTechnique ();
}


DllExport int
Renderer_GetHDRRendering (Urho3D::Renderer *_target)
{
	return _target->GetHDRRendering ();
}


DllExport int
Renderer_GetSpecularLighting (Urho3D::Renderer *_target)
{
	return _target->GetSpecularLighting ();
}


DllExport int
Renderer_GetDrawShadows (Urho3D::Renderer *_target)
{
	return _target->GetDrawShadows ();
}


DllExport int
Renderer_GetTextureAnisotropy (Urho3D::Renderer *_target)
{
	return _target->GetTextureAnisotropy ();
}


DllExport enum Urho3D::TextureFilterMode
Renderer_GetTextureFilterMode (Urho3D::Renderer *_target)
{
	return _target->GetTextureFilterMode ();
}


DllExport enum Urho3D::MaterialQuality
Renderer_GetTextureQuality (Urho3D::Renderer *_target)
{
	return _target->GetTextureQuality ();
}


DllExport enum Urho3D::MaterialQuality
Renderer_GetMaterialQuality (Urho3D::Renderer *_target)
{
	return _target->GetMaterialQuality ();
}


DllExport int
Renderer_GetShadowMapSize (Urho3D::Renderer *_target)
{
	return _target->GetShadowMapSize ();
}


DllExport enum Urho3D::ShadowQuality
Renderer_GetShadowQuality (Urho3D::Renderer *_target)
{
	return _target->GetShadowQuality ();
}


DllExport float
Renderer_GetShadowSoftness (Urho3D::Renderer *_target)
{
	return _target->GetShadowSoftness ();
}


DllExport Interop::Vector2 
Renderer_GetVSMShadowParameters (Urho3D::Renderer *_target)
{
	return *((Interop::Vector2  *) &(_target->GetVSMShadowParameters ()));
}


DllExport int
Renderer_GetVSMMultiSample (Urho3D::Renderer *_target)
{
	return _target->GetVSMMultiSample ();
}


DllExport int
Renderer_GetReuseShadowMaps (Urho3D::Renderer *_target)
{
	return _target->GetReuseShadowMaps ();
}


DllExport int
Renderer_GetMaxShadowMaps (Urho3D::Renderer *_target)
{
	return _target->GetMaxShadowMaps ();
}


DllExport int
Renderer_GetDynamicInstancing (Urho3D::Renderer *_target)
{
	return _target->GetDynamicInstancing ();
}


DllExport int
Renderer_GetNumExtraInstancingBufferElements (Urho3D::Renderer *_target)
{
	return _target->GetNumExtraInstancingBufferElements ();
}


DllExport int
Renderer_GetMinInstances (Urho3D::Renderer *_target)
{
	return _target->GetMinInstances ();
}


DllExport int
Renderer_GetMaxSortedInstances (Urho3D::Renderer *_target)
{
	return _target->GetMaxSortedInstances ();
}


DllExport int
Renderer_GetMaxOccluderTriangles (Urho3D::Renderer *_target)
{
	return _target->GetMaxOccluderTriangles ();
}


DllExport int
Renderer_GetOcclusionBufferSize (Urho3D::Renderer *_target)
{
	return _target->GetOcclusionBufferSize ();
}


DllExport float
Renderer_GetOccluderSizeThreshold (Urho3D::Renderer *_target)
{
	return _target->GetOccluderSizeThreshold ();
}


DllExport int
Renderer_GetThreadedOcclusion (Urho3D::Renderer *_target)
{
	return _target->GetThreadedOcclusion ();
}


DllExport float
Renderer_GetMobileShadowBiasMul (Urho3D::Renderer *_target)
{
	return _target->GetMobileShadowBiasMul ();
}


DllExport float
Renderer_GetMobileShadowBiasAdd (Urho3D::Renderer *_target)
{
	return _target->GetMobileShadowBiasAdd ();
}


DllExport float
Renderer_GetMobileNormalOffsetMul (Urho3D::Renderer *_target)
{
	return _target->GetMobileNormalOffsetMul ();
}


DllExport unsigned int
Renderer_GetNumViews (Urho3D::Renderer *_target)
{
	return _target->GetNumViews ();
}


DllExport unsigned int
Renderer_GetNumPrimitives (Urho3D::Renderer *_target)
{
	return _target->GetNumPrimitives ();
}


DllExport unsigned int
Renderer_GetNumBatches (Urho3D::Renderer *_target)
{
	return _target->GetNumBatches ();
}


DllExport unsigned int
Renderer_GetNumGeometries (Urho3D::Renderer *_target, bool allViews)
{
	return _target->GetNumGeometries (allViews);
}


DllExport unsigned int
Renderer_GetNumLights (Urho3D::Renderer *_target, bool allViews)
{
	return _target->GetNumLights (allViews);
}


DllExport unsigned int
Renderer_GetNumShadowMaps (Urho3D::Renderer *_target, bool allViews)
{
	return _target->GetNumShadowMaps (allViews);
}


DllExport unsigned int
Renderer_GetNumOccluders (Urho3D::Renderer *_target, bool allViews)
{
	return _target->GetNumOccluders (allViews);
}


DllExport Urho3D::Zone *
Renderer_GetDefaultZone (Urho3D::Renderer *_target)
{
	return _target->GetDefaultZone ();
}


DllExport Urho3D::Material *
Renderer_GetDefaultMaterial (Urho3D::Renderer *_target)
{
	return _target->GetDefaultMaterial ();
}


DllExport Urho3D::Texture2D *
Renderer_GetDefaultLightRamp (Urho3D::Renderer *_target)
{
	return _target->GetDefaultLightRamp ();
}


DllExport Urho3D::Texture2D *
Renderer_GetDefaultLightSpot (Urho3D::Renderer *_target)
{
	return _target->GetDefaultLightSpot ();
}


DllExport Urho3D::TextureCube *
Renderer_GetFaceSelectCubeMap (Urho3D::Renderer *_target)
{
	return _target->GetFaceSelectCubeMap ();
}


DllExport Urho3D::TextureCube *
Renderer_GetIndirectionCubeMap (Urho3D::Renderer *_target)
{
	return _target->GetIndirectionCubeMap ();
}


DllExport Urho3D::VertexBuffer *
Renderer_GetInstancingBuffer (Urho3D::Renderer *_target)
{
	return _target->GetInstancingBuffer ();
}


DllExport void
Renderer_Update (Urho3D::Renderer *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
Renderer_Render (Urho3D::Renderer *_target)
{
	_target->Render ();
}


DllExport void
Renderer_DrawDebugGeometry (Urho3D::Renderer *_target, bool depthTest)
{
	_target->DrawDebugGeometry (depthTest);
}


DllExport void
Renderer_QueueRenderSurface (Urho3D::Renderer *_target, Urho3D::RenderSurface * renderTarget)
{
	_target->QueueRenderSurface (renderTarget);
}


DllExport void
Renderer_QueueViewport (Urho3D::Renderer *_target, Urho3D::RenderSurface * renderTarget, Urho3D::Viewport * viewport)
{
	_target->QueueViewport (renderTarget, viewport);
}


DllExport Urho3D::Geometry *
Renderer_GetLightGeometry (Urho3D::Renderer *_target, Urho3D::Light * light)
{
	return _target->GetLightGeometry (light);
}


DllExport Urho3D::Geometry *
Renderer_GetQuadGeometry (Urho3D::Renderer *_target)
{
	return _target->GetQuadGeometry ();
}


DllExport Urho3D::Texture2D *
Renderer_GetShadowMap (Urho3D::Renderer *_target, Urho3D::Light * light, Urho3D::Camera * camera, unsigned int viewWidth, unsigned int viewHeight)
{
	return _target->GetShadowMap (light, camera, viewWidth, viewHeight);
}


DllExport Urho3D::Texture *
Renderer_GetScreenBuffer (Urho3D::Renderer *_target, int width, int height, unsigned int format, int multiSample, bool autoResolve, bool cubemap, bool filtered, bool srgb, unsigned int persistentKey)
{
	return _target->GetScreenBuffer (width, height, format, multiSample, autoResolve, cubemap, filtered, srgb, persistentKey);
}


DllExport Urho3D::RenderSurface *
Renderer_GetDepthStencil (Urho3D::Renderer *_target, int width, int height, int multiSample, bool autoResolve)
{
	return _target->GetDepthStencil (width, height, multiSample, autoResolve);
}


DllExport Urho3D::OcclusionBuffer *
Renderer_GetOcclusionBuffer (Urho3D::Renderer *_target, Urho3D::Camera * camera)
{
	return _target->GetOcclusionBuffer (camera);
}


DllExport Urho3D::Camera *
Renderer_GetShadowCamera (Urho3D::Renderer *_target)
{
	return _target->GetShadowCamera ();
}


DllExport void
Renderer_StorePreparedView (Urho3D::Renderer *_target, Urho3D::View * view, Urho3D::Camera * camera)
{
	_target->StorePreparedView (view, camera);
}


DllExport Urho3D::View *
Renderer_GetPreparedView (Urho3D::Renderer *_target, Urho3D::Camera * camera)
{
	return _target->GetPreparedView (camera);
}


DllExport void
Renderer_SetCullMode (Urho3D::Renderer *_target, enum Urho3D::CullMode mode, Urho3D::Camera * camera)
{
	_target->SetCullMode (mode, camera);
}


DllExport int
Renderer_ResizeInstancingBuffer (Urho3D::Renderer *_target, unsigned int numInstances)
{
	return _target->ResizeInstancingBuffer (numInstances);
}


DllExport void
Renderer_OptimizeLightByScissor (Urho3D::Renderer *_target, Urho3D::Light * light, Urho3D::Camera * camera)
{
	_target->OptimizeLightByScissor (light, camera);
}


DllExport void
Renderer_OptimizeLightByStencil (Urho3D::Renderer *_target, Urho3D::Light * light, Urho3D::Camera * camera)
{
	_target->OptimizeLightByStencil (light, camera);
}


DllExport Urho3D::View *
Renderer_GetActualView (Urho3D::View * view)
{
	return Renderer::GetActualView (view);
}


DllExport int
Shader_GetType (Urho3D::Shader *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Shader_GetTypeName (Urho3D::Shader *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Shader_GetTypeStatic ()
{
	return (Shader::GetTypeStatic ()).Value ();
}


DllExport const char *
Shader_GetTypeNameStatic ()
{
	return stringdup((Shader::GetTypeNameStatic ()).CString ());
}


DllExport void *
Shader_Shader (Urho3D::Context * context)
{
	return WeakPtr<Shader>(new Shader(context));
}


DllExport void
Shader_RegisterObject (Urho3D::Context * context)
{
	Shader::RegisterObject (context);
}


DllExport int
Shader_BeginLoad_File (Urho3D::Shader *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Shader_BeginLoad_MemoryBuffer (Urho3D::Shader *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Shader_EndLoad (Urho3D::Shader *_target)
{
	return _target->EndLoad ();
}


DllExport Urho3D::ShaderVariation *
Shader_GetVariation (Urho3D::Shader *_target, enum Urho3D::ShaderType type, const char * defines)
{
	return _target->GetVariation (type, Urho3D::String(defines));
}


DllExport const char *
Shader_GetSourceCode (Urho3D::Shader *_target, enum Urho3D::ShaderType type)
{
	return stringdup((_target->GetSourceCode (type)).CString ());
}


DllExport unsigned int
Shader_GetTimeStamp (Urho3D::Shader *_target)
{
	return _target->GetTimeStamp ();
}


DllExport int
RibbonTrail_GetType (Urho3D::RibbonTrail *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
RibbonTrail_GetTypeName (Urho3D::RibbonTrail *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
RibbonTrail_GetTypeStatic ()
{
	return (RibbonTrail::GetTypeStatic ()).Value ();
}


DllExport const char *
RibbonTrail_GetTypeNameStatic ()
{
	return stringdup((RibbonTrail::GetTypeNameStatic ()).CString ());
}


DllExport void *
RibbonTrail_RibbonTrail (Urho3D::Context * context)
{
	return WeakPtr<RibbonTrail>(new RibbonTrail(context));
}


DllExport void
RibbonTrail_RegisterObject (Urho3D::Context * context)
{
	RibbonTrail::RegisterObject (context);
}


DllExport void
RibbonTrail_OnSetEnabled (Urho3D::RibbonTrail *_target)
{
	_target->OnSetEnabled ();
}


DllExport enum Urho3D::UpdateGeometryType
RibbonTrail_GetUpdateGeometryType (Urho3D::RibbonTrail *_target)
{
	return _target->GetUpdateGeometryType ();
}


DllExport void
RibbonTrail_SetMaterial (Urho3D::RibbonTrail *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport void
RibbonTrail_SetVertexDistance (Urho3D::RibbonTrail *_target, float length)
{
	_target->SetVertexDistance (length);
}


DllExport void
RibbonTrail_SetWidth (Urho3D::RibbonTrail *_target, float width)
{
	_target->SetWidth (width);
}


DllExport void
RibbonTrail_SetStartColor (Urho3D::RibbonTrail *_target, const class Urho3D::Color & color)
{
	_target->SetStartColor (color);
}


DllExport void
RibbonTrail_SetEndColor (Urho3D::RibbonTrail *_target, const class Urho3D::Color & color)
{
	_target->SetEndColor (color);
}


DllExport void
RibbonTrail_SetStartScale (Urho3D::RibbonTrail *_target, float startScale)
{
	_target->SetStartScale (startScale);
}


DllExport void
RibbonTrail_SetEndScale (Urho3D::RibbonTrail *_target, float endScale)
{
	_target->SetEndScale (endScale);
}


DllExport void
RibbonTrail_SetTrailType (Urho3D::RibbonTrail *_target, enum Urho3D::TrailType type)
{
	_target->SetTrailType (type);
}


DllExport void
RibbonTrail_SetBaseVelocity (Urho3D::RibbonTrail *_target, const class Urho3D::Vector3 & baseVelocity)
{
	_target->SetBaseVelocity (baseVelocity);
}


DllExport void
RibbonTrail_SetSorted (Urho3D::RibbonTrail *_target, bool enable)
{
	_target->SetSorted (enable);
}


DllExport void
RibbonTrail_SetLifetime (Urho3D::RibbonTrail *_target, float time)
{
	_target->SetLifetime (time);
}


DllExport void
RibbonTrail_SetEmitting (Urho3D::RibbonTrail *_target, bool emitting)
{
	_target->SetEmitting (emitting);
}


DllExport void
RibbonTrail_SetUpdateInvisible (Urho3D::RibbonTrail *_target, bool enable)
{
	_target->SetUpdateInvisible (enable);
}


DllExport void
RibbonTrail_SetTailColumn (Urho3D::RibbonTrail *_target, unsigned int tailColumn)
{
	_target->SetTailColumn (tailColumn);
}


DllExport void
RibbonTrail_SetAnimationLodBias (Urho3D::RibbonTrail *_target, float bias)
{
	_target->SetAnimationLodBias (bias);
}


DllExport void
RibbonTrail_Commit (Urho3D::RibbonTrail *_target)
{
	_target->Commit ();
}


DllExport Urho3D::Material *
RibbonTrail_GetMaterial (Urho3D::RibbonTrail *_target)
{
	return _target->GetMaterial ();
}


DllExport Urho3D::ResourceRef
RibbonTrail_GetMaterialAttr (Urho3D::RibbonTrail *_target)
{
	return _target->GetMaterialAttr ();
}


DllExport float
RibbonTrail_GetVertexDistance (Urho3D::RibbonTrail *_target)
{
	return _target->GetVertexDistance ();
}


DllExport float
RibbonTrail_GetWidth (Urho3D::RibbonTrail *_target)
{
	return _target->GetWidth ();
}


DllExport Interop::Color 
RibbonTrail_GetStartColor (Urho3D::RibbonTrail *_target)
{
	return *((Interop::Color  *) &(_target->GetStartColor ()));
}


DllExport Interop::Color 
RibbonTrail_GetEndColor (Urho3D::RibbonTrail *_target)
{
	return *((Interop::Color  *) &(_target->GetEndColor ()));
}


DllExport float
RibbonTrail_GetStartScale (Urho3D::RibbonTrail *_target)
{
	return _target->GetStartScale ();
}


DllExport float
RibbonTrail_GetEndScale (Urho3D::RibbonTrail *_target)
{
	return _target->GetEndScale ();
}


DllExport int
RibbonTrail_IsSorted (Urho3D::RibbonTrail *_target)
{
	return _target->IsSorted ();
}


DllExport float
RibbonTrail_GetLifetime (Urho3D::RibbonTrail *_target)
{
	return _target->GetLifetime ();
}


DllExport float
RibbonTrail_GetAnimationLodBias (Urho3D::RibbonTrail *_target)
{
	return _target->GetAnimationLodBias ();
}


DllExport enum Urho3D::TrailType
RibbonTrail_GetTrailType (Urho3D::RibbonTrail *_target)
{
	return _target->GetTrailType ();
}


DllExport Interop::Vector3 
RibbonTrail_GetBaseVelocity (Urho3D::RibbonTrail *_target)
{
	return *((Interop::Vector3  *) &(_target->GetBaseVelocity ()));
}


DllExport unsigned int
RibbonTrail_GetTailColumn (Urho3D::RibbonTrail *_target)
{
	return _target->GetTailColumn ();
}


DllExport int
RibbonTrail_IsEmitting (Urho3D::RibbonTrail *_target)
{
	return _target->IsEmitting ();
}


DllExport int
RibbonTrail_GetUpdateInvisible (Urho3D::RibbonTrail *_target)
{
	return _target->GetUpdateInvisible ();
}


DllExport void *
XmlElement_XMLElement ()
{
	return new XMLElement();
}


DllExport void *
XmlElement_XMLElement0 (const class Urho3D::XMLElement & rhs)
{
	return new XMLElement(rhs);
}


DllExport Urho3D::XMLElement *
XmlElement_CreateChild (Urho3D::XMLElement *_target, const char * name)
{
	return new Urho3D::XMLElement (_target->CreateChild (Urho3D::String(name)));
}


DllExport Urho3D::XMLElement *
XmlElement_GetOrCreateChild (Urho3D::XMLElement *_target, const char * name)
{
	return new Urho3D::XMLElement (_target->GetOrCreateChild (Urho3D::String(name)));
}


DllExport int
XmlElement_AppendChild (Urho3D::XMLElement *_target, Urho3D::XMLElement element, bool asCopy)
{
	return _target->AppendChild (element, asCopy);
}


DllExport int
XmlElement_Remove (Urho3D::XMLElement *_target)
{
	return _target->Remove ();
}


DllExport int
XmlElement_RemoveChild (Urho3D::XMLElement *_target, const class Urho3D::XMLElement & element)
{
	return _target->RemoveChild (element);
}


DllExport int
XmlElement_RemoveChild1 (Urho3D::XMLElement *_target, const char * name)
{
	return _target->RemoveChild (Urho3D::String(name));
}


DllExport int
XmlElement_RemoveChildren (Urho3D::XMLElement *_target, const char * name)
{
	return _target->RemoveChildren (Urho3D::String(name));
}


DllExport int
XmlElement_RemoveAttribute (Urho3D::XMLElement *_target, const char * name)
{
	return _target->RemoveAttribute (Urho3D::String(name));
}


DllExport int
XmlElement_SetValue (Urho3D::XMLElement *_target, const char * value)
{
	return _target->SetValue (Urho3D::String(value));
}


DllExport int
XmlElement_SetAttribute (Urho3D::XMLElement *_target, const char * name, const char * value)
{
	return _target->SetAttribute (Urho3D::String(name), Urho3D::String(value));
}


DllExport int
XmlElement_SetAttribute2 (Urho3D::XMLElement *_target, const char * value)
{
	return _target->SetAttribute (Urho3D::String(value));
}


DllExport int
XmlElement_SetBool (Urho3D::XMLElement *_target, const char * name, bool value)
{
	return _target->SetBool (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetBoundingBox (Urho3D::XMLElement *_target, const class Urho3D::BoundingBox & value)
{
	return _target->SetBoundingBox (value);
}


DllExport int
XmlElement_SetBuffer (Urho3D::XMLElement *_target, const char * name, const void * data, unsigned int size)
{
	return _target->SetBuffer (Urho3D::String(name), data, size);
}


DllExport int
XmlElement_SetColor (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Color & value)
{
	return _target->SetColor (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetFloat (Urho3D::XMLElement *_target, const char * name, float value)
{
	return _target->SetFloat (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetDouble (Urho3D::XMLElement *_target, const char * name, double value)
{
	return _target->SetDouble (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetUInt (Urho3D::XMLElement *_target, const char * name, unsigned int value)
{
	return _target->SetUInt (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetInt (Urho3D::XMLElement *_target, const char * name, int value)
{
	return _target->SetInt (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetUInt64 (Urho3D::XMLElement *_target, const char * name, unsigned long long value)
{
	return _target->SetUInt64 (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetInt64 (Urho3D::XMLElement *_target, const char * name, long long value)
{
	return _target->SetInt64 (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetIntRect (Urho3D::XMLElement *_target, const char * name, const class Urho3D::IntRect & value)
{
	return _target->SetIntRect (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetIntVector2 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::IntVector2 & value)
{
	return _target->SetIntVector2 (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetQuaternion (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Quaternion & value)
{
	return _target->SetQuaternion (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetString (Urho3D::XMLElement *_target, const char * name, const char * value)
{
	return _target->SetString (Urho3D::String(name), Urho3D::String(value));
}


// Urho3D::Variant overloads begin:
DllExport int
XmlElement_SetVariant_0 (Urho3D::XMLElement *_target, const class Urho3D::Vector3 & value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_1 (Urho3D::XMLElement *_target, const class Urho3D::IntRect & value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_2 (Urho3D::XMLElement *_target, const class Urho3D::Color & value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_3 (Urho3D::XMLElement *_target, const class Urho3D::Vector2 & value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_4 (Urho3D::XMLElement *_target, const class Urho3D::Vector4 & value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_5 (Urho3D::XMLElement *_target, const class Urho3D::IntVector2 & value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_6 (Urho3D::XMLElement *_target, const class Urho3D::Quaternion & value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_7 (Urho3D::XMLElement *_target, const class Urho3D::Matrix4 & value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_8 (Urho3D::XMLElement *_target, const class Urho3D::Matrix3x4 & value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_9 (Urho3D::XMLElement *_target, int value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_10 (Urho3D::XMLElement *_target, float value)
{
	return _target->SetVariant ((value));
}

DllExport int
XmlElement_SetVariant_11 (Urho3D::XMLElement *_target, const char * value)
{
	return _target->SetVariant (Urho3D::String(value));
}

DllExport int
XmlElement_SetVariant_12 (Urho3D::XMLElement *_target, bool value)
{
	return _target->SetVariant ((value));
}

// Urho3D::Variant overloads end.
// Urho3D::Variant overloads begin:
DllExport int
XmlElement_SetVariantValue_0 (Urho3D::XMLElement *_target, const class Urho3D::Vector3 & value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_1 (Urho3D::XMLElement *_target, const class Urho3D::IntRect & value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_2 (Urho3D::XMLElement *_target, const class Urho3D::Color & value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_3 (Urho3D::XMLElement *_target, const class Urho3D::Vector2 & value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_4 (Urho3D::XMLElement *_target, const class Urho3D::Vector4 & value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_5 (Urho3D::XMLElement *_target, const class Urho3D::IntVector2 & value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_6 (Urho3D::XMLElement *_target, const class Urho3D::Quaternion & value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_7 (Urho3D::XMLElement *_target, const class Urho3D::Matrix4 & value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_8 (Urho3D::XMLElement *_target, const class Urho3D::Matrix3x4 & value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_9 (Urho3D::XMLElement *_target, int value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_10 (Urho3D::XMLElement *_target, float value)
{
	return _target->SetVariantValue ((value));
}

DllExport int
XmlElement_SetVariantValue_11 (Urho3D::XMLElement *_target, const char * value)
{
	return _target->SetVariantValue (Urho3D::String(value));
}

DllExport int
XmlElement_SetVariantValue_12 (Urho3D::XMLElement *_target, bool value)
{
	return _target->SetVariantValue ((value));
}

// Urho3D::Variant overloads end.
DllExport int
XmlElement_SetVector2 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Vector2 & value)
{
	return _target->SetVector2 (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetVector3 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Vector3 & value)
{
	return _target->SetVector3 (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetVector4 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Vector4 & value)
{
	return _target->SetVector4 (Urho3D::String(name), value);
}


// Urho3D::Variant overloads begin:
DllExport int
XmlElement_SetVectorVariant_0 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Vector3 & value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_1 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::IntRect & value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_2 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Color & value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_3 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Vector2 & value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_4 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Vector4 & value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_5 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::IntVector2 & value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_6 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Quaternion & value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_7 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Matrix4 & value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_8 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Matrix3x4 & value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_9 (Urho3D::XMLElement *_target, const char * name, int value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_10 (Urho3D::XMLElement *_target, const char * name, float value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

DllExport int
XmlElement_SetVectorVariant_11 (Urho3D::XMLElement *_target, const char * name, const char * value)
{
	return _target->SetVectorVariant (Urho3D::String(name), Urho3D::String(value));
}

DllExport int
XmlElement_SetVectorVariant_12 (Urho3D::XMLElement *_target, const char * name, bool value)
{
	return _target->SetVectorVariant (Urho3D::String(name), (value));
}

// Urho3D::Variant overloads end.
DllExport int
XmlElement_SetMatrix3x4 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Matrix3x4 & value)
{
	return _target->SetMatrix3x4 (Urho3D::String(name), value);
}


DllExport int
XmlElement_SetMatrix4 (Urho3D::XMLElement *_target, const char * name, const class Urho3D::Matrix4 & value)
{
	return _target->SetMatrix4 (Urho3D::String(name), value);
}


DllExport int
XmlElement_IsNull (Urho3D::XMLElement *_target)
{
	return _target->IsNull ();
}


DllExport int
XmlElement_NotNull (Urho3D::XMLElement *_target)
{
	return _target->NotNull ();
}


DllExport const char *
XmlElement_GetName (Urho3D::XMLElement *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport int
XmlElement_HasChild (Urho3D::XMLElement *_target, const char * name)
{
	return _target->HasChild (Urho3D::String(name));
}


DllExport Urho3D::XMLElement *
XmlElement_GetChild (Urho3D::XMLElement *_target, const char * name)
{
	return new Urho3D::XMLElement (_target->GetChild (Urho3D::String(name)));
}


DllExport Urho3D::XMLElement *
XmlElement_GetNext (Urho3D::XMLElement *_target, const char * name)
{
	return new Urho3D::XMLElement (_target->GetNext (Urho3D::String(name)));
}


DllExport Urho3D::XMLElement *
XmlElement_GetParent (Urho3D::XMLElement *_target)
{
	return new Urho3D::XMLElement (_target->GetParent ());
}


DllExport unsigned int
XmlElement_GetNumAttributes (Urho3D::XMLElement *_target)
{
	return _target->GetNumAttributes ();
}


DllExport int
XmlElement_HasAttribute (Urho3D::XMLElement *_target, const char * name)
{
	return _target->HasAttribute (Urho3D::String(name));
}


DllExport const char *
XmlElement_GetValue (Urho3D::XMLElement *_target)
{
	return stringdup((_target->GetValue ()).CString ());
}


DllExport const char *
XmlElement_GetAttribute (Urho3D::XMLElement *_target, const char * name)
{
	return stringdup((_target->GetAttribute (Urho3D::String(name))).CString ());
}


DllExport const char *
XmlElement_GetAttributeLower (Urho3D::XMLElement *_target, const char * name)
{
	return stringdup((_target->GetAttributeLower (Urho3D::String(name))).CString ());
}


DllExport const char *
XmlElement_GetAttributeUpper (Urho3D::XMLElement *_target, const char * name)
{
	return stringdup((_target->GetAttributeUpper (Urho3D::String(name))).CString ());
}


DllExport int
XmlElement_GetBool (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetBool (Urho3D::String(name));
}


DllExport int
XmlElement_GetBuffer (Urho3D::XMLElement *_target, const char * name, void * dest, unsigned int size)
{
	return _target->GetBuffer (Urho3D::String(name), dest, size);
}


DllExport Interop::BoundingBox 
XmlElement_GetBoundingBox (Urho3D::XMLElement *_target)
{
	return *((Interop::BoundingBox  *) &(_target->GetBoundingBox ()));
}


DllExport Interop::Color 
XmlElement_GetColor (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::Color  *) &(_target->GetColor (Urho3D::String(name))));
}


DllExport float
XmlElement_GetFloat (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetFloat (Urho3D::String(name));
}


DllExport double
XmlElement_GetDouble (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetDouble (Urho3D::String(name));
}


DllExport unsigned int
XmlElement_GetUInt (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetUInt (Urho3D::String(name));
}


DllExport int
XmlElement_GetInt (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetInt (Urho3D::String(name));
}


DllExport unsigned long long
XmlElement_GetUInt64 (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetUInt64 (Urho3D::String(name));
}


DllExport long long
XmlElement_GetInt64 (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetInt64 (Urho3D::String(name));
}


DllExport Interop::IntRect 
XmlElement_GetIntRect (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::IntRect  *) &(_target->GetIntRect (Urho3D::String(name))));
}


DllExport Interop::IntVector2 
XmlElement_GetIntVector2 (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::IntVector2  *) &(_target->GetIntVector2 (Urho3D::String(name))));
}


DllExport Urho3D::IntVector3
XmlElement_GetIntVector3 (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetIntVector3 (Urho3D::String(name));
}


DllExport Urho3D::Rect
XmlElement_GetRect (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetRect (Urho3D::String(name));
}


DllExport Interop::Quaternion 
XmlElement_GetQuaternion (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::Quaternion  *) &(_target->GetQuaternion (Urho3D::String(name))));
}


DllExport Urho3D::Variant
XmlElement_GetVariant (Urho3D::XMLElement *_target)
{
	return _target->GetVariant ();
}


DllExport Urho3D::Variant
XmlElement_GetVariantValue (Urho3D::XMLElement *_target, enum Urho3D::VariantType type)
{
	return _target->GetVariantValue (type);
}


DllExport Urho3D::ResourceRef
XmlElement_GetResourceRef (Urho3D::XMLElement *_target)
{
	return _target->GetResourceRef ();
}


DllExport Urho3D::ResourceRefList
XmlElement_GetResourceRefList (Urho3D::XMLElement *_target)
{
	return _target->GetResourceRefList ();
}


DllExport Interop::Vector2 
XmlElement_GetVector2 (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::Vector2  *) &(_target->GetVector2 (Urho3D::String(name))));
}


DllExport Interop::Vector3 
XmlElement_GetVector3 (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::Vector3  *) &(_target->GetVector3 (Urho3D::String(name))));
}


DllExport Interop::Vector4 
XmlElement_GetVector4 (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::Vector4  *) &(_target->GetVector4 (Urho3D::String(name))));
}


DllExport Interop::Vector4 
XmlElement_GetVector (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::Vector4  *) &(_target->GetVector (Urho3D::String(name))));
}


DllExport Urho3D::Variant
XmlElement_GetVectorVariant (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetVectorVariant (Urho3D::String(name));
}


DllExport Urho3D::Matrix3
XmlElement_GetMatrix3 (Urho3D::XMLElement *_target, const char * name)
{
	return _target->GetMatrix3 (Urho3D::String(name));
}


DllExport Interop::Matrix3x4 
XmlElement_GetMatrix3x4 (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::Matrix3x4  *) &(_target->GetMatrix3x4 (Urho3D::String(name))));
}


DllExport Interop::Matrix4 
XmlElement_GetMatrix4 (Urho3D::XMLElement *_target, const char * name)
{
	return *((Interop::Matrix4  *) &(_target->GetMatrix4 (Urho3D::String(name))));
}


DllExport Urho3D::XMLFile *
XmlElement_GetFile (Urho3D::XMLElement *_target)
{
	return _target->GetFile ();
}


DllExport const class Urho3D::XPathResultSet *
XmlElement_GetXPathResultSet (Urho3D::XMLElement *_target)
{
	return _target->GetXPathResultSet ();
}


DllExport unsigned int
XmlElement_GetXPathResultIndex (Urho3D::XMLElement *_target)
{
	return _target->GetXPathResultIndex ();
}


DllExport Urho3D::XMLElement *
XmlElement_NextResult (Urho3D::XMLElement *_target)
{
	return new Urho3D::XMLElement (_target->NextResult ());
}


DllExport int
XmlFile_GetType (Urho3D::XMLFile *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
XmlFile_GetTypeName (Urho3D::XMLFile *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
XmlFile_GetTypeStatic ()
{
	return (XMLFile::GetTypeStatic ()).Value ();
}


DllExport const char *
XmlFile_GetTypeNameStatic ()
{
	return stringdup((XMLFile::GetTypeNameStatic ()).CString ());
}


DllExport void *
XmlFile_XMLFile (Urho3D::Context * context)
{
	return WeakPtr<XMLFile>(new XMLFile(context));
}


DllExport void
XmlFile_RegisterObject (Urho3D::Context * context)
{
	XMLFile::RegisterObject (context);
}


DllExport int
XmlFile_BeginLoad_File (Urho3D::XMLFile *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
XmlFile_BeginLoad_MemoryBuffer (Urho3D::XMLFile *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
XmlFile_Save_File (Urho3D::XMLFile *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
XmlFile_Save_MemoryBuffer (Urho3D::XMLFile *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
XmlFile_Save0_File (Urho3D::XMLFile *_target, File * dest, const char * indentation)
{
	return _target->Save (*dest, Urho3D::String(indentation));
}


DllExport int
XmlFile_Save0_MemoryBuffer (Urho3D::XMLFile *_target, MemoryBuffer * dest, const char * indentation)
{
	return _target->Save (*dest, Urho3D::String(indentation));
}


DllExport int
XmlFile_FromString (Urho3D::XMLFile *_target, const char * source)
{
	return _target->FromString (Urho3D::String(source));
}


DllExport Urho3D::XMLElement *
XmlFile_CreateRoot (Urho3D::XMLFile *_target, const char * name)
{
	return new Urho3D::XMLElement (_target->CreateRoot (Urho3D::String(name)));
}


DllExport Urho3D::XMLElement *
XmlFile_GetOrCreateRoot (Urho3D::XMLFile *_target, const char * name)
{
	return new Urho3D::XMLElement (_target->GetOrCreateRoot (Urho3D::String(name)));
}


DllExport Urho3D::XMLElement *
XmlFile_GetRoot (Urho3D::XMLFile *_target, const char * name)
{
	return new Urho3D::XMLElement (_target->GetRoot (Urho3D::String(name)));
}


DllExport const char *
XmlFile_ToString (Urho3D::XMLFile *_target, const char * indentation)
{
	return stringdup((_target->ToString (Urho3D::String(indentation))).CString ());
}


DllExport void
XmlFile_Patch (Urho3D::XMLFile *_target, Urho3D::XMLFile * patchFile)
{
	_target->Patch (patchFile);
}


DllExport void
XmlFile_Patch1 (Urho3D::XMLFile *_target, const class Urho3D::XMLElement & patchElement)
{
	_target->Patch (patchElement);
}


DllExport int
ShaderPrecache_GetType (Urho3D::ShaderPrecache *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ShaderPrecache_GetTypeName (Urho3D::ShaderPrecache *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ShaderPrecache_GetTypeStatic ()
{
	return (ShaderPrecache::GetTypeStatic ()).Value ();
}


DllExport const char *
ShaderPrecache_GetTypeNameStatic ()
{
	return stringdup((ShaderPrecache::GetTypeNameStatic ()).CString ());
}


DllExport void *
ShaderPrecache_ShaderPrecache (Urho3D::Context * context, const char * fileName)
{
	return WeakPtr<ShaderPrecache>(new ShaderPrecache(context, Urho3D::String(fileName)));
}


DllExport void
ShaderPrecache_StoreShaders (Urho3D::ShaderPrecache *_target, Urho3D::ShaderVariation * vs, Urho3D::ShaderVariation * ps)
{
	_target->StoreShaders (vs, ps);
}


DllExport void
ShaderPrecache_LoadShaders_File (Urho3D::Graphics * graphics, File * source)
{
	ShaderPrecache::LoadShaders (graphics, *source);
}


DllExport void
ShaderPrecache_LoadShaders_MemoryBuffer (Urho3D::Graphics * graphics, MemoryBuffer * source)
{
	ShaderPrecache::LoadShaders (graphics, *source);
}


DllExport int
Skybox_GetType (Urho3D::Skybox *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Skybox_GetTypeName (Urho3D::Skybox *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Skybox_GetTypeStatic ()
{
	return (Skybox::GetTypeStatic ()).Value ();
}


DllExport const char *
Skybox_GetTypeNameStatic ()
{
	return stringdup((Skybox::GetTypeNameStatic ()).CString ());
}


DllExport void *
Skybox_Skybox (Urho3D::Context * context)
{
	return WeakPtr<Skybox>(new Skybox(context));
}


DllExport void
Skybox_RegisterObject (Urho3D::Context * context)
{
	Skybox::RegisterObject (context);
}


DllExport int
StaticModelGroup_GetType (Urho3D::StaticModelGroup *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
StaticModelGroup_GetTypeName (Urho3D::StaticModelGroup *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
StaticModelGroup_GetTypeStatic ()
{
	return (StaticModelGroup::GetTypeStatic ()).Value ();
}


DllExport const char *
StaticModelGroup_GetTypeNameStatic ()
{
	return stringdup((StaticModelGroup::GetTypeNameStatic ()).CString ());
}


DllExport void *
StaticModelGroup_StaticModelGroup (Urho3D::Context * context)
{
	return WeakPtr<StaticModelGroup>(new StaticModelGroup(context));
}


DllExport void
StaticModelGroup_RegisterObject (Urho3D::Context * context)
{
	StaticModelGroup::RegisterObject (context);
}


DllExport void
StaticModelGroup_ApplyAttributes (Urho3D::StaticModelGroup *_target)
{
	_target->ApplyAttributes ();
}


DllExport unsigned int
StaticModelGroup_GetNumOccluderTriangles (Urho3D::StaticModelGroup *_target)
{
	return _target->GetNumOccluderTriangles ();
}


DllExport int
StaticModelGroup_DrawOcclusion (Urho3D::StaticModelGroup *_target, Urho3D::OcclusionBuffer * buffer)
{
	return _target->DrawOcclusion (buffer);
}


DllExport void
StaticModelGroup_AddInstanceNode (Urho3D::StaticModelGroup *_target, Urho3D::Node * node)
{
	_target->AddInstanceNode (node);
}


DllExport void
StaticModelGroup_RemoveInstanceNode (Urho3D::StaticModelGroup *_target, Urho3D::Node * node)
{
	_target->RemoveInstanceNode (node);
}


DllExport void
StaticModelGroup_RemoveAllInstanceNodes (Urho3D::StaticModelGroup *_target)
{
	_target->RemoveAllInstanceNodes ();
}


DllExport unsigned int
StaticModelGroup_GetNumInstanceNodes (Urho3D::StaticModelGroup *_target)
{
	return _target->GetNumInstanceNodes ();
}


DllExport Urho3D::Node *
StaticModelGroup_GetInstanceNode (Urho3D::StaticModelGroup *_target, unsigned int index)
{
	return _target->GetInstanceNode (index);
}


DllExport void *
Pass_Pass (const char * name)
{
	return WeakPtr<Pass>(new Pass(Urho3D::String(name)));
}


DllExport void
Pass_SetBlendMode (Urho3D::Pass *_target, enum Urho3D::BlendMode mode)
{
	_target->SetBlendMode (mode);
}


DllExport void
Pass_SetCullMode (Urho3D::Pass *_target, enum Urho3D::CullMode mode)
{
	_target->SetCullMode (mode);
}


DllExport void
Pass_SetDepthTestMode (Urho3D::Pass *_target, enum Urho3D::CompareMode mode)
{
	_target->SetDepthTestMode (mode);
}


DllExport void
Pass_SetLightingMode (Urho3D::Pass *_target, enum Urho3D::PassLightingMode mode)
{
	_target->SetLightingMode (mode);
}


DllExport void
Pass_SetDepthWrite (Urho3D::Pass *_target, bool enable)
{
	_target->SetDepthWrite (enable);
}


DllExport void
Pass_SetAlphaToCoverage (Urho3D::Pass *_target, bool enable)
{
	_target->SetAlphaToCoverage (enable);
}


DllExport void
Pass_SetIsDesktop (Urho3D::Pass *_target, bool enable)
{
	_target->SetIsDesktop (enable);
}


DllExport void
Pass_SetVertexShader (Urho3D::Pass *_target, const char * name)
{
	_target->SetVertexShader (Urho3D::String(name));
}


DllExport void
Pass_SetPixelShader (Urho3D::Pass *_target, const char * name)
{
	_target->SetPixelShader (Urho3D::String(name));
}


DllExport void
Pass_SetVertexShaderDefines (Urho3D::Pass *_target, const char * defines)
{
	_target->SetVertexShaderDefines (Urho3D::String(defines));
}


DllExport void
Pass_SetPixelShaderDefines (Urho3D::Pass *_target, const char * defines)
{
	_target->SetPixelShaderDefines (Urho3D::String(defines));
}


DllExport void
Pass_SetVertexShaderDefineExcludes (Urho3D::Pass *_target, const char * excludes)
{
	_target->SetVertexShaderDefineExcludes (Urho3D::String(excludes));
}


DllExport void
Pass_SetPixelShaderDefineExcludes (Urho3D::Pass *_target, const char * excludes)
{
	_target->SetPixelShaderDefineExcludes (Urho3D::String(excludes));
}


DllExport void
Pass_ReleaseShaders (Urho3D::Pass *_target)
{
	_target->ReleaseShaders ();
}


DllExport void
Pass_MarkShadersLoaded (Urho3D::Pass *_target, unsigned int frameNumber)
{
	_target->MarkShadersLoaded (frameNumber);
}


DllExport const char *
Pass_GetName (Urho3D::Pass *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport unsigned int
Pass_GetIndex (Urho3D::Pass *_target)
{
	return _target->GetIndex ();
}


DllExport enum Urho3D::BlendMode
Pass_GetBlendMode (Urho3D::Pass *_target)
{
	return _target->GetBlendMode ();
}


DllExport enum Urho3D::CullMode
Pass_GetCullMode (Urho3D::Pass *_target)
{
	return _target->GetCullMode ();
}


DllExport enum Urho3D::CompareMode
Pass_GetDepthTestMode (Urho3D::Pass *_target)
{
	return _target->GetDepthTestMode ();
}


DllExport enum Urho3D::PassLightingMode
Pass_GetLightingMode (Urho3D::Pass *_target)
{
	return _target->GetLightingMode ();
}


DllExport unsigned int
Pass_GetShadersLoadedFrameNumber (Urho3D::Pass *_target)
{
	return _target->GetShadersLoadedFrameNumber ();
}


DllExport int
Pass_GetDepthWrite (Urho3D::Pass *_target)
{
	return _target->GetDepthWrite ();
}


DllExport int
Pass_GetAlphaToCoverage (Urho3D::Pass *_target)
{
	return _target->GetAlphaToCoverage ();
}


DllExport int
Pass_IsDesktop (Urho3D::Pass *_target)
{
	return _target->IsDesktop ();
}


DllExport const char *
Pass_GetVertexShader (Urho3D::Pass *_target)
{
	return stringdup((_target->GetVertexShader ()).CString ());
}


DllExport const char *
Pass_GetPixelShader (Urho3D::Pass *_target)
{
	return stringdup((_target->GetPixelShader ()).CString ());
}


DllExport const char *
Pass_GetVertexShaderDefines (Urho3D::Pass *_target)
{
	return stringdup((_target->GetVertexShaderDefines ()).CString ());
}


DllExport const char *
Pass_GetPixelShaderDefines (Urho3D::Pass *_target)
{
	return stringdup((_target->GetPixelShaderDefines ()).CString ());
}


DllExport const char *
Pass_GetVertexShaderDefineExcludes (Urho3D::Pass *_target)
{
	return stringdup((_target->GetVertexShaderDefineExcludes ()).CString ());
}


DllExport const char *
Pass_GetPixelShaderDefineExcludes (Urho3D::Pass *_target)
{
	return stringdup((_target->GetPixelShaderDefineExcludes ()).CString ());
}


DllExport const char *
Pass_GetEffectiveVertexShaderDefines (Urho3D::Pass *_target)
{
	return stringdup((_target->GetEffectiveVertexShaderDefines ()).CString ());
}


DllExport const char *
Pass_GetEffectivePixelShaderDefines (Urho3D::Pass *_target)
{
	return stringdup((_target->GetEffectivePixelShaderDefines ()).CString ());
}


DllExport int
Technique_GetType (Urho3D::Technique *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Technique_GetTypeName (Urho3D::Technique *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Technique_GetTypeStatic ()
{
	return (Technique::GetTypeStatic ()).Value ();
}


DllExport const char *
Technique_GetTypeNameStatic ()
{
	return stringdup((Technique::GetTypeNameStatic ()).CString ());
}


DllExport void *
Technique_Technique (Urho3D::Context * context)
{
	return WeakPtr<Technique>(new Technique(context));
}


DllExport void
Technique_RegisterObject (Urho3D::Context * context)
{
	Technique::RegisterObject (context);
}


DllExport int
Technique_BeginLoad_File (Urho3D::Technique *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Technique_BeginLoad_MemoryBuffer (Urho3D::Technique *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport void
Technique_SetIsDesktop (Urho3D::Technique *_target, bool enable)
{
	_target->SetIsDesktop (enable);
}


DllExport Urho3D::Pass *
Technique_CreatePass (Urho3D::Technique *_target, const char * name)
{
	return _target->CreatePass (Urho3D::String(name));
}


DllExport void
Technique_RemovePass (Urho3D::Technique *_target, const char * name)
{
	_target->RemovePass (Urho3D::String(name));
}


DllExport void
Technique_ReleaseShaders (Urho3D::Technique *_target)
{
	_target->ReleaseShaders ();
}


DllExport Urho3D::Technique *
Technique_Clone (Urho3D::Technique *_target, const char * cloneName)
{
	auto copy = _target->Clone (Urho3D::String(cloneName));
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport int
Technique_IsDesktop (Urho3D::Technique *_target)
{
	return _target->IsDesktop ();
}


DllExport int
Technique_IsSupported (Urho3D::Technique *_target)
{
	return _target->IsSupported ();
}


DllExport int
Technique_HasPass (Urho3D::Technique *_target, unsigned int passIndex)
{
	return _target->HasPass (passIndex);
}


DllExport int
Technique_HasPass0 (Urho3D::Technique *_target, const char * name)
{
	return _target->HasPass (Urho3D::String(name));
}


DllExport Urho3D::Pass *
Technique_GetPass (Urho3D::Technique *_target, unsigned int passIndex)
{
	return _target->GetPass (passIndex);
}


DllExport Urho3D::Pass *
Technique_GetPass1 (Urho3D::Technique *_target, const char * name)
{
	return _target->GetPass (Urho3D::String(name));
}


DllExport Urho3D::Pass *
Technique_GetSupportedPass (Urho3D::Technique *_target, unsigned int passIndex)
{
	return _target->GetSupportedPass (passIndex);
}


DllExport Urho3D::Pass *
Technique_GetSupportedPass2 (Urho3D::Technique *_target, const char * name)
{
	return _target->GetSupportedPass (Urho3D::String(name));
}


DllExport unsigned int
Technique_GetNumPasses (Urho3D::Technique *_target)
{
	return _target->GetNumPasses ();
}


DllExport Urho3D::Technique *
Technique_CloneWithDefines (Urho3D::Technique *_target, const char * vsDefines, const char * psDefines)
{
	auto copy = _target->CloneWithDefines (Urho3D::String(vsDefines), Urho3D::String(psDefines));
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport unsigned int
Technique_GetPassIndex (const char * passName)
{
	return Technique::GetPassIndex (Urho3D::String(passName));
}


DllExport int
Terrain_GetType (Urho3D::Terrain *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Terrain_GetTypeName (Urho3D::Terrain *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Terrain_GetTypeStatic ()
{
	return (Terrain::GetTypeStatic ()).Value ();
}


DllExport const char *
Terrain_GetTypeNameStatic ()
{
	return stringdup((Terrain::GetTypeNameStatic ()).CString ());
}


DllExport void *
Terrain_Terrain (Urho3D::Context * context)
{
	return WeakPtr<Terrain>(new Terrain(context));
}


DllExport void
Terrain_RegisterObject (Urho3D::Context * context)
{
	Terrain::RegisterObject (context);
}


DllExport void
Terrain_ApplyAttributes (Urho3D::Terrain *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
Terrain_OnSetEnabled (Urho3D::Terrain *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
Terrain_SetPatchSize (Urho3D::Terrain *_target, int size)
{
	_target->SetPatchSize (size);
}


DllExport void
Terrain_SetSpacing (Urho3D::Terrain *_target, const class Urho3D::Vector3 & spacing)
{
	_target->SetSpacing (spacing);
}


DllExport void
Terrain_SetMaxLodLevels (Urho3D::Terrain *_target, unsigned int levels)
{
	_target->SetMaxLodLevels (levels);
}


DllExport void
Terrain_SetOcclusionLodLevel (Urho3D::Terrain *_target, unsigned int level)
{
	_target->SetOcclusionLodLevel (level);
}


DllExport void
Terrain_SetSmoothing (Urho3D::Terrain *_target, bool enable)
{
	_target->SetSmoothing (enable);
}


DllExport int
Terrain_SetHeightMap (Urho3D::Terrain *_target, Urho3D::Image * image)
{
	return _target->SetHeightMap (image);
}


DllExport void
Terrain_SetMaterial (Urho3D::Terrain *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport void
Terrain_SetNorthNeighbor (Urho3D::Terrain *_target, Urho3D::Terrain * north)
{
	_target->SetNorthNeighbor (north);
}


DllExport void
Terrain_SetSouthNeighbor (Urho3D::Terrain *_target, Urho3D::Terrain * south)
{
	_target->SetSouthNeighbor (south);
}


DllExport void
Terrain_SetWestNeighbor (Urho3D::Terrain *_target, Urho3D::Terrain * west)
{
	_target->SetWestNeighbor (west);
}


DllExport void
Terrain_SetEastNeighbor (Urho3D::Terrain *_target, Urho3D::Terrain * east)
{
	_target->SetEastNeighbor (east);
}


DllExport void
Terrain_SetNeighbors (Urho3D::Terrain *_target, Urho3D::Terrain * north, Urho3D::Terrain * south, Urho3D::Terrain * west, Urho3D::Terrain * east)
{
	_target->SetNeighbors (north, south, west, east);
}


DllExport void
Terrain_SetDrawDistance (Urho3D::Terrain *_target, float distance)
{
	_target->SetDrawDistance (distance);
}


DllExport void
Terrain_SetShadowDistance (Urho3D::Terrain *_target, float distance)
{
	_target->SetShadowDistance (distance);
}


DllExport void
Terrain_SetLodBias (Urho3D::Terrain *_target, float bias)
{
	_target->SetLodBias (bias);
}


DllExport void
Terrain_SetViewMask (Urho3D::Terrain *_target, unsigned int mask)
{
	_target->SetViewMask (mask);
}


DllExport void
Terrain_SetLightMask (Urho3D::Terrain *_target, unsigned int mask)
{
	_target->SetLightMask (mask);
}


DllExport void
Terrain_SetShadowMask (Urho3D::Terrain *_target, unsigned int mask)
{
	_target->SetShadowMask (mask);
}


DllExport void
Terrain_SetZoneMask (Urho3D::Terrain *_target, unsigned int mask)
{
	_target->SetZoneMask (mask);
}


DllExport void
Terrain_SetMaxLights (Urho3D::Terrain *_target, unsigned int num)
{
	_target->SetMaxLights (num);
}


DllExport void
Terrain_SetCastShadows (Urho3D::Terrain *_target, bool enable)
{
	_target->SetCastShadows (enable);
}


DllExport void
Terrain_SetOccluder (Urho3D::Terrain *_target, bool enable)
{
	_target->SetOccluder (enable);
}


DllExport void
Terrain_SetOccludee (Urho3D::Terrain *_target, bool enable)
{
	_target->SetOccludee (enable);
}


DllExport void
Terrain_ApplyHeightMap (Urho3D::Terrain *_target)
{
	_target->ApplyHeightMap ();
}


DllExport int
Terrain_GetPatchSize (Urho3D::Terrain *_target)
{
	return _target->GetPatchSize ();
}


DllExport Interop::Vector3 
Terrain_GetSpacing (Urho3D::Terrain *_target)
{
	return *((Interop::Vector3  *) &(_target->GetSpacing ()));
}


DllExport Interop::IntVector2 
Terrain_GetNumVertices (Urho3D::Terrain *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetNumVertices ()));
}


DllExport Interop::IntVector2 
Terrain_GetNumPatches (Urho3D::Terrain *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetNumPatches ()));
}


DllExport unsigned int
Terrain_GetMaxLodLevels (Urho3D::Terrain *_target)
{
	return _target->GetMaxLodLevels ();
}


DllExport unsigned int
Terrain_GetOcclusionLodLevel (Urho3D::Terrain *_target)
{
	return _target->GetOcclusionLodLevel ();
}


DllExport int
Terrain_GetSmoothing (Urho3D::Terrain *_target)
{
	return _target->GetSmoothing ();
}


DllExport Urho3D::Image *
Terrain_GetHeightMap (Urho3D::Terrain *_target)
{
	return _target->GetHeightMap ();
}


DllExport Urho3D::Material *
Terrain_GetMaterial (Urho3D::Terrain *_target)
{
	return _target->GetMaterial ();
}


DllExport Urho3D::TerrainPatch *
Terrain_GetPatch (Urho3D::Terrain *_target, unsigned int index)
{
	return _target->GetPatch (index);
}


DllExport Urho3D::TerrainPatch *
Terrain_GetPatch0 (Urho3D::Terrain *_target, int x, int z)
{
	return _target->GetPatch (x, z);
}


DllExport Urho3D::TerrainPatch *
Terrain_GetNeighborPatch (Urho3D::Terrain *_target, int x, int z)
{
	return _target->GetNeighborPatch (x, z);
}


DllExport float
Terrain_GetHeight (Urho3D::Terrain *_target, const class Urho3D::Vector3 & worldPosition)
{
	return _target->GetHeight (worldPosition);
}


DllExport Interop::Vector3 
Terrain_GetNormal (Urho3D::Terrain *_target, const class Urho3D::Vector3 & worldPosition)
{
	return *((Interop::Vector3  *) &(_target->GetNormal (worldPosition)));
}


DllExport Interop::IntVector2 
Terrain_WorldToHeightMap (Urho3D::Terrain *_target, const class Urho3D::Vector3 & worldPosition)
{
	return *((Interop::IntVector2  *) &(_target->WorldToHeightMap (worldPosition)));
}


DllExport Interop::Vector3 
Terrain_HeightMapToWorld (Urho3D::Terrain *_target, const class Urho3D::IntVector2 & pixelPosition)
{
	return *((Interop::Vector3  *) &(_target->HeightMapToWorld (pixelPosition)));
}


DllExport Urho3D::Terrain *
Terrain_GetNorthNeighbor (Urho3D::Terrain *_target)
{
	return _target->GetNorthNeighbor ();
}


DllExport Urho3D::Terrain *
Terrain_GetSouthNeighbor (Urho3D::Terrain *_target)
{
	return _target->GetSouthNeighbor ();
}


DllExport Urho3D::Terrain *
Terrain_GetWestNeighbor (Urho3D::Terrain *_target)
{
	return _target->GetWestNeighbor ();
}


DllExport Urho3D::Terrain *
Terrain_GetEastNeighbor (Urho3D::Terrain *_target)
{
	return _target->GetEastNeighbor ();
}


DllExport float
Terrain_GetDrawDistance (Urho3D::Terrain *_target)
{
	return _target->GetDrawDistance ();
}


DllExport float
Terrain_GetShadowDistance (Urho3D::Terrain *_target)
{
	return _target->GetShadowDistance ();
}


DllExport float
Terrain_GetLodBias (Urho3D::Terrain *_target)
{
	return _target->GetLodBias ();
}


DllExport unsigned int
Terrain_GetViewMask (Urho3D::Terrain *_target)
{
	return _target->GetViewMask ();
}


DllExport unsigned int
Terrain_GetLightMask (Urho3D::Terrain *_target)
{
	return _target->GetLightMask ();
}


DllExport unsigned int
Terrain_GetShadowMask (Urho3D::Terrain *_target)
{
	return _target->GetShadowMask ();
}


DllExport unsigned int
Terrain_GetZoneMask (Urho3D::Terrain *_target)
{
	return _target->GetZoneMask ();
}


DllExport unsigned int
Terrain_GetMaxLights (Urho3D::Terrain *_target)
{
	return _target->GetMaxLights ();
}


DllExport int
Terrain_IsVisible (Urho3D::Terrain *_target)
{
	return _target->IsVisible ();
}


DllExport int
Terrain_GetCastShadows (Urho3D::Terrain *_target)
{
	return _target->GetCastShadows ();
}


DllExport int
Terrain_IsOccluder (Urho3D::Terrain *_target)
{
	return _target->IsOccluder ();
}


DllExport int
Terrain_IsOccludee (Urho3D::Terrain *_target)
{
	return _target->IsOccludee ();
}


DllExport void
Terrain_CreatePatchGeometry (Urho3D::Terrain *_target, Urho3D::TerrainPatch * patch)
{
	_target->CreatePatchGeometry (patch);
}


DllExport void
Terrain_UpdatePatchLod (Urho3D::Terrain *_target, Urho3D::TerrainPatch * patch)
{
	_target->UpdatePatchLod (patch);
}


DllExport void
Terrain_SetPatchSizeAttr (Urho3D::Terrain *_target, int value)
{
	_target->SetPatchSizeAttr (value);
}


DllExport void
Terrain_SetMaxLodLevelsAttr (Urho3D::Terrain *_target, unsigned int value)
{
	_target->SetMaxLodLevelsAttr (value);
}


DllExport void
Terrain_SetOcclusionLodLevelAttr (Urho3D::Terrain *_target, unsigned int value)
{
	_target->SetOcclusionLodLevelAttr (value);
}


DllExport Urho3D::ResourceRef
Terrain_GetHeightMapAttr (Urho3D::Terrain *_target)
{
	return _target->GetHeightMapAttr ();
}


DllExport Urho3D::ResourceRef
Terrain_GetMaterialAttr (Urho3D::Terrain *_target)
{
	return _target->GetMaterialAttr ();
}


DllExport int
TerrainPatch_GetType (Urho3D::TerrainPatch *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
TerrainPatch_GetTypeName (Urho3D::TerrainPatch *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
TerrainPatch_GetTypeStatic ()
{
	return (TerrainPatch::GetTypeStatic ()).Value ();
}


DllExport const char *
TerrainPatch_GetTypeNameStatic ()
{
	return stringdup((TerrainPatch::GetTypeNameStatic ()).CString ());
}


DllExport void *
TerrainPatch_TerrainPatch (Urho3D::Context * context)
{
	return WeakPtr<TerrainPatch>(new TerrainPatch(context));
}


DllExport void
TerrainPatch_RegisterObject (Urho3D::Context * context)
{
	TerrainPatch::RegisterObject (context);
}


DllExport enum Urho3D::UpdateGeometryType
TerrainPatch_GetUpdateGeometryType (Urho3D::TerrainPatch *_target)
{
	return _target->GetUpdateGeometryType ();
}


DllExport Urho3D::Geometry *
TerrainPatch_GetLodGeometry (Urho3D::TerrainPatch *_target, unsigned int batchIndex, unsigned int level)
{
	return _target->GetLodGeometry (batchIndex, level);
}


DllExport unsigned int
TerrainPatch_GetNumOccluderTriangles (Urho3D::TerrainPatch *_target)
{
	return _target->GetNumOccluderTriangles ();
}


DllExport int
TerrainPatch_DrawOcclusion (Urho3D::TerrainPatch *_target, Urho3D::OcclusionBuffer * buffer)
{
	return _target->DrawOcclusion (buffer);
}


DllExport void
TerrainPatch_DrawDebugGeometry (Urho3D::TerrainPatch *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
TerrainPatch_SetOwner (Urho3D::TerrainPatch *_target, Urho3D::Terrain * terrain)
{
	_target->SetOwner (terrain);
}


DllExport void
TerrainPatch_SetNeighbors (Urho3D::TerrainPatch *_target, Urho3D::TerrainPatch * north, Urho3D::TerrainPatch * south, Urho3D::TerrainPatch * west, Urho3D::TerrainPatch * east)
{
	_target->SetNeighbors (north, south, west, east);
}


DllExport void
TerrainPatch_SetMaterial (Urho3D::TerrainPatch *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport void
TerrainPatch_SetBoundingBox (Urho3D::TerrainPatch *_target, const class Urho3D::BoundingBox & box)
{
	_target->SetBoundingBox (box);
}


DllExport void
TerrainPatch_SetCoordinates (Urho3D::TerrainPatch *_target, const class Urho3D::IntVector2 & coordinates)
{
	_target->SetCoordinates (coordinates);
}


DllExport void
TerrainPatch_ResetLod (Urho3D::TerrainPatch *_target)
{
	_target->ResetLod ();
}


DllExport Urho3D::Geometry *
TerrainPatch_GetGeometry (Urho3D::TerrainPatch *_target)
{
	return _target->GetGeometry ();
}


DllExport Urho3D::Geometry *
TerrainPatch_GetMaxLodGeometry (Urho3D::TerrainPatch *_target)
{
	return _target->GetMaxLodGeometry ();
}


DllExport Urho3D::Geometry *
TerrainPatch_GetOcclusionGeometry (Urho3D::TerrainPatch *_target)
{
	return _target->GetOcclusionGeometry ();
}


DllExport Urho3D::VertexBuffer *
TerrainPatch_GetVertexBuffer (Urho3D::TerrainPatch *_target)
{
	return _target->GetVertexBuffer ();
}


DllExport Urho3D::Terrain *
TerrainPatch_GetOwner (Urho3D::TerrainPatch *_target)
{
	return _target->GetOwner ();
}


DllExport Urho3D::TerrainPatch *
TerrainPatch_GetNorthPatch (Urho3D::TerrainPatch *_target)
{
	return _target->GetNorthPatch ();
}


DllExport Urho3D::TerrainPatch *
TerrainPatch_GetSouthPatch (Urho3D::TerrainPatch *_target)
{
	return _target->GetSouthPatch ();
}


DllExport Urho3D::TerrainPatch *
TerrainPatch_GetWestPatch (Urho3D::TerrainPatch *_target)
{
	return _target->GetWestPatch ();
}


DllExport Urho3D::TerrainPatch *
TerrainPatch_GetEastPatch (Urho3D::TerrainPatch *_target)
{
	return _target->GetEastPatch ();
}


DllExport Interop::IntVector2 
TerrainPatch_GetCoordinates (Urho3D::TerrainPatch *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetCoordinates ()));
}


DllExport unsigned int
TerrainPatch_GetLodLevel (Urho3D::TerrainPatch *_target)
{
	return _target->GetLodLevel ();
}


DllExport int
Texture2DArray_GetType (Urho3D::Texture2DArray *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Texture2DArray_GetTypeName (Urho3D::Texture2DArray *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Texture2DArray_GetTypeStatic ()
{
	return (Texture2DArray::GetTypeStatic ()).Value ();
}


DllExport const char *
Texture2DArray_GetTypeNameStatic ()
{
	return stringdup((Texture2DArray::GetTypeNameStatic ()).CString ());
}


DllExport void *
Texture2DArray_Texture2DArray (Urho3D::Context * context)
{
	return WeakPtr<Texture2DArray>(new Texture2DArray(context));
}


DllExport void
Texture2DArray_RegisterObject (Urho3D::Context * context)
{
	Texture2DArray::RegisterObject (context);
}


DllExport int
Texture2DArray_BeginLoad_File (Urho3D::Texture2DArray *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Texture2DArray_BeginLoad_MemoryBuffer (Urho3D::Texture2DArray *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Texture2DArray_EndLoad (Urho3D::Texture2DArray *_target)
{
	return _target->EndLoad ();
}


DllExport void
Texture2DArray_OnDeviceLost (Urho3D::Texture2DArray *_target)
{
	_target->OnDeviceLost ();
}


DllExport void
Texture2DArray_OnDeviceReset (Urho3D::Texture2DArray *_target)
{
	_target->OnDeviceReset ();
}


DllExport void
Texture2DArray_Release (Urho3D::Texture2DArray *_target)
{
	_target->Release ();
}


DllExport void
Texture2DArray_SetLayers (Urho3D::Texture2DArray *_target, unsigned int layers)
{
	_target->SetLayers (layers);
}


DllExport int
Texture2DArray_SetSize (Urho3D::Texture2DArray *_target, unsigned int layers, int width, int height, unsigned int format, enum Urho3D::TextureUsage usage)
{
	return _target->SetSize (layers, width, height, format, usage);
}


DllExport int
Texture2DArray_SetData (Urho3D::Texture2DArray *_target, unsigned int layer, unsigned int level, int x, int y, int width, int height, const void * data)
{
	return _target->SetData (layer, level, x, y, width, height, data);
}


DllExport int
Texture2DArray_SetData0_File (Urho3D::Texture2DArray *_target, unsigned int layer, File * source)
{
	return _target->SetData (layer, *source);
}


DllExport int
Texture2DArray_SetData0_MemoryBuffer (Urho3D::Texture2DArray *_target, unsigned int layer, MemoryBuffer * source)
{
	return _target->SetData (layer, *source);
}


DllExport int
Texture2DArray_SetData1 (Urho3D::Texture2DArray *_target, unsigned int layer, Urho3D::Image * image, bool useAlpha)
{
	return _target->SetData (layer, image, useAlpha);
}


DllExport unsigned int
Texture2DArray_GetLayers (Urho3D::Texture2DArray *_target)
{
	return _target->GetLayers ();
}


DllExport int
Texture2DArray_GetData (Urho3D::Texture2DArray *_target, unsigned int layer, unsigned int level, void * dest)
{
	return _target->GetData (layer, level, dest);
}


DllExport Urho3D::RenderSurface *
Texture2DArray_GetRenderSurface (Urho3D::Texture2DArray *_target)
{
	return _target->GetRenderSurface ();
}


DllExport int
Texture3D_GetType (Urho3D::Texture3D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Texture3D_GetTypeName (Urho3D::Texture3D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Texture3D_GetTypeStatic ()
{
	return (Texture3D::GetTypeStatic ()).Value ();
}


DllExport const char *
Texture3D_GetTypeNameStatic ()
{
	return stringdup((Texture3D::GetTypeNameStatic ()).CString ());
}


DllExport void *
Texture3D_Texture3D (Urho3D::Context * context)
{
	return WeakPtr<Texture3D>(new Texture3D(context));
}


DllExport void
Texture3D_RegisterObject (Urho3D::Context * context)
{
	Texture3D::RegisterObject (context);
}


DllExport int
Texture3D_BeginLoad_File (Urho3D::Texture3D *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Texture3D_BeginLoad_MemoryBuffer (Urho3D::Texture3D *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Texture3D_EndLoad (Urho3D::Texture3D *_target)
{
	return _target->EndLoad ();
}


DllExport void
Texture3D_Release (Urho3D::Texture3D *_target)
{
	_target->Release ();
}


DllExport int
Texture3D_SetSize (Urho3D::Texture3D *_target, int width, int height, int depth, unsigned int format, enum Urho3D::TextureUsage usage)
{
	return _target->SetSize (width, height, depth, format, usage);
}


DllExport int
Texture3D_SetData (Urho3D::Texture3D *_target, unsigned int level, int x, int y, int z, int width, int height, int depth, const void * data)
{
	return _target->SetData (level, x, y, z, width, height, depth, data);
}


DllExport int
Texture3D_SetData0 (Urho3D::Texture3D *_target, Urho3D::Image * image, bool useAlpha)
{
	return _target->SetData (image, useAlpha);
}


DllExport int
Texture3D_GetData (Urho3D::Texture3D *_target, unsigned int level, void * dest)
{
	return _target->GetData (level, dest);
}


DllExport int
TextureCube_GetType (Urho3D::TextureCube *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
TextureCube_GetTypeName (Urho3D::TextureCube *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
TextureCube_GetTypeStatic ()
{
	return (TextureCube::GetTypeStatic ()).Value ();
}


DllExport const char *
TextureCube_GetTypeNameStatic ()
{
	return stringdup((TextureCube::GetTypeNameStatic ()).CString ());
}


DllExport void *
TextureCube_TextureCube (Urho3D::Context * context)
{
	return WeakPtr<TextureCube>(new TextureCube(context));
}


DllExport void
TextureCube_RegisterObject (Urho3D::Context * context)
{
	TextureCube::RegisterObject (context);
}


DllExport int
TextureCube_BeginLoad_File (Urho3D::TextureCube *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
TextureCube_BeginLoad_MemoryBuffer (Urho3D::TextureCube *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
TextureCube_EndLoad (Urho3D::TextureCube *_target)
{
	return _target->EndLoad ();
}


DllExport void
TextureCube_Release (Urho3D::TextureCube *_target)
{
	_target->Release ();
}


DllExport int
TextureCube_SetSize (Urho3D::TextureCube *_target, int size, unsigned int format, enum Urho3D::TextureUsage usage, int multiSample)
{
	return _target->SetSize (size, format, usage, multiSample);
}


DllExport int
TextureCube_SetData (Urho3D::TextureCube *_target, enum Urho3D::CubeMapFace face, unsigned int level, int x, int y, int width, int height, const void * data)
{
	return _target->SetData (face, level, x, y, width, height, data);
}


DllExport int
TextureCube_SetData0_File (Urho3D::TextureCube *_target, enum Urho3D::CubeMapFace face, File * source)
{
	return _target->SetData (face, *source);
}


DllExport int
TextureCube_SetData0_MemoryBuffer (Urho3D::TextureCube *_target, enum Urho3D::CubeMapFace face, MemoryBuffer * source)
{
	return _target->SetData (face, *source);
}


DllExport int
TextureCube_SetData1 (Urho3D::TextureCube *_target, enum Urho3D::CubeMapFace face, Urho3D::Image * image, bool useAlpha)
{
	return _target->SetData (face, image, useAlpha);
}


DllExport int
TextureCube_GetData (Urho3D::TextureCube *_target, enum Urho3D::CubeMapFace face, unsigned int level, void * dest)
{
	return _target->GetData (face, level, dest);
}


DllExport Urho3D::Image *
TextureCube_GetImage (Urho3D::TextureCube *_target, enum Urho3D::CubeMapFace face)
{
	auto copy = _target->GetImage (face);
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::RenderSurface *
TextureCube_GetRenderSurface (Urho3D::TextureCube *_target, enum Urho3D::CubeMapFace face)
{
	return _target->GetRenderSurface (face);
}


DllExport GPUObject*
VertexBuffer_CastToGPUObject(Urho3D::VertexBuffer *_target)
{
	return static_cast<GPUObject*>(_target);
}
DllExport int
VertexBuffer_GetType (Urho3D::VertexBuffer *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
VertexBuffer_GetTypeName (Urho3D::VertexBuffer *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
VertexBuffer_GetTypeStatic ()
{
	return (VertexBuffer::GetTypeStatic ()).Value ();
}


DllExport const char *
VertexBuffer_GetTypeNameStatic ()
{
	return stringdup((VertexBuffer::GetTypeNameStatic ()).CString ());
}


DllExport void *
VertexBuffer_VertexBuffer (Urho3D::Context * context, bool forceHeadless)
{
	return WeakPtr<VertexBuffer>(new VertexBuffer(context, forceHeadless));
}


DllExport void
VertexBuffer_OnDeviceLost (Urho3D::VertexBuffer *_target)
{
	_target->OnDeviceLost ();
}


DllExport void
VertexBuffer_Release (Urho3D::VertexBuffer *_target)
{
	_target->Release ();
}


DllExport void
VertexBuffer_SetShadowed (Urho3D::VertexBuffer *_target, bool enable)
{
	_target->SetShadowed (enable);
}


DllExport int
VertexBuffer_SetSize (Urho3D::VertexBuffer *_target, unsigned int vertexCount, unsigned int elementMask, bool dynamic)
{
	return _target->SetSize (vertexCount, elementMask, dynamic);
}


DllExport int
VertexBuffer_SetData (Urho3D::VertexBuffer *_target, const void * data)
{
	return _target->SetData (data);
}


DllExport int
VertexBuffer_SetDataRange (Urho3D::VertexBuffer *_target, const void * data, unsigned int start, unsigned int count, bool discard)
{
	return _target->SetDataRange (data, start, count, discard);
}


DllExport void *
VertexBuffer_Lock (Urho3D::VertexBuffer *_target, unsigned int start, unsigned int count, bool discard)
{
	return _target->Lock (start, count, discard);
}


DllExport void
VertexBuffer_Unlock (Urho3D::VertexBuffer *_target)
{
	_target->Unlock ();
}


DllExport int
VertexBuffer_IsShadowed (Urho3D::VertexBuffer *_target)
{
	return _target->IsShadowed ();
}


DllExport int
VertexBuffer_IsDynamic (Urho3D::VertexBuffer *_target)
{
	return _target->IsDynamic ();
}


DllExport int
VertexBuffer_IsLocked (Urho3D::VertexBuffer *_target)
{
	return _target->IsLocked ();
}


DllExport unsigned int
VertexBuffer_GetVertexCount (Urho3D::VertexBuffer *_target)
{
	return _target->GetVertexCount ();
}


DllExport unsigned int
VertexBuffer_GetVertexSize (Urho3D::VertexBuffer *_target)
{
	return _target->GetVertexSize ();
}


DllExport const struct Urho3D::VertexElement *
VertexBuffer_GetElement (Urho3D::VertexBuffer *_target, enum Urho3D::VertexElementSemantic semantic, unsigned char index)
{
	return _target->GetElement (semantic, index);
}


DllExport const struct Urho3D::VertexElement *
VertexBuffer_GetElement0 (Urho3D::VertexBuffer *_target, enum Urho3D::VertexElementType type, enum Urho3D::VertexElementSemantic semantic, unsigned char index)
{
	return _target->GetElement (type, semantic, index);
}


DllExport int
VertexBuffer_HasElement (Urho3D::VertexBuffer *_target, enum Urho3D::VertexElementSemantic semantic, unsigned char index)
{
	return _target->HasElement (semantic, index);
}


DllExport int
VertexBuffer_HasElement1 (Urho3D::VertexBuffer *_target, enum Urho3D::VertexElementType type, enum Urho3D::VertexElementSemantic semantic, unsigned char index)
{
	return _target->HasElement (type, semantic, index);
}


DllExport unsigned int
VertexBuffer_GetElementOffset (Urho3D::VertexBuffer *_target, enum Urho3D::VertexElementSemantic semantic, unsigned char index)
{
	return _target->GetElementOffset (semantic, index);
}


DllExport unsigned int
VertexBuffer_GetElementOffset2 (Urho3D::VertexBuffer *_target, enum Urho3D::VertexElementType type, enum Urho3D::VertexElementSemantic semantic, unsigned char index)
{
	return _target->GetElementOffset (type, semantic, index);
}


DllExport unsigned char *
VertexBuffer_GetShadowData (Urho3D::VertexBuffer *_target)
{
	return _target->GetShadowData ();
}


DllExport unsigned long long
VertexBuffer_GetBufferHash (Urho3D::VertexBuffer *_target, unsigned int streamIndex)
{
	return _target->GetBufferHash (streamIndex);
}


DllExport unsigned int
VertexBuffer_GetVertexSize3 (unsigned int elementMask)
{
	return VertexBuffer::GetVertexSize (elementMask);
}


DllExport int
Zone_GetType (Urho3D::Zone *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Zone_GetTypeName (Urho3D::Zone *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Zone_GetTypeStatic ()
{
	return (Zone::GetTypeStatic ()).Value ();
}


DllExport const char *
Zone_GetTypeNameStatic ()
{
	return stringdup((Zone::GetTypeNameStatic ()).CString ());
}


DllExport void *
Zone_Zone (Urho3D::Context * context)
{
	return WeakPtr<Zone>(new Zone(context));
}


DllExport void
Zone_RegisterObject (Urho3D::Context * context)
{
	Zone::RegisterObject (context);
}


DllExport void
Zone_DrawDebugGeometry (Urho3D::Zone *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
Zone_SetBoundingBox (Urho3D::Zone *_target, const class Urho3D::BoundingBox & box)
{
	_target->SetBoundingBox (box);
}


DllExport void
Zone_SetAmbientColor (Urho3D::Zone *_target, const class Urho3D::Color & color)
{
	_target->SetAmbientColor (color);
}


DllExport void
Zone_SetFogColor (Urho3D::Zone *_target, const class Urho3D::Color & color)
{
	_target->SetFogColor (color);
}


DllExport void
Zone_SetFogStart (Urho3D::Zone *_target, float start)
{
	_target->SetFogStart (start);
}


DllExport void
Zone_SetFogEnd (Urho3D::Zone *_target, float end)
{
	_target->SetFogEnd (end);
}


DllExport void
Zone_SetFogHeight (Urho3D::Zone *_target, float height)
{
	_target->SetFogHeight (height);
}


DllExport void
Zone_SetFogHeightScale (Urho3D::Zone *_target, float scale)
{
	_target->SetFogHeightScale (scale);
}


DllExport void
Zone_SetPriority (Urho3D::Zone *_target, int priority)
{
	_target->SetPriority (priority);
}


DllExport void
Zone_SetHeightFog (Urho3D::Zone *_target, bool enable)
{
	_target->SetHeightFog (enable);
}


DllExport void
Zone_SetOverride (Urho3D::Zone *_target, bool enable)
{
	_target->SetOverride (enable);
}


DllExport void
Zone_SetAmbientGradient (Urho3D::Zone *_target, bool enable)
{
	_target->SetAmbientGradient (enable);
}


DllExport void
Zone_SetZoneTexture (Urho3D::Zone *_target, Urho3D::Texture * texture)
{
	_target->SetZoneTexture (texture);
}


DllExport Interop::Matrix3x4 
Zone_GetInverseWorldTransform (Urho3D::Zone *_target)
{
	return *((Interop::Matrix3x4  *) &(_target->GetInverseWorldTransform ()));
}


DllExport Interop::Color 
Zone_GetAmbientColor (Urho3D::Zone *_target)
{
	return *((Interop::Color  *) &(_target->GetAmbientColor ()));
}


DllExport Interop::Color 
Zone_GetAmbientStartColor (Urho3D::Zone *_target)
{
	return *((Interop::Color  *) &(_target->GetAmbientStartColor ()));
}


DllExport Interop::Color 
Zone_GetAmbientEndColor (Urho3D::Zone *_target)
{
	return *((Interop::Color  *) &(_target->GetAmbientEndColor ()));
}


DllExport Interop::Color 
Zone_GetFogColor (Urho3D::Zone *_target)
{
	return *((Interop::Color  *) &(_target->GetFogColor ()));
}


DllExport float
Zone_GetFogStart (Urho3D::Zone *_target)
{
	return _target->GetFogStart ();
}


DllExport float
Zone_GetFogEnd (Urho3D::Zone *_target)
{
	return _target->GetFogEnd ();
}


DllExport float
Zone_GetFogHeight (Urho3D::Zone *_target)
{
	return _target->GetFogHeight ();
}


DllExport float
Zone_GetFogHeightScale (Urho3D::Zone *_target)
{
	return _target->GetFogHeightScale ();
}


DllExport int
Zone_GetPriority (Urho3D::Zone *_target)
{
	return _target->GetPriority ();
}


DllExport int
Zone_GetHeightFog (Urho3D::Zone *_target)
{
	return _target->GetHeightFog ();
}


DllExport int
Zone_GetOverride (Urho3D::Zone *_target)
{
	return _target->GetOverride ();
}


DllExport int
Zone_GetAmbientGradient (Urho3D::Zone *_target)
{
	return _target->GetAmbientGradient ();
}


DllExport Urho3D::Texture *
Zone_GetZoneTexture (Urho3D::Zone *_target)
{
	return _target->GetZoneTexture ();
}


DllExport int
Zone_IsInside (Urho3D::Zone *_target, const class Urho3D::Vector3 & point)
{
	return _target->IsInside (point);
}


DllExport Urho3D::ResourceRef
Zone_GetZoneTextureAttr (Urho3D::Zone *_target)
{
	return _target->GetZoneTextureAttr ();
}


DllExport void *
Polyhedron_Polyhedron ()
{
	return new Polyhedron();
}


DllExport void *
Polyhedron_Polyhedron0 (const class Urho3D::Polyhedron & polyhedron)
{
	return new Polyhedron(polyhedron);
}


DllExport void *
Polyhedron_Polyhedron1 (const class Urho3D::BoundingBox & box)
{
	return new Polyhedron(box);
}


DllExport void *
Polyhedron_Polyhedron2 (const class Urho3D::Frustum & frustum)
{
	return new Polyhedron(frustum);
}


DllExport void
Polyhedron_Define (Urho3D::Polyhedron *_target, const class Urho3D::BoundingBox & box)
{
	_target->Define (box);
}


DllExport void
Polyhedron_Define3 (Urho3D::Polyhedron *_target, const class Urho3D::Frustum & frustum)
{
	_target->Define (frustum);
}


DllExport void
Polyhedron_AddFace (Urho3D::Polyhedron *_target, const class Urho3D::Vector3 & v0, const class Urho3D::Vector3 & v1, const class Urho3D::Vector3 & v2)
{
	_target->AddFace (v0, v1, v2);
}


DllExport void
Polyhedron_AddFace4 (Urho3D::Polyhedron *_target, const class Urho3D::Vector3 & v0, const class Urho3D::Vector3 & v1, const class Urho3D::Vector3 & v2, const class Urho3D::Vector3 & v3)
{
	_target->AddFace (v0, v1, v2, v3);
}


DllExport void
Polyhedron_Clip (Urho3D::Polyhedron *_target, const class Urho3D::Plane & plane)
{
	_target->Clip (plane);
}


DllExport void
Polyhedron_Clip5 (Urho3D::Polyhedron *_target, const class Urho3D::BoundingBox & box)
{
	_target->Clip (box);
}


DllExport void
Polyhedron_Clip6 (Urho3D::Polyhedron *_target, const class Urho3D::Frustum & frustum)
{
	_target->Clip (frustum);
}


DllExport void
Polyhedron_Clear (Urho3D::Polyhedron *_target)
{
	_target->Clear ();
}


DllExport void
Polyhedron_Transform (Urho3D::Polyhedron *_target, const class Urho3D::Matrix3x4 & transform)
{
	_target->Transform (transform);
}


DllExport Urho3D::Polyhedron *
Polyhedron_Transformed (Urho3D::Polyhedron *_target, const class Urho3D::Matrix3x4 & transform)
{
	return new Urho3D::Polyhedron (_target->Transformed (transform));
}


DllExport int
Polyhedron_Empty (Urho3D::Polyhedron *_target)
{
	return _target->Empty ();
}


DllExport int
View_GetType (Urho3D::View *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
View_GetTypeName (Urho3D::View *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
View_GetTypeStatic ()
{
	return (View::GetTypeStatic ()).Value ();
}


DllExport const char *
View_GetTypeNameStatic ()
{
	return stringdup((View::GetTypeNameStatic ()).CString ());
}


DllExport void *
View_View (Urho3D::Context * context)
{
	return WeakPtr<View>(new View(context));
}


DllExport int
View_Define (Urho3D::View *_target, Urho3D::RenderSurface * renderTarget, Urho3D::Viewport * viewport)
{
	return _target->Define (renderTarget, viewport);
}


DllExport void
View_Render (Urho3D::View *_target)
{
	_target->Render ();
}


DllExport Urho3D::Graphics *
View_GetGraphics (Urho3D::View *_target)
{
	return _target->GetGraphics ();
}


DllExport Urho3D::Renderer *
View_GetRenderer (Urho3D::View *_target)
{
	return _target->GetRenderer ();
}


DllExport Urho3D::Scene *
View_GetScene (Urho3D::View *_target)
{
	return _target->GetScene ();
}


DllExport Urho3D::Octree *
View_GetOctree (Urho3D::View *_target)
{
	return _target->GetOctree ();
}


DllExport Urho3D::Camera *
View_GetCamera (Urho3D::View *_target)
{
	return _target->GetCamera ();
}


DllExport Urho3D::Camera *
View_GetCullCamera (Urho3D::View *_target)
{
	return _target->GetCullCamera ();
}


DllExport Urho3D::RenderSurface *
View_GetRenderTarget (Urho3D::View *_target)
{
	return _target->GetRenderTarget ();
}


DllExport int
View_GetDrawDebug (Urho3D::View *_target)
{
	return _target->GetDrawDebug ();
}


DllExport Interop::IntRect 
View_GetViewRect (Urho3D::View *_target)
{
	return *((Interop::IntRect  *) &(_target->GetViewRect ()));
}


DllExport Interop::IntVector2 
View_GetViewSize (Urho3D::View *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetViewSize ()));
}


DllExport Urho3D::OcclusionBuffer *
View_GetOcclusionBuffer (Urho3D::View *_target)
{
	return _target->GetOcclusionBuffer ();
}


DllExport unsigned int
View_GetNumActiveOccluders (Urho3D::View *_target)
{
	return _target->GetNumActiveOccluders ();
}


DllExport Urho3D::View *
View_GetSourceView (Urho3D::View *_target)
{
	return _target->GetSourceView ();
}


DllExport void
View_SetGlobalShaderParameters (Urho3D::View *_target)
{
	_target->SetGlobalShaderParameters ();
}


DllExport void
View_SetCameraShaderParameters (Urho3D::View *_target, Urho3D::Camera * camera)
{
	_target->SetCameraShaderParameters (camera);
}


DllExport void
View_SetCommandShaderParameters (Urho3D::View *_target, const struct Urho3D::RenderPathCommand & command)
{
	_target->SetCommandShaderParameters (command);
}


DllExport void
View_SetGBufferShaderParameters (Urho3D::View *_target, const class Urho3D::IntVector2 & texSize, const class Urho3D::IntRect & viewRect)
{
	_target->SetGBufferShaderParameters (texSize, viewRect);
}


DllExport void
View_SetStereoMode (Urho3D::View *_target, bool stereo)
{
	_target->SetStereoMode (stereo);
}


DllExport void
View_DrawFullscreenQuad (Urho3D::View *_target, bool setIdentityProjection)
{
	_target->DrawFullscreenQuad (setIdentityProjection);
}


DllExport Urho3D::Texture *
View_FindNamedTexture (Urho3D::View *_target, const char * name, bool isRenderTarget, bool isVolumeMap)
{
	return _target->FindNamedTexture (Urho3D::String(name), isRenderTarget, isVolumeMap);
}


DllExport int
File_GetType (Urho3D::File *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
File_GetTypeName (Urho3D::File *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
File_GetTypeStatic ()
{
	return (File::GetTypeStatic ()).Value ();
}


DllExport const char *
File_GetTypeNameStatic ()
{
	return stringdup((File::GetTypeNameStatic ()).CString ());
}


DllExport void *
File_File (Urho3D::Context * context)
{
	return WeakPtr<File>(new File(context));
}


DllExport void *
File_File0 (Urho3D::Context * context, const char * fileName, enum Urho3D::FileMode mode)
{
	return WeakPtr<File>(new File(context, Urho3D::String(fileName), mode));
}


DllExport void *
File_File1 (Urho3D::Context * context, Urho3D::PackageFile * package, const char * fileName)
{
	return WeakPtr<File>(new File(context, package, Urho3D::String(fileName)));
}


DllExport unsigned int
File_Read (Urho3D::File *_target, void * dest, unsigned int size)
{
	return _target->Read (dest, size);
}


DllExport unsigned int
File_Seek (Urho3D::File *_target, unsigned int position)
{
	return _target->Seek (position);
}


DllExport unsigned int
File_Write (Urho3D::File *_target, const void * data, unsigned int size)
{
	return _target->Write (data, size);
}


DllExport const char *
File_GetName (Urho3D::File *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport unsigned int
File_GetChecksum (Urho3D::File *_target)
{
	return _target->GetChecksum ();
}


DllExport int
File_Open (Urho3D::File *_target, const char * fileName, enum Urho3D::FileMode mode)
{
	return _target->Open (Urho3D::String(fileName), mode);
}


DllExport int
File_Open2 (Urho3D::File *_target, Urho3D::PackageFile * package, const char * fileName)
{
	return _target->Open (package, Urho3D::String(fileName));
}


DllExport void
File_Close (Urho3D::File *_target)
{
	_target->Close ();
}


DllExport void
File_Flush (Urho3D::File *_target)
{
	_target->Flush ();
}


DllExport void
File_SetName (Urho3D::File *_target, const char * name)
{
	_target->SetName (Urho3D::String(name));
}


DllExport enum Urho3D::FileMode
File_GetMode (Urho3D::File *_target)
{
	return _target->GetMode ();
}


DllExport int
File_IsOpen (Urho3D::File *_target)
{
	return _target->IsOpen ();
}


DllExport void *
File_GetHandle (Urho3D::File *_target)
{
	return _target->GetHandle ();
}


DllExport int
File_IsPackaged (Urho3D::File *_target)
{
	return _target->IsPackaged ();
}


DllExport int
FileSystem_GetType (Urho3D::FileSystem *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
FileSystem_GetTypeName (Urho3D::FileSystem *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
FileSystem_GetTypeStatic ()
{
	return (FileSystem::GetTypeStatic ()).Value ();
}


DllExport const char *
FileSystem_GetTypeNameStatic ()
{
	return stringdup((FileSystem::GetTypeNameStatic ()).CString ());
}


DllExport void *
FileSystem_FileSystem (Urho3D::Context * context)
{
	return WeakPtr<FileSystem>(new FileSystem(context));
}


DllExport int
FileSystem_SetCurrentDir (Urho3D::FileSystem *_target, const char * pathName)
{
	return _target->SetCurrentDir (Urho3D::String(pathName));
}


DllExport int
FileSystem_CreateDir (Urho3D::FileSystem *_target, const char * pathName)
{
	return _target->CreateDir (Urho3D::String(pathName));
}


DllExport void
FileSystem_SetExecuteConsoleCommands (Urho3D::FileSystem *_target, bool enable)
{
	_target->SetExecuteConsoleCommands (enable);
}


DllExport int
FileSystem_SystemCommand (Urho3D::FileSystem *_target, const char * commandLine, bool redirectStdOutToLog)
{
	return _target->SystemCommand (Urho3D::String(commandLine), redirectStdOutToLog);
}


DllExport unsigned int
FileSystem_SystemCommandAsync (Urho3D::FileSystem *_target, const char * commandLine)
{
	return _target->SystemCommandAsync (Urho3D::String(commandLine));
}


DllExport int
FileSystem_SystemOpen (Urho3D::FileSystem *_target, const char * fileName, const char * mode)
{
	return _target->SystemOpen (Urho3D::String(fileName), Urho3D::String(mode));
}


DllExport int
FileSystem_Copy (Urho3D::FileSystem *_target, const char * srcFileName, const char * destFileName)
{
	return _target->Copy (Urho3D::String(srcFileName), Urho3D::String(destFileName));
}


DllExport int
FileSystem_Rename (Urho3D::FileSystem *_target, const char * srcFileName, const char * destFileName)
{
	return _target->Rename (Urho3D::String(srcFileName), Urho3D::String(destFileName));
}


DllExport int
FileSystem_Delete (Urho3D::FileSystem *_target, const char * fileName)
{
	return _target->Delete (Urho3D::String(fileName));
}


DllExport void
FileSystem_RegisterPath (Urho3D::FileSystem *_target, const char * pathName)
{
	_target->RegisterPath (Urho3D::String(pathName));
}


DllExport int
FileSystem_SetLastModifiedTime (Urho3D::FileSystem *_target, const char * fileName, unsigned int newTime)
{
	return _target->SetLastModifiedTime (Urho3D::String(fileName), newTime);
}


DllExport const char *
FileSystem_GetCurrentDir (Urho3D::FileSystem *_target)
{
	return stringdup((_target->GetCurrentDir ()).CString ());
}


DllExport int
FileSystem_GetExecuteConsoleCommands (Urho3D::FileSystem *_target)
{
	return _target->GetExecuteConsoleCommands ();
}


DllExport int
FileSystem_HasRegisteredPaths (Urho3D::FileSystem *_target)
{
	return _target->HasRegisteredPaths ();
}


DllExport int
FileSystem_CheckAccess (Urho3D::FileSystem *_target, const char * pathName)
{
	return _target->CheckAccess (Urho3D::String(pathName));
}


DllExport unsigned int
FileSystem_GetLastModifiedTime (Urho3D::FileSystem *_target, const char * fileName)
{
	return _target->GetLastModifiedTime (Urho3D::String(fileName));
}


DllExport int
FileSystem_FileExists (Urho3D::FileSystem *_target, const char * fileName)
{
	return _target->FileExists (Urho3D::String(fileName));
}


DllExport int
FileSystem_DirExists (Urho3D::FileSystem *_target, const char * pathName)
{
	return _target->DirExists (Urho3D::String(pathName));
}


DllExport const char *
FileSystem_GetProgramDir (Urho3D::FileSystem *_target)
{
	return stringdup((_target->GetProgramDir ()).CString ());
}


DllExport const char *
FileSystem_GetUserDocumentsDir (Urho3D::FileSystem *_target)
{
	return stringdup((_target->GetUserDocumentsDir ()).CString ());
}


DllExport const char *
FileSystem_GetAppPreferencesDir (Urho3D::FileSystem *_target, const char * org, const char * app)
{
	return stringdup((_target->GetAppPreferencesDir (Urho3D::String(org), Urho3D::String(app))).CString ());
}


DllExport const char *
FileSystem_GetTemporaryDir (Urho3D::FileSystem *_target)
{
	return stringdup((_target->GetTemporaryDir ()).CString ());
}


DllExport int
FileWatcher_GetType (Urho3D::FileWatcher *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
FileWatcher_GetTypeName (Urho3D::FileWatcher *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
FileWatcher_GetTypeStatic ()
{
	return (FileWatcher::GetTypeStatic ()).Value ();
}


DllExport const char *
FileWatcher_GetTypeNameStatic ()
{
	return stringdup((FileWatcher::GetTypeNameStatic ()).CString ());
}


DllExport void *
FileWatcher_FileWatcher (Urho3D::Context * context)
{
	return WeakPtr<FileWatcher>(new FileWatcher(context));
}


DllExport void
FileWatcher_ThreadFunction (Urho3D::FileWatcher *_target)
{
	_target->ThreadFunction ();
}


DllExport int
FileWatcher_StartWatching (Urho3D::FileWatcher *_target, const char * pathName, bool watchSubDirs)
{
	return _target->StartWatching (Urho3D::String(pathName), watchSubDirs);
}


DllExport void
FileWatcher_StopWatching (Urho3D::FileWatcher *_target)
{
	_target->StopWatching ();
}


DllExport void
FileWatcher_SetDelay (Urho3D::FileWatcher *_target, float interval)
{
	_target->SetDelay (interval);
}


DllExport void
FileWatcher_AddChange (Urho3D::FileWatcher *_target, const char * fileName)
{
	_target->AddChange (Urho3D::String(fileName));
}


DllExport const char *
FileWatcher_GetPath (Urho3D::FileWatcher *_target)
{
	return stringdup((_target->GetPath ()).CString ());
}


DllExport float
FileWatcher_GetDelay (Urho3D::FileWatcher *_target)
{
	return _target->GetDelay ();
}


DllExport int
Log_GetType (Urho3D::Log *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Log_GetTypeName (Urho3D::Log *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Log_GetTypeStatic ()
{
	return (Log::GetTypeStatic ()).Value ();
}


DllExport const char *
Log_GetTypeNameStatic ()
{
	return stringdup((Log::GetTypeNameStatic ()).CString ());
}


DllExport void *
Log_Log (Urho3D::Context * context)
{
	return WeakPtr<Log>(new Log(context));
}


DllExport void
Log_Open (Urho3D::Log *_target, const char * fileName)
{
	_target->Open (Urho3D::String(fileName));
}


DllExport void
Log_Close (Urho3D::Log *_target)
{
	_target->Close ();
}


DllExport void
Log_SetLevel (Urho3D::Log *_target, int level)
{
	_target->SetLevel (level);
}


DllExport void
Log_SetTimeStamp (Urho3D::Log *_target, bool enable)
{
	_target->SetTimeStamp (enable);
}


DllExport void
Log_SetQuiet (Urho3D::Log *_target, bool quiet)
{
	_target->SetQuiet (quiet);
}


DllExport int
Log_GetLevel (Urho3D::Log *_target)
{
	return _target->GetLevel ();
}


DllExport int
Log_GetTimeStamp (Urho3D::Log *_target)
{
	return _target->GetTimeStamp ();
}


DllExport const char *
Log_GetLastMessage (Urho3D::Log *_target)
{
	return stringdup((_target->GetLastMessage ()).CString ());
}


DllExport int
Log_IsQuiet (Urho3D::Log *_target)
{
	return _target->IsQuiet ();
}


DllExport void
Log_Write (int level, const char * message)
{
	Log::Write (level, Urho3D::String(message));
}


DllExport void
Log_WriteRaw (const char * message, bool error)
{
	Log::WriteRaw (Urho3D::String(message), error);
}


DllExport int
PackageFile_GetType (Urho3D::PackageFile *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
PackageFile_GetTypeName (Urho3D::PackageFile *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
PackageFile_GetTypeStatic ()
{
	return (PackageFile::GetTypeStatic ()).Value ();
}


DllExport const char *
PackageFile_GetTypeNameStatic ()
{
	return stringdup((PackageFile::GetTypeNameStatic ()).CString ());
}


DllExport void *
PackageFile_PackageFile (Urho3D::Context * context)
{
	return WeakPtr<PackageFile>(new PackageFile(context));
}


DllExport void *
PackageFile_PackageFile0 (Urho3D::Context * context, const char * fileName, unsigned int startOffset)
{
	return WeakPtr<PackageFile>(new PackageFile(context, Urho3D::String(fileName), startOffset));
}


DllExport int
PackageFile_Open (Urho3D::PackageFile *_target, const char * fileName, unsigned int startOffset)
{
	return _target->Open (Urho3D::String(fileName), startOffset);
}


DllExport int
PackageFile_Exists (Urho3D::PackageFile *_target, const char * fileName)
{
	return _target->Exists (Urho3D::String(fileName));
}


DllExport const struct Urho3D::PackageEntry *
PackageFile_GetEntry (Urho3D::PackageFile *_target, const char * fileName)
{
	return _target->GetEntry (Urho3D::String(fileName));
}


DllExport const char *
PackageFile_GetName (Urho3D::PackageFile *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport int
PackageFile_GetNameHash (Urho3D::PackageFile *_target)
{
	return (_target->GetNameHash ()).Value ();
}


DllExport unsigned int
PackageFile_GetNumFiles (Urho3D::PackageFile *_target)
{
	return _target->GetNumFiles ();
}


DllExport unsigned int
PackageFile_GetTotalSize (Urho3D::PackageFile *_target)
{
	return _target->GetTotalSize ();
}


DllExport unsigned int
PackageFile_GetTotalDataSize (Urho3D::PackageFile *_target)
{
	return _target->GetTotalDataSize ();
}


DllExport unsigned int
PackageFile_GetChecksum (Urho3D::PackageFile *_target)
{
	return _target->GetChecksum ();
}


DllExport int
PackageFile_IsCompressed (Urho3D::PackageFile *_target)
{
	return _target->IsCompressed ();
}


DllExport void *
UIBatch_UIBatch ()
{
	return new UIBatch();
}


DllExport void
UIBatch_SetColor (Urho3D::UIBatch *_target, const class Urho3D::Color & color, bool overrideAlpha)
{
	_target->SetColor (color, overrideAlpha);
}


DllExport void
UIBatch_SetDefaultColor (Urho3D::UIBatch *_target)
{
	_target->SetDefaultColor ();
}


DllExport void
UIBatch_AddQuad (Urho3D::UIBatch *_target, float x, float y, float width, float height, int texOffsetX, int texOffsetY, int texWidth, int texHeight)
{
	_target->AddQuad (x, y, width, height, texOffsetX, texOffsetY, texWidth, texHeight);
}


DllExport void
UIBatch_AddQuad0 (Urho3D::UIBatch *_target, const class Urho3D::Matrix3x4 & transform, int x, int y, int width, int height, int texOffsetX, int texOffsetY, int texWidth, int texHeight)
{
	_target->AddQuad (transform, x, y, width, height, texOffsetX, texOffsetY, texWidth, texHeight);
}


DllExport void
UIBatch_AddQuad1 (Urho3D::UIBatch *_target, int x, int y, int width, int height, int texOffsetX, int texOffsetY, int texWidth, int texHeight, bool tiled)
{
	_target->AddQuad (x, y, width, height, texOffsetX, texOffsetY, texWidth, texHeight, tiled);
}


DllExport void
UIBatch_AddQuad2 (Urho3D::UIBatch *_target, const class Urho3D::Matrix3x4 & transform, const class Urho3D::IntVector2 & a, const class Urho3D::IntVector2 & b, const class Urho3D::IntVector2 & c, const class Urho3D::IntVector2 & d, const class Urho3D::IntVector2 & texA, const class Urho3D::IntVector2 & texB, const class Urho3D::IntVector2 & texC, const class Urho3D::IntVector2 & texD)
{
	_target->AddQuad (transform, a, b, c, d, texA, texB, texC, texD);
}


DllExport void
UIBatch_AddQuad3 (Urho3D::UIBatch *_target, const class Urho3D::Matrix3x4 & transform, const class Urho3D::IntVector2 & a, const class Urho3D::IntVector2 & b, const class Urho3D::IntVector2 & c, const class Urho3D::IntVector2 & d, const class Urho3D::IntVector2 & texA, const class Urho3D::IntVector2 & texB, const class Urho3D::IntVector2 & texC, const class Urho3D::IntVector2 & texD, const class Urho3D::Color & colA, const class Urho3D::Color & colB, const class Urho3D::Color & colC, const class Urho3D::Color & colD)
{
	_target->AddQuad (transform, a, b, c, d, texA, texB, texC, texD, colA, colB, colC, colD);
}


DllExport unsigned int
UIBatch_GetInterpolatedColor (Urho3D::UIBatch *_target, float x, float y)
{
	return _target->GetInterpolatedColor (x, y);
}


DllExport int
UIElement_GetType (Urho3D::UIElement *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
UIElement_GetTypeName (Urho3D::UIElement *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
UIElement_GetTypeStatic ()
{
	return (UIElement::GetTypeStatic ()).Value ();
}


DllExport const char *
UIElement_GetTypeNameStatic ()
{
	return stringdup((UIElement::GetTypeNameStatic ()).CString ());
}


DllExport void *
UIElement_UIElement (Urho3D::Context * context)
{
	return WeakPtr<UIElement>(new UIElement(context));
}


DllExport void
UIElement_RegisterObject (Urho3D::Context * context)
{
	UIElement::RegisterObject (context);
}


DllExport void
UIElement_ApplyAttributes (Urho3D::UIElement *_target)
{
	_target->ApplyAttributes ();
}


DllExport int
UIElement_LoadXML (Urho3D::UIElement *_target, const class Urho3D::XMLElement & source)
{
	return _target->LoadXML (source);
}


DllExport int
UIElement_LoadXML0 (Urho3D::UIElement *_target, const class Urho3D::XMLElement & source, Urho3D::XMLFile * styleFile)
{
	return _target->LoadXML (source, styleFile);
}


DllExport Urho3D::UIElement *
UIElement_LoadChildXML (Urho3D::UIElement *_target, const class Urho3D::XMLElement & childElem, Urho3D::XMLFile * styleFile)
{
	return _target->LoadChildXML (childElem, styleFile);
}


DllExport int
UIElement_SaveXML (Urho3D::UIElement *_target, Urho3D::XMLElement & dest)
{
	return _target->SaveXML (dest);
}


DllExport void
UIElement_Update (Urho3D::UIElement *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport int
UIElement_IsWithinScissor (Urho3D::UIElement *_target, const class Urho3D::IntRect & currentScissor)
{
	return _target->IsWithinScissor (currentScissor);
}


DllExport Interop::IntVector2 
UIElement_GetScreenPosition (Urho3D::UIElement *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetScreenPosition ()));
}


DllExport void
UIElement_OnHover (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnHover (position, screenPosition, buttons, qualifiers, cursor);
}


DllExport void
UIElement_OnClickBegin (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnClickBegin (position, screenPosition, button, buttons, qualifiers, cursor);
}


DllExport void
UIElement_OnClickEnd (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor, Urho3D::UIElement * beginElement)
{
	_target->OnClickEnd (position, screenPosition, button, buttons, qualifiers, cursor, beginElement);
}


DllExport void
UIElement_OnDoubleClick (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnDoubleClick (position, screenPosition, button, buttons, qualifiers, cursor);
}


DllExport void
UIElement_OnTextInput (Urho3D::UIElement *_target, const char * text)
{
	_target->OnTextInput (Urho3D::String(text));
}


DllExport void
UIElement_OnResize (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & newSize, const class Urho3D::IntVector2 & delta)
{
	_target->OnResize (newSize, delta);
}


DllExport void
UIElement_OnPositionSet (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & newPosition)
{
	_target->OnPositionSet (newPosition);
}


DllExport void
UIElement_OnSetEditable (Urho3D::UIElement *_target)
{
	_target->OnSetEditable ();
}


DllExport void
UIElement_OnIndentSet (Urho3D::UIElement *_target)
{
	_target->OnIndentSet ();
}


DllExport Interop::IntVector2 
UIElement_ScreenToElement (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & screenPosition)
{
	return *((Interop::IntVector2  *) &(_target->ScreenToElement (screenPosition)));
}


DllExport Interop::IntVector2 
UIElement_ElementToScreen (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & position)
{
	return *((Interop::IntVector2  *) &(_target->ElementToScreen (position)));
}


DllExport int
UIElement_IsWheelHandler (Urho3D::UIElement *_target)
{
	return _target->IsWheelHandler ();
}


DllExport int
UIElement_LoadXML1_File (Urho3D::UIElement *_target, File * source)
{
	return _target->LoadXML (*source);
}


DllExport int
UIElement_LoadXML1_MemoryBuffer (Urho3D::UIElement *_target, MemoryBuffer * source)
{
	return _target->LoadXML (*source);
}


DllExport int
UIElement_SaveXML2_File (Urho3D::UIElement *_target, File * dest, const char * indentation)
{
	return _target->SaveXML (*dest, Urho3D::String(indentation));
}


DllExport int
UIElement_SaveXML2_MemoryBuffer (Urho3D::UIElement *_target, MemoryBuffer * dest, const char * indentation)
{
	return _target->SaveXML (*dest, Urho3D::String(indentation));
}


DllExport int
UIElement_FilterAttributes (Urho3D::UIElement *_target, Urho3D::XMLElement & dest)
{
	return _target->FilterAttributes (dest);
}


DllExport void
UIElement_SetName (Urho3D::UIElement *_target, const char * name)
{
	_target->SetName (Urho3D::String(name));
}


DllExport void
UIElement_SetPosition (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & position)
{
	_target->SetPosition (position);
}


DllExport void
UIElement_SetPosition3 (Urho3D::UIElement *_target, int x, int y)
{
	_target->SetPosition (x, y);
}


DllExport void
UIElement_SetSize (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & size)
{
	_target->SetSize (size);
}


DllExport void
UIElement_SetSize4 (Urho3D::UIElement *_target, int width, int height)
{
	_target->SetSize (width, height);
}


DllExport void
UIElement_SetWidth (Urho3D::UIElement *_target, int width)
{
	_target->SetWidth (width);
}


DllExport void
UIElement_SetHeight (Urho3D::UIElement *_target, int height)
{
	_target->SetHeight (height);
}


DllExport void
UIElement_SetMinSize (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & minSize)
{
	_target->SetMinSize (minSize);
}


DllExport void
UIElement_SetMinSize5 (Urho3D::UIElement *_target, int width, int height)
{
	_target->SetMinSize (width, height);
}


DllExport void
UIElement_SetMinWidth (Urho3D::UIElement *_target, int width)
{
	_target->SetMinWidth (width);
}


DllExport void
UIElement_SetMinHeight (Urho3D::UIElement *_target, int height)
{
	_target->SetMinHeight (height);
}


DllExport void
UIElement_SetMaxSize (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & maxSize)
{
	_target->SetMaxSize (maxSize);
}


DllExport void
UIElement_SetMaxSize6 (Urho3D::UIElement *_target, int width, int height)
{
	_target->SetMaxSize (width, height);
}


DllExport void
UIElement_SetMaxWidth (Urho3D::UIElement *_target, int width)
{
	_target->SetMaxWidth (width);
}


DllExport void
UIElement_SetMaxHeight (Urho3D::UIElement *_target, int height)
{
	_target->SetMaxHeight (height);
}


DllExport void
UIElement_SetFixedSize (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & size)
{
	_target->SetFixedSize (size);
}


DllExport void
UIElement_SetFixedSize7 (Urho3D::UIElement *_target, int width, int height)
{
	_target->SetFixedSize (width, height);
}


DllExport void
UIElement_SetFixedWidth (Urho3D::UIElement *_target, int width)
{
	_target->SetFixedWidth (width);
}


DllExport void
UIElement_SetFixedHeight (Urho3D::UIElement *_target, int height)
{
	_target->SetFixedHeight (height);
}


DllExport void
UIElement_SetAlignment (Urho3D::UIElement *_target, enum Urho3D::HorizontalAlignment hAlign, enum Urho3D::VerticalAlignment vAlign)
{
	_target->SetAlignment (hAlign, vAlign);
}


DllExport void
UIElement_SetHorizontalAlignment (Urho3D::UIElement *_target, enum Urho3D::HorizontalAlignment align)
{
	_target->SetHorizontalAlignment (align);
}


DllExport void
UIElement_SetVerticalAlignment (Urho3D::UIElement *_target, enum Urho3D::VerticalAlignment align)
{
	_target->SetVerticalAlignment (align);
}


DllExport void
UIElement_SetEnableAnchor (Urho3D::UIElement *_target, bool enable)
{
	_target->SetEnableAnchor (enable);
}


DllExport void
UIElement_SetMinAnchor (Urho3D::UIElement *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetMinAnchor (anchor);
}


DllExport void
UIElement_SetMinAnchor8 (Urho3D::UIElement *_target, float x, float y)
{
	_target->SetMinAnchor (x, y);
}


DllExport void
UIElement_SetMaxAnchor (Urho3D::UIElement *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetMaxAnchor (anchor);
}


DllExport void
UIElement_SetMaxAnchor9 (Urho3D::UIElement *_target, float x, float y)
{
	_target->SetMaxAnchor (x, y);
}


DllExport void
UIElement_SetMinOffset (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetMinOffset (offset);
}


DllExport void
UIElement_SetMaxOffset (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetMaxOffset (offset);
}


DllExport void
UIElement_SetPivot (Urho3D::UIElement *_target, const class Urho3D::Vector2 & pivot)
{
	_target->SetPivot (pivot);
}


DllExport void
UIElement_SetPivot10 (Urho3D::UIElement *_target, float x, float y)
{
	_target->SetPivot (x, y);
}


DllExport void
UIElement_SetClipBorder (Urho3D::UIElement *_target, const class Urho3D::IntRect & rect)
{
	_target->SetClipBorder (rect);
}


DllExport void
UIElement_SetColor (Urho3D::UIElement *_target, const class Urho3D::Color & color)
{
	_target->SetColor (color);
}


DllExport void
UIElement_SetColor11 (Urho3D::UIElement *_target, enum Urho3D::Corner corner, const class Urho3D::Color & color)
{
	_target->SetColor (corner, color);
}


DllExport void
UIElement_SetPriority (Urho3D::UIElement *_target, int priority)
{
	_target->SetPriority (priority);
}


DllExport void
UIElement_SetOpacity (Urho3D::UIElement *_target, float opacity)
{
	_target->SetOpacity (opacity);
}


DllExport void
UIElement_SetBringToFront (Urho3D::UIElement *_target, bool enable)
{
	_target->SetBringToFront (enable);
}


DllExport void
UIElement_SetBringToBack (Urho3D::UIElement *_target, bool enable)
{
	_target->SetBringToBack (enable);
}


DllExport void
UIElement_SetClipChildren (Urho3D::UIElement *_target, bool enable)
{
	_target->SetClipChildren (enable);
}


DllExport void
UIElement_SetSortChildren (Urho3D::UIElement *_target, bool enable)
{
	_target->SetSortChildren (enable);
}


DllExport void
UIElement_SetUseDerivedOpacity (Urho3D::UIElement *_target, bool enable)
{
	_target->SetUseDerivedOpacity (enable);
}


DllExport void
UIElement_SetEnabled (Urho3D::UIElement *_target, bool enable)
{
	_target->SetEnabled (enable);
}


DllExport void
UIElement_SetDeepEnabled (Urho3D::UIElement *_target, bool enable)
{
	_target->SetDeepEnabled (enable);
}


DllExport void
UIElement_ResetDeepEnabled (Urho3D::UIElement *_target)
{
	_target->ResetDeepEnabled ();
}


DllExport void
UIElement_SetEnabledRecursive (Urho3D::UIElement *_target, bool enable)
{
	_target->SetEnabledRecursive (enable);
}


DllExport void
UIElement_SetEditable (Urho3D::UIElement *_target, bool enable)
{
	_target->SetEditable (enable);
}


DllExport void
UIElement_SetFocus (Urho3D::UIElement *_target, bool enable)
{
	_target->SetFocus (enable);
}


DllExport void
UIElement_SetSelected (Urho3D::UIElement *_target, bool enable)
{
	_target->SetSelected (enable);
}


DllExport void
UIElement_SetVisible (Urho3D::UIElement *_target, bool enable)
{
	_target->SetVisible (enable);
}


DllExport void
UIElement_SetFocusMode (Urho3D::UIElement *_target, enum Urho3D::FocusMode mode)
{
	_target->SetFocusMode (mode);
}


DllExport int
UIElement_SetStyle (Urho3D::UIElement *_target, const char * styleName, Urho3D::XMLFile * file)
{
	return _target->SetStyle (Urho3D::String(styleName), file);
}


DllExport int
UIElement_SetStyle12 (Urho3D::UIElement *_target, const class Urho3D::XMLElement & element)
{
	return _target->SetStyle (element);
}


DllExport int
UIElement_SetStyleAuto (Urho3D::UIElement *_target, Urho3D::XMLFile * file)
{
	return _target->SetStyleAuto (file);
}


DllExport void
UIElement_SetDefaultStyle (Urho3D::UIElement *_target, Urho3D::XMLFile * style)
{
	_target->SetDefaultStyle (style);
}


DllExport void
UIElement_SetLayout (Urho3D::UIElement *_target, enum Urho3D::LayoutMode mode, int spacing, const class Urho3D::IntRect & border)
{
	_target->SetLayout (mode, spacing, border);
}


DllExport void
UIElement_SetLayoutMode (Urho3D::UIElement *_target, enum Urho3D::LayoutMode mode)
{
	_target->SetLayoutMode (mode);
}


DllExport void
UIElement_SetLayoutSpacing (Urho3D::UIElement *_target, int spacing)
{
	_target->SetLayoutSpacing (spacing);
}


DllExport void
UIElement_SetLayoutBorder (Urho3D::UIElement *_target, const class Urho3D::IntRect & border)
{
	_target->SetLayoutBorder (border);
}


DllExport void
UIElement_SetLayoutFlexScale (Urho3D::UIElement *_target, const class Urho3D::Vector2 & scale)
{
	_target->SetLayoutFlexScale (scale);
}


DllExport void
UIElement_SetIndent (Urho3D::UIElement *_target, int indent)
{
	_target->SetIndent (indent);
}


DllExport void
UIElement_SetIndentSpacing (Urho3D::UIElement *_target, int indentSpacing)
{
	_target->SetIndentSpacing (indentSpacing);
}


DllExport void
UIElement_UpdateLayout (Urho3D::UIElement *_target)
{
	_target->UpdateLayout ();
}


DllExport void
UIElement_DisableLayoutUpdate (Urho3D::UIElement *_target)
{
	_target->DisableLayoutUpdate ();
}


DllExport void
UIElement_EnableLayoutUpdate (Urho3D::UIElement *_target)
{
	_target->EnableLayoutUpdate ();
}


DllExport void
UIElement_BringToFront (Urho3D::UIElement *_target)
{
	_target->BringToFront ();
}


DllExport Urho3D::UIElement *
UIElement_CreateChild (Urho3D::UIElement *_target, int type, const char * name, unsigned int index)
{
	return _target->CreateChild (Urho3D::StringHash(type), Urho3D::String(name), index);
}


DllExport void
UIElement_AddChild (Urho3D::UIElement *_target, Urho3D::UIElement * element)
{
	_target->AddChild (element);
}


DllExport void
UIElement_InsertChild (Urho3D::UIElement *_target, unsigned int index, Urho3D::UIElement * element)
{
	_target->InsertChild (index, element);
}


DllExport void
UIElement_RemoveChild (Urho3D::UIElement *_target, Urho3D::UIElement * element, unsigned int index)
{
	_target->RemoveChild (element, index);
}


DllExport void
UIElement_RemoveChildAtIndex (Urho3D::UIElement *_target, unsigned int index)
{
	_target->RemoveChildAtIndex (index);
}


DllExport void
UIElement_RemoveAllChildren (Urho3D::UIElement *_target)
{
	_target->RemoveAllChildren ();
}


DllExport void
UIElement_Remove (Urho3D::UIElement *_target)
{
	_target->Remove ();
}


DllExport unsigned int
UIElement_FindChild (Urho3D::UIElement *_target, Urho3D::UIElement * element)
{
	return _target->FindChild (element);
}


DllExport void
UIElement_SetParent (Urho3D::UIElement *_target, Urho3D::UIElement * parent, unsigned int index)
{
	_target->SetParent (parent, index);
}


// Urho3D::Variant overloads begin:
DllExport void
UIElement_SetVar_0 (Urho3D::UIElement *_target, int key, const class Urho3D::Vector3 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_1 (Urho3D::UIElement *_target, int key, const class Urho3D::IntRect & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_2 (Urho3D::UIElement *_target, int key, const class Urho3D::Color & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_3 (Urho3D::UIElement *_target, int key, const class Urho3D::Vector2 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_4 (Urho3D::UIElement *_target, int key, const class Urho3D::Vector4 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_5 (Urho3D::UIElement *_target, int key, const class Urho3D::IntVector2 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_6 (Urho3D::UIElement *_target, int key, const class Urho3D::Quaternion & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_7 (Urho3D::UIElement *_target, int key, const class Urho3D::Matrix4 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_8 (Urho3D::UIElement *_target, int key, const class Urho3D::Matrix3x4 & value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_9 (Urho3D::UIElement *_target, int key, int value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_10 (Urho3D::UIElement *_target, int key, float value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

DllExport void
UIElement_SetVar_11 (Urho3D::UIElement *_target, int key, const char * value)
{
	_target->SetVar (Urho3D::StringHash(key), Urho3D::String(value));
}

DllExport void
UIElement_SetVar_12 (Urho3D::UIElement *_target, int key, bool value)
{
	_target->SetVar (Urho3D::StringHash(key), (value));
}

// Urho3D::Variant overloads end.
DllExport void
UIElement_SetInternal (Urho3D::UIElement *_target, bool enable)
{
	_target->SetInternal (enable);
}


DllExport void
UIElement_SetTraversalMode (Urho3D::UIElement *_target, enum Urho3D::TraversalMode traversalMode)
{
	_target->SetTraversalMode (traversalMode);
}


DllExport void
UIElement_SetElementEventSender (Urho3D::UIElement *_target, bool flag)
{
	_target->SetElementEventSender (flag);
}


DllExport void
UIElement_AddTag (Urho3D::UIElement *_target, const char * tag)
{
	_target->AddTag (Urho3D::String(tag));
}


DllExport int
UIElement_RemoveTag (Urho3D::UIElement *_target, const char * tag)
{
	return _target->RemoveTag (Urho3D::String(tag));
}


DllExport void
UIElement_RemoveAllTags (Urho3D::UIElement *_target)
{
	_target->RemoveAllTags ();
}


DllExport const char *
UIElement_GetName (Urho3D::UIElement *_target)
{
	return stringdup((_target->GetName ()).CString ());
}


DllExport Interop::IntVector2 
UIElement_GetPosition (Urho3D::UIElement *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetPosition ()));
}


DllExport Interop::IntVector2 
UIElement_GetSize (Urho3D::UIElement *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetSize ()));
}


DllExport int
UIElement_GetWidth (Urho3D::UIElement *_target)
{
	return _target->GetWidth ();
}


DllExport int
UIElement_GetHeight (Urho3D::UIElement *_target)
{
	return _target->GetHeight ();
}


DllExport Interop::IntVector2 
UIElement_GetMinSize (Urho3D::UIElement *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetMinSize ()));
}


DllExport int
UIElement_GetMinWidth (Urho3D::UIElement *_target)
{
	return _target->GetMinWidth ();
}


DllExport int
UIElement_GetMinHeight (Urho3D::UIElement *_target)
{
	return _target->GetMinHeight ();
}


DllExport Interop::IntVector2 
UIElement_GetMaxSize (Urho3D::UIElement *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetMaxSize ()));
}


DllExport int
UIElement_GetMaxWidth (Urho3D::UIElement *_target)
{
	return _target->GetMaxWidth ();
}


DllExport int
UIElement_GetMaxHeight (Urho3D::UIElement *_target)
{
	return _target->GetMaxHeight ();
}


DllExport int
UIElement_IsFixedSize (Urho3D::UIElement *_target)
{
	return _target->IsFixedSize ();
}


DllExport int
UIElement_IsFixedWidth (Urho3D::UIElement *_target)
{
	return _target->IsFixedWidth ();
}


DllExport int
UIElement_IsFixedHeight (Urho3D::UIElement *_target)
{
	return _target->IsFixedHeight ();
}


DllExport Interop::IntVector2 
UIElement_GetChildOffset (Urho3D::UIElement *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetChildOffset ()));
}


DllExport enum Urho3D::HorizontalAlignment
UIElement_GetHorizontalAlignment (Urho3D::UIElement *_target)
{
	return _target->GetHorizontalAlignment ();
}


DllExport enum Urho3D::VerticalAlignment
UIElement_GetVerticalAlignment (Urho3D::UIElement *_target)
{
	return _target->GetVerticalAlignment ();
}


DllExport int
UIElement_GetEnableAnchor (Urho3D::UIElement *_target)
{
	return _target->GetEnableAnchor ();
}


DllExport Interop::Vector2 
UIElement_GetMinAnchor (Urho3D::UIElement *_target)
{
	return *((Interop::Vector2  *) &(_target->GetMinAnchor ()));
}


DllExport Interop::Vector2 
UIElement_GetMaxAnchor (Urho3D::UIElement *_target)
{
	return *((Interop::Vector2  *) &(_target->GetMaxAnchor ()));
}


DllExport Interop::IntVector2 
UIElement_GetMinOffset (Urho3D::UIElement *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetMinOffset ()));
}


DllExport Interop::IntVector2 
UIElement_GetMaxOffset (Urho3D::UIElement *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetMaxOffset ()));
}


DllExport Interop::Vector2 
UIElement_GetPivot (Urho3D::UIElement *_target)
{
	return *((Interop::Vector2  *) &(_target->GetPivot ()));
}


DllExport Interop::IntRect 
UIElement_GetClipBorder (Urho3D::UIElement *_target)
{
	return *((Interop::IntRect  *) &(_target->GetClipBorder ()));
}


DllExport Interop::Color 
UIElement_GetColor (Urho3D::UIElement *_target, enum Urho3D::Corner corner)
{
	return *((Interop::Color  *) &(_target->GetColor (corner)));
}


DllExport int
UIElement_GetPriority (Urho3D::UIElement *_target)
{
	return _target->GetPriority ();
}


DllExport float
UIElement_GetOpacity (Urho3D::UIElement *_target)
{
	return _target->GetOpacity ();
}


DllExport float
UIElement_GetDerivedOpacity (Urho3D::UIElement *_target)
{
	return _target->GetDerivedOpacity ();
}


DllExport int
UIElement_GetBringToFront (Urho3D::UIElement *_target)
{
	return _target->GetBringToFront ();
}


DllExport int
UIElement_GetBringToBack (Urho3D::UIElement *_target)
{
	return _target->GetBringToBack ();
}


DllExport int
UIElement_GetClipChildren (Urho3D::UIElement *_target)
{
	return _target->GetClipChildren ();
}


DllExport int
UIElement_GetSortChildren (Urho3D::UIElement *_target)
{
	return _target->GetSortChildren ();
}


DllExport int
UIElement_GetUseDerivedOpacity (Urho3D::UIElement *_target)
{
	return _target->GetUseDerivedOpacity ();
}


DllExport int
UIElement_HasFocus (Urho3D::UIElement *_target)
{
	return _target->HasFocus ();
}


DllExport int
UIElement_IsChildOf (Urho3D::UIElement *_target, Urho3D::UIElement * element)
{
	return _target->IsChildOf (element);
}


DllExport int
UIElement_IsEnabled (Urho3D::UIElement *_target)
{
	return _target->IsEnabled ();
}


DllExport int
UIElement_IsEnabledSelf (Urho3D::UIElement *_target)
{
	return _target->IsEnabledSelf ();
}


DllExport int
UIElement_IsEditable (Urho3D::UIElement *_target)
{
	return _target->IsEditable ();
}


DllExport int
UIElement_IsSelected (Urho3D::UIElement *_target)
{
	return _target->IsSelected ();
}


DllExport int
UIElement_IsVisible (Urho3D::UIElement *_target)
{
	return _target->IsVisible ();
}


DllExport int
UIElement_IsVisibleEffective (Urho3D::UIElement *_target)
{
	return _target->IsVisibleEffective ();
}


DllExport int
UIElement_IsHovering (Urho3D::UIElement *_target)
{
	return _target->IsHovering ();
}


DllExport int
UIElement_IsInternal (Urho3D::UIElement *_target)
{
	return _target->IsInternal ();
}


DllExport int
UIElement_HasColorGradient (Urho3D::UIElement *_target)
{
	return _target->HasColorGradient ();
}


DllExport enum Urho3D::FocusMode
UIElement_GetFocusMode (Urho3D::UIElement *_target)
{
	return _target->GetFocusMode ();
}


DllExport const char *
UIElement_GetAppliedStyle (Urho3D::UIElement *_target)
{
	return stringdup((_target->GetAppliedStyle ()).CString ());
}


DllExport Urho3D::XMLFile *
UIElement_GetDefaultStyle (Urho3D::UIElement *_target, bool recursiveUp)
{
	return _target->GetDefaultStyle (recursiveUp);
}


DllExport enum Urho3D::LayoutMode
UIElement_GetLayoutMode (Urho3D::UIElement *_target)
{
	return _target->GetLayoutMode ();
}


DllExport int
UIElement_GetLayoutSpacing (Urho3D::UIElement *_target)
{
	return _target->GetLayoutSpacing ();
}


DllExport Interop::IntRect 
UIElement_GetLayoutBorder (Urho3D::UIElement *_target)
{
	return *((Interop::IntRect  *) &(_target->GetLayoutBorder ()));
}


DllExport Interop::Vector2 
UIElement_GetLayoutFlexScale (Urho3D::UIElement *_target)
{
	return *((Interop::Vector2  *) &(_target->GetLayoutFlexScale ()));
}


DllExport unsigned int
UIElement_GetNumChildren (Urho3D::UIElement *_target, bool recursive)
{
	return _target->GetNumChildren (recursive);
}


DllExport Urho3D::UIElement *
UIElement_GetChild (Urho3D::UIElement *_target, unsigned int index)
{
	return _target->GetChild (index);
}


DllExport Urho3D::UIElement *
UIElement_GetChild13 (Urho3D::UIElement *_target, const char * name, bool recursive)
{
	return _target->GetChild (Urho3D::String(name), recursive);
}


DllExport const Vector<SharedPtr<class Urho3D::UIElement> > &
UIElement_GetChildren (Urho3D::UIElement *_target)
{
	return _target->GetChildren ();
}


DllExport Urho3D::UIElement *
UIElement_GetParent (Urho3D::UIElement *_target)
{
	return _target->GetParent ();
}


DllExport Urho3D::UIElement *
UIElement_GetRoot (Urho3D::UIElement *_target)
{
	return _target->GetRoot ();
}


DllExport Interop::Color 
UIElement_GetDerivedColor (Urho3D::UIElement *_target)
{
	return *((Interop::Color  *) &(_target->GetDerivedColor ()));
}


DllExport int
UIElement_HasTag (Urho3D::UIElement *_target, const char * tag)
{
	return _target->HasTag (Urho3D::String(tag));
}


DllExport int
UIElement_GetDragButtonCombo (Urho3D::UIElement *_target)
{
	return _target->GetDragButtonCombo ();
}


DllExport unsigned int
UIElement_GetDragButtonCount (Urho3D::UIElement *_target)
{
	return _target->GetDragButtonCount ();
}


DllExport int
UIElement_IsInside (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & position, bool isScreen)
{
	return _target->IsInside (position, isScreen);
}


DllExport int
UIElement_IsInsideCombined (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & position, bool isScreen)
{
	return _target->IsInsideCombined (position, isScreen);
}


DllExport Interop::IntRect 
UIElement_GetCombinedScreenRect (Urho3D::UIElement *_target)
{
	return *((Interop::IntRect  *) &(_target->GetCombinedScreenRect ()));
}


DllExport void
UIElement_SortChildren (Urho3D::UIElement *_target)
{
	_target->SortChildren ();
}


DllExport int
UIElement_GetLayoutElementMaxSize (Urho3D::UIElement *_target)
{
	return _target->GetLayoutElementMaxSize ();
}


DllExport int
UIElement_GetIndent (Urho3D::UIElement *_target)
{
	return _target->GetIndent ();
}


DllExport int
UIElement_GetIndentSpacing (Urho3D::UIElement *_target)
{
	return _target->GetIndentSpacing ();
}


DllExport int
UIElement_GetIndentWidth (Urho3D::UIElement *_target)
{
	return _target->GetIndentWidth ();
}


DllExport void
UIElement_SetChildOffset (Urho3D::UIElement *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetChildOffset (offset);
}


DllExport void
UIElement_SetHovering (Urho3D::UIElement *_target, bool enable)
{
	_target->SetHovering (enable);
}


DllExport Interop::Color 
UIElement_GetColorAttr (Urho3D::UIElement *_target)
{
	return *((Interop::Color  *) &(_target->GetColorAttr ()));
}


DllExport enum Urho3D::TraversalMode
UIElement_GetTraversalMode (Urho3D::UIElement *_target)
{
	return _target->GetTraversalMode ();
}


DllExport int
UIElement_IsElementEventSender (Urho3D::UIElement *_target)
{
	return _target->IsElementEventSender ();
}


DllExport Urho3D::UIElement *
UIElement_GetElementEventSender (Urho3D::UIElement *_target)
{
	return _target->GetElementEventSender ();
}


DllExport Interop::IntVector2 
UIElement_GetEffectiveMinSize (Urho3D::UIElement *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetEffectiveMinSize ()));
}


DllExport void
UIElement_SetRenderTexture (Urho3D::UIElement *_target, Urho3D::Texture2D * texture)
{
	_target->SetRenderTexture (texture);
}


DllExport int
BorderImage_GetType (Urho3D::BorderImage *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
BorderImage_GetTypeName (Urho3D::BorderImage *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
BorderImage_GetTypeStatic ()
{
	return (BorderImage::GetTypeStatic ()).Value ();
}


DllExport const char *
BorderImage_GetTypeNameStatic ()
{
	return stringdup((BorderImage::GetTypeNameStatic ()).CString ());
}


DllExport void *
BorderImage_BorderImage (Urho3D::Context * context)
{
	return WeakPtr<BorderImage>(new BorderImage(context));
}


DllExport void
BorderImage_RegisterObject (Urho3D::Context * context)
{
	BorderImage::RegisterObject (context);
}


DllExport void
BorderImage_SetTexture (Urho3D::BorderImage *_target, Urho3D::Texture * texture)
{
	_target->SetTexture (texture);
}


DllExport void
BorderImage_SetImageRect (Urho3D::BorderImage *_target, const class Urho3D::IntRect & rect)
{
	_target->SetImageRect (rect);
}


DllExport void
BorderImage_SetFullImageRect (Urho3D::BorderImage *_target)
{
	_target->SetFullImageRect ();
}


DllExport void
BorderImage_SetBorder (Urho3D::BorderImage *_target, const class Urho3D::IntRect & rect)
{
	_target->SetBorder (rect);
}


DllExport void
BorderImage_SetImageBorder (Urho3D::BorderImage *_target, const class Urho3D::IntRect & rect)
{
	_target->SetImageBorder (rect);
}


DllExport void
BorderImage_SetHoverOffset (Urho3D::BorderImage *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetHoverOffset (offset);
}


DllExport void
BorderImage_SetHoverOffset0 (Urho3D::BorderImage *_target, int x, int y)
{
	_target->SetHoverOffset (x, y);
}


DllExport void
BorderImage_SetDisabledOffset (Urho3D::BorderImage *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetDisabledOffset (offset);
}


DllExport void
BorderImage_SetDisabledOffset1 (Urho3D::BorderImage *_target, int x, int y)
{
	_target->SetDisabledOffset (x, y);
}


DllExport void
BorderImage_SetBlendMode (Urho3D::BorderImage *_target, enum Urho3D::BlendMode mode)
{
	_target->SetBlendMode (mode);
}


DllExport void
BorderImage_SetTiled (Urho3D::BorderImage *_target, bool enable)
{
	_target->SetTiled (enable);
}


DllExport void
BorderImage_SetMaterial (Urho3D::BorderImage *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport Urho3D::Texture *
BorderImage_GetTexture (Urho3D::BorderImage *_target)
{
	return _target->GetTexture ();
}


DllExport Interop::IntRect 
BorderImage_GetImageRect (Urho3D::BorderImage *_target)
{
	return *((Interop::IntRect  *) &(_target->GetImageRect ()));
}


DllExport Interop::IntRect 
BorderImage_GetBorder (Urho3D::BorderImage *_target)
{
	return *((Interop::IntRect  *) &(_target->GetBorder ()));
}


DllExport Interop::IntRect 
BorderImage_GetImageBorder (Urho3D::BorderImage *_target)
{
	return *((Interop::IntRect  *) &(_target->GetImageBorder ()));
}


DllExport Interop::IntVector2 
BorderImage_GetHoverOffset (Urho3D::BorderImage *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetHoverOffset ()));
}


DllExport Interop::IntVector2 
BorderImage_GetDisabledOffset (Urho3D::BorderImage *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetDisabledOffset ()));
}


DllExport enum Urho3D::BlendMode
BorderImage_GetBlendMode (Urho3D::BorderImage *_target)
{
	return _target->GetBlendMode ();
}


DllExport int
BorderImage_IsTiled (Urho3D::BorderImage *_target)
{
	return _target->IsTiled ();
}


DllExport Urho3D::Material *
BorderImage_GetMaterial (Urho3D::BorderImage *_target)
{
	return _target->GetMaterial ();
}


DllExport Urho3D::ResourceRef
BorderImage_GetTextureAttr (Urho3D::BorderImage *_target)
{
	return _target->GetTextureAttr ();
}


DllExport Urho3D::ResourceRef
BorderImage_GetMaterialAttr (Urho3D::BorderImage *_target)
{
	return _target->GetMaterialAttr ();
}


DllExport int
Cursor_GetType (Urho3D::Cursor *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Cursor_GetTypeName (Urho3D::Cursor *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Cursor_GetTypeStatic ()
{
	return (Cursor::GetTypeStatic ()).Value ();
}


DllExport const char *
Cursor_GetTypeNameStatic ()
{
	return stringdup((Cursor::GetTypeNameStatic ()).CString ());
}


DllExport void *
Cursor_Cursor (Urho3D::Context * context)
{
	return WeakPtr<Cursor>(new Cursor(context));
}


DllExport void
Cursor_RegisterObject (Urho3D::Context * context)
{
	Cursor::RegisterObject (context);
}


DllExport void
Cursor_DefineShape (Urho3D::Cursor *_target, const char * shape, Urho3D::Image * image, const class Urho3D::IntRect & imageRect, const class Urho3D::IntVector2 & hotSpot)
{
	_target->DefineShape (Urho3D::String(shape), image, imageRect, hotSpot);
}


DllExport void
Cursor_DefineShape0 (Urho3D::Cursor *_target, enum Urho3D::CursorShape shape, Urho3D::Image * image, const class Urho3D::IntRect & imageRect, const class Urho3D::IntVector2 & hotSpot)
{
	_target->DefineShape (shape, image, imageRect, hotSpot);
}


DllExport void
Cursor_SetShape (Urho3D::Cursor *_target, const char * shape)
{
	_target->SetShape (Urho3D::String(shape));
}


DllExport void
Cursor_SetShape1 (Urho3D::Cursor *_target, enum Urho3D::CursorShape shape)
{
	_target->SetShape (shape);
}


DllExport void
Cursor_SetUseSystemShapes (Urho3D::Cursor *_target, bool enable)
{
	_target->SetUseSystemShapes (enable);
}


DllExport const char *
Cursor_GetShape (Urho3D::Cursor *_target)
{
	return stringdup((_target->GetShape ()).CString ());
}


DllExport int
Cursor_GetUseSystemShapes (Urho3D::Cursor *_target)
{
	return _target->GetUseSystemShapes ();
}


DllExport void
Cursor_ApplyOSCursorShape (Urho3D::Cursor *_target)
{
	_target->ApplyOSCursorShape ();
}


DllExport int
Input_GetType (Urho3D::Input *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Input_GetTypeName (Urho3D::Input *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Input_GetTypeStatic ()
{
	return (Input::GetTypeStatic ()).Value ();
}


DllExport const char *
Input_GetTypeNameStatic ()
{
	return stringdup((Input::GetTypeNameStatic ()).CString ());
}


DllExport void *
Input_Input (Urho3D::Context * context)
{
	return WeakPtr<Input>(new Input(context));
}


DllExport void
Input_Update (Urho3D::Input *_target)
{
	_target->Update ();
}


DllExport void
Input_SetToggleFullscreen (Urho3D::Input *_target, bool enable)
{
	_target->SetToggleFullscreen (enable);
}


DllExport void
Input_SetMouseVisible (Urho3D::Input *_target, bool enable, bool suppressEvent)
{
	_target->SetMouseVisible (enable, suppressEvent);
}


DllExport void
Input_ResetMouseVisible (Urho3D::Input *_target)
{
	_target->ResetMouseVisible ();
}


DllExport void
Input_SetMouseGrabbed (Urho3D::Input *_target, bool grab, bool suppressEvent)
{
	_target->SetMouseGrabbed (grab, suppressEvent);
}


DllExport void
Input_ResetMouseGrabbed (Urho3D::Input *_target)
{
	_target->ResetMouseGrabbed ();
}


DllExport void
Input_SetMouseMode (Urho3D::Input *_target, enum Urho3D::MouseMode mode, bool suppressEvent)
{
	_target->SetMouseMode (mode, suppressEvent);
}


DllExport void
Input_ResetMouseMode (Urho3D::Input *_target)
{
	_target->ResetMouseMode ();
}


DllExport SDL_JoystickID
Input_AddScreenJoystick (Urho3D::Input *_target, Urho3D::XMLFile * layoutFile, Urho3D::XMLFile * styleFile)
{
	return _target->AddScreenJoystick (layoutFile, styleFile);
}


DllExport int
Input_RemoveScreenJoystick (Urho3D::Input *_target, SDL_JoystickID id)
{
	return _target->RemoveScreenJoystick (id);
}


DllExport void
Input_SetScreenJoystickVisible (Urho3D::Input *_target, SDL_JoystickID id, bool enable)
{
	_target->SetScreenJoystickVisible (id, enable);
}


DllExport void
Input_SetScreenKeyboardVisible (Urho3D::Input *_target, bool enable)
{
	_target->SetScreenKeyboardVisible (enable);
}


DllExport void
Input_SetTouchEmulation (Urho3D::Input *_target, bool enable)
{
	_target->SetTouchEmulation (enable);
}


DllExport void
Input_SetEnabled (Urho3D::Input *_target, bool enable)
{
	_target->SetEnabled (enable);
}


DllExport int
Input_RecordGesture (Urho3D::Input *_target)
{
	return _target->RecordGesture ();
}


DllExport int
Input_SaveGestures_File (Urho3D::Input *_target, File * dest)
{
	return _target->SaveGestures (*dest);
}


DllExport int
Input_SaveGestures_MemoryBuffer (Urho3D::Input *_target, MemoryBuffer * dest)
{
	return _target->SaveGestures (*dest);
}


DllExport int
Input_SaveGesture_File (Urho3D::Input *_target, File * dest, unsigned int gestureID)
{
	return _target->SaveGesture (*dest, gestureID);
}


DllExport int
Input_SaveGesture_MemoryBuffer (Urho3D::Input *_target, MemoryBuffer * dest, unsigned int gestureID)
{
	return _target->SaveGesture (*dest, gestureID);
}


DllExport unsigned int
Input_LoadGestures_File (Urho3D::Input *_target, File * source)
{
	return _target->LoadGestures (*source);
}


DllExport unsigned int
Input_LoadGestures_MemoryBuffer (Urho3D::Input *_target, MemoryBuffer * source)
{
	return _target->LoadGestures (*source);
}


DllExport int
Input_RemoveGesture (Urho3D::Input *_target, unsigned int gestureID)
{
	return _target->RemoveGesture (gestureID);
}


DllExport void
Input_RemoveAllGestures (Urho3D::Input *_target)
{
	_target->RemoveAllGestures ();
}


DllExport void
Input_SetMousePosition (Urho3D::Input *_target, const class Urho3D::IntVector2 & position)
{
	_target->SetMousePosition (position);
}


DllExport void
Input_CenterMousePosition (Urho3D::Input *_target)
{
	_target->CenterMousePosition ();
}


DllExport enum Urho3D::Key
Input_GetKeyFromName (Urho3D::Input *_target, const char * name)
{
	return _target->GetKeyFromName (Urho3D::String(name));
}


DllExport enum Urho3D::Key
Input_GetKeyFromScancode (Urho3D::Input *_target, enum Urho3D::Scancode scancode)
{
	return _target->GetKeyFromScancode (scancode);
}


DllExport const char *
Input_GetKeyName (Urho3D::Input *_target, enum Urho3D::Key key)
{
	return stringdup((_target->GetKeyName (key)).CString ());
}


DllExport enum Urho3D::Scancode
Input_GetScancodeFromKey (Urho3D::Input *_target, enum Urho3D::Key key)
{
	return _target->GetScancodeFromKey (key);
}


DllExport enum Urho3D::Scancode
Input_GetScancodeFromName (Urho3D::Input *_target, const char * name)
{
	return _target->GetScancodeFromName (Urho3D::String(name));
}


DllExport const char *
Input_GetScancodeName (Urho3D::Input *_target, enum Urho3D::Scancode scancode)
{
	return stringdup((_target->GetScancodeName (scancode)).CString ());
}


DllExport int
Input_GetKeyDown (Urho3D::Input *_target, enum Urho3D::Key key)
{
	return _target->GetKeyDown (key);
}


DllExport int
Input_GetKeyPress (Urho3D::Input *_target, enum Urho3D::Key key)
{
	return _target->GetKeyPress (key);
}


DllExport int
Input_GetScancodeDown (Urho3D::Input *_target, enum Urho3D::Scancode scancode)
{
	return _target->GetScancodeDown (scancode);
}


DllExport int
Input_GetScancodePress (Urho3D::Input *_target, enum Urho3D::Scancode scancode)
{
	return _target->GetScancodePress (scancode);
}


DllExport int
Input_GetMouseButtonDown(Urho3D::Input *_target, int button)
{
	return _target->GetMouseButtonDown((MouseButtonFlags)button);
}


DllExport int
Input_GetMouseButtonPress(Urho3D::Input *_target, int button)
{
	return _target->GetMouseButtonPress((MouseButtonFlags)button);
}


DllExport int
Input_GetQualifierDown (Urho3D::Input *_target, enum Urho3D::Qualifier qualifier)
{
	return _target->GetQualifierDown (qualifier);
}


DllExport int
Input_GetQualifierPress (Urho3D::Input *_target, enum Urho3D::Qualifier qualifier)
{
	return _target->GetQualifierPress (qualifier);
}


DllExport Interop::IntVector2 
Input_GetMousePosition (Urho3D::Input *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetMousePosition ()));
}


DllExport Interop::IntVector2 
Input_GetMouseMove (Urho3D::Input *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetMouseMove ()));
}


DllExport int
Input_GetMouseMoveX (Urho3D::Input *_target)
{
	return _target->GetMouseMoveX ();
}


DllExport int
Input_GetMouseMoveY (Urho3D::Input *_target)
{
	return _target->GetMouseMoveY ();
}


DllExport int
Input_GetMouseMoveWheel (Urho3D::Input *_target)
{
	return _target->GetMouseMoveWheel ();
}


DllExport Interop::Vector2 
Input_GetInputScale (Urho3D::Input *_target)
{
	return *((Interop::Vector2  *) &(_target->GetInputScale ()));
}


DllExport unsigned int
Input_GetNumTouches (Urho3D::Input *_target)
{
	return _target->GetNumTouches ();
}


DllExport Urho3D::TouchState *
Input_GetTouch (Urho3D::Input *_target, unsigned int index)
{
	return _target->GetTouch (index);
}


DllExport unsigned int
Input_GetNumJoysticks (Urho3D::Input *_target)
{
	return _target->GetNumJoysticks ();
}


DllExport Urho3D::JoystickState *
Input_GetJoystick (Urho3D::Input *_target, SDL_JoystickID id)
{
	return _target->GetJoystick (id);
}


DllExport Urho3D::JoystickState *
Input_GetJoystickByIndex (Urho3D::Input *_target, unsigned int index)
{
	return _target->GetJoystickByIndex (index);
}


DllExport Urho3D::JoystickState *
Input_GetJoystickByName (Urho3D::Input *_target, const char * name)
{
	return _target->GetJoystickByName (Urho3D::String(name));
}


DllExport int
Input_GetToggleFullscreen (Urho3D::Input *_target)
{
	return _target->GetToggleFullscreen ();
}


DllExport int
Input_IsScreenJoystickVisible (Urho3D::Input *_target, SDL_JoystickID id)
{
	return _target->IsScreenJoystickVisible (id);
}


DllExport int
Input_GetScreenKeyboardSupport (Urho3D::Input *_target)
{
	return _target->GetScreenKeyboardSupport ();
}


DllExport int
Input_IsScreenKeyboardVisible (Urho3D::Input *_target)
{
	return _target->IsScreenKeyboardVisible ();
}


DllExport int
Input_GetTouchEmulation (Urho3D::Input *_target)
{
	return _target->GetTouchEmulation ();
}


DllExport int
Input_IsMouseVisible (Urho3D::Input *_target)
{
	return _target->IsMouseVisible ();
}


DllExport int
Input_IsMouseGrabbed (Urho3D::Input *_target)
{
	return _target->IsMouseGrabbed ();
}


DllExport int
Input_IsMouseLocked (Urho3D::Input *_target)
{
	return _target->IsMouseLocked ();
}


DllExport enum Urho3D::MouseMode
Input_GetMouseMode (Urho3D::Input *_target)
{
	return _target->GetMouseMode ();
}


DllExport int
Input_HasFocus (Urho3D::Input *_target)
{
	return _target->HasFocus ();
}


DllExport int
Input_IsEnabled (Urho3D::Input *_target)
{
	return _target->IsEnabled ();
}


DllExport int
Input_IsMinimized (Urho3D::Input *_target)
{
	return _target->IsMinimized ();
}


DllExport void *
AreaAllocator_AreaAllocator ()
{
	return new AreaAllocator();
}


DllExport void *
AreaAllocator_AreaAllocator0 (int width, int height, bool fastMode)
{
	return new AreaAllocator(width, height, fastMode);
}


DllExport void *
AreaAllocator_AreaAllocator1 (int width, int height, int maxWidth, int maxHeight, bool fastMode)
{
	return new AreaAllocator(width, height, maxWidth, maxHeight, fastMode);
}


DllExport void
AreaAllocator_Reset (Urho3D::AreaAllocator *_target, int width, int height, int maxWidth, int maxHeight, bool fastMode)
{
	_target->Reset (width, height, maxWidth, maxHeight, fastMode);
}


DllExport int
AreaAllocator_Allocate (Urho3D::AreaAllocator *_target, int width, int height, int & x, int & y)
{
	return _target->Allocate (width, height, x, y);
}


DllExport int
AreaAllocator_GetWidth (Urho3D::AreaAllocator *_target)
{
	return _target->GetWidth ();
}


DllExport int
AreaAllocator_GetHeight (Urho3D::AreaAllocator *_target)
{
	return _target->GetHeight ();
}


DllExport int
AreaAllocator_GetFastMode (Urho3D::AreaAllocator *_target)
{
	return _target->GetFastMode ();
}


DllExport int
CrowdManager_GetType (Urho3D::CrowdManager *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CrowdManager_GetTypeName (Urho3D::CrowdManager *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CrowdManager_GetTypeStatic ()
{
	return (CrowdManager::GetTypeStatic ()).Value ();
}


DllExport const char *
CrowdManager_GetTypeNameStatic ()
{
	return stringdup((CrowdManager::GetTypeNameStatic ()).CString ());
}


DllExport void *
CrowdManager_CrowdManager (Urho3D::Context * context)
{
	return WeakPtr<CrowdManager>(new CrowdManager(context));
}


DllExport void
CrowdManager_RegisterObject (Urho3D::Context * context)
{
	CrowdManager::RegisterObject (context);
}


DllExport void
CrowdManager_ApplyAttributes (Urho3D::CrowdManager *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
CrowdManager_DrawDebugGeometry (Urho3D::CrowdManager *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
CrowdManager_DrawDebugGeometry0 (Urho3D::CrowdManager *_target, bool depthTest)
{
	_target->DrawDebugGeometry (depthTest);
}


DllExport void
CrowdManager_SetCrowdTarget (Urho3D::CrowdManager *_target, const class Urho3D::Vector3 & position, Urho3D::Node * node)
{
	_target->SetCrowdTarget (position, node);
}


DllExport void
CrowdManager_SetCrowdVelocity (Urho3D::CrowdManager *_target, const class Urho3D::Vector3 & velocity, Urho3D::Node * node)
{
	_target->SetCrowdVelocity (velocity, node);
}


DllExport void
CrowdManager_ResetCrowdTarget (Urho3D::CrowdManager *_target, Urho3D::Node * node)
{
	_target->ResetCrowdTarget (node);
}


DllExport void
CrowdManager_SetMaxAgents (Urho3D::CrowdManager *_target, unsigned int maxAgents)
{
	_target->SetMaxAgents (maxAgents);
}


DllExport void
CrowdManager_SetMaxAgentRadius (Urho3D::CrowdManager *_target, float maxAgentRadius)
{
	_target->SetMaxAgentRadius (maxAgentRadius);
}


DllExport void
CrowdManager_SetNavigationMesh (Urho3D::CrowdManager *_target, Urho3D::NavigationMesh * navMesh)
{
	_target->SetNavigationMesh (navMesh);
}


DllExport void
CrowdManager_SetIncludeFlags (Urho3D::CrowdManager *_target, unsigned int queryFilterType, unsigned short flags)
{
	_target->SetIncludeFlags (queryFilterType, flags);
}


DllExport void
CrowdManager_SetExcludeFlags (Urho3D::CrowdManager *_target, unsigned int queryFilterType, unsigned short flags)
{
	_target->SetExcludeFlags (queryFilterType, flags);
}


DllExport void
CrowdManager_SetAreaCost (Urho3D::CrowdManager *_target, unsigned int queryFilterType, unsigned int areaID, float cost)
{
	_target->SetAreaCost (queryFilterType, areaID, cost);
}


DllExport void
CrowdManager_SetObstacleAvoidanceParams (Urho3D::CrowdManager *_target, unsigned int obstacleAvoidanceType, const struct Urho3D::CrowdObstacleAvoidanceParams & params)
{
	_target->SetObstacleAvoidanceParams (obstacleAvoidanceType, params);
}


DllExport Interop::Vector3 
CrowdManager_FindNearestPoint (Urho3D::CrowdManager *_target, const class Urho3D::Vector3 & point, int queryFilterType, dtPolyRef * nearestRef)
{
	return *((Interop::Vector3  *) &(_target->FindNearestPoint (point, queryFilterType, nearestRef)));
}


DllExport Interop::Vector3 
CrowdManager_MoveAlongSurface (Urho3D::CrowdManager *_target, const class Urho3D::Vector3 & start, const class Urho3D::Vector3 & end, int queryFilterType, int maxVisited)
{
	return *((Interop::Vector3  *) &(_target->MoveAlongSurface (start, end, queryFilterType, maxVisited)));
}


DllExport Interop::Vector3 
CrowdManager_GetRandomPoint (Urho3D::CrowdManager *_target, int queryFilterType, dtPolyRef * randomRef)
{
	return *((Interop::Vector3  *) &(_target->GetRandomPoint (queryFilterType, randomRef)));
}


DllExport Interop::Vector3 
CrowdManager_GetRandomPointInCircle (Urho3D::CrowdManager *_target, const class Urho3D::Vector3 & center, float radius, int queryFilterType, dtPolyRef * randomRef)
{
	return *((Interop::Vector3  *) &(_target->GetRandomPointInCircle (center, radius, queryFilterType, randomRef)));
}


DllExport float
CrowdManager_GetDistanceToWall (Urho3D::CrowdManager *_target, const class Urho3D::Vector3 & point, float radius, int queryFilterType, Urho3D::Vector3 * hitPos, Urho3D::Vector3 * hitNormal)
{
	return _target->GetDistanceToWall (point, radius, queryFilterType, hitPos, hitNormal);
}


DllExport Interop::Vector3 
CrowdManager_Raycast (Urho3D::CrowdManager *_target, const class Urho3D::Vector3 & start, const class Urho3D::Vector3 & end, int queryFilterType, Urho3D::Vector3 * hitNormal)
{
	return *((Interop::Vector3  *) &(_target->Raycast (start, end, queryFilterType, hitNormal)));
}


DllExport unsigned int
CrowdManager_GetMaxAgents (Urho3D::CrowdManager *_target)
{
	return _target->GetMaxAgents ();
}


DllExport float
CrowdManager_GetMaxAgentRadius (Urho3D::CrowdManager *_target)
{
	return _target->GetMaxAgentRadius ();
}


DllExport Urho3D::NavigationMesh *
CrowdManager_GetNavigationMesh (Urho3D::CrowdManager *_target)
{
	return _target->GetNavigationMesh ();
}


DllExport unsigned int
CrowdManager_GetNumQueryFilterTypes (Urho3D::CrowdManager *_target)
{
	return _target->GetNumQueryFilterTypes ();
}


DllExport unsigned int
CrowdManager_GetNumAreas (Urho3D::CrowdManager *_target, unsigned int queryFilterType)
{
	return _target->GetNumAreas (queryFilterType);
}


DllExport unsigned short
CrowdManager_GetIncludeFlags (Urho3D::CrowdManager *_target, unsigned int queryFilterType)
{
	return _target->GetIncludeFlags (queryFilterType);
}


DllExport unsigned short
CrowdManager_GetExcludeFlags (Urho3D::CrowdManager *_target, unsigned int queryFilterType)
{
	return _target->GetExcludeFlags (queryFilterType);
}


DllExport float
CrowdManager_GetAreaCost (Urho3D::CrowdManager *_target, unsigned int queryFilterType, unsigned int areaID)
{
	return _target->GetAreaCost (queryFilterType, areaID);
}


DllExport unsigned int
CrowdManager_GetNumObstacleAvoidanceTypes (Urho3D::CrowdManager *_target)
{
	return _target->GetNumObstacleAvoidanceTypes ();
}


DllExport Urho3D::CrowdObstacleAvoidanceParams
CrowdManager_GetObstacleAvoidanceParams (Urho3D::CrowdManager *_target, unsigned int obstacleAvoidanceType)
{
	return _target->GetObstacleAvoidanceParams (obstacleAvoidanceType);
}


DllExport int
CrowdAgent_GetType (Urho3D::CrowdAgent *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CrowdAgent_GetTypeName (Urho3D::CrowdAgent *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CrowdAgent_GetTypeStatic ()
{
	return (CrowdAgent::GetTypeStatic ()).Value ();
}


DllExport const char *
CrowdAgent_GetTypeNameStatic ()
{
	return stringdup((CrowdAgent::GetTypeNameStatic ()).CString ());
}


DllExport void *
CrowdAgent_CrowdAgent (Urho3D::Context * context)
{
	return WeakPtr<CrowdAgent>(new CrowdAgent(context));
}


DllExport void
CrowdAgent_RegisterObject (Urho3D::Context * context)
{
	CrowdAgent::RegisterObject (context);
}


DllExport void
CrowdAgent_ApplyAttributes (Urho3D::CrowdAgent *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
CrowdAgent_OnSetEnabled (Urho3D::CrowdAgent *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
CrowdAgent_DrawDebugGeometry (Urho3D::CrowdAgent *_target, bool depthTest)
{
	_target->DrawDebugGeometry (depthTest);
}


DllExport void
CrowdAgent_DrawDebugGeometry0 (Urho3D::CrowdAgent *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
CrowdAgent_SetTargetPosition (Urho3D::CrowdAgent *_target, const class Urho3D::Vector3 & position)
{
	_target->SetTargetPosition (position);
}


DllExport void
CrowdAgent_SetTargetVelocity (Urho3D::CrowdAgent *_target, const class Urho3D::Vector3 & velocity)
{
	_target->SetTargetVelocity (velocity);
}


DllExport void
CrowdAgent_ResetTarget (Urho3D::CrowdAgent *_target)
{
	_target->ResetTarget ();
}


DllExport void
CrowdAgent_SetUpdateNodePosition (Urho3D::CrowdAgent *_target, bool unodepos)
{
	_target->SetUpdateNodePosition (unodepos);
}


DllExport void
CrowdAgent_SetMaxAccel (Urho3D::CrowdAgent *_target, float maxAccel)
{
	_target->SetMaxAccel (maxAccel);
}


DllExport void
CrowdAgent_SetMaxSpeed (Urho3D::CrowdAgent *_target, float maxSpeed)
{
	_target->SetMaxSpeed (maxSpeed);
}


DllExport void
CrowdAgent_SetRadius (Urho3D::CrowdAgent *_target, float radius)
{
	_target->SetRadius (radius);
}


DllExport void
CrowdAgent_SetHeight (Urho3D::CrowdAgent *_target, float height)
{
	_target->SetHeight (height);
}


DllExport void
CrowdAgent_SetQueryFilterType (Urho3D::CrowdAgent *_target, unsigned int queryFilterType)
{
	_target->SetQueryFilterType (queryFilterType);
}


DllExport void
CrowdAgent_SetObstacleAvoidanceType (Urho3D::CrowdAgent *_target, unsigned int obstacleAvoidanceType)
{
	_target->SetObstacleAvoidanceType (obstacleAvoidanceType);
}


DllExport void
CrowdAgent_SetNavigationQuality (Urho3D::CrowdAgent *_target, enum Urho3D::NavigationQuality val)
{
	_target->SetNavigationQuality (val);
}


DllExport void
CrowdAgent_SetNavigationPushiness (Urho3D::CrowdAgent *_target, enum Urho3D::NavigationPushiness val)
{
	_target->SetNavigationPushiness (val);
}


DllExport Interop::Vector3 
CrowdAgent_GetPosition (Urho3D::CrowdAgent *_target)
{
	return *((Interop::Vector3  *) &(_target->GetPosition ()));
}


DllExport Interop::Vector3 
CrowdAgent_GetDesiredVelocity (Urho3D::CrowdAgent *_target)
{
	return *((Interop::Vector3  *) &(_target->GetDesiredVelocity ()));
}


DllExport Interop::Vector3 
CrowdAgent_GetActualVelocity (Urho3D::CrowdAgent *_target)
{
	return *((Interop::Vector3  *) &(_target->GetActualVelocity ()));
}


DllExport Interop::Vector3 
CrowdAgent_GetTargetPosition (Urho3D::CrowdAgent *_target)
{
	return *((Interop::Vector3  *) &(_target->GetTargetPosition ()));
}


DllExport Interop::Vector3 
CrowdAgent_GetTargetVelocity (Urho3D::CrowdAgent *_target)
{
	return *((Interop::Vector3  *) &(_target->GetTargetVelocity ()));
}


DllExport enum Urho3D::CrowdAgentRequestedTarget
CrowdAgent_GetRequestedTargetType (Urho3D::CrowdAgent *_target)
{
	return _target->GetRequestedTargetType ();
}


DllExport enum Urho3D::CrowdAgentState
CrowdAgent_GetAgentState (Urho3D::CrowdAgent *_target)
{
	return _target->GetAgentState ();
}


DllExport enum Urho3D::CrowdAgentTargetState
CrowdAgent_GetTargetState (Urho3D::CrowdAgent *_target)
{
	return _target->GetTargetState ();
}


DllExport int
CrowdAgent_GetUpdateNodePosition (Urho3D::CrowdAgent *_target)
{
	return _target->GetUpdateNodePosition ();
}


DllExport int
CrowdAgent_GetAgentCrowdId (Urho3D::CrowdAgent *_target)
{
	return _target->GetAgentCrowdId ();
}


DllExport float
CrowdAgent_GetMaxAccel (Urho3D::CrowdAgent *_target)
{
	return _target->GetMaxAccel ();
}


DllExport float
CrowdAgent_GetMaxSpeed (Urho3D::CrowdAgent *_target)
{
	return _target->GetMaxSpeed ();
}


DllExport float
CrowdAgent_GetRadius (Urho3D::CrowdAgent *_target)
{
	return _target->GetRadius ();
}


DllExport float
CrowdAgent_GetHeight (Urho3D::CrowdAgent *_target)
{
	return _target->GetHeight ();
}


DllExport unsigned int
CrowdAgent_GetQueryFilterType (Urho3D::CrowdAgent *_target)
{
	return _target->GetQueryFilterType ();
}


DllExport unsigned int
CrowdAgent_GetObstacleAvoidanceType (Urho3D::CrowdAgent *_target)
{
	return _target->GetObstacleAvoidanceType ();
}


DllExport enum Urho3D::NavigationQuality
CrowdAgent_GetNavigationQuality (Urho3D::CrowdAgent *_target)
{
	return _target->GetNavigationQuality ();
}


DllExport enum Urho3D::NavigationPushiness
CrowdAgent_GetNavigationPushiness (Urho3D::CrowdAgent *_target)
{
	return _target->GetNavigationPushiness ();
}


DllExport int
CrowdAgent_HasRequestedTarget (Urho3D::CrowdAgent *_target)
{
	return _target->HasRequestedTarget ();
}


DllExport int
CrowdAgent_HasArrived (Urho3D::CrowdAgent *_target)
{
	return _target->HasArrived ();
}


DllExport int
CrowdAgent_IsInCrowd (Urho3D::CrowdAgent *_target)
{
	return _target->IsInCrowd ();
}


DllExport int
NavigationMesh_GetType (Urho3D::NavigationMesh *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
NavigationMesh_GetTypeName (Urho3D::NavigationMesh *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
NavigationMesh_GetTypeStatic ()
{
	return (NavigationMesh::GetTypeStatic ()).Value ();
}


DllExport const char *
NavigationMesh_GetTypeNameStatic ()
{
	return stringdup((NavigationMesh::GetTypeNameStatic ()).CString ());
}


DllExport void *
NavigationMesh_NavigationMesh (Urho3D::Context * context)
{
	return WeakPtr<NavigationMesh>(new NavigationMesh(context));
}


DllExport void
NavigationMesh_RegisterObject (Urho3D::Context * context)
{
	NavigationMesh::RegisterObject (context);
}


DllExport void
NavigationMesh_DrawDebugGeometry (Urho3D::NavigationMesh *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
NavigationMesh_SetTileSize (Urho3D::NavigationMesh *_target, int size)
{
	_target->SetTileSize (size);
}


DllExport void
NavigationMesh_SetCellSize (Urho3D::NavigationMesh *_target, float size)
{
	_target->SetCellSize (size);
}


DllExport void
NavigationMesh_SetCellHeight (Urho3D::NavigationMesh *_target, float height)
{
	_target->SetCellHeight (height);
}


DllExport void
NavigationMesh_SetAgentHeight (Urho3D::NavigationMesh *_target, float height)
{
	_target->SetAgentHeight (height);
}


DllExport void
NavigationMesh_SetAgentRadius (Urho3D::NavigationMesh *_target, float radius)
{
	_target->SetAgentRadius (radius);
}


DllExport void
NavigationMesh_SetAgentMaxClimb (Urho3D::NavigationMesh *_target, float maxClimb)
{
	_target->SetAgentMaxClimb (maxClimb);
}


DllExport void
NavigationMesh_SetAgentMaxSlope (Urho3D::NavigationMesh *_target, float maxSlope)
{
	_target->SetAgentMaxSlope (maxSlope);
}


DllExport void
NavigationMesh_SetRegionMinSize (Urho3D::NavigationMesh *_target, float size)
{
	_target->SetRegionMinSize (size);
}


DllExport void
NavigationMesh_SetRegionMergeSize (Urho3D::NavigationMesh *_target, float size)
{
	_target->SetRegionMergeSize (size);
}


DllExport void
NavigationMesh_SetEdgeMaxLength (Urho3D::NavigationMesh *_target, float length)
{
	_target->SetEdgeMaxLength (length);
}


DllExport void
NavigationMesh_SetEdgeMaxError (Urho3D::NavigationMesh *_target, float error)
{
	_target->SetEdgeMaxError (error);
}


DllExport void
NavigationMesh_SetDetailSampleDistance (Urho3D::NavigationMesh *_target, float distance)
{
	_target->SetDetailSampleDistance (distance);
}


DllExport void
NavigationMesh_SetDetailSampleMaxError (Urho3D::NavigationMesh *_target, float error)
{
	_target->SetDetailSampleMaxError (error);
}


DllExport void
NavigationMesh_SetPadding (Urho3D::NavigationMesh *_target, const class Urho3D::Vector3 & padding)
{
	_target->SetPadding (padding);
}


DllExport void
NavigationMesh_SetAreaCost (Urho3D::NavigationMesh *_target, unsigned int areaID, float cost)
{
	_target->SetAreaCost (areaID, cost);
}


DllExport int
NavigationMesh_Allocate (Urho3D::NavigationMesh *_target, const class Urho3D::BoundingBox & boundingBox, unsigned int maxTiles)
{
	return _target->Allocate (boundingBox, maxTiles);
}


DllExport int
NavigationMesh_Build (Urho3D::NavigationMesh *_target)
{
	return _target->Build ();
}


DllExport int
NavigationMesh_Build0 (Urho3D::NavigationMesh *_target, const class Urho3D::BoundingBox & boundingBox)
{
	return _target->Build (boundingBox);
}


DllExport int
NavigationMesh_Build1 (Urho3D::NavigationMesh *_target, const class Urho3D::IntVector2 & from, const class Urho3D::IntVector2 & to)
{
	return _target->Build (from, to);
}


DllExport void
NavigationMesh_RemoveTile (Urho3D::NavigationMesh *_target, const class Urho3D::IntVector2 & tile)
{
	_target->RemoveTile (tile);
}


DllExport void
NavigationMesh_RemoveAllTiles (Urho3D::NavigationMesh *_target)
{
	_target->RemoveAllTiles ();
}


DllExport int
NavigationMesh_HasTile (Urho3D::NavigationMesh *_target, const class Urho3D::IntVector2 & tile)
{
	return _target->HasTile (tile);
}


DllExport Interop::BoundingBox 
NavigationMesh_GetTileBoundingBox (Urho3D::NavigationMesh *_target, const class Urho3D::IntVector2 & tile)
{
	return *((Interop::BoundingBox  *) &(_target->GetTileBoundingBox (tile)));
}


DllExport Interop::IntVector2 
NavigationMesh_GetTileIndex (Urho3D::NavigationMesh *_target, const class Urho3D::Vector3 & position)
{
	return *((Interop::IntVector2  *) &(_target->GetTileIndex (position)));
}


DllExport Interop::Vector3 
NavigationMesh_FindNearestPoint (Urho3D::NavigationMesh *_target, const class Urho3D::Vector3 & point, const class Urho3D::Vector3 & extents, const class dtQueryFilter * filter, dtPolyRef * nearestRef)
{
	return *((Interop::Vector3  *) &(_target->FindNearestPoint (point, extents, filter, nearestRef)));
}


DllExport Interop::Vector3 
NavigationMesh_MoveAlongSurface (Urho3D::NavigationMesh *_target, const class Urho3D::Vector3 & start, const class Urho3D::Vector3 & end, const class Urho3D::Vector3 & extents, int maxVisited, const class dtQueryFilter * filter)
{
	return *((Interop::Vector3  *) &(_target->MoveAlongSurface (start, end, extents, maxVisited, filter)));
}


DllExport Interop::Vector3 
NavigationMesh_GetRandomPoint (Urho3D::NavigationMesh *_target, const class dtQueryFilter * filter, dtPolyRef * randomRef)
{
	return *((Interop::Vector3  *) &(_target->GetRandomPoint (filter, randomRef)));
}


DllExport Interop::Vector3 
NavigationMesh_GetRandomPointInCircle (Urho3D::NavigationMesh *_target, const class Urho3D::Vector3 & center, float radius, const class Urho3D::Vector3 & extents, const class dtQueryFilter * filter, dtPolyRef * randomRef)
{
	return *((Interop::Vector3  *) &(_target->GetRandomPointInCircle (center, radius, extents, filter, randomRef)));
}


DllExport float
NavigationMesh_GetDistanceToWall (Urho3D::NavigationMesh *_target, const class Urho3D::Vector3 & point, float radius, const class Urho3D::Vector3 & extents, const class dtQueryFilter * filter, Urho3D::Vector3 * hitPos, Urho3D::Vector3 * hitNormal)
{
	return _target->GetDistanceToWall (point, radius, extents, filter, hitPos, hitNormal);
}


DllExport Interop::Vector3 
NavigationMesh_Raycast (Urho3D::NavigationMesh *_target, const class Urho3D::Vector3 & start, const class Urho3D::Vector3 & end, const class Urho3D::Vector3 & extents, const class dtQueryFilter * filter, Urho3D::Vector3 * hitNormal)
{
	return *((Interop::Vector3  *) &(_target->Raycast (start, end, extents, filter, hitNormal)));
}


DllExport void
NavigationMesh_DrawDebugGeometry2 (Urho3D::NavigationMesh *_target, bool depthTest)
{
	_target->DrawDebugGeometry (depthTest);
}


DllExport const char *
NavigationMesh_GetMeshName (Urho3D::NavigationMesh *_target)
{
	return stringdup((_target->GetMeshName ()).CString ());
}


DllExport void
NavigationMesh_SetMeshName (Urho3D::NavigationMesh *_target, const char * newName)
{
	_target->SetMeshName (Urho3D::String(newName));
}


DllExport int
NavigationMesh_GetTileSize (Urho3D::NavigationMesh *_target)
{
	return _target->GetTileSize ();
}


DllExport float
NavigationMesh_GetCellSize (Urho3D::NavigationMesh *_target)
{
	return _target->GetCellSize ();
}


DllExport float
NavigationMesh_GetCellHeight (Urho3D::NavigationMesh *_target)
{
	return _target->GetCellHeight ();
}


DllExport float
NavigationMesh_GetAgentHeight (Urho3D::NavigationMesh *_target)
{
	return _target->GetAgentHeight ();
}


DllExport float
NavigationMesh_GetAgentRadius (Urho3D::NavigationMesh *_target)
{
	return _target->GetAgentRadius ();
}


DllExport float
NavigationMesh_GetAgentMaxClimb (Urho3D::NavigationMesh *_target)
{
	return _target->GetAgentMaxClimb ();
}


DllExport float
NavigationMesh_GetAgentMaxSlope (Urho3D::NavigationMesh *_target)
{
	return _target->GetAgentMaxSlope ();
}


DllExport float
NavigationMesh_GetRegionMinSize (Urho3D::NavigationMesh *_target)
{
	return _target->GetRegionMinSize ();
}


DllExport float
NavigationMesh_GetRegionMergeSize (Urho3D::NavigationMesh *_target)
{
	return _target->GetRegionMergeSize ();
}


DllExport float
NavigationMesh_GetEdgeMaxLength (Urho3D::NavigationMesh *_target)
{
	return _target->GetEdgeMaxLength ();
}


DllExport float
NavigationMesh_GetEdgeMaxError (Urho3D::NavigationMesh *_target)
{
	return _target->GetEdgeMaxError ();
}


DllExport float
NavigationMesh_GetDetailSampleDistance (Urho3D::NavigationMesh *_target)
{
	return _target->GetDetailSampleDistance ();
}


DllExport float
NavigationMesh_GetDetailSampleMaxError (Urho3D::NavigationMesh *_target)
{
	return _target->GetDetailSampleMaxError ();
}


DllExport Interop::Vector3 
NavigationMesh_GetPadding (Urho3D::NavigationMesh *_target)
{
	return *((Interop::Vector3  *) &(_target->GetPadding ()));
}


DllExport float
NavigationMesh_GetAreaCost (Urho3D::NavigationMesh *_target, unsigned int areaID)
{
	return _target->GetAreaCost (areaID);
}


DllExport int
NavigationMesh_IsInitialized (Urho3D::NavigationMesh *_target)
{
	return _target->IsInitialized ();
}


DllExport Interop::BoundingBox 
NavigationMesh_GetBoundingBox (Urho3D::NavigationMesh *_target)
{
	return *((Interop::BoundingBox  *) &(_target->GetBoundingBox ()));
}


DllExport Interop::BoundingBox 
NavigationMesh_GetWorldBoundingBox (Urho3D::NavigationMesh *_target)
{
	return *((Interop::BoundingBox  *) &(_target->GetWorldBoundingBox ()));
}


DllExport Interop::IntVector2 
NavigationMesh_GetNumTiles (Urho3D::NavigationMesh *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetNumTiles ()));
}


DllExport void
NavigationMesh_SetPartitionType (Urho3D::NavigationMesh *_target, enum Urho3D::NavmeshPartitionType partitionType)
{
	_target->SetPartitionType (partitionType);
}


DllExport enum Urho3D::NavmeshPartitionType
NavigationMesh_GetPartitionType (Urho3D::NavigationMesh *_target)
{
	return _target->GetPartitionType ();
}


DllExport void
NavigationMesh_SetDrawOffMeshConnections (Urho3D::NavigationMesh *_target, bool enable)
{
	_target->SetDrawOffMeshConnections (enable);
}


DllExport int
NavigationMesh_GetDrawOffMeshConnections (Urho3D::NavigationMesh *_target)
{
	return _target->GetDrawOffMeshConnections ();
}


DllExport void
NavigationMesh_SetDrawNavAreas (Urho3D::NavigationMesh *_target, bool enable)
{
	_target->SetDrawNavAreas (enable);
}


DllExport int
NavigationMesh_GetDrawNavAreas (Urho3D::NavigationMesh *_target)
{
	return _target->GetDrawNavAreas ();
}


DllExport int
DynamicNavigationMesh_GetType (Urho3D::DynamicNavigationMesh *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
DynamicNavigationMesh_GetTypeName (Urho3D::DynamicNavigationMesh *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
DynamicNavigationMesh_GetTypeStatic ()
{
	return (DynamicNavigationMesh::GetTypeStatic ()).Value ();
}


DllExport const char *
DynamicNavigationMesh_GetTypeNameStatic ()
{
	return stringdup((DynamicNavigationMesh::GetTypeNameStatic ()).CString ());
}


DllExport void *
DynamicNavigationMesh_DynamicNavigationMesh (Urho3D::Context * param1)
{
	return WeakPtr<DynamicNavigationMesh>(new DynamicNavigationMesh(param1));
}


DllExport void
DynamicNavigationMesh_RegisterObject (Urho3D::Context * param1)
{
	DynamicNavigationMesh::RegisterObject (param1);
}


DllExport int
DynamicNavigationMesh_Allocate (Urho3D::DynamicNavigationMesh *_target, const class Urho3D::BoundingBox & boundingBox, unsigned int maxTiles)
{
	return _target->Allocate (boundingBox, maxTiles);
}


DllExport int
DynamicNavigationMesh_Build (Urho3D::DynamicNavigationMesh *_target)
{
	return _target->Build ();
}


DllExport int
DynamicNavigationMesh_Build0 (Urho3D::DynamicNavigationMesh *_target, const class Urho3D::BoundingBox & boundingBox)
{
	return _target->Build (boundingBox);
}


DllExport int
DynamicNavigationMesh_Build1 (Urho3D::DynamicNavigationMesh *_target, const class Urho3D::IntVector2 & from, const class Urho3D::IntVector2 & to)
{
	return _target->Build (from, to);
}


DllExport int
DynamicNavigationMesh_IsObstacleInTile (Urho3D::DynamicNavigationMesh *_target, Urho3D::Obstacle * obstacle, const class Urho3D::IntVector2 & tile)
{
	return _target->IsObstacleInTile (obstacle, tile);
}


DllExport void
DynamicNavigationMesh_RemoveTile (Urho3D::DynamicNavigationMesh *_target, const class Urho3D::IntVector2 & tile)
{
	_target->RemoveTile (tile);
}


DllExport void
DynamicNavigationMesh_RemoveAllTiles (Urho3D::DynamicNavigationMesh *_target)
{
	_target->RemoveAllTiles ();
}


DllExport void
DynamicNavigationMesh_DrawDebugGeometry (Urho3D::DynamicNavigationMesh *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
DynamicNavigationMesh_DrawDebugGeometry2 (Urho3D::DynamicNavigationMesh *_target, bool depthTest)
{
	_target->DrawDebugGeometry (depthTest);
}


DllExport void
DynamicNavigationMesh_SetMaxObstacles (Urho3D::DynamicNavigationMesh *_target, unsigned int maxObstacles)
{
	_target->SetMaxObstacles (maxObstacles);
}


DllExport void
DynamicNavigationMesh_SetMaxLayers (Urho3D::DynamicNavigationMesh *_target, unsigned int maxLayers)
{
	_target->SetMaxLayers (maxLayers);
}


DllExport unsigned int
DynamicNavigationMesh_GetMaxObstacles (Urho3D::DynamicNavigationMesh *_target)
{
	return _target->GetMaxObstacles ();
}


DllExport unsigned int
DynamicNavigationMesh_GetMaxLayers (Urho3D::DynamicNavigationMesh *_target)
{
	return _target->GetMaxLayers ();
}


DllExport void
DynamicNavigationMesh_SetDrawObstacles (Urho3D::DynamicNavigationMesh *_target, bool enable)
{
	_target->SetDrawObstacles (enable);
}


DllExport int
DynamicNavigationMesh_GetDrawObstacles (Urho3D::DynamicNavigationMesh *_target)
{
	return _target->GetDrawObstacles ();
}


DllExport int
NavArea_GetType (Urho3D::NavArea *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
NavArea_GetTypeName (Urho3D::NavArea *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
NavArea_GetTypeStatic ()
{
	return (NavArea::GetTypeStatic ()).Value ();
}


DllExport const char *
NavArea_GetTypeNameStatic ()
{
	return stringdup((NavArea::GetTypeNameStatic ()).CString ());
}


DllExport void *
NavArea_NavArea (Urho3D::Context * param1)
{
	return WeakPtr<NavArea>(new NavArea(param1));
}


DllExport void
NavArea_RegisterObject (Urho3D::Context * param1)
{
	NavArea::RegisterObject (param1);
}


DllExport void
NavArea_DrawDebugGeometry (Urho3D::NavArea *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport unsigned int
NavArea_GetAreaID (Urho3D::NavArea *_target)
{
	return _target->GetAreaID ();
}


DllExport void
NavArea_SetAreaID (Urho3D::NavArea *_target, unsigned int newID)
{
	_target->SetAreaID (newID);
}


DllExport Interop::BoundingBox 
NavArea_GetBoundingBox (Urho3D::NavArea *_target)
{
	return *((Interop::BoundingBox  *) &(_target->GetBoundingBox ()));
}


DllExport void
NavArea_SetBoundingBox (Urho3D::NavArea *_target, const class Urho3D::BoundingBox & bnds)
{
	_target->SetBoundingBox (bnds);
}


DllExport Interop::BoundingBox 
NavArea_GetWorldBoundingBox (Urho3D::NavArea *_target)
{
	return *((Interop::BoundingBox  *) &(_target->GetWorldBoundingBox ()));
}


DllExport int
Navigable_GetType (Urho3D::Navigable *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Navigable_GetTypeName (Urho3D::Navigable *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Navigable_GetTypeStatic ()
{
	return (Navigable::GetTypeStatic ()).Value ();
}


DllExport const char *
Navigable_GetTypeNameStatic ()
{
	return stringdup((Navigable::GetTypeNameStatic ()).CString ());
}


DllExport void *
Navigable_Navigable (Urho3D::Context * context)
{
	return WeakPtr<Navigable>(new Navigable(context));
}


DllExport void
Navigable_RegisterObject (Urho3D::Context * context)
{
	Navigable::RegisterObject (context);
}


DllExport void
Navigable_SetRecursive (Urho3D::Navigable *_target, bool enable)
{
	_target->SetRecursive (enable);
}


DllExport int
Navigable_IsRecursive (Urho3D::Navigable *_target)
{
	return _target->IsRecursive ();
}


DllExport int
Obstacle_GetType (Urho3D::Obstacle *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Obstacle_GetTypeName (Urho3D::Obstacle *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Obstacle_GetTypeStatic ()
{
	return (Obstacle::GetTypeStatic ()).Value ();
}


DllExport const char *
Obstacle_GetTypeNameStatic ()
{
	return stringdup((Obstacle::GetTypeNameStatic ()).CString ());
}


DllExport void *
Obstacle_Obstacle (Urho3D::Context * param1)
{
	return WeakPtr<Obstacle>(new Obstacle(param1));
}


DllExport void
Obstacle_RegisterObject (Urho3D::Context * param1)
{
	Obstacle::RegisterObject (param1);
}


DllExport void
Obstacle_OnSetEnabled (Urho3D::Obstacle *_target)
{
	_target->OnSetEnabled ();
}


DllExport float
Obstacle_GetHeight (Urho3D::Obstacle *_target)
{
	return _target->GetHeight ();
}


DllExport void
Obstacle_SetHeight (Urho3D::Obstacle *_target, float newHeight)
{
	_target->SetHeight (newHeight);
}


DllExport float
Obstacle_GetRadius (Urho3D::Obstacle *_target)
{
	return _target->GetRadius ();
}


DllExport void
Obstacle_SetRadius (Urho3D::Obstacle *_target, float newRadius)
{
	_target->SetRadius (newRadius);
}


DllExport unsigned int
Obstacle_GetObstacleID (Urho3D::Obstacle *_target)
{
	return _target->GetObstacleID ();
}


DllExport void
Obstacle_DrawDebugGeometry (Urho3D::Obstacle *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
Obstacle_DrawDebugGeometry0 (Urho3D::Obstacle *_target, bool depthTest)
{
	_target->DrawDebugGeometry (depthTest);
}


DllExport int
OffMeshConnection_GetType (Urho3D::OffMeshConnection *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
OffMeshConnection_GetTypeName (Urho3D::OffMeshConnection *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
OffMeshConnection_GetTypeStatic ()
{
	return (OffMeshConnection::GetTypeStatic ()).Value ();
}


DllExport const char *
OffMeshConnection_GetTypeNameStatic ()
{
	return stringdup((OffMeshConnection::GetTypeNameStatic ()).CString ());
}


DllExport void *
OffMeshConnection_OffMeshConnection (Urho3D::Context * context)
{
	return WeakPtr<OffMeshConnection>(new OffMeshConnection(context));
}


DllExport void
OffMeshConnection_RegisterObject (Urho3D::Context * context)
{
	OffMeshConnection::RegisterObject (context);
}


DllExport void
OffMeshConnection_ApplyAttributes (Urho3D::OffMeshConnection *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
OffMeshConnection_DrawDebugGeometry (Urho3D::OffMeshConnection *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
OffMeshConnection_SetEndPoint (Urho3D::OffMeshConnection *_target, Urho3D::Node * node)
{
	_target->SetEndPoint (node);
}


DllExport void
OffMeshConnection_SetRadius (Urho3D::OffMeshConnection *_target, float radius)
{
	_target->SetRadius (radius);
}


DllExport void
OffMeshConnection_SetBidirectional (Urho3D::OffMeshConnection *_target, bool enabled)
{
	_target->SetBidirectional (enabled);
}


DllExport void
OffMeshConnection_SetMask (Urho3D::OffMeshConnection *_target, unsigned int newMask)
{
	_target->SetMask (newMask);
}


DllExport void
OffMeshConnection_SetAreaID (Urho3D::OffMeshConnection *_target, unsigned int newAreaID)
{
	_target->SetAreaID (newAreaID);
}


DllExport Urho3D::Node *
OffMeshConnection_GetEndPoint (Urho3D::OffMeshConnection *_target)
{
	return _target->GetEndPoint ();
}


DllExport float
OffMeshConnection_GetRadius (Urho3D::OffMeshConnection *_target)
{
	return _target->GetRadius ();
}


DllExport int
OffMeshConnection_IsBidirectional (Urho3D::OffMeshConnection *_target)
{
	return _target->IsBidirectional ();
}


DllExport unsigned int
OffMeshConnection_GetMask (Urho3D::OffMeshConnection *_target)
{
	return _target->GetMask ();
}


DllExport unsigned int
OffMeshConnection_GetAreaID (Urho3D::OffMeshConnection *_target)
{
	return _target->GetAreaID ();
}


DllExport int
Connection_GetType (Urho3D::Connection *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Connection_GetTypeName (Urho3D::Connection *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Connection_GetTypeStatic ()
{
	return (Connection::GetTypeStatic ()).Value ();
}


DllExport const char *
Connection_GetTypeNameStatic ()
{
	return stringdup((Connection::GetTypeNameStatic ()).CString ());
}


DllExport void
Connection_SendMessage (Urho3D::Connection *_target, int msgID, bool reliable, bool inOrder, const unsigned char * data, unsigned int numBytes, unsigned int contentID)
{
	_target->SendMessage (msgID, reliable, inOrder, data, numBytes, contentID);
}


DllExport void
Connection_SetScene (Urho3D::Connection *_target, Urho3D::Scene * newScene)
{
	_target->SetScene (newScene);
}


DllExport void
Connection_SetPosition (Urho3D::Connection *_target, const class Urho3D::Vector3 & position)
{
	_target->SetPosition (position);
}


DllExport void
Connection_SetRotation (Urho3D::Connection *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetRotation (rotation);
}


DllExport void
Connection_SetConnectPending (Urho3D::Connection *_target, bool connectPending)
{
	_target->SetConnectPending (connectPending);
}


DllExport void
Connection_SetLogStatistics (Urho3D::Connection *_target, bool enable)
{
	_target->SetLogStatistics (enable);
}


DllExport void
Connection_Disconnect (Urho3D::Connection *_target, int waitMSec)
{
	_target->Disconnect (waitMSec);
}


DllExport void
Connection_SendServerUpdate (Urho3D::Connection *_target)
{
	_target->SendServerUpdate ();
}


DllExport void
Connection_SendClientUpdate (Urho3D::Connection *_target)
{
	_target->SendClientUpdate ();
}


DllExport void
Connection_SendRemoteEvents (Urho3D::Connection *_target)
{
	_target->SendRemoteEvents ();
}


DllExport void
Connection_SendPackages (Urho3D::Connection *_target)
{
	_target->SendPackages ();
}


DllExport void
Connection_ProcessPendingLatestData (Urho3D::Connection *_target)
{
	_target->ProcessPendingLatestData ();
}


DllExport void
Connection_Ban (Urho3D::Connection *_target)
{
	_target->Ban ();
}


DllExport Urho3D::Scene *
Connection_GetScene (Urho3D::Connection *_target)
{
	return _target->GetScene ();
}


DllExport unsigned char
Connection_GetTimeStamp (Urho3D::Connection *_target)
{
	return _target->GetTimeStamp ();
}


DllExport Interop::Vector3 
Connection_GetPosition (Urho3D::Connection *_target)
{
	return *((Interop::Vector3  *) &(_target->GetPosition ()));
}


DllExport Interop::Quaternion 
Connection_GetRotation (Urho3D::Connection *_target)
{
	return *((Interop::Quaternion  *) &(_target->GetRotation ()));
}


DllExport int
Connection_IsClient (Urho3D::Connection *_target)
{
	return _target->IsClient ();
}


DllExport int
Connection_IsConnected (Urho3D::Connection *_target)
{
	return _target->IsConnected ();
}


DllExport int
Connection_IsConnectPending (Urho3D::Connection *_target)
{
	return _target->IsConnectPending ();
}


DllExport int
Connection_IsSceneLoaded (Urho3D::Connection *_target)
{
	return _target->IsSceneLoaded ();
}


DllExport int
Connection_GetLogStatistics (Urho3D::Connection *_target)
{
	return _target->GetLogStatistics ();
}


DllExport const char *
Connection_GetAddress (Urho3D::Connection *_target)
{
	return stringdup((_target->GetAddress ()).CString ());
}


DllExport unsigned short
Connection_GetPort (Urho3D::Connection *_target)
{
	return _target->GetPort ();
}


DllExport float
Connection_GetRoundTripTime (Urho3D::Connection *_target)
{
	return _target->GetRoundTripTime ();
}


DllExport unsigned int
Connection_GetLastHeardTime (Urho3D::Connection *_target)
{
	return _target->GetLastHeardTime ();
}


DllExport float
Connection_GetBytesInPerSec (Urho3D::Connection *_target)
{
	return _target->GetBytesInPerSec ();
}


DllExport float
Connection_GetBytesOutPerSec (Urho3D::Connection *_target)
{
	return _target->GetBytesOutPerSec ();
}


DllExport int
Connection_GetPacketsInPerSec (Urho3D::Connection *_target)
{
	return _target->GetPacketsInPerSec ();
}


DllExport int
Connection_GetPacketsOutPerSec (Urho3D::Connection *_target)
{
	return _target->GetPacketsOutPerSec ();
}


DllExport const char *
Connection_ToString (Urho3D::Connection *_target)
{
	return stringdup((_target->ToString ()).CString ());
}


DllExport unsigned int
Connection_GetNumDownloads (Urho3D::Connection *_target)
{
	return _target->GetNumDownloads ();
}


DllExport const char *
Connection_GetDownloadName (Urho3D::Connection *_target)
{
	return stringdup((_target->GetDownloadName ()).CString ());
}


DllExport float
Connection_GetDownloadProgress (Urho3D::Connection *_target)
{
	return _target->GetDownloadProgress ();
}


DllExport void
Connection_SendPackageToClient (Urho3D::Connection *_target, Urho3D::PackageFile * package)
{
	_target->SendPackageToClient (package);
}


DllExport void
Connection_ConfigureNetworkSimulator (Urho3D::Connection *_target, int latencyMs, float packetLoss)
{
	_target->ConfigureNetworkSimulator (latencyMs, packetLoss);
}


DllExport void
HttpRequest_ThreadFunction (Urho3D::HttpRequest *_target)
{
	_target->ThreadFunction ();
}


DllExport unsigned int
HttpRequest_Read (Urho3D::HttpRequest *_target, void * dest, unsigned int size)
{
	return _target->Read (dest, size);
}


DllExport unsigned int
HttpRequest_Seek (Urho3D::HttpRequest *_target, unsigned int position)
{
	return _target->Seek (position);
}


DllExport int
HttpRequest_IsEof (Urho3D::HttpRequest *_target)
{
	return _target->IsEof ();
}


DllExport const char *
HttpRequest_GetURL (Urho3D::HttpRequest *_target)
{
	return stringdup((_target->GetURL ()).CString ());
}


DllExport const char *
HttpRequest_GetVerb (Urho3D::HttpRequest *_target)
{
	return stringdup((_target->GetVerb ()).CString ());
}


DllExport const char *
HttpRequest_GetError (Urho3D::HttpRequest *_target)
{
	return stringdup((_target->GetError ()).CString ());
}


DllExport enum Urho3D::HttpRequestState
HttpRequest_GetState (Urho3D::HttpRequest *_target)
{
	return _target->GetState ();
}


DllExport unsigned int
HttpRequest_GetAvailableSize (Urho3D::HttpRequest *_target)
{
	return _target->GetAvailableSize ();
}


DllExport int
HttpRequest_IsOpen (Urho3D::HttpRequest *_target)
{
	return _target->IsOpen ();
}


DllExport int
Network_GetType (Urho3D::Network *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Network_GetTypeName (Urho3D::Network *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Network_GetTypeStatic ()
{
	return (Network::GetTypeStatic ()).Value ();
}


DllExport const char *
Network_GetTypeNameStatic ()
{
	return stringdup((Network::GetTypeNameStatic ()).CString ());
}


DllExport void *
Network_Network (Urho3D::Context * context)
{
	return WeakPtr<Network>(new Network(context));
}


DllExport void
Network_DiscoverHosts (Urho3D::Network *_target, unsigned int port)
{
	_target->DiscoverHosts (port);
}


DllExport void
Network_SetPassword (Urho3D::Network *_target, const char * password)
{
	_target->SetPassword (Urho3D::String(password));
}


DllExport void
Network_SetNATServerInfo (Urho3D::Network *_target, const char * address, unsigned short port)
{
	_target->SetNATServerInfo (Urho3D::String(address), port);
}


DllExport void
Network_Disconnect (Urho3D::Network *_target, int waitMSec)
{
	_target->Disconnect (waitMSec);
}


DllExport int
Network_StartServer (Urho3D::Network *_target, unsigned short port)
{
	return _target->StartServer (port);
}


DllExport void
Network_StopServer (Urho3D::Network *_target)
{
	_target->StopServer ();
}


DllExport void
Network_StartNATClient (Urho3D::Network *_target)
{
	_target->StartNATClient ();
}


DllExport const char *
Network_GetGUID (Urho3D::Network *_target)
{
	return stringdup((_target->GetGUID ()).CString ());
}


DllExport void
Network_BroadcastMessage (Urho3D::Network *_target, int msgID, bool reliable, bool inOrder, const unsigned char * data, unsigned int numBytes, unsigned int contentID)
{
	_target->BroadcastMessage (msgID, reliable, inOrder, data, numBytes, contentID);
}


DllExport void
Network_SetUpdateFps (Urho3D::Network *_target, int fps)
{
	_target->SetUpdateFps (fps);
}


DllExport void
Network_SetSimulatedLatency (Urho3D::Network *_target, int ms)
{
	_target->SetSimulatedLatency (ms);
}


DllExport void
Network_SetSimulatedPacketLoss (Urho3D::Network *_target, float probability)
{
	_target->SetSimulatedPacketLoss (probability);
}


DllExport void
Network_RegisterRemoteEvent (Urho3D::Network *_target, int eventType)
{
	_target->RegisterRemoteEvent (Urho3D::StringHash(eventType));
}


DllExport void
Network_UnregisterRemoteEvent (Urho3D::Network *_target, int eventType)
{
	_target->UnregisterRemoteEvent (Urho3D::StringHash(eventType));
}


DllExport void
Network_UnregisterAllRemoteEvents (Urho3D::Network *_target)
{
	_target->UnregisterAllRemoteEvents ();
}


DllExport void
Network_SetPackageCacheDir (Urho3D::Network *_target, const char * path)
{
	_target->SetPackageCacheDir (Urho3D::String(path));
}


DllExport void
Network_SendPackageToClients (Urho3D::Network *_target, Urho3D::Scene * scene, Urho3D::PackageFile * package)
{
	_target->SendPackageToClients (scene, package);
}


DllExport void
Network_BanAddress (Urho3D::Network *_target, const char * address)
{
	_target->BanAddress (Urho3D::String(address));
}


DllExport int
Network_GetUpdateFps (Urho3D::Network *_target)
{
	return _target->GetUpdateFps ();
}


DllExport int
Network_GetSimulatedLatency (Urho3D::Network *_target)
{
	return _target->GetSimulatedLatency ();
}


DllExport float
Network_GetSimulatedPacketLoss (Urho3D::Network *_target)
{
	return _target->GetSimulatedPacketLoss ();
}


DllExport Urho3D::Connection *
Network_GetServerConnection (Urho3D::Network *_target)
{
	return _target->GetServerConnection ();
}


DllExport int
Network_IsServerRunning (Urho3D::Network *_target)
{
	return _target->IsServerRunning ();
}


DllExport int
Network_CheckRemoteEvent (Urho3D::Network *_target, int eventType)
{
	return _target->CheckRemoteEvent (Urho3D::StringHash(eventType));
}


DllExport const char *
Network_GetPackageCacheDir (Urho3D::Network *_target)
{
	return stringdup((_target->GetPackageCacheDir ()).CString ());
}


DllExport void
Network_Update (Urho3D::Network *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
Network_PostUpdate (Urho3D::Network *_target, float timeStep)
{
	_target->PostUpdate (timeStep);
}


DllExport int
NetworkPriority_GetType (Urho3D::NetworkPriority *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
NetworkPriority_GetTypeName (Urho3D::NetworkPriority *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
NetworkPriority_GetTypeStatic ()
{
	return (NetworkPriority::GetTypeStatic ()).Value ();
}


DllExport const char *
NetworkPriority_GetTypeNameStatic ()
{
	return stringdup((NetworkPriority::GetTypeNameStatic ()).CString ());
}


DllExport void *
NetworkPriority_NetworkPriority (Urho3D::Context * context)
{
	return WeakPtr<NetworkPriority>(new NetworkPriority(context));
}


DllExport void
NetworkPriority_RegisterObject (Urho3D::Context * context)
{
	NetworkPriority::RegisterObject (context);
}


DllExport void
NetworkPriority_SetBasePriority (Urho3D::NetworkPriority *_target, float priority)
{
	_target->SetBasePriority (priority);
}


DllExport void
NetworkPriority_SetDistanceFactor (Urho3D::NetworkPriority *_target, float factor)
{
	_target->SetDistanceFactor (factor);
}


DllExport void
NetworkPriority_SetMinPriority (Urho3D::NetworkPriority *_target, float priority)
{
	_target->SetMinPriority (priority);
}


DllExport void
NetworkPriority_SetAlwaysUpdateOwner (Urho3D::NetworkPriority *_target, bool enable)
{
	_target->SetAlwaysUpdateOwner (enable);
}


DllExport float
NetworkPriority_GetBasePriority (Urho3D::NetworkPriority *_target)
{
	return _target->GetBasePriority ();
}


DllExport float
NetworkPriority_GetDistanceFactor (Urho3D::NetworkPriority *_target)
{
	return _target->GetDistanceFactor ();
}


DllExport float
NetworkPriority_GetMinPriority (Urho3D::NetworkPriority *_target)
{
	return _target->GetMinPriority ();
}


DllExport int
NetworkPriority_GetAlwaysUpdateOwner (Urho3D::NetworkPriority *_target)
{
	return _target->GetAlwaysUpdateOwner ();
}


DllExport int
NetworkPriority_CheckUpdate (Urho3D::NetworkPriority *_target, float distance, float & accumulator)
{
	return _target->CheckUpdate (distance, accumulator);
}


DllExport void *
TriangleMeshData_TriangleMeshData (Urho3D::Model * model, unsigned int lodLevel)
{
	return WeakPtr<TriangleMeshData>(new TriangleMeshData(model, lodLevel));
}


DllExport void *
TriangleMeshData_TriangleMeshData0 (Urho3D::CustomGeometry * custom)
{
	return WeakPtr<TriangleMeshData>(new TriangleMeshData(custom));
}


DllExport void *
GImpactMeshData_GImpactMeshData (Urho3D::Model * model, unsigned int lodLevel)
{
	return WeakPtr<GImpactMeshData>(new GImpactMeshData(model, lodLevel));
}


DllExport void *
GImpactMeshData_GImpactMeshData0 (Urho3D::CustomGeometry * custom)
{
	return WeakPtr<GImpactMeshData>(new GImpactMeshData(custom));
}


DllExport void *
ConvexData_ConvexData (Urho3D::Model * model, unsigned int lodLevel)
{
	return WeakPtr<ConvexData>(new ConvexData(model, lodLevel));
}


DllExport void *
ConvexData_ConvexData0 (Urho3D::CustomGeometry * custom)
{
	return WeakPtr<ConvexData>(new ConvexData(custom));
}


DllExport void *
HeightfieldData_HeightfieldData (Urho3D::Terrain * terrain, unsigned int lodLevel)
{
	return WeakPtr<HeightfieldData>(new HeightfieldData(terrain, lodLevel));
}


DllExport int
CollisionShape_GetType (Urho3D::CollisionShape *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CollisionShape_GetTypeName (Urho3D::CollisionShape *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CollisionShape_GetTypeStatic ()
{
	return (CollisionShape::GetTypeStatic ()).Value ();
}


DllExport const char *
CollisionShape_GetTypeNameStatic ()
{
	return stringdup((CollisionShape::GetTypeNameStatic ()).CString ());
}


DllExport void *
CollisionShape_CollisionShape (Urho3D::Context * context)
{
	return WeakPtr<CollisionShape>(new CollisionShape(context));
}


DllExport void
CollisionShape_RegisterObject (Urho3D::Context * context)
{
	CollisionShape::RegisterObject (context);
}


DllExport void
CollisionShape_ApplyAttributes (Urho3D::CollisionShape *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
CollisionShape_OnSetEnabled (Urho3D::CollisionShape *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
CollisionShape_DrawDebugGeometry (Urho3D::CollisionShape *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
CollisionShape_SetBox (Urho3D::CollisionShape *_target, const class Urho3D::Vector3 & size, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetBox (size, position, rotation);
}


DllExport void
CollisionShape_SetSphere (Urho3D::CollisionShape *_target, float diameter, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetSphere (diameter, position, rotation);
}


DllExport void
CollisionShape_SetStaticPlane (Urho3D::CollisionShape *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetStaticPlane (position, rotation);
}


DllExport void
CollisionShape_SetCylinder (Urho3D::CollisionShape *_target, float diameter, float height, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetCylinder (diameter, height, position, rotation);
}


DllExport void
CollisionShape_SetCapsule (Urho3D::CollisionShape *_target, float diameter, float height, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetCapsule (diameter, height, position, rotation);
}


DllExport void
CollisionShape_SetCone (Urho3D::CollisionShape *_target, float diameter, float height, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetCone (diameter, height, position, rotation);
}


DllExport void
CollisionShape_SetTriangleMesh (Urho3D::CollisionShape *_target, Urho3D::Model * model, unsigned int lodLevel, const class Urho3D::Vector3 & scale, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetTriangleMesh (model, lodLevel, scale, position, rotation);
}


DllExport void
CollisionShape_SetCustomTriangleMesh (Urho3D::CollisionShape *_target, Urho3D::CustomGeometry * custom, const class Urho3D::Vector3 & scale, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetCustomTriangleMesh (custom, scale, position, rotation);
}


DllExport void
CollisionShape_SetConvexHull (Urho3D::CollisionShape *_target, Urho3D::Model * model, unsigned int lodLevel, const class Urho3D::Vector3 & scale, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetConvexHull (model, lodLevel, scale, position, rotation);
}


DllExport void
CollisionShape_SetCustomConvexHull (Urho3D::CollisionShape *_target, Urho3D::CustomGeometry * custom, const class Urho3D::Vector3 & scale, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetCustomConvexHull (custom, scale, position, rotation);
}


DllExport void
CollisionShape_SetGImpactMesh (Urho3D::CollisionShape *_target, Urho3D::Model * model, unsigned int lodLevel, const class Urho3D::Vector3 & scale, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetGImpactMesh (model, lodLevel, scale, position, rotation);
}


DllExport void
CollisionShape_SetCustomGImpactMesh (Urho3D::CollisionShape *_target, Urho3D::CustomGeometry * custom, const class Urho3D::Vector3 & scale, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetCustomGImpactMesh (custom, scale, position, rotation);
}


DllExport void
CollisionShape_SetTerrain (Urho3D::CollisionShape *_target, unsigned int lodLevel)
{
	_target->SetTerrain (lodLevel);
}


DllExport void
CollisionShape_SetShapeType (Urho3D::CollisionShape *_target, enum Urho3D::ShapeType type)
{
	_target->SetShapeType (type);
}


DllExport void
CollisionShape_SetSize (Urho3D::CollisionShape *_target, const class Urho3D::Vector3 & size)
{
	_target->SetSize (size);
}


DllExport void
CollisionShape_SetPosition (Urho3D::CollisionShape *_target, const class Urho3D::Vector3 & position)
{
	_target->SetPosition (position);
}


DllExport void
CollisionShape_SetRotation (Urho3D::CollisionShape *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetRotation (rotation);
}


DllExport void
CollisionShape_SetTransform (Urho3D::CollisionShape *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetTransform (position, rotation);
}


DllExport void
CollisionShape_SetMargin (Urho3D::CollisionShape *_target, float margin)
{
	_target->SetMargin (margin);
}


DllExport void
CollisionShape_SetModel (Urho3D::CollisionShape *_target, Urho3D::Model * model)
{
	_target->SetModel (model);
}


DllExport void
CollisionShape_SetLodLevel (Urho3D::CollisionShape *_target, unsigned int lodLevel)
{
	_target->SetLodLevel (lodLevel);
}


DllExport Urho3D::PhysicsWorld *
CollisionShape_GetPhysicsWorld (Urho3D::CollisionShape *_target)
{
	return _target->GetPhysicsWorld ();
}


DllExport enum Urho3D::ShapeType
CollisionShape_GetShapeType (Urho3D::CollisionShape *_target)
{
	return _target->GetShapeType ();
}


DllExport Interop::Vector3 
CollisionShape_GetSize (Urho3D::CollisionShape *_target)
{
	return *((Interop::Vector3  *) &(_target->GetSize ()));
}


DllExport Interop::Vector3 
CollisionShape_GetPosition (Urho3D::CollisionShape *_target)
{
	return *((Interop::Vector3  *) &(_target->GetPosition ()));
}


DllExport Interop::Quaternion 
CollisionShape_GetRotation (Urho3D::CollisionShape *_target)
{
	return *((Interop::Quaternion  *) &(_target->GetRotation ()));
}


DllExport float
CollisionShape_GetMargin (Urho3D::CollisionShape *_target)
{
	return _target->GetMargin ();
}


DllExport Urho3D::Model *
CollisionShape_GetModel (Urho3D::CollisionShape *_target)
{
	return _target->GetModel ();
}


DllExport unsigned int
CollisionShape_GetLodLevel (Urho3D::CollisionShape *_target)
{
	return _target->GetLodLevel ();
}


DllExport Interop::BoundingBox 
CollisionShape_GetWorldBoundingBox (Urho3D::CollisionShape *_target)
{
	return *((Interop::BoundingBox  *) &(_target->GetWorldBoundingBox ()));
}


DllExport void
CollisionShape_NotifyRigidBody (Urho3D::CollisionShape *_target, bool updateMass)
{
	_target->NotifyRigidBody (updateMass);
}


DllExport Urho3D::ResourceRef
CollisionShape_GetModelAttr (Urho3D::CollisionShape *_target)
{
	return _target->GetModelAttr ();
}


DllExport void
CollisionShape_ReleaseShape (Urho3D::CollisionShape *_target)
{
	_target->ReleaseShape ();
}


DllExport int
Constraint_GetType (Urho3D::Constraint *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Constraint_GetTypeName (Urho3D::Constraint *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Constraint_GetTypeStatic ()
{
	return (Constraint::GetTypeStatic ()).Value ();
}


DllExport const char *
Constraint_GetTypeNameStatic ()
{
	return stringdup((Constraint::GetTypeNameStatic ()).CString ());
}


DllExport void *
Constraint_Constraint (Urho3D::Context * context)
{
	return WeakPtr<Constraint>(new Constraint(context));
}


DllExport void
Constraint_RegisterObject (Urho3D::Context * context)
{
	Constraint::RegisterObject (context);
}


DllExport void
Constraint_ApplyAttributes (Urho3D::Constraint *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
Constraint_OnSetEnabled (Urho3D::Constraint *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
Constraint_DrawDebugGeometry (Urho3D::Constraint *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
Constraint_SetConstraintType (Urho3D::Constraint *_target, enum Urho3D::ConstraintType type)
{
	_target->SetConstraintType (type);
}


DllExport void
Constraint_SetOtherBody (Urho3D::Constraint *_target, Urho3D::RigidBody * body)
{
	_target->SetOtherBody (body);
}


DllExport void
Constraint_SetPosition (Urho3D::Constraint *_target, const class Urho3D::Vector3 & position)
{
	_target->SetPosition (position);
}


DllExport void
Constraint_SetRotation (Urho3D::Constraint *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetRotation (rotation);
}


DllExport void
Constraint_SetAxis (Urho3D::Constraint *_target, const class Urho3D::Vector3 & axis)
{
	_target->SetAxis (axis);
}


DllExport void
Constraint_SetOtherPosition (Urho3D::Constraint *_target, const class Urho3D::Vector3 & position)
{
	_target->SetOtherPosition (position);
}


DllExport void
Constraint_SetOtherRotation (Urho3D::Constraint *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetOtherRotation (rotation);
}


DllExport void
Constraint_SetOtherAxis (Urho3D::Constraint *_target, const class Urho3D::Vector3 & axis)
{
	_target->SetOtherAxis (axis);
}


DllExport void
Constraint_SetWorldPosition (Urho3D::Constraint *_target, const class Urho3D::Vector3 & position)
{
	_target->SetWorldPosition (position);
}


DllExport void
Constraint_SetHighLimit (Urho3D::Constraint *_target, const class Urho3D::Vector2 & limit)
{
	_target->SetHighLimit (limit);
}


DllExport void
Constraint_SetLowLimit (Urho3D::Constraint *_target, const class Urho3D::Vector2 & limit)
{
	_target->SetLowLimit (limit);
}


DllExport void
Constraint_SetERP (Urho3D::Constraint *_target, float erp)
{
	_target->SetERP (erp);
}


DllExport void
Constraint_SetCFM (Urho3D::Constraint *_target, float cfm)
{
	_target->SetCFM (cfm);
}


DllExport void
Constraint_SetDisableCollision (Urho3D::Constraint *_target, bool disable)
{
	_target->SetDisableCollision (disable);
}


DllExport Urho3D::PhysicsWorld *
Constraint_GetPhysicsWorld (Urho3D::Constraint *_target)
{
	return _target->GetPhysicsWorld ();
}


DllExport enum Urho3D::ConstraintType
Constraint_GetConstraintType (Urho3D::Constraint *_target)
{
	return _target->GetConstraintType ();
}


DllExport Urho3D::RigidBody *
Constraint_GetOwnBody (Urho3D::Constraint *_target)
{
	return _target->GetOwnBody ();
}


DllExport Urho3D::RigidBody *
Constraint_GetOtherBody (Urho3D::Constraint *_target)
{
	return _target->GetOtherBody ();
}


DllExport Interop::Vector3 
Constraint_GetPosition (Urho3D::Constraint *_target)
{
	return *((Interop::Vector3  *) &(_target->GetPosition ()));
}


DllExport Interop::Quaternion 
Constraint_GetRotation (Urho3D::Constraint *_target)
{
	return *((Interop::Quaternion  *) &(_target->GetRotation ()));
}


DllExport Interop::Vector3 
Constraint_GetOtherPosition (Urho3D::Constraint *_target)
{
	return *((Interop::Vector3  *) &(_target->GetOtherPosition ()));
}


DllExport Interop::Quaternion 
Constraint_GetOtherRotation (Urho3D::Constraint *_target)
{
	return *((Interop::Quaternion  *) &(_target->GetOtherRotation ()));
}


DllExport Interop::Vector3 
Constraint_GetWorldPosition (Urho3D::Constraint *_target)
{
	return *((Interop::Vector3  *) &(_target->GetWorldPosition ()));
}


DllExport Interop::Vector2 
Constraint_GetHighLimit (Urho3D::Constraint *_target)
{
	return *((Interop::Vector2  *) &(_target->GetHighLimit ()));
}


DllExport Interop::Vector2 
Constraint_GetLowLimit (Urho3D::Constraint *_target)
{
	return *((Interop::Vector2  *) &(_target->GetLowLimit ()));
}


DllExport float
Constraint_GetERP (Urho3D::Constraint *_target)
{
	return _target->GetERP ();
}


DllExport float
Constraint_GetCFM (Urho3D::Constraint *_target)
{
	return _target->GetCFM ();
}


DllExport int
Constraint_GetDisableCollision (Urho3D::Constraint *_target)
{
	return _target->GetDisableCollision ();
}


DllExport void
Constraint_ReleaseConstraint (Urho3D::Constraint *_target)
{
	_target->ReleaseConstraint ();
}


DllExport void
Constraint_ApplyFrames (Urho3D::Constraint *_target)
{
	_target->ApplyFrames ();
}


DllExport int
PhysicsWorld_GetType (Urho3D::PhysicsWorld *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
PhysicsWorld_GetTypeName (Urho3D::PhysicsWorld *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
PhysicsWorld_GetTypeStatic ()
{
	return (PhysicsWorld::GetTypeStatic ()).Value ();
}


DllExport const char *
PhysicsWorld_GetTypeNameStatic ()
{
	return stringdup((PhysicsWorld::GetTypeNameStatic ()).CString ());
}


DllExport void *
PhysicsWorld_PhysicsWorld (Urho3D::Context * context)
{
	return WeakPtr<PhysicsWorld>(new PhysicsWorld(context));
}


DllExport void
PhysicsWorld_RegisterObject (Urho3D::Context * context)
{
	PhysicsWorld::RegisterObject (context);
}


DllExport void
PhysicsWorld_setDebugMode (Urho3D::PhysicsWorld *_target, int debugMode)
{
	_target->setDebugMode (debugMode);
}


DllExport int
PhysicsWorld_getDebugMode (Urho3D::PhysicsWorld *_target)
{
	return _target->getDebugMode ();
}


DllExport void
PhysicsWorld_DrawDebugGeometry (Urho3D::PhysicsWorld *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
PhysicsWorld_Update (Urho3D::PhysicsWorld *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
PhysicsWorld_UpdateCollisions (Urho3D::PhysicsWorld *_target)
{
	_target->UpdateCollisions ();
}


DllExport void
PhysicsWorld_SetFps (Urho3D::PhysicsWorld *_target, int fps)
{
	_target->SetFps (fps);
}


DllExport void
PhysicsWorld_SetGravity (Urho3D::PhysicsWorld *_target, const class Urho3D::Vector3 & gravity)
{
	_target->SetGravity (gravity);
}


DllExport void
PhysicsWorld_SetMaxSubSteps (Urho3D::PhysicsWorld *_target, int num)
{
	_target->SetMaxSubSteps (num);
}


DllExport void
PhysicsWorld_SetNumIterations (Urho3D::PhysicsWorld *_target, int num)
{
	_target->SetNumIterations (num);
}


DllExport void
PhysicsWorld_SetUpdateEnabled (Urho3D::PhysicsWorld *_target, bool enable)
{
	_target->SetUpdateEnabled (enable);
}


DllExport void
PhysicsWorld_SetInterpolation (Urho3D::PhysicsWorld *_target, bool enable)
{
	_target->SetInterpolation (enable);
}


DllExport void
PhysicsWorld_SetInternalEdge (Urho3D::PhysicsWorld *_target, bool enable)
{
	_target->SetInternalEdge (enable);
}


DllExport void
PhysicsWorld_SetSplitImpulse (Urho3D::PhysicsWorld *_target, bool enable)
{
	_target->SetSplitImpulse (enable);
}


DllExport void
PhysicsWorld_SetMaxNetworkAngularVelocity (Urho3D::PhysicsWorld *_target, float velocity)
{
	_target->SetMaxNetworkAngularVelocity (velocity);
}


DllExport void
PhysicsWorld_RaycastSingle (Urho3D::PhysicsWorld *_target, Urho3D::PhysicsRaycastResult & result, const class Urho3D::Ray & ray, float maxDistance, unsigned int collisionMask)
{
	_target->RaycastSingle (result, ray, maxDistance, collisionMask);
}


DllExport void
PhysicsWorld_RaycastSingleSegmented (Urho3D::PhysicsWorld *_target, Urho3D::PhysicsRaycastResult & result, const class Urho3D::Ray & ray, float maxDistance, float segmentDistance, unsigned int collisionMask, float overlapDistance)
{
	_target->RaycastSingleSegmented (result, ray, maxDistance, segmentDistance, collisionMask, overlapDistance);
}


DllExport void
PhysicsWorld_SphereCast (Urho3D::PhysicsWorld *_target, Urho3D::PhysicsRaycastResult & result, const class Urho3D::Ray & ray, float radius, float maxDistance, unsigned int collisionMask)
{
	_target->SphereCast (result, ray, radius, maxDistance, collisionMask);
}


DllExport void
PhysicsWorld_ConvexCast (Urho3D::PhysicsWorld *_target, Urho3D::PhysicsRaycastResult & result, Urho3D::CollisionShape * shape, const class Urho3D::Vector3 & startPos, const class Urho3D::Quaternion & startRot, const class Urho3D::Vector3 & endPos, const class Urho3D::Quaternion & endRot, unsigned int collisionMask)
{
	_target->ConvexCast (result, shape, startPos, startRot, endPos, endRot, collisionMask);
}


DllExport void
PhysicsWorld_RemoveCachedGeometry (Urho3D::PhysicsWorld *_target, Urho3D::Model * model)
{
	_target->RemoveCachedGeometry (model);
}


DllExport Interop::Vector3 
PhysicsWorld_GetGravity (Urho3D::PhysicsWorld *_target)
{
	return *((Interop::Vector3  *) &(_target->GetGravity ()));
}


DllExport int
PhysicsWorld_GetMaxSubSteps (Urho3D::PhysicsWorld *_target)
{
	return _target->GetMaxSubSteps ();
}


DllExport int
PhysicsWorld_GetNumIterations (Urho3D::PhysicsWorld *_target)
{
	return _target->GetNumIterations ();
}


DllExport int
PhysicsWorld_IsUpdateEnabled (Urho3D::PhysicsWorld *_target)
{
	return _target->IsUpdateEnabled ();
}


DllExport int
PhysicsWorld_GetInterpolation (Urho3D::PhysicsWorld *_target)
{
	return _target->GetInterpolation ();
}


DllExport int
PhysicsWorld_GetInternalEdge (Urho3D::PhysicsWorld *_target)
{
	return _target->GetInternalEdge ();
}


DllExport int
PhysicsWorld_GetSplitImpulse (Urho3D::PhysicsWorld *_target)
{
	return _target->GetSplitImpulse ();
}


DllExport int
PhysicsWorld_GetFps (Urho3D::PhysicsWorld *_target)
{
	return _target->GetFps ();
}


DllExport float
PhysicsWorld_GetMaxNetworkAngularVelocity (Urho3D::PhysicsWorld *_target)
{
	return _target->GetMaxNetworkAngularVelocity ();
}


DllExport void
PhysicsWorld_AddRigidBody (Urho3D::PhysicsWorld *_target, Urho3D::RigidBody * body)
{
	_target->AddRigidBody (body);
}


DllExport void
PhysicsWorld_RemoveRigidBody (Urho3D::PhysicsWorld *_target, Urho3D::RigidBody * body)
{
	_target->RemoveRigidBody (body);
}


DllExport void
PhysicsWorld_AddCollisionShape (Urho3D::PhysicsWorld *_target, Urho3D::CollisionShape * shape)
{
	_target->AddCollisionShape (shape);
}


DllExport void
PhysicsWorld_RemoveCollisionShape (Urho3D::PhysicsWorld *_target, Urho3D::CollisionShape * shape)
{
	_target->RemoveCollisionShape (shape);
}


DllExport void
PhysicsWorld_AddConstraint (Urho3D::PhysicsWorld *_target, Urho3D::Constraint * constraint)
{
	_target->AddConstraint (constraint);
}


DllExport void
PhysicsWorld_RemoveConstraint (Urho3D::PhysicsWorld *_target, Urho3D::Constraint * constraint)
{
	_target->RemoveConstraint (constraint);
}


DllExport void
PhysicsWorld_DrawDebugGeometry0 (Urho3D::PhysicsWorld *_target, bool depthTest)
{
	_target->DrawDebugGeometry (depthTest);
}


DllExport void
PhysicsWorld_SetDebugRenderer (Urho3D::PhysicsWorld *_target, Urho3D::DebugRenderer * debug)
{
	_target->SetDebugRenderer (debug);
}


DllExport void
PhysicsWorld_SetDebugDepthTest (Urho3D::PhysicsWorld *_target, bool enable)
{
	_target->SetDebugDepthTest (enable);
}


DllExport void
PhysicsWorld_CleanupGeometryCache (Urho3D::PhysicsWorld *_target)
{
	_target->CleanupGeometryCache ();
}


DllExport void
PhysicsWorld_SetApplyingTransforms (Urho3D::PhysicsWorld *_target, bool enable)
{
	_target->SetApplyingTransforms (enable);
}


DllExport int
PhysicsWorld_IsApplyingTransforms (Urho3D::PhysicsWorld *_target)
{
	return _target->IsApplyingTransforms ();
}


DllExport int
PhysicsWorld_IsSimulating (Urho3D::PhysicsWorld *_target)
{
	return _target->IsSimulating ();
}


DllExport int
RigidBody_GetType (Urho3D::RigidBody *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
RigidBody_GetTypeName (Urho3D::RigidBody *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
RigidBody_GetTypeStatic ()
{
	return (RigidBody::GetTypeStatic ()).Value ();
}


DllExport const char *
RigidBody_GetTypeNameStatic ()
{
	return stringdup((RigidBody::GetTypeNameStatic ()).CString ());
}


DllExport void *
RigidBody_RigidBody (Urho3D::Context * context)
{
	return WeakPtr<RigidBody>(new RigidBody(context));
}


DllExport void
RigidBody_RegisterObject (Urho3D::Context * context)
{
	RigidBody::RegisterObject (context);
}


DllExport void
RigidBody_ApplyAttributes (Urho3D::RigidBody *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
RigidBody_OnSetEnabled (Urho3D::RigidBody *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
RigidBody_DrawDebugGeometry (Urho3D::RigidBody *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
RigidBody_SetMass (Urho3D::RigidBody *_target, float mass)
{
	_target->SetMass (mass);
}


DllExport void
RigidBody_SetPosition (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & position)
{
	_target->SetPosition (position);
}


DllExport void
RigidBody_SetRotation (Urho3D::RigidBody *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetRotation (rotation);
}


DllExport void
RigidBody_SetTransform (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation)
{
	_target->SetTransform (position, rotation);
}


DllExport void
RigidBody_SetLinearVelocity (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & velocity)
{
	_target->SetLinearVelocity (velocity);
}


DllExport void
RigidBody_SetLinearFactor (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & factor)
{
	_target->SetLinearFactor (factor);
}


DllExport void
RigidBody_SetLinearRestThreshold (Urho3D::RigidBody *_target, float threshold)
{
	_target->SetLinearRestThreshold (threshold);
}


DllExport void
RigidBody_SetLinearDamping (Urho3D::RigidBody *_target, float damping)
{
	_target->SetLinearDamping (damping);
}


DllExport void
RigidBody_SetAngularVelocity (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & velocity)
{
	_target->SetAngularVelocity (velocity);
}


DllExport void
RigidBody_SetAngularFactor (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & factor)
{
	_target->SetAngularFactor (factor);
}


DllExport void
RigidBody_SetAngularRestThreshold (Urho3D::RigidBody *_target, float threshold)
{
	_target->SetAngularRestThreshold (threshold);
}


DllExport void
RigidBody_SetAngularDamping (Urho3D::RigidBody *_target, float damping)
{
	_target->SetAngularDamping (damping);
}


DllExport void
RigidBody_SetFriction (Urho3D::RigidBody *_target, float friction)
{
	_target->SetFriction (friction);
}


DllExport void
RigidBody_SetAnisotropicFriction (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & friction)
{
	_target->SetAnisotropicFriction (friction);
}


DllExport void
RigidBody_SetRollingFriction (Urho3D::RigidBody *_target, float friction)
{
	_target->SetRollingFriction (friction);
}


DllExport void
RigidBody_SetRestitution (Urho3D::RigidBody *_target, float restitution)
{
	_target->SetRestitution (restitution);
}


DllExport void
RigidBody_SetContactProcessingThreshold (Urho3D::RigidBody *_target, float threshold)
{
	_target->SetContactProcessingThreshold (threshold);
}


DllExport void
RigidBody_SetCcdRadius (Urho3D::RigidBody *_target, float radius)
{
	_target->SetCcdRadius (radius);
}


DllExport void
RigidBody_SetCcdMotionThreshold (Urho3D::RigidBody *_target, float threshold)
{
	_target->SetCcdMotionThreshold (threshold);
}


DllExport void
RigidBody_SetUseGravity (Urho3D::RigidBody *_target, bool enable)
{
	_target->SetUseGravity (enable);
}


DllExport void
RigidBody_SetGravityOverride (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & gravity)
{
	_target->SetGravityOverride (gravity);
}


DllExport void
RigidBody_SetKinematic (Urho3D::RigidBody *_target, bool enable)
{
	_target->SetKinematic (enable);
}


DllExport void
RigidBody_SetTrigger (Urho3D::RigidBody *_target, bool enable)
{
	_target->SetTrigger (enable);
}


DllExport void
RigidBody_SetCollisionLayer (Urho3D::RigidBody *_target, unsigned int layer)
{
	_target->SetCollisionLayer (layer);
}


DllExport void
RigidBody_SetCollisionMask (Urho3D::RigidBody *_target, unsigned int mask)
{
	_target->SetCollisionMask (mask);
}


DllExport void
RigidBody_SetCollisionLayerAndMask (Urho3D::RigidBody *_target, unsigned int layer, unsigned int mask)
{
	_target->SetCollisionLayerAndMask (layer, mask);
}


DllExport void
RigidBody_SetCollisionEventMode (Urho3D::RigidBody *_target, enum Urho3D::CollisionEventMode mode)
{
	_target->SetCollisionEventMode (mode);
}


DllExport void
RigidBody_ApplyForce (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & force)
{
	_target->ApplyForce (force);
}


DllExport void
RigidBody_ApplyForce0 (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & force, const class Urho3D::Vector3 & position)
{
	_target->ApplyForce (force, position);
}


DllExport void
RigidBody_ApplyTorque (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & torque)
{
	_target->ApplyTorque (torque);
}


DllExport void
RigidBody_ApplyImpulse (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & impulse)
{
	_target->ApplyImpulse (impulse);
}


DllExport void
RigidBody_ApplyImpulse1 (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & impulse, const class Urho3D::Vector3 & position)
{
	_target->ApplyImpulse (impulse, position);
}


DllExport void
RigidBody_ApplyTorqueImpulse (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & torque)
{
	_target->ApplyTorqueImpulse (torque);
}


DllExport void
RigidBody_ResetForces (Urho3D::RigidBody *_target)
{
	_target->ResetForces ();
}


DllExport void
RigidBody_Activate (Urho3D::RigidBody *_target)
{
	_target->Activate ();
}


DllExport void
RigidBody_ReAddBodyToWorld (Urho3D::RigidBody *_target)
{
	_target->ReAddBodyToWorld ();
}


DllExport void
RigidBody_DisableMassUpdate (Urho3D::RigidBody *_target)
{
	_target->DisableMassUpdate ();
}


DllExport void
RigidBody_EnableMassUpdate (Urho3D::RigidBody *_target)
{
	_target->EnableMassUpdate ();
}


DllExport Urho3D::PhysicsWorld *
RigidBody_GetPhysicsWorld (Urho3D::RigidBody *_target)
{
	return _target->GetPhysicsWorld ();
}


DllExport float
RigidBody_GetMass (Urho3D::RigidBody *_target)
{
	return _target->GetMass ();
}


DllExport Interop::Vector3 
RigidBody_GetPosition (Urho3D::RigidBody *_target)
{
	return *((Interop::Vector3  *) &(_target->GetPosition ()));
}


DllExport Interop::Quaternion 
RigidBody_GetRotation (Urho3D::RigidBody *_target)
{
	return *((Interop::Quaternion  *) &(_target->GetRotation ()));
}


DllExport Interop::Vector3 
RigidBody_GetLinearVelocity (Urho3D::RigidBody *_target)
{
	return *((Interop::Vector3  *) &(_target->GetLinearVelocity ()));
}


DllExport Interop::Vector3 
RigidBody_GetLinearFactor (Urho3D::RigidBody *_target)
{
	return *((Interop::Vector3  *) &(_target->GetLinearFactor ()));
}


DllExport Interop::Vector3 
RigidBody_GetVelocityAtPoint (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & position)
{
	return *((Interop::Vector3  *) &(_target->GetVelocityAtPoint (position)));
}


DllExport float
RigidBody_GetLinearRestThreshold (Urho3D::RigidBody *_target)
{
	return _target->GetLinearRestThreshold ();
}


DllExport float
RigidBody_GetLinearDamping (Urho3D::RigidBody *_target)
{
	return _target->GetLinearDamping ();
}


DllExport Interop::Vector3 
RigidBody_GetAngularVelocity (Urho3D::RigidBody *_target)
{
	return *((Interop::Vector3  *) &(_target->GetAngularVelocity ()));
}


DllExport Interop::Vector3 
RigidBody_GetAngularFactor (Urho3D::RigidBody *_target)
{
	return *((Interop::Vector3  *) &(_target->GetAngularFactor ()));
}


DllExport float
RigidBody_GetAngularRestThreshold (Urho3D::RigidBody *_target)
{
	return _target->GetAngularRestThreshold ();
}


DllExport float
RigidBody_GetAngularDamping (Urho3D::RigidBody *_target)
{
	return _target->GetAngularDamping ();
}


DllExport float
RigidBody_GetFriction (Urho3D::RigidBody *_target)
{
	return _target->GetFriction ();
}


DllExport Interop::Vector3 
RigidBody_GetAnisotropicFriction (Urho3D::RigidBody *_target)
{
	return *((Interop::Vector3  *) &(_target->GetAnisotropicFriction ()));
}


DllExport float
RigidBody_GetRollingFriction (Urho3D::RigidBody *_target)
{
	return _target->GetRollingFriction ();
}


DllExport float
RigidBody_GetRestitution (Urho3D::RigidBody *_target)
{
	return _target->GetRestitution ();
}


DllExport float
RigidBody_GetContactProcessingThreshold (Urho3D::RigidBody *_target)
{
	return _target->GetContactProcessingThreshold ();
}


DllExport float
RigidBody_GetCcdRadius (Urho3D::RigidBody *_target)
{
	return _target->GetCcdRadius ();
}


DllExport float
RigidBody_GetCcdMotionThreshold (Urho3D::RigidBody *_target)
{
	return _target->GetCcdMotionThreshold ();
}


DllExport int
RigidBody_GetUseGravity (Urho3D::RigidBody *_target)
{
	return _target->GetUseGravity ();
}


DllExport Interop::Vector3 
RigidBody_GetGravityOverride (Urho3D::RigidBody *_target)
{
	return *((Interop::Vector3  *) &(_target->GetGravityOverride ()));
}


DllExport Interop::Vector3 
RigidBody_GetCenterOfMass (Urho3D::RigidBody *_target)
{
	return *((Interop::Vector3  *) &(_target->GetCenterOfMass ()));
}


DllExport int
RigidBody_IsKinematic (Urho3D::RigidBody *_target)
{
	return _target->IsKinematic ();
}


DllExport int
RigidBody_IsTrigger (Urho3D::RigidBody *_target)
{
	return _target->IsTrigger ();
}


DllExport int
RigidBody_IsActive (Urho3D::RigidBody *_target)
{
	return _target->IsActive ();
}


DllExport unsigned int
RigidBody_GetCollisionLayer (Urho3D::RigidBody *_target)
{
	return _target->GetCollisionLayer ();
}


DllExport unsigned int
RigidBody_GetCollisionMask (Urho3D::RigidBody *_target)
{
	return _target->GetCollisionMask ();
}


DllExport enum Urho3D::CollisionEventMode
RigidBody_GetCollisionEventMode (Urho3D::RigidBody *_target)
{
	return _target->GetCollisionEventMode ();
}


DllExport void
RigidBody_ApplyWorldTransform (Urho3D::RigidBody *_target, const class Urho3D::Vector3 & newWorldPosition, const class Urho3D::Quaternion & newWorldRotation)
{
	_target->ApplyWorldTransform (newWorldPosition, newWorldRotation);
}


DllExport void
RigidBody_UpdateMass (Urho3D::RigidBody *_target)
{
	_target->UpdateMass ();
}


DllExport void
RigidBody_UpdateGravity (Urho3D::RigidBody *_target)
{
	_target->UpdateGravity ();
}


DllExport void
RigidBody_AddConstraint (Urho3D::RigidBody *_target, Urho3D::Constraint * constraint)
{
	_target->AddConstraint (constraint);
}


DllExport void
RigidBody_RemoveConstraint (Urho3D::RigidBody *_target, Urho3D::Constraint * constraint)
{
	_target->RemoveConstraint (constraint);
}


DllExport void
RigidBody_ReleaseBody (Urho3D::RigidBody *_target)
{
	_target->ReleaseBody ();
}


DllExport int
JsonFile_GetType (Urho3D::JSONFile *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
JsonFile_GetTypeName (Urho3D::JSONFile *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
JsonFile_GetTypeStatic ()
{
	return (JSONFile::GetTypeStatic ()).Value ();
}


DllExport const char *
JsonFile_GetTypeNameStatic ()
{
	return stringdup((JSONFile::GetTypeNameStatic ()).CString ());
}


DllExport void *
JsonFile_JSONFile (Urho3D::Context * context)
{
	return WeakPtr<JSONFile>(new JSONFile(context));
}


DllExport void
JsonFile_RegisterObject (Urho3D::Context * context)
{
	JSONFile::RegisterObject (context);
}


DllExport int
JsonFile_BeginLoad_File (Urho3D::JSONFile *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
JsonFile_BeginLoad_MemoryBuffer (Urho3D::JSONFile *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
JsonFile_Save_File (Urho3D::JSONFile *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
JsonFile_Save_MemoryBuffer (Urho3D::JSONFile *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
JsonFile_Save0_File (Urho3D::JSONFile *_target, File * dest, const char * indendation)
{
	return _target->Save (*dest, Urho3D::String(indendation));
}


DllExport int
JsonFile_Save0_MemoryBuffer (Urho3D::JSONFile *_target, MemoryBuffer * dest, const char * indendation)
{
	return _target->Save (*dest, Urho3D::String(indendation));
}


DllExport int
JsonFile_FromString (Urho3D::JSONFile *_target, const char * source)
{
	return _target->FromString (Urho3D::String(source));
}


DllExport const char *
JsonFile_ToString (Urho3D::JSONFile *_target, const char * indendation)
{
	return stringdup((_target->ToString (Urho3D::String(indendation))).CString ());
}


DllExport int
PListFile_GetType (Urho3D::PListFile *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
PListFile_GetTypeName (Urho3D::PListFile *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
PListFile_GetTypeStatic ()
{
	return (PListFile::GetTypeStatic ()).Value ();
}


DllExport const char *
PListFile_GetTypeNameStatic ()
{
	return stringdup((PListFile::GetTypeNameStatic ()).CString ());
}


DllExport void *
PListFile_PListFile (Urho3D::Context * context)
{
	return WeakPtr<PListFile>(new PListFile(context));
}


DllExport void
PListFile_RegisterObject (Urho3D::Context * context)
{
	PListFile::RegisterObject (context);
}


DllExport int
PListFile_BeginLoad_File (Urho3D::PListFile *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
PListFile_BeginLoad_MemoryBuffer (Urho3D::PListFile *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Localization_GetType (Urho3D::Localization *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Localization_GetTypeName (Urho3D::Localization *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Localization_GetTypeStatic ()
{
	return (Localization::GetTypeStatic ()).Value ();
}


DllExport const char *
Localization_GetTypeNameStatic ()
{
	return stringdup((Localization::GetTypeNameStatic ()).CString ());
}


DllExport void *
Localization_Localization (Urho3D::Context * context)
{
	return WeakPtr<Localization>(new Localization(context));
}


DllExport int
Localization_GetNumLanguages (Urho3D::Localization *_target)
{
	return _target->GetNumLanguages ();
}


DllExport int
Localization_GetLanguageIndex (Urho3D::Localization *_target)
{
	return _target->GetLanguageIndex ();
}


DllExport int
Localization_GetLanguageIndex0 (Urho3D::Localization *_target, const char * language)
{
	return _target->GetLanguageIndex (Urho3D::String(language));
}


DllExport const char *
Localization_GetLanguage (Urho3D::Localization *_target)
{
	return stringdup((_target->GetLanguage ()).CString ());
}


DllExport const char *
Localization_GetLanguage1 (Urho3D::Localization *_target, int index)
{
	return stringdup((_target->GetLanguage (index)).CString ());
}


DllExport void
Localization_SetLanguage (Urho3D::Localization *_target, int index)
{
	_target->SetLanguage (index);
}


DllExport void
Localization_SetLanguage2 (Urho3D::Localization *_target, const char * language)
{
	_target->SetLanguage (Urho3D::String(language));
}


DllExport const char *
Localization_Get (Urho3D::Localization *_target, const char * id)
{
	return stringdup((_target->Get (Urho3D::String(id))).CString ());
}


DllExport void
Localization_Reset (Urho3D::Localization *_target)
{
	_target->Reset ();
}


DllExport void
Localization_LoadJSONFile (Urho3D::Localization *_target, const char * name, Urho3D::String language)
{
	_target->LoadJSONFile (Urho3D::String(name), language);
}


DllExport int
ResourceCache_GetType (Urho3D::ResourceCache *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ResourceCache_GetTypeName (Urho3D::ResourceCache *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ResourceCache_GetTypeStatic ()
{
	return (ResourceCache::GetTypeStatic ()).Value ();
}


DllExport const char *
ResourceCache_GetTypeNameStatic ()
{
	return stringdup((ResourceCache::GetTypeNameStatic ()).CString ());
}


DllExport void *
ResourceCache_ResourceCache (Urho3D::Context * context)
{
	return WeakPtr<ResourceCache>(new ResourceCache(context));
}


DllExport int
ResourceCache_AddResourceDir (Urho3D::ResourceCache *_target, const char * pathName, unsigned int priority)
{
	return _target->AddResourceDir (Urho3D::String(pathName), priority);
}


DllExport int
ResourceCache_AddPackageFile (Urho3D::ResourceCache *_target, Urho3D::PackageFile * package, unsigned int priority)
{
	return _target->AddPackageFile (package, priority);
}


DllExport int
ResourceCache_AddPackageFile0 (Urho3D::ResourceCache *_target, const char * fileName, unsigned int priority)
{
	return _target->AddPackageFile (Urho3D::String(fileName), priority);
}


DllExport int
ResourceCache_AddManualResource (Urho3D::ResourceCache *_target, Urho3D::Resource * resource)
{
	return _target->AddManualResource (resource);
}


DllExport void
ResourceCache_RemoveResourceDir (Urho3D::ResourceCache *_target, const char * pathName)
{
	_target->RemoveResourceDir (Urho3D::String(pathName));
}


DllExport void
ResourceCache_RemovePackageFile (Urho3D::ResourceCache *_target, Urho3D::PackageFile * package, bool releaseResources, bool forceRelease)
{
	_target->RemovePackageFile (package, releaseResources, forceRelease);
}


DllExport void
ResourceCache_RemovePackageFile1 (Urho3D::ResourceCache *_target, const char * fileName, bool releaseResources, bool forceRelease)
{
	_target->RemovePackageFile (Urho3D::String(fileName), releaseResources, forceRelease);
}


DllExport void
ResourceCache_ReleaseResource (Urho3D::ResourceCache *_target, int type, const char * name, bool force)
{
	_target->ReleaseResource (Urho3D::StringHash(type), Urho3D::String(name), force);
}


DllExport void
ResourceCache_ReleaseResources (Urho3D::ResourceCache *_target, int type, bool force)
{
	_target->ReleaseResources (Urho3D::StringHash(type), force);
}


DllExport void
ResourceCache_ReleaseResources2 (Urho3D::ResourceCache *_target, int type, const char * partialName, bool force)
{
	_target->ReleaseResources (Urho3D::StringHash(type), Urho3D::String(partialName), force);
}


DllExport void
ResourceCache_ReleaseResources3 (Urho3D::ResourceCache *_target, const char * partialName, bool force)
{
	_target->ReleaseResources (Urho3D::String(partialName), force);
}


DllExport void
ResourceCache_ReleaseAllResources (Urho3D::ResourceCache *_target, bool force)
{
	_target->ReleaseAllResources (force);
}


DllExport int
ResourceCache_ReloadResource (Urho3D::ResourceCache *_target, Urho3D::Resource * resource)
{
	return _target->ReloadResource (resource);
}


DllExport void
ResourceCache_ReloadResourceWithDependencies (Urho3D::ResourceCache *_target, const char * fileName)
{
	_target->ReloadResourceWithDependencies (Urho3D::String(fileName));
}


DllExport void
ResourceCache_SetMemoryBudget (Urho3D::ResourceCache *_target, int type, unsigned long long budget)
{
	_target->SetMemoryBudget (Urho3D::StringHash(type), budget);
}


DllExport void
ResourceCache_SetAutoReloadResources (Urho3D::ResourceCache *_target, bool enable)
{
	_target->SetAutoReloadResources (enable);
}


DllExport void
ResourceCache_SetReturnFailedResources (Urho3D::ResourceCache *_target, bool enable)
{
	_target->SetReturnFailedResources (enable);
}


DllExport void
ResourceCache_SetSearchPackagesFirst (Urho3D::ResourceCache *_target, bool value)
{
	_target->SetSearchPackagesFirst (value);
}


DllExport void
ResourceCache_SetFinishBackgroundResourcesMs (Urho3D::ResourceCache *_target, int ms)
{
	_target->SetFinishBackgroundResourcesMs (ms);
}


DllExport void
ResourceCache_AddResourceRouter (Urho3D::ResourceCache *_target, Urho3D::ResourceRouter * router, bool addAsFirst)
{
	_target->AddResourceRouter (router, addAsFirst);
}


DllExport void
ResourceCache_RemoveResourceRouter (Urho3D::ResourceCache *_target, Urho3D::ResourceRouter * router)
{
	_target->RemoveResourceRouter (router);
}


DllExport Urho3D::File *
ResourceCache_GetFile (Urho3D::ResourceCache *_target, const char * name, bool sendEventOnFailure)
{
	auto copy = _target->GetFile (Urho3D::String(name), sendEventOnFailure);
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::Resource *
ResourceCache_GetResource (Urho3D::ResourceCache *_target, int type, const char * name, bool sendEventOnFailure)
{
	return _target->GetResource (Urho3D::StringHash(type), Urho3D::String(name), sendEventOnFailure);
}


DllExport Urho3D::Resource *
ResourceCache_GetTempResource (Urho3D::ResourceCache *_target, int type, const char * name, bool sendEventOnFailure)
{
	auto copy = _target->GetTempResource (Urho3D::StringHash(type), Urho3D::String(name), sendEventOnFailure);
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport int
ResourceCache_BackgroundLoadResource (Urho3D::ResourceCache *_target, int type, const char * name, bool sendEventOnFailure, Urho3D::Resource * caller)
{
	return _target->BackgroundLoadResource (Urho3D::StringHash(type), Urho3D::String(name), sendEventOnFailure, caller);
}


DllExport unsigned int
ResourceCache_GetNumBackgroundLoadResources (Urho3D::ResourceCache *_target)
{
	return _target->GetNumBackgroundLoadResources ();
}


DllExport Urho3D::Resource *
ResourceCache_GetExistingResource (Urho3D::ResourceCache *_target, int type, const char * name)
{
	return _target->GetExistingResource (Urho3D::StringHash(type), Urho3D::String(name));
}


DllExport const Vector<SharedPtr<class Urho3D::PackageFile> > &
ResourceCache_GetPackageFiles (Urho3D::ResourceCache *_target)
{
	return _target->GetPackageFiles ();
}


DllExport int
ResourceCache_Exists (Urho3D::ResourceCache *_target, const char * name)
{
	return _target->Exists (Urho3D::String(name));
}


DllExport unsigned long long
ResourceCache_GetMemoryBudget (Urho3D::ResourceCache *_target, int type)
{
	return _target->GetMemoryBudget (Urho3D::StringHash(type));
}


DllExport unsigned long long
ResourceCache_GetMemoryUse (Urho3D::ResourceCache *_target, int type)
{
	return _target->GetMemoryUse (Urho3D::StringHash(type));
}


DllExport unsigned long long
ResourceCache_GetTotalMemoryUse (Urho3D::ResourceCache *_target)
{
	return _target->GetTotalMemoryUse ();
}


DllExport const char *
ResourceCache_GetResourceFileName (Urho3D::ResourceCache *_target, const char * name)
{
	return stringdup((_target->GetResourceFileName (Urho3D::String(name))).CString ());
}


DllExport int
ResourceCache_GetAutoReloadResources (Urho3D::ResourceCache *_target)
{
	return _target->GetAutoReloadResources ();
}


DllExport int
ResourceCache_GetReturnFailedResources (Urho3D::ResourceCache *_target)
{
	return _target->GetReturnFailedResources ();
}


DllExport int
ResourceCache_GetSearchPackagesFirst (Urho3D::ResourceCache *_target)
{
	return _target->GetSearchPackagesFirst ();
}


DllExport int
ResourceCache_GetFinishBackgroundResourcesMs (Urho3D::ResourceCache *_target)
{
	return _target->GetFinishBackgroundResourcesMs ();
}


DllExport Urho3D::ResourceRouter *
ResourceCache_GetResourceRouter (Urho3D::ResourceCache *_target, unsigned int index)
{
	return _target->GetResourceRouter (index);
}


DllExport const char *
ResourceCache_GetPreferredResourceDir (Urho3D::ResourceCache *_target, const char * path)
{
	return stringdup((_target->GetPreferredResourceDir (Urho3D::String(path))).CString ());
}


DllExport const char *
ResourceCache_SanitateResourceName (Urho3D::ResourceCache *_target, const char * name)
{
	return stringdup((_target->SanitateResourceName (Urho3D::String(name))).CString ());
}


DllExport const char *
ResourceCache_SanitateResourceDirName (Urho3D::ResourceCache *_target, const char * name)
{
	return stringdup((_target->SanitateResourceDirName (Urho3D::String(name))).CString ());
}


DllExport void
ResourceCache_StoreResourceDependency (Urho3D::ResourceCache *_target, Urho3D::Resource * resource, const char * dependency)
{
	_target->StoreResourceDependency (resource, Urho3D::String(dependency));
}


DllExport void
ResourceCache_ResetDependencies (Urho3D::ResourceCache *_target, Urho3D::Resource * resource)
{
	_target->ResetDependencies (resource);
}


DllExport const char *
ResourceCache_PrintMemoryUsage (Urho3D::ResourceCache *_target)
{
	return stringdup((_target->PrintMemoryUsage ()).CString ());
}


DllExport int
LogicComponent_GetType (Urho3D::LogicComponent *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
LogicComponent_GetTypeName (Urho3D::LogicComponent *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
LogicComponent_GetTypeStatic ()
{
	return (LogicComponent::GetTypeStatic ()).Value ();
}


DllExport const char *
LogicComponent_GetTypeNameStatic ()
{
	return stringdup((LogicComponent::GetTypeNameStatic ()).CString ());
}


DllExport void *
LogicComponent_LogicComponent (Urho3D::Context * context)
{
	return WeakPtr<LogicComponent>(new LogicComponent(context));
}


DllExport void
LogicComponent_OnSetEnabled (Urho3D::LogicComponent *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
LogicComponent_Start (Urho3D::LogicComponent *_target)
{
	_target->Start ();
}


DllExport void
LogicComponent_DelayedStart (Urho3D::LogicComponent *_target)
{
	_target->DelayedStart ();
}


DllExport void
LogicComponent_Stop (Urho3D::LogicComponent *_target)
{
	_target->Stop ();
}


DllExport void
LogicComponent_Update (Urho3D::LogicComponent *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
LogicComponent_PostUpdate (Urho3D::LogicComponent *_target, float timeStep)
{
	_target->PostUpdate (timeStep);
}


DllExport void
LogicComponent_FixedUpdate (Urho3D::LogicComponent *_target, float timeStep)
{
	_target->FixedUpdate (timeStep);
}


DllExport void
LogicComponent_FixedPostUpdate (Urho3D::LogicComponent *_target, float timeStep)
{
	_target->FixedPostUpdate (timeStep);
}


DllExport int
LogicComponent_IsDelayedStartCalled (Urho3D::LogicComponent *_target)
{
	return _target->IsDelayedStartCalled ();
}


DllExport int
ObjectAnimation_GetType (Urho3D::ObjectAnimation *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ObjectAnimation_GetTypeName (Urho3D::ObjectAnimation *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ObjectAnimation_GetTypeStatic ()
{
	return (ObjectAnimation::GetTypeStatic ()).Value ();
}


DllExport const char *
ObjectAnimation_GetTypeNameStatic ()
{
	return stringdup((ObjectAnimation::GetTypeNameStatic ()).CString ());
}


DllExport void *
ObjectAnimation_ObjectAnimation (Urho3D::Context * context)
{
	return WeakPtr<ObjectAnimation>(new ObjectAnimation(context));
}


DllExport void
ObjectAnimation_RegisterObject (Urho3D::Context * context)
{
	ObjectAnimation::RegisterObject (context);
}


DllExport int
ObjectAnimation_BeginLoad_File (Urho3D::ObjectAnimation *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
ObjectAnimation_BeginLoad_MemoryBuffer (Urho3D::ObjectAnimation *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
ObjectAnimation_Save_File (Urho3D::ObjectAnimation *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
ObjectAnimation_Save_MemoryBuffer (Urho3D::ObjectAnimation *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
ObjectAnimation_LoadXML (Urho3D::ObjectAnimation *_target, const class Urho3D::XMLElement & source)
{
	return _target->LoadXML (source);
}


DllExport int
ObjectAnimation_SaveXML (Urho3D::ObjectAnimation *_target, Urho3D::XMLElement & dest)
{
	return _target->SaveXML (dest);
}


DllExport void
ObjectAnimation_AddAttributeAnimation (Urho3D::ObjectAnimation *_target, const char * name, Urho3D::ValueAnimation * attributeAnimation, enum Urho3D::WrapMode wrapMode, float speed)
{
	_target->AddAttributeAnimation (Urho3D::String(name), attributeAnimation, wrapMode, speed);
}


DllExport void
ObjectAnimation_RemoveAttributeAnimation (Urho3D::ObjectAnimation *_target, const char * name)
{
	_target->RemoveAttributeAnimation (Urho3D::String(name));
}


DllExport void
ObjectAnimation_RemoveAttributeAnimation0 (Urho3D::ObjectAnimation *_target, Urho3D::ValueAnimation * attributeAnimation)
{
	_target->RemoveAttributeAnimation (attributeAnimation);
}


DllExport Urho3D::ValueAnimation *
ObjectAnimation_GetAttributeAnimation (Urho3D::ObjectAnimation *_target, const char * name)
{
	return _target->GetAttributeAnimation (Urho3D::String(name));
}


DllExport enum Urho3D::WrapMode
ObjectAnimation_GetAttributeAnimationWrapMode (Urho3D::ObjectAnimation *_target, const char * name)
{
	return _target->GetAttributeAnimationWrapMode (Urho3D::String(name));
}


DllExport float
ObjectAnimation_GetAttributeAnimationSpeed (Urho3D::ObjectAnimation *_target, const char * name)
{
	return _target->GetAttributeAnimationSpeed (Urho3D::String(name));
}


DllExport Urho3D::ValueAnimationInfo *
ObjectAnimation_GetAttributeAnimationInfo (Urho3D::ObjectAnimation *_target, const char * name)
{
	return _target->GetAttributeAnimationInfo (Urho3D::String(name));
}


DllExport void *
SceneResolver_SceneResolver ()
{
	return new SceneResolver();
}


DllExport void
SceneResolver_Reset (Urho3D::SceneResolver *_target)
{
	_target->Reset ();
}


DllExport void
SceneResolver_AddNode (Urho3D::SceneResolver *_target, unsigned int oldID, Urho3D::Node * node)
{
	_target->AddNode (oldID, node);
}


DllExport void
SceneResolver_AddComponent (Urho3D::SceneResolver *_target, unsigned int oldID, Urho3D::Component * component)
{
	_target->AddComponent (oldID, component);
}


DllExport void
SceneResolver_Resolve (Urho3D::SceneResolver *_target)
{
	_target->Resolve ();
}


DllExport int
Scene_GetType (Urho3D::Scene *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Scene_GetTypeName (Urho3D::Scene *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Scene_GetTypeStatic ()
{
	return (Scene::GetTypeStatic ()).Value ();
}


DllExport const char *
Scene_GetTypeNameStatic ()
{
	return stringdup((Scene::GetTypeNameStatic ()).CString ());
}


DllExport void *
Scene_Scene (Urho3D::Context * context)
{
	return WeakPtr<Scene>(new Scene(context));
}


DllExport void
Scene_RegisterObject (Urho3D::Context * context)
{
	Scene::RegisterObject (context);
}


DllExport int
Scene_Load_File (Urho3D::Scene *_target, File * source)
{
	return _target->Load (*source);
}


DllExport int
Scene_Load_MemoryBuffer (Urho3D::Scene *_target, MemoryBuffer * source)
{
	return _target->Load (*source);
}


DllExport int
Scene_Save_File (Urho3D::Scene *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
Scene_Save_MemoryBuffer (Urho3D::Scene *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
Scene_LoadXML (Urho3D::Scene *_target, const class Urho3D::XMLElement & source)
{
	return _target->LoadXML (source);
}


DllExport void
Scene_MarkNetworkUpdate (Urho3D::Scene *_target)
{
	_target->MarkNetworkUpdate ();
}


DllExport void
Scene_AddReplicationState (Urho3D::Scene *_target, Urho3D::NodeReplicationState * state)
{
	_target->AddReplicationState (state);
}


DllExport int
Scene_LoadXML0_File (Urho3D::Scene *_target, File * source)
{
	return _target->LoadXML (*source);
}


DllExport int
Scene_LoadXML0_MemoryBuffer (Urho3D::Scene *_target, MemoryBuffer * source)
{
	return _target->LoadXML (*source);
}


DllExport int
Scene_LoadJSON_File (Urho3D::Scene *_target, File * source)
{
	return _target->LoadJSON (*source);
}


DllExport int
Scene_LoadJSON_MemoryBuffer (Urho3D::Scene *_target, MemoryBuffer * source)
{
	return _target->LoadJSON (*source);
}


DllExport int
Scene_SaveXML_File (Urho3D::Scene *_target, File * dest, const char * indentation)
{
	return _target->SaveXML (*dest, Urho3D::String(indentation));
}


DllExport int
Scene_SaveXML_MemoryBuffer (Urho3D::Scene *_target, MemoryBuffer * dest, const char * indentation)
{
	return _target->SaveXML (*dest, Urho3D::String(indentation));
}


DllExport int
Scene_SaveJSON_File (Urho3D::Scene *_target, File * dest, const char * indentation)
{
	return _target->SaveJSON (*dest, Urho3D::String(indentation));
}


DllExport int
Scene_SaveJSON_MemoryBuffer (Urho3D::Scene *_target, MemoryBuffer * dest, const char * indentation)
{
	return _target->SaveJSON (*dest, Urho3D::String(indentation));
}


DllExport int
Scene_LoadAsync (Urho3D::Scene *_target, Urho3D::File * file, enum Urho3D::LoadMode mode)
{
	return _target->LoadAsync (file, mode);
}


DllExport int
Scene_LoadAsyncXML (Urho3D::Scene *_target, Urho3D::File * file, enum Urho3D::LoadMode mode)
{
	return _target->LoadAsyncXML (file, mode);
}


DllExport int
Scene_LoadAsyncJSON (Urho3D::Scene *_target, Urho3D::File * file, enum Urho3D::LoadMode mode)
{
	return _target->LoadAsyncJSON (file, mode);
}


DllExport void
Scene_StopAsyncLoading (Urho3D::Scene *_target)
{
	_target->StopAsyncLoading ();
}


DllExport Urho3D::Node *
Scene_Instantiate_File (Urho3D::Scene *_target, File * source, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, enum Urho3D::CreateMode mode)
{
	return _target->Instantiate (*source, position, rotation, mode);
}


DllExport Urho3D::Node *
Scene_Instantiate_MemoryBuffer (Urho3D::Scene *_target, MemoryBuffer * source, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, enum Urho3D::CreateMode mode)
{
	return _target->Instantiate (*source, position, rotation, mode);
}


DllExport Urho3D::Node *
Scene_InstantiateXML (Urho3D::Scene *_target, const class Urho3D::XMLElement & source, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, enum Urho3D::CreateMode mode)
{
	return _target->InstantiateXML (source, position, rotation, mode);
}


DllExport Urho3D::Node *
Scene_InstantiateXML1_File (Urho3D::Scene *_target, File * source, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, enum Urho3D::CreateMode mode)
{
	return _target->InstantiateXML (*source, position, rotation, mode);
}


DllExport Urho3D::Node *
Scene_InstantiateXML1_MemoryBuffer (Urho3D::Scene *_target, MemoryBuffer * source, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, enum Urho3D::CreateMode mode)
{
	return _target->InstantiateXML (*source, position, rotation, mode);
}


DllExport Urho3D::Node *
Scene_InstantiateJSON_File (Urho3D::Scene *_target, File * source, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, enum Urho3D::CreateMode mode)
{
	return _target->InstantiateJSON (*source, position, rotation, mode);
}


DllExport Urho3D::Node *
Scene_InstantiateJSON_MemoryBuffer (Urho3D::Scene *_target, MemoryBuffer * source, const class Urho3D::Vector3 & position, const class Urho3D::Quaternion & rotation, enum Urho3D::CreateMode mode)
{
	return _target->InstantiateJSON (*source, position, rotation, mode);
}


DllExport void
Scene_Clear (Urho3D::Scene *_target, bool clearReplicated, bool clearLocal)
{
	_target->Clear (clearReplicated, clearLocal);
}


DllExport void
Scene_SetUpdateEnabled (Urho3D::Scene *_target, bool enable)
{
	_target->SetUpdateEnabled (enable);
}


DllExport void
Scene_SetTimeScale (Urho3D::Scene *_target, float scale)
{
	_target->SetTimeScale (scale);
}


DllExport void
Scene_SetElapsedTime (Urho3D::Scene *_target, float time)
{
	_target->SetElapsedTime (time);
}


DllExport void
Scene_SetSmoothingConstant (Urho3D::Scene *_target, float constant)
{
	_target->SetSmoothingConstant (constant);
}


DllExport void
Scene_SetSnapThreshold (Urho3D::Scene *_target, float threshold)
{
	_target->SetSnapThreshold (threshold);
}


DllExport void
Scene_SetAsyncLoadingMs (Urho3D::Scene *_target, int ms)
{
	_target->SetAsyncLoadingMs (ms);
}


DllExport void
Scene_AddRequiredPackageFile (Urho3D::Scene *_target, Urho3D::PackageFile * package)
{
	_target->AddRequiredPackageFile (package);
}


DllExport void
Scene_ClearRequiredPackageFiles (Urho3D::Scene *_target)
{
	_target->ClearRequiredPackageFiles ();
}


DllExport void
Scene_RegisterVar (Urho3D::Scene *_target, const char * name)
{
	_target->RegisterVar (Urho3D::String(name));
}


DllExport void
Scene_UnregisterVar (Urho3D::Scene *_target, const char * name)
{
	_target->UnregisterVar (Urho3D::String(name));
}


DllExport void
Scene_UnregisterAllVars (Urho3D::Scene *_target)
{
	_target->UnregisterAllVars ();
}


DllExport Urho3D::Node *
Scene_GetNode (Urho3D::Scene *_target, unsigned int id)
{
	return _target->GetNode (id);
}


DllExport Urho3D::Component *
Scene_GetComponent (Urho3D::Scene *_target, unsigned int id)
{
	return _target->GetComponent (id);
}


DllExport int
Scene_IsUpdateEnabled (Urho3D::Scene *_target)
{
	return _target->IsUpdateEnabled ();
}


DllExport int
Scene_IsAsyncLoading (Urho3D::Scene *_target)
{
	return _target->IsAsyncLoading ();
}


DllExport float
Scene_GetAsyncProgress (Urho3D::Scene *_target)
{
	return _target->GetAsyncProgress ();
}


DllExport enum Urho3D::LoadMode
Scene_GetAsyncLoadMode (Urho3D::Scene *_target)
{
	return _target->GetAsyncLoadMode ();
}


DllExport const char *
Scene_GetFileName (Urho3D::Scene *_target)
{
	return stringdup((_target->GetFileName ()).CString ());
}


DllExport unsigned int
Scene_GetChecksum (Urho3D::Scene *_target)
{
	return _target->GetChecksum ();
}


DllExport float
Scene_GetTimeScale (Urho3D::Scene *_target)
{
	return _target->GetTimeScale ();
}


DllExport float
Scene_GetElapsedTime (Urho3D::Scene *_target)
{
	return _target->GetElapsedTime ();
}


DllExport float
Scene_GetSmoothingConstant (Urho3D::Scene *_target)
{
	return _target->GetSmoothingConstant ();
}


DllExport float
Scene_GetSnapThreshold (Urho3D::Scene *_target)
{
	return _target->GetSnapThreshold ();
}


DllExport int
Scene_GetAsyncLoadingMs (Urho3D::Scene *_target)
{
	return _target->GetAsyncLoadingMs ();
}


DllExport const Vector<SharedPtr<class Urho3D::PackageFile> > &
Scene_GetRequiredPackageFiles (Urho3D::Scene *_target)
{
	return _target->GetRequiredPackageFiles ();
}


DllExport const char *
Scene_GetVarName (Urho3D::Scene *_target, int hash)
{
	return stringdup((_target->GetVarName (Urho3D::StringHash(hash))).CString ());
}


DllExport void
Scene_Update (Urho3D::Scene *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
Scene_BeginThreadedUpdate (Urho3D::Scene *_target)
{
	_target->BeginThreadedUpdate ();
}


DllExport void
Scene_EndThreadedUpdate (Urho3D::Scene *_target)
{
	_target->EndThreadedUpdate ();
}


DllExport void
Scene_DelayedMarkedDirty (Urho3D::Scene *_target, Urho3D::Component * component)
{
	_target->DelayedMarkedDirty (component);
}


DllExport int
Scene_IsThreadedUpdate (Urho3D::Scene *_target)
{
	return _target->IsThreadedUpdate ();
}


DllExport unsigned int
Scene_GetFreeNodeID (Urho3D::Scene *_target, enum Urho3D::CreateMode mode)
{
	return _target->GetFreeNodeID (mode);
}


DllExport unsigned int
Scene_GetFreeComponentID (Urho3D::Scene *_target, enum Urho3D::CreateMode mode)
{
	return _target->GetFreeComponentID (mode);
}


DllExport int
Scene_IsReplicatedID (unsigned int id)
{
	return Scene::IsReplicatedID (id);
}


DllExport void
Scene_NodeTagAdded (Urho3D::Scene *_target, Urho3D::Node * node, const char * tag)
{
	_target->NodeTagAdded (node, Urho3D::String(tag));
}


DllExport void
Scene_NodeTagRemoved (Urho3D::Scene *_target, Urho3D::Node * node, const char * tag)
{
	_target->NodeTagRemoved (node, Urho3D::String(tag));
}


DllExport void
Scene_SetVarNamesAttr (Urho3D::Scene *_target, const char * value)
{
	_target->SetVarNamesAttr (Urho3D::String(value));
}


DllExport const char *
Scene_GetVarNamesAttr (Urho3D::Scene *_target)
{
	return stringdup((_target->GetVarNamesAttr ()).CString ());
}


DllExport void
Scene_PrepareNetworkUpdate (Urho3D::Scene *_target)
{
	_target->PrepareNetworkUpdate ();
}


DllExport void
Scene_CleanupConnection (Urho3D::Scene *_target, Urho3D::Connection * connection)
{
	_target->CleanupConnection (connection);
}


DllExport void
Scene_MarkNetworkUpdate2 (Urho3D::Scene *_target, Urho3D::Node * node)
{
	_target->MarkNetworkUpdate (node);
}


DllExport void
Scene_MarkNetworkUpdate3 (Urho3D::Scene *_target, Urho3D::Component * component)
{
	_target->MarkNetworkUpdate (component);
}


DllExport void
Scene_MarkReplicationDirty (Urho3D::Scene *_target, Urho3D::Node * node)
{
	_target->MarkReplicationDirty (node);
}


DllExport int
SmoothedTransform_GetType (Urho3D::SmoothedTransform *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
SmoothedTransform_GetTypeName (Urho3D::SmoothedTransform *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
SmoothedTransform_GetTypeStatic ()
{
	return (SmoothedTransform::GetTypeStatic ()).Value ();
}


DllExport const char *
SmoothedTransform_GetTypeNameStatic ()
{
	return stringdup((SmoothedTransform::GetTypeNameStatic ()).CString ());
}


DllExport void *
SmoothedTransform_SmoothedTransform (Urho3D::Context * context)
{
	return WeakPtr<SmoothedTransform>(new SmoothedTransform(context));
}


DllExport void
SmoothedTransform_RegisterObject (Urho3D::Context * context)
{
	SmoothedTransform::RegisterObject (context);
}


DllExport void
SmoothedTransform_Update (Urho3D::SmoothedTransform *_target, float constant, float squaredSnapThreshold)
{
	_target->Update (constant, squaredSnapThreshold);
}


DllExport void
SmoothedTransform_SetTargetPosition (Urho3D::SmoothedTransform *_target, const class Urho3D::Vector3 & position)
{
	_target->SetTargetPosition (position);
}


DllExport void
SmoothedTransform_SetTargetRotation (Urho3D::SmoothedTransform *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetTargetRotation (rotation);
}


DllExport void
SmoothedTransform_SetTargetWorldPosition (Urho3D::SmoothedTransform *_target, const class Urho3D::Vector3 & position)
{
	_target->SetTargetWorldPosition (position);
}


DllExport void
SmoothedTransform_SetTargetWorldRotation (Urho3D::SmoothedTransform *_target, const class Urho3D::Quaternion & rotation)
{
	_target->SetTargetWorldRotation (rotation);
}


DllExport Interop::Vector3 
SmoothedTransform_GetTargetPosition (Urho3D::SmoothedTransform *_target)
{
	return *((Interop::Vector3  *) &(_target->GetTargetPosition ()));
}


DllExport Interop::Quaternion 
SmoothedTransform_GetTargetRotation (Urho3D::SmoothedTransform *_target)
{
	return *((Interop::Quaternion  *) &(_target->GetTargetRotation ()));
}


DllExport Interop::Vector3 
SmoothedTransform_GetTargetWorldPosition (Urho3D::SmoothedTransform *_target)
{
	return *((Interop::Vector3  *) &(_target->GetTargetWorldPosition ()));
}


DllExport Interop::Quaternion 
SmoothedTransform_GetTargetWorldRotation (Urho3D::SmoothedTransform *_target)
{
	return *((Interop::Quaternion  *) &(_target->GetTargetWorldRotation ()));
}


DllExport int
SmoothedTransform_IsInProgress (Urho3D::SmoothedTransform *_target)
{
	return _target->IsInProgress ();
}


DllExport int
SplinePath_GetType (Urho3D::SplinePath *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
SplinePath_GetTypeName (Urho3D::SplinePath *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
SplinePath_GetTypeStatic ()
{
	return (SplinePath::GetTypeStatic ()).Value ();
}


DllExport const char *
SplinePath_GetTypeNameStatic ()
{
	return stringdup((SplinePath::GetTypeNameStatic ()).CString ());
}


DllExport void *
SplinePath_SplinePath (Urho3D::Context * context)
{
	return WeakPtr<SplinePath>(new SplinePath(context));
}


DllExport void
SplinePath_RegisterObject (Urho3D::Context * context)
{
	SplinePath::RegisterObject (context);
}


DllExport void
SplinePath_ApplyAttributes (Urho3D::SplinePath *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
SplinePath_DrawDebugGeometry (Urho3D::SplinePath *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
SplinePath_AddControlPoint (Urho3D::SplinePath *_target, Urho3D::Node * point, unsigned int index)
{
	_target->AddControlPoint (point, index);
}


DllExport void
SplinePath_RemoveControlPoint (Urho3D::SplinePath *_target, Urho3D::Node * point)
{
	_target->RemoveControlPoint (point);
}


DllExport void
SplinePath_ClearControlPoints (Urho3D::SplinePath *_target)
{
	_target->ClearControlPoints ();
}


DllExport void
SplinePath_SetInterpolationMode (Urho3D::SplinePath *_target, enum Urho3D::InterpolationMode interpolationMode)
{
	_target->SetInterpolationMode (interpolationMode);
}


DllExport void
SplinePath_SetSpeed (Urho3D::SplinePath *_target, float speed)
{
	_target->SetSpeed (speed);
}


DllExport void
SplinePath_SetPosition (Urho3D::SplinePath *_target, float factor)
{
	_target->SetPosition (factor);
}


DllExport void
SplinePath_SetControlledNode (Urho3D::SplinePath *_target, Urho3D::Node * controlled)
{
	_target->SetControlledNode (controlled);
}


DllExport enum Urho3D::InterpolationMode
SplinePath_GetInterpolationMode (Urho3D::SplinePath *_target)
{
	return _target->GetInterpolationMode ();
}


DllExport float
SplinePath_GetSpeed (Urho3D::SplinePath *_target)
{
	return _target->GetSpeed ();
}


DllExport float
SplinePath_GetLength (Urho3D::SplinePath *_target)
{
	return _target->GetLength ();
}


DllExport Interop::Vector3 
SplinePath_GetPosition (Urho3D::SplinePath *_target)
{
	return *((Interop::Vector3  *) &(_target->GetPosition ()));
}


DllExport Urho3D::Node *
SplinePath_GetControlledNode (Urho3D::SplinePath *_target)
{
	return _target->GetControlledNode ();
}


DllExport Interop::Vector3 
SplinePath_GetPoint (Urho3D::SplinePath *_target, float factor)
{
	return *((Interop::Vector3  *) &(_target->GetPoint (factor)));
}


DllExport void
SplinePath_Move (Urho3D::SplinePath *_target, float timeStep)
{
	_target->Move (timeStep);
}


DllExport void
SplinePath_Reset (Urho3D::SplinePath *_target)
{
	_target->Reset ();
}


DllExport int
SplinePath_IsFinished (Urho3D::SplinePath *_target)
{
	return _target->IsFinished ();
}


DllExport void
SplinePath_SetControlledIdAttr (Urho3D::SplinePath *_target, unsigned int value)
{
	_target->SetControlledIdAttr (value);
}


DllExport unsigned int
SplinePath_GetControlledIdAttr (Urho3D::SplinePath *_target)
{
	return _target->GetControlledIdAttr ();
}


DllExport void *
UnknownComponent_UnknownComponent (Urho3D::Context * context)
{
	return WeakPtr<UnknownComponent>(new UnknownComponent(context));
}


DllExport void
UnknownComponent_RegisterObject (Urho3D::Context * context)
{
	UnknownComponent::RegisterObject (context);
}


DllExport int
UnknownComponent_GetType (Urho3D::UnknownComponent *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
UnknownComponent_GetTypeName (Urho3D::UnknownComponent *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
UnknownComponent_Load_File (Urho3D::UnknownComponent *_target, File * source)
{
	return _target->Load (*source);
}


DllExport int
UnknownComponent_Load_MemoryBuffer (Urho3D::UnknownComponent *_target, MemoryBuffer * source)
{
	return _target->Load (*source);
}


DllExport int
UnknownComponent_LoadXML (Urho3D::UnknownComponent *_target, const class Urho3D::XMLElement & source)
{
	return _target->LoadXML (source);
}


DllExport int
UnknownComponent_Save_File (Urho3D::UnknownComponent *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
UnknownComponent_Save_MemoryBuffer (Urho3D::UnknownComponent *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
UnknownComponent_SaveXML (Urho3D::UnknownComponent *_target, Urho3D::XMLElement & dest)
{
	return _target->SaveXML (dest);
}


DllExport void
UnknownComponent_SetTypeName (Urho3D::UnknownComponent *_target, const char * typeName)
{
	_target->SetTypeName (Urho3D::String(typeName));
}


DllExport void
UnknownComponent_SetType (Urho3D::UnknownComponent *_target, int typeHash)
{
	_target->SetType (Urho3D::StringHash(typeHash));
}


DllExport int
UnknownComponent_GetUseXML (Urho3D::UnknownComponent *_target)
{
	return _target->GetUseXML ();
}


DllExport int
UnknownComponent_GetTypeStatic ()
{
	return (UnknownComponent::GetTypeStatic ()).Value ();
}


DllExport const char *
UnknownComponent_GetTypeNameStatic ()
{
	return stringdup((UnknownComponent::GetTypeNameStatic ()).CString ());
}


DllExport int
ValueAnimation_GetType (Urho3D::ValueAnimation *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ValueAnimation_GetTypeName (Urho3D::ValueAnimation *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ValueAnimation_GetTypeStatic ()
{
	return (ValueAnimation::GetTypeStatic ()).Value ();
}


DllExport const char *
ValueAnimation_GetTypeNameStatic ()
{
	return stringdup((ValueAnimation::GetTypeNameStatic ()).CString ());
}


DllExport void *
ValueAnimation_ValueAnimation (Urho3D::Context * context)
{
	return WeakPtr<ValueAnimation>(new ValueAnimation(context));
}


DllExport void
ValueAnimation_RegisterObject (Urho3D::Context * context)
{
	ValueAnimation::RegisterObject (context);
}


DllExport int
ValueAnimation_BeginLoad_File (Urho3D::ValueAnimation *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
ValueAnimation_BeginLoad_MemoryBuffer (Urho3D::ValueAnimation *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
ValueAnimation_Save_File (Urho3D::ValueAnimation *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
ValueAnimation_Save_MemoryBuffer (Urho3D::ValueAnimation *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport int
ValueAnimation_LoadXML (Urho3D::ValueAnimation *_target, const class Urho3D::XMLElement & source)
{
	return _target->LoadXML (source);
}


DllExport int
ValueAnimation_SaveXML (Urho3D::ValueAnimation *_target, Urho3D::XMLElement & dest)
{
	return _target->SaveXML (dest);
}


DllExport void
ValueAnimation_SetOwner (Urho3D::ValueAnimation *_target, void * owner)
{
	_target->SetOwner (owner);
}


DllExport void
ValueAnimation_SetInterpolationMethod (Urho3D::ValueAnimation *_target, enum Urho3D::InterpMethod method)
{
	_target->SetInterpolationMethod (method);
}


DllExport void
ValueAnimation_SetSplineTension (Urho3D::ValueAnimation *_target, float tension)
{
	_target->SetSplineTension (tension);
}


DllExport void
ValueAnimation_SetValueType (Urho3D::ValueAnimation *_target, enum Urho3D::VariantType valueType)
{
	_target->SetValueType (valueType);
}


// Urho3D::Variant overloads begin:
DllExport int
ValueAnimation_SetKeyFrame_0 (Urho3D::ValueAnimation *_target, float time, const class Urho3D::Vector3 & value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_1 (Urho3D::ValueAnimation *_target, float time, const class Urho3D::IntRect & value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_2 (Urho3D::ValueAnimation *_target, float time, const class Urho3D::Color & value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_3 (Urho3D::ValueAnimation *_target, float time, const class Urho3D::Vector2 & value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_4 (Urho3D::ValueAnimation *_target, float time, const class Urho3D::Vector4 & value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_5 (Urho3D::ValueAnimation *_target, float time, const class Urho3D::IntVector2 & value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_6 (Urho3D::ValueAnimation *_target, float time, const class Urho3D::Quaternion & value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_7 (Urho3D::ValueAnimation *_target, float time, const class Urho3D::Matrix4 & value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_8 (Urho3D::ValueAnimation *_target, float time, const class Urho3D::Matrix3x4 & value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_9 (Urho3D::ValueAnimation *_target, float time, int value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_10 (Urho3D::ValueAnimation *_target, float time, float value)
{
	return _target->SetKeyFrame (time, (value));
}

DllExport int
ValueAnimation_SetKeyFrame_11 (Urho3D::ValueAnimation *_target, float time, const char * value)
{
	return _target->SetKeyFrame (time, Urho3D::String(value));
}

DllExport int
ValueAnimation_SetKeyFrame_12 (Urho3D::ValueAnimation *_target, float time, bool value)
{
	return _target->SetKeyFrame (time, (value));
}

// Urho3D::Variant overloads end.
DllExport int
ValueAnimation_IsValid (Urho3D::ValueAnimation *_target)
{
	return _target->IsValid ();
}


DllExport void *
ValueAnimation_GetOwner (Urho3D::ValueAnimation *_target)
{
	return _target->GetOwner ();
}


DllExport enum Urho3D::InterpMethod
ValueAnimation_GetInterpolationMethod (Urho3D::ValueAnimation *_target)
{
	return _target->GetInterpolationMethod ();
}


DllExport float
ValueAnimation_GetSplineTension (Urho3D::ValueAnimation *_target)
{
	return _target->GetSplineTension ();
}


DllExport enum Urho3D::VariantType
ValueAnimation_GetValueType (Urho3D::ValueAnimation *_target)
{
	return _target->GetValueType ();
}


DllExport float
ValueAnimation_GetBeginTime (Urho3D::ValueAnimation *_target)
{
	return _target->GetBeginTime ();
}


DllExport float
ValueAnimation_GetEndTime (Urho3D::ValueAnimation *_target)
{
	return _target->GetEndTime ();
}


DllExport Urho3D::Variant
ValueAnimation_GetAnimationValue (Urho3D::ValueAnimation *_target, float scaledTime)
{
	return _target->GetAnimationValue (scaledTime);
}


DllExport int
ValueAnimation_HasEventFrames (Urho3D::ValueAnimation *_target)
{
	return _target->HasEventFrames ();
}


DllExport int
Button_GetType (Urho3D::Button *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Button_GetTypeName (Urho3D::Button *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Button_GetTypeStatic ()
{
	return (Button::GetTypeStatic ()).Value ();
}


DllExport const char *
Button_GetTypeNameStatic ()
{
	return stringdup((Button::GetTypeNameStatic ()).CString ());
}


DllExport void *
Button_Button (Urho3D::Context * context)
{
	return WeakPtr<Button>(new Button(context));
}


DllExport void
Button_RegisterObject (Urho3D::Context * context)
{
	Button::RegisterObject (context);
}


DllExport void
Button_Update (Urho3D::Button *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
Button_OnClickBegin (Urho3D::Button *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnClickBegin (position, screenPosition, button, buttons, qualifiers, cursor);
}


DllExport void
Button_OnClickEnd (Urho3D::Button *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor, Urho3D::UIElement * beginElement)
{
	_target->OnClickEnd (position, screenPosition, button, buttons, qualifiers, cursor, beginElement);
}


DllExport void
Button_SetPressedOffset (Urho3D::Button *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetPressedOffset (offset);
}


DllExport void
Button_SetPressedOffset0 (Urho3D::Button *_target, int x, int y)
{
	_target->SetPressedOffset (x, y);
}


DllExport void
Button_SetPressedChildOffset (Urho3D::Button *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetPressedChildOffset (offset);
}


DllExport void
Button_SetPressedChildOffset1 (Urho3D::Button *_target, int x, int y)
{
	_target->SetPressedChildOffset (x, y);
}


DllExport void
Button_SetRepeat (Urho3D::Button *_target, float delay, float rate)
{
	_target->SetRepeat (delay, rate);
}


DllExport void
Button_SetRepeatDelay (Urho3D::Button *_target, float delay)
{
	_target->SetRepeatDelay (delay);
}


DllExport void
Button_SetRepeatRate (Urho3D::Button *_target, float rate)
{
	_target->SetRepeatRate (rate);
}


DllExport Interop::IntVector2 
Button_GetPressedOffset (Urho3D::Button *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetPressedOffset ()));
}


DllExport Interop::IntVector2 
Button_GetPressedChildOffset (Urho3D::Button *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetPressedChildOffset ()));
}


DllExport float
Button_GetRepeatDelay (Urho3D::Button *_target)
{
	return _target->GetRepeatDelay ();
}


DllExport float
Button_GetRepeatRate (Urho3D::Button *_target)
{
	return _target->GetRepeatRate ();
}


DllExport int
Button_IsPressed (Urho3D::Button *_target)
{
	return _target->IsPressed ();
}


DllExport int
CheckBox_GetType (Urho3D::CheckBox *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CheckBox_GetTypeName (Urho3D::CheckBox *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CheckBox_GetTypeStatic ()
{
	return (CheckBox::GetTypeStatic ()).Value ();
}


DllExport const char *
CheckBox_GetTypeNameStatic ()
{
	return stringdup((CheckBox::GetTypeNameStatic ()).CString ());
}


DllExport void *
CheckBox_CheckBox (Urho3D::Context * context)
{
	return WeakPtr<CheckBox>(new CheckBox(context));
}


DllExport void
CheckBox_RegisterObject (Urho3D::Context * context)
{
	CheckBox::RegisterObject (context);
}


DllExport void
CheckBox_OnClickBegin (Urho3D::CheckBox *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnClickBegin (position, screenPosition, button, buttons, qualifiers, cursor);
}


DllExport void
CheckBox_SetChecked (Urho3D::CheckBox *_target, bool enable)
{
	_target->SetChecked (enable);
}


DllExport void
CheckBox_SetCheckedOffset (Urho3D::CheckBox *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetCheckedOffset (offset);
}


DllExport void
CheckBox_SetCheckedOffset0 (Urho3D::CheckBox *_target, int x, int y)
{
	_target->SetCheckedOffset (x, y);
}


DllExport int
CheckBox_IsChecked (Urho3D::CheckBox *_target)
{
	return _target->IsChecked ();
}


DllExport Interop::IntVector2 
CheckBox_GetCheckedOffset (Urho3D::CheckBox *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetCheckedOffset ()));
}


DllExport int
Menu_GetType (Urho3D::Menu *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Menu_GetTypeName (Urho3D::Menu *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Menu_GetTypeStatic ()
{
	return (Menu::GetTypeStatic ()).Value ();
}


DllExport const char *
Menu_GetTypeNameStatic ()
{
	return stringdup((Menu::GetTypeNameStatic ()).CString ());
}


DllExport void *
Menu_Menu (Urho3D::Context * context)
{
	return WeakPtr<Menu>(new Menu(context));
}


DllExport void
Menu_RegisterObject (Urho3D::Context * context)
{
	Menu::RegisterObject (context);
}


DllExport int
Menu_LoadXML (Urho3D::Menu *_target, const class Urho3D::XMLElement & source, Urho3D::XMLFile * styleFile)
{
	return _target->LoadXML (source, styleFile);
}


DllExport int
Menu_SaveXML (Urho3D::Menu *_target, Urho3D::XMLElement & dest)
{
	return _target->SaveXML (dest);
}


DllExport void
Menu_Update (Urho3D::Menu *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
Menu_OnHover (Urho3D::Menu *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnHover (position, screenPosition, buttons, qualifiers, cursor);
}


DllExport void
Menu_OnShowPopup (Urho3D::Menu *_target)
{
	_target->OnShowPopup ();
}


DllExport void
Menu_OnHidePopup (Urho3D::Menu *_target)
{
	_target->OnHidePopup ();
}


DllExport void
Menu_SetPopup (Urho3D::Menu *_target, Urho3D::UIElement * popup)
{
	_target->SetPopup (popup);
}


DllExport void
Menu_SetPopupOffset (Urho3D::Menu *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetPopupOffset (offset);
}


DllExport void
Menu_SetPopupOffset0 (Urho3D::Menu *_target, int x, int y)
{
	_target->SetPopupOffset (x, y);
}


DllExport void
Menu_ShowPopup (Urho3D::Menu *_target, bool enable)
{
	_target->ShowPopup (enable);
}


DllExport void
Menu_SetAccelerator (Urho3D::Menu *_target, int key, int qualifiers)
{
	_target->SetAccelerator (key, qualifiers);
}


DllExport Urho3D::UIElement *
Menu_GetPopup (Urho3D::Menu *_target)
{
	return _target->GetPopup ();
}


DllExport Interop::IntVector2 
Menu_GetPopupOffset (Urho3D::Menu *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetPopupOffset ()));
}


DllExport int
Menu_GetShowPopup (Urho3D::Menu *_target)
{
	return _target->GetShowPopup ();
}


DllExport int
Menu_GetAcceleratorKey (Urho3D::Menu *_target)
{
	return _target->GetAcceleratorKey ();
}


DllExport int
Menu_GetAcceleratorQualifiers (Urho3D::Menu *_target)
{
	return _target->GetAcceleratorQualifiers ();
}


DllExport int
DropDownList_GetType (Urho3D::DropDownList *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
DropDownList_GetTypeName (Urho3D::DropDownList *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
DropDownList_GetTypeStatic ()
{
	return (DropDownList::GetTypeStatic ()).Value ();
}


DllExport const char *
DropDownList_GetTypeNameStatic ()
{
	return stringdup((DropDownList::GetTypeNameStatic ()).CString ());
}


DllExport void *
DropDownList_DropDownList (Urho3D::Context * context)
{
	return WeakPtr<DropDownList>(new DropDownList(context));
}


DllExport void
DropDownList_RegisterObject (Urho3D::Context * context)
{
	DropDownList::RegisterObject (context);
}


DllExport void
DropDownList_ApplyAttributes (Urho3D::DropDownList *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
DropDownList_OnShowPopup (Urho3D::DropDownList *_target)
{
	_target->OnShowPopup ();
}


DllExport void
DropDownList_OnHidePopup (Urho3D::DropDownList *_target)
{
	_target->OnHidePopup ();
}


DllExport void
DropDownList_OnSetEditable (Urho3D::DropDownList *_target)
{
	_target->OnSetEditable ();
}


DllExport void
DropDownList_AddItem (Urho3D::DropDownList *_target, Urho3D::UIElement * item)
{
	_target->AddItem (item);
}


DllExport void
DropDownList_InsertItem (Urho3D::DropDownList *_target, unsigned int index, Urho3D::UIElement * item)
{
	_target->InsertItem (index, item);
}


DllExport void
DropDownList_RemoveItem (Urho3D::DropDownList *_target, Urho3D::UIElement * item)
{
	_target->RemoveItem (item);
}


DllExport void
DropDownList_RemoveItem0 (Urho3D::DropDownList *_target, unsigned int index)
{
	_target->RemoveItem (index);
}


DllExport void
DropDownList_RemoveAllItems (Urho3D::DropDownList *_target)
{
	_target->RemoveAllItems ();
}


DllExport void
DropDownList_SetSelection (Urho3D::DropDownList *_target, unsigned int index)
{
	_target->SetSelection (index);
}


DllExport void
DropDownList_SetPlaceholderText (Urho3D::DropDownList *_target, const char * text)
{
	_target->SetPlaceholderText (Urho3D::String(text));
}


DllExport void
DropDownList_SetResizePopup (Urho3D::DropDownList *_target, bool enable)
{
	_target->SetResizePopup (enable);
}


DllExport unsigned int
DropDownList_GetNumItems (Urho3D::DropDownList *_target)
{
	return _target->GetNumItems ();
}


DllExport Urho3D::UIElement *
DropDownList_GetItem (Urho3D::DropDownList *_target, unsigned int index)
{
	return _target->GetItem (index);
}


DllExport unsigned int
DropDownList_GetSelection (Urho3D::DropDownList *_target)
{
	return _target->GetSelection ();
}


DllExport Urho3D::UIElement *
DropDownList_GetSelectedItem (Urho3D::DropDownList *_target)
{
	return _target->GetSelectedItem ();
}


DllExport Urho3D::ListView *
DropDownList_GetListView (Urho3D::DropDownList *_target)
{
	return _target->GetListView ();
}


DllExport Urho3D::UIElement *
DropDownList_GetPlaceholder (Urho3D::DropDownList *_target)
{
	return _target->GetPlaceholder ();
}


DllExport const char *
DropDownList_GetPlaceholderText (Urho3D::DropDownList *_target)
{
	return stringdup((_target->GetPlaceholderText ()).CString ());
}


DllExport int
DropDownList_GetResizePopup (Urho3D::DropDownList *_target)
{
	return _target->GetResizePopup ();
}


DllExport void
DropDownList_SetSelectionAttr (Urho3D::DropDownList *_target, unsigned int index)
{
	_target->SetSelectionAttr (index);
}


DllExport int
FileSelector_GetType (Urho3D::FileSelector *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
FileSelector_GetTypeName (Urho3D::FileSelector *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
FileSelector_GetTypeStatic ()
{
	return (FileSelector::GetTypeStatic ()).Value ();
}


DllExport const char *
FileSelector_GetTypeNameStatic ()
{
	return stringdup((FileSelector::GetTypeNameStatic ()).CString ());
}


DllExport void *
FileSelector_FileSelector (Urho3D::Context * context)
{
	return WeakPtr<FileSelector>(new FileSelector(context));
}


DllExport void
FileSelector_RegisterObject (Urho3D::Context * context)
{
	FileSelector::RegisterObject (context);
}


DllExport void
FileSelector_SetDefaultStyle (Urho3D::FileSelector *_target, Urho3D::XMLFile * style)
{
	_target->SetDefaultStyle (style);
}


DllExport void
FileSelector_SetTitle (Urho3D::FileSelector *_target, const char * text)
{
	_target->SetTitle (Urho3D::String(text));
}


DllExport void
FileSelector_SetButtonTexts (Urho3D::FileSelector *_target, const char * okText, const char * cancelText)
{
	_target->SetButtonTexts (Urho3D::String(okText), Urho3D::String(cancelText));
}


DllExport void
FileSelector_SetPath (Urho3D::FileSelector *_target, const char * path)
{
	_target->SetPath (Urho3D::String(path));
}


DllExport void
FileSelector_SetFileName (Urho3D::FileSelector *_target, const char * fileName)
{
	_target->SetFileName (Urho3D::String(fileName));
}


DllExport void
FileSelector_SetDirectoryMode (Urho3D::FileSelector *_target, bool enable)
{
	_target->SetDirectoryMode (enable);
}


DllExport void
FileSelector_UpdateElements (Urho3D::FileSelector *_target)
{
	_target->UpdateElements ();
}


DllExport Urho3D::XMLFile *
FileSelector_GetDefaultStyle (Urho3D::FileSelector *_target)
{
	return _target->GetDefaultStyle ();
}


DllExport Urho3D::Window *
FileSelector_GetWindow (Urho3D::FileSelector *_target)
{
	return _target->GetWindow ();
}


DllExport Urho3D::Text *
FileSelector_GetTitleText (Urho3D::FileSelector *_target)
{
	return _target->GetTitleText ();
}


DllExport Urho3D::ListView *
FileSelector_GetFileList (Urho3D::FileSelector *_target)
{
	return _target->GetFileList ();
}


DllExport Urho3D::LineEdit *
FileSelector_GetPathEdit (Urho3D::FileSelector *_target)
{
	return _target->GetPathEdit ();
}


DllExport Urho3D::LineEdit *
FileSelector_GetFileNameEdit (Urho3D::FileSelector *_target)
{
	return _target->GetFileNameEdit ();
}


DllExport Urho3D::DropDownList *
FileSelector_GetFilterList (Urho3D::FileSelector *_target)
{
	return _target->GetFilterList ();
}


DllExport Urho3D::Button *
FileSelector_GetOKButton (Urho3D::FileSelector *_target)
{
	return _target->GetOKButton ();
}


DllExport Urho3D::Button *
FileSelector_GetCancelButton (Urho3D::FileSelector *_target)
{
	return _target->GetCancelButton ();
}


DllExport Urho3D::Button *
FileSelector_GetCloseButton (Urho3D::FileSelector *_target)
{
	return _target->GetCloseButton ();
}


DllExport const char *
FileSelector_GetTitle (Urho3D::FileSelector *_target)
{
	return stringdup((_target->GetTitle ()).CString ());
}


DllExport const char *
FileSelector_GetPath (Urho3D::FileSelector *_target)
{
	return stringdup((_target->GetPath ()).CString ());
}


DllExport const char *
FileSelector_GetFileName (Urho3D::FileSelector *_target)
{
	return stringdup((_target->GetFileName ()).CString ());
}


DllExport const char *
FileSelector_GetFilter (Urho3D::FileSelector *_target)
{
	return stringdup((_target->GetFilter ()).CString ());
}


DllExport unsigned int
FileSelector_GetFilterIndex (Urho3D::FileSelector *_target)
{
	return _target->GetFilterIndex ();
}


DllExport int
FileSelector_GetDirectoryMode (Urho3D::FileSelector *_target)
{
	return _target->GetDirectoryMode ();
}


DllExport int
Font_GetType (Urho3D::Font *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Font_GetTypeName (Urho3D::Font *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Font_GetTypeStatic ()
{
	return (Font::GetTypeStatic ()).Value ();
}


DllExport const char *
Font_GetTypeNameStatic ()
{
	return stringdup((Font::GetTypeNameStatic ()).CString ());
}


DllExport void *
Font_Font (Urho3D::Context * context)
{
	return WeakPtr<Font>(new Font(context));
}


DllExport void
Font_RegisterObject (Urho3D::Context * context)
{
	Font::RegisterObject (context);
}


DllExport int
Font_BeginLoad_File (Urho3D::Font *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Font_BeginLoad_MemoryBuffer (Urho3D::Font *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
Font_SaveXML_File (Urho3D::Font *_target, File * dest, int pointSize, bool usedGlyphs, const char * indentation)
{
	return _target->SaveXML (*dest, pointSize, usedGlyphs, Urho3D::String(indentation));
}


DllExport int
Font_SaveXML_MemoryBuffer (Urho3D::Font *_target, MemoryBuffer * dest, int pointSize, bool usedGlyphs, const char * indentation)
{
	return _target->SaveXML (*dest, pointSize, usedGlyphs, Urho3D::String(indentation));
}


DllExport void
Font_SetAbsoluteGlyphOffset (Urho3D::Font *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetAbsoluteGlyphOffset (offset);
}


DllExport void
Font_SetScaledGlyphOffset (Urho3D::Font *_target, const class Urho3D::Vector2 & offset)
{
	_target->SetScaledGlyphOffset (offset);
}


DllExport Urho3D::FontFace *
Font_GetFace (Urho3D::Font *_target, float pointSize)
{
	return _target->GetFace (pointSize);
}


DllExport enum Urho3D::FontType
Font_GetFontType (Urho3D::Font *_target)
{
	return _target->GetFontType ();
}


DllExport int
Font_IsSDFFont (Urho3D::Font *_target)
{
	return _target->IsSDFFont ();
}


DllExport Interop::IntVector2 
Font_GetAbsoluteGlyphOffset (Urho3D::Font *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetAbsoluteGlyphOffset ()));
}


DllExport Interop::Vector2 
Font_GetScaledGlyphOffset (Urho3D::Font *_target)
{
	return *((Interop::Vector2  *) &(_target->GetScaledGlyphOffset ()));
}


DllExport Interop::IntVector2 
Font_GetTotalGlyphOffset (Urho3D::Font *_target, float pointSize)
{
	return *((Interop::IntVector2  *) &(_target->GetTotalGlyphOffset (pointSize)));
}


DllExport void
Font_ReleaseFaces (Urho3D::Font *_target)
{
	_target->ReleaseFaces ();
}


DllExport int
FontFace_Load (Urho3D::FontFace *_target, const unsigned char * fontData, unsigned int fontDataSize, float pointSize)
{
	return _target->Load (fontData, fontDataSize, pointSize);
}


DllExport const struct Urho3D::FontGlyph *
FontFace_GetGlyph (Urho3D::FontFace *_target, unsigned int c)
{
	return _target->GetGlyph (c);
}


DllExport int
FontFace_HasMutableGlyphs (Urho3D::FontFace *_target)
{
	return _target->HasMutableGlyphs ();
}


DllExport float
FontFace_GetKerning (Urho3D::FontFace *_target, unsigned int c, unsigned int d)
{
	return _target->GetKerning (c, d);
}


DllExport int
FontFace_IsDataLost (Urho3D::FontFace *_target)
{
	return _target->IsDataLost ();
}


DllExport float
FontFace_GetPointSize (Urho3D::FontFace *_target)
{
	return _target->GetPointSize ();
}


DllExport float
FontFace_GetRowHeight (Urho3D::FontFace *_target)
{
	return _target->GetRowHeight ();
}


DllExport const Vector<SharedPtr<class Urho3D::Texture2D> > &
FontFace_GetTextures (Urho3D::FontFace *_target)
{
	return _target->GetTextures ();
}


DllExport void *
FontFaceBitmap_FontFaceBitmap (Urho3D::Font * font)
{
	return WeakPtr<FontFaceBitmap>(new FontFaceBitmap(font));
}


DllExport int
FontFaceBitmap_Load (Urho3D::FontFaceBitmap *_target, const unsigned char * fontData, unsigned int fontDataSize, float pointSize)
{
	return _target->Load (fontData, fontDataSize, pointSize);
}


DllExport int
FontFaceBitmap_Load0 (Urho3D::FontFaceBitmap *_target, Urho3D::FontFace * fontFace, bool usedGlyphs)
{
	return _target->Load (fontFace, usedGlyphs);
}


DllExport int
FontFaceBitmap_Save_File (Urho3D::FontFaceBitmap *_target, File * dest, int pointSize, const char * indentation)
{
	return _target->Save (*dest, pointSize, Urho3D::String(indentation));
}


DllExport int
FontFaceBitmap_Save_MemoryBuffer (Urho3D::FontFaceBitmap *_target, MemoryBuffer * dest, int pointSize, const char * indentation)
{
	return _target->Save (*dest, pointSize, Urho3D::String(indentation));
}


DllExport void *
FontFaceFreeType_FontFaceFreeType (Urho3D::Font * font)
{
	return WeakPtr<FontFaceFreeType>(new FontFaceFreeType(font));
}


DllExport int
FontFaceFreeType_Load (Urho3D::FontFaceFreeType *_target, const unsigned char * fontData, unsigned int fontDataSize, float pointSize)
{
	return _target->Load (fontData, fontDataSize, pointSize);
}


DllExport const struct Urho3D::FontGlyph *
FontFaceFreeType_GetGlyph (Urho3D::FontFaceFreeType *_target, unsigned int c)
{
	return _target->GetGlyph (c);
}


DllExport int
FontFaceFreeType_HasMutableGlyphs (Urho3D::FontFaceFreeType *_target)
{
	return _target->HasMutableGlyphs ();
}


DllExport int
LineEdit_GetType (Urho3D::LineEdit *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
LineEdit_GetTypeName (Urho3D::LineEdit *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
LineEdit_GetTypeStatic ()
{
	return (LineEdit::GetTypeStatic ()).Value ();
}


DllExport const char *
LineEdit_GetTypeNameStatic ()
{
	return stringdup((LineEdit::GetTypeNameStatic ()).CString ());
}


DllExport void *
LineEdit_LineEdit (Urho3D::Context * context)
{
	return WeakPtr<LineEdit>(new LineEdit(context));
}


DllExport void
LineEdit_RegisterObject (Urho3D::Context * context)
{
	LineEdit::RegisterObject (context);
}


DllExport void
LineEdit_ApplyAttributes (Urho3D::LineEdit *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
LineEdit_Update (Urho3D::LineEdit *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
LineEdit_OnClickBegin (Urho3D::LineEdit *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnClickBegin (position, screenPosition, button, buttons, qualifiers, cursor);
}


DllExport void
LineEdit_OnDoubleClick (Urho3D::LineEdit *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnDoubleClick (position, screenPosition, button, buttons, qualifiers, cursor);
}


DllExport void
LineEdit_OnTextInput (Urho3D::LineEdit *_target, const char * text)
{
	_target->OnTextInput (Urho3D::String(text));
}


DllExport void
LineEdit_SetText (Urho3D::LineEdit *_target, const char * text)
{
	_target->SetText (Urho3D::String(text));
}


DllExport void
LineEdit_SetCursorPosition (Urho3D::LineEdit *_target, unsigned int position)
{
	_target->SetCursorPosition (position);
}


DllExport void
LineEdit_SetCursorBlinkRate (Urho3D::LineEdit *_target, float rate)
{
	_target->SetCursorBlinkRate (rate);
}


DllExport void
LineEdit_SetMaxLength (Urho3D::LineEdit *_target, unsigned int length)
{
	_target->SetMaxLength (length);
}


DllExport void
LineEdit_SetEchoCharacter (Urho3D::LineEdit *_target, unsigned int c)
{
	_target->SetEchoCharacter (c);
}


DllExport void
LineEdit_SetCursorMovable (Urho3D::LineEdit *_target, bool enable)
{
	_target->SetCursorMovable (enable);
}


DllExport void
LineEdit_SetTextSelectable (Urho3D::LineEdit *_target, bool enable)
{
	_target->SetTextSelectable (enable);
}


DllExport void
LineEdit_SetTextCopyable (Urho3D::LineEdit *_target, bool enable)
{
	_target->SetTextCopyable (enable);
}


DllExport const char *
LineEdit_GetText (Urho3D::LineEdit *_target)
{
	return stringdup((_target->GetText ()).CString ());
}


DllExport unsigned int
LineEdit_GetCursorPosition (Urho3D::LineEdit *_target)
{
	return _target->GetCursorPosition ();
}


DllExport float
LineEdit_GetCursorBlinkRate (Urho3D::LineEdit *_target)
{
	return _target->GetCursorBlinkRate ();
}


DllExport unsigned int
LineEdit_GetMaxLength (Urho3D::LineEdit *_target)
{
	return _target->GetMaxLength ();
}


DllExport unsigned int
LineEdit_GetEchoCharacter (Urho3D::LineEdit *_target)
{
	return _target->GetEchoCharacter ();
}


DllExport int
LineEdit_IsCursorMovable (Urho3D::LineEdit *_target)
{
	return _target->IsCursorMovable ();
}


DllExport int
LineEdit_IsTextSelectable (Urho3D::LineEdit *_target)
{
	return _target->IsTextSelectable ();
}


DllExport int
LineEdit_IsTextCopyable (Urho3D::LineEdit *_target)
{
	return _target->IsTextCopyable ();
}


DllExport Urho3D::Text *
LineEdit_GetTextElement (Urho3D::LineEdit *_target)
{
	return _target->GetTextElement ();
}


DllExport Urho3D::BorderImage *
LineEdit_GetCursor (Urho3D::LineEdit *_target)
{
	return _target->GetCursor ();
}


DllExport int
ScrollView_GetType (Urho3D::ScrollView *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ScrollView_GetTypeName (Urho3D::ScrollView *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ScrollView_GetTypeStatic ()
{
	return (ScrollView::GetTypeStatic ()).Value ();
}


DllExport const char *
ScrollView_GetTypeNameStatic ()
{
	return stringdup((ScrollView::GetTypeNameStatic ()).CString ());
}


DllExport void *
ScrollView_ScrollView (Urho3D::Context * context)
{
	return WeakPtr<ScrollView>(new ScrollView(context));
}


DllExport void
ScrollView_RegisterObject (Urho3D::Context * context)
{
	ScrollView::RegisterObject (context);
}


DllExport void
ScrollView_Update (Urho3D::ScrollView *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
ScrollView_ApplyAttributes (Urho3D::ScrollView *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
ScrollView_OnResize (Urho3D::ScrollView *_target, const class Urho3D::IntVector2 & newSize, const class Urho3D::IntVector2 & delta)
{
	_target->OnResize (newSize, delta);
}


DllExport int
ScrollView_IsWheelHandler (Urho3D::ScrollView *_target)
{
	return _target->IsWheelHandler ();
}


DllExport void
ScrollView_SetContentElement (Urho3D::ScrollView *_target, Urho3D::UIElement * element)
{
	_target->SetContentElement (element);
}


DllExport void
ScrollView_SetViewPosition (Urho3D::ScrollView *_target, const class Urho3D::IntVector2 & position)
{
	_target->SetViewPosition (position);
}


DllExport void
ScrollView_SetViewPosition0 (Urho3D::ScrollView *_target, int x, int y)
{
	_target->SetViewPosition (x, y);
}


DllExport void
ScrollView_SetScrollBarsVisible (Urho3D::ScrollView *_target, bool horizontal, bool vertical)
{
	_target->SetScrollBarsVisible (horizontal, vertical);
}


DllExport void
ScrollView_SetHorizontalScrollBarVisible (Urho3D::ScrollView *_target, bool visible)
{
	_target->SetHorizontalScrollBarVisible (visible);
}


DllExport void
ScrollView_SetVerticalScrollBarVisible (Urho3D::ScrollView *_target, bool visible)
{
	_target->SetVerticalScrollBarVisible (visible);
}


DllExport void
ScrollView_SetScrollBarsAutoVisible (Urho3D::ScrollView *_target, bool enable)
{
	_target->SetScrollBarsAutoVisible (enable);
}


DllExport void
ScrollView_SetScrollStep (Urho3D::ScrollView *_target, float step)
{
	_target->SetScrollStep (step);
}


DllExport void
ScrollView_SetPageStep (Urho3D::ScrollView *_target, float step)
{
	_target->SetPageStep (step);
}


DllExport void
ScrollView_SetScrollDeceleration (Urho3D::ScrollView *_target, float deceleration)
{
	_target->SetScrollDeceleration (deceleration);
}


DllExport void
ScrollView_SetScrollSnapEpsilon (Urho3D::ScrollView *_target, float snap)
{
	_target->SetScrollSnapEpsilon (snap);
}


DllExport void
ScrollView_SetAutoDisableChildren (Urho3D::ScrollView *_target, bool disable)
{
	_target->SetAutoDisableChildren (disable);
}


DllExport void
ScrollView_SetAutoDisableThreshold (Urho3D::ScrollView *_target, float amount)
{
	_target->SetAutoDisableThreshold (amount);
}


DllExport Interop::IntVector2 
ScrollView_GetViewPosition (Urho3D::ScrollView *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetViewPosition ()));
}


DllExport Urho3D::UIElement *
ScrollView_GetContentElement (Urho3D::ScrollView *_target)
{
	return _target->GetContentElement ();
}


DllExport Urho3D::ScrollBar *
ScrollView_GetHorizontalScrollBar (Urho3D::ScrollView *_target)
{
	return _target->GetHorizontalScrollBar ();
}


DllExport Urho3D::ScrollBar *
ScrollView_GetVerticalScrollBar (Urho3D::ScrollView *_target)
{
	return _target->GetVerticalScrollBar ();
}


DllExport Urho3D::BorderImage *
ScrollView_GetScrollPanel (Urho3D::ScrollView *_target)
{
	return _target->GetScrollPanel ();
}


DllExport int
ScrollView_GetScrollBarsAutoVisible (Urho3D::ScrollView *_target)
{
	return _target->GetScrollBarsAutoVisible ();
}


DllExport int
ScrollView_GetHorizontalScrollBarVisible (Urho3D::ScrollView *_target)
{
	return _target->GetHorizontalScrollBarVisible ();
}


DllExport int
ScrollView_GetVerticalScrollBarVisible (Urho3D::ScrollView *_target)
{
	return _target->GetVerticalScrollBarVisible ();
}


DllExport float
ScrollView_GetScrollStep (Urho3D::ScrollView *_target)
{
	return _target->GetScrollStep ();
}


DllExport float
ScrollView_GetPageStep (Urho3D::ScrollView *_target)
{
	return _target->GetPageStep ();
}


DllExport float
ScrollView_GetScrollDeceleration (Urho3D::ScrollView *_target)
{
	return _target->GetScrollDeceleration ();
}


DllExport float
ScrollView_GetScrollSnapEpsilon (Urho3D::ScrollView *_target)
{
	return _target->GetScrollSnapEpsilon ();
}


DllExport int
ScrollView_GetAutoDisableChildren (Urho3D::ScrollView *_target)
{
	return _target->GetAutoDisableChildren ();
}


DllExport float
ScrollView_GetAutoDisableThreshold (Urho3D::ScrollView *_target)
{
	return _target->GetAutoDisableThreshold ();
}


DllExport void
ScrollView_SetViewPositionAttr (Urho3D::ScrollView *_target, const class Urho3D::IntVector2 & value)
{
	_target->SetViewPositionAttr (value);
}


DllExport int
ListView_GetType (Urho3D::ListView *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ListView_GetTypeName (Urho3D::ListView *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ListView_GetTypeStatic ()
{
	return (ListView::GetTypeStatic ()).Value ();
}


DllExport const char *
ListView_GetTypeNameStatic ()
{
	return stringdup((ListView::GetTypeNameStatic ()).CString ());
}


DllExport void *
ListView_ListView (Urho3D::Context * context)
{
	return WeakPtr<ListView>(new ListView(context));
}


DllExport void
ListView_RegisterObject (Urho3D::Context * context)
{
	ListView::RegisterObject (context);
}


DllExport void
ListView_OnResize (Urho3D::ListView *_target, const class Urho3D::IntVector2 & newSize, const class Urho3D::IntVector2 & delta)
{
	_target->OnResize (newSize, delta);
}


DllExport void
ListView_UpdateInternalLayout (Urho3D::ListView *_target)
{
	_target->UpdateInternalLayout ();
}


DllExport void
ListView_DisableInternalLayoutUpdate (Urho3D::ListView *_target)
{
	_target->DisableInternalLayoutUpdate ();
}


DllExport void
ListView_EnableInternalLayoutUpdate (Urho3D::ListView *_target)
{
	_target->EnableInternalLayoutUpdate ();
}


DllExport void
ListView_AddItem (Urho3D::ListView *_target, Urho3D::UIElement * item)
{
	_target->AddItem (item);
}


DllExport void
ListView_InsertItem (Urho3D::ListView *_target, unsigned int index, Urho3D::UIElement * item, Urho3D::UIElement * parentItem)
{
	_target->InsertItem (index, item, parentItem);
}


DllExport void
ListView_RemoveItem (Urho3D::ListView *_target, Urho3D::UIElement * item, unsigned int index)
{
	_target->RemoveItem (item, index);
}


DllExport void
ListView_RemoveItem0 (Urho3D::ListView *_target, unsigned int index)
{
	_target->RemoveItem (index);
}


DllExport void
ListView_RemoveAllItems (Urho3D::ListView *_target)
{
	_target->RemoveAllItems ();
}


DllExport void
ListView_SetSelection (Urho3D::ListView *_target, unsigned int index)
{
	_target->SetSelection (index);
}


DllExport void
ListView_AddSelection (Urho3D::ListView *_target, unsigned int index)
{
	_target->AddSelection (index);
}


DllExport void
ListView_RemoveSelection (Urho3D::ListView *_target, unsigned int index)
{
	_target->RemoveSelection (index);
}


DllExport void
ListView_ToggleSelection (Urho3D::ListView *_target, unsigned int index)
{
	_target->ToggleSelection (index);
}


DllExport void
ListView_ChangeSelection (Urho3D::ListView *_target, int delta, bool additive)
{
	_target->ChangeSelection (delta, additive);
}


DllExport void
ListView_ClearSelection (Urho3D::ListView *_target)
{
	_target->ClearSelection ();
}


DllExport void
ListView_SetHighlightMode (Urho3D::ListView *_target, enum Urho3D::HighlightMode mode)
{
	_target->SetHighlightMode (mode);
}


DllExport void
ListView_SetMultiselect (Urho3D::ListView *_target, bool enable)
{
	_target->SetMultiselect (enable);
}


DllExport void
ListView_SetHierarchyMode (Urho3D::ListView *_target, bool enable)
{
	_target->SetHierarchyMode (enable);
}


DllExport void
ListView_SetBaseIndent (Urho3D::ListView *_target, int baseIndent)
{
	_target->SetBaseIndent (baseIndent);
}


DllExport void
ListView_SetClearSelectionOnDefocus (Urho3D::ListView *_target, bool enable)
{
	_target->SetClearSelectionOnDefocus (enable);
}


DllExport void
ListView_SetSelectOnClickEnd (Urho3D::ListView *_target, bool enable)
{
	_target->SetSelectOnClickEnd (enable);
}


DllExport void
ListView_Expand (Urho3D::ListView *_target, unsigned int index, bool enable, bool recursive)
{
	_target->Expand (index, enable, recursive);
}


DllExport void
ListView_ToggleExpand (Urho3D::ListView *_target, unsigned int index, bool recursive)
{
	_target->ToggleExpand (index, recursive);
}


DllExport unsigned int
ListView_GetNumItems (Urho3D::ListView *_target)
{
	return _target->GetNumItems ();
}


DllExport Urho3D::UIElement *
ListView_GetItem (Urho3D::ListView *_target, unsigned int index)
{
	return _target->GetItem (index);
}


DllExport unsigned int
ListView_FindItem (Urho3D::ListView *_target, Urho3D::UIElement * item)
{
	return _target->FindItem (item);
}


DllExport unsigned int
ListView_GetSelection (Urho3D::ListView *_target)
{
	return _target->GetSelection ();
}


DllExport void
ListView_CopySelectedItemsToClipboard (Urho3D::ListView *_target)
{
	_target->CopySelectedItemsToClipboard ();
}


DllExport Urho3D::UIElement *
ListView_GetSelectedItem (Urho3D::ListView *_target)
{
	return _target->GetSelectedItem ();
}


DllExport int
ListView_IsSelected (Urho3D::ListView *_target, unsigned int index)
{
	return _target->IsSelected (index);
}


DllExport int
ListView_IsExpanded (Urho3D::ListView *_target, unsigned int index)
{
	return _target->IsExpanded (index);
}


DllExport enum Urho3D::HighlightMode
ListView_GetHighlightMode (Urho3D::ListView *_target)
{
	return _target->GetHighlightMode ();
}


DllExport int
ListView_GetMultiselect (Urho3D::ListView *_target)
{
	return _target->GetMultiselect ();
}


DllExport int
ListView_GetClearSelectionOnDefocus (Urho3D::ListView *_target)
{
	return _target->GetClearSelectionOnDefocus ();
}


DllExport int
ListView_GetSelectOnClickEnd (Urho3D::ListView *_target)
{
	return _target->GetSelectOnClickEnd ();
}


DllExport int
ListView_GetHierarchyMode (Urho3D::ListView *_target)
{
	return _target->GetHierarchyMode ();
}


DllExport int
ListView_GetBaseIndent (Urho3D::ListView *_target)
{
	return _target->GetBaseIndent ();
}


DllExport void
ListView_EnsureItemVisibility (Urho3D::ListView *_target, unsigned int index)
{
	_target->EnsureItemVisibility (index);
}


DllExport void
ListView_EnsureItemVisibility1 (Urho3D::ListView *_target, Urho3D::UIElement * item)
{
	_target->EnsureItemVisibility (item);
}


DllExport int
UIComponent_GetType (Urho3D::UIComponent *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
UIComponent_GetTypeName (Urho3D::UIComponent *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
UIComponent_GetTypeStatic ()
{
	return (UIComponent::GetTypeStatic ()).Value ();
}


DllExport const char *
UIComponent_GetTypeNameStatic ()
{
	return stringdup((UIComponent::GetTypeNameStatic ()).CString ());
}


DllExport void *
UIComponent_UIComponent (Urho3D::Context * context)
{
	return WeakPtr<UIComponent>(new UIComponent(context));
}


DllExport void
UIComponent_RegisterObject (Urho3D::Context * context)
{
	UIComponent::RegisterObject (context);
}


DllExport Urho3D::UIElement *
UIComponent_GetRoot (Urho3D::UIComponent *_target)
{
	return _target->GetRoot ();
}


DllExport Urho3D::Material *
UIComponent_GetMaterial (Urho3D::UIComponent *_target)
{
	return _target->GetMaterial ();
}


DllExport Urho3D::Texture2D *
UIComponent_GetTexture (Urho3D::UIComponent *_target)
{
	return _target->GetTexture ();
}


DllExport void
UIComponent_SetViewportIndex (Urho3D::UIComponent *_target, unsigned int index)
{
	_target->SetViewportIndex (index);
}


DllExport int
ScrollBar_GetType (Urho3D::ScrollBar *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ScrollBar_GetTypeName (Urho3D::ScrollBar *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ScrollBar_GetTypeStatic ()
{
	return (ScrollBar::GetTypeStatic ()).Value ();
}


DllExport const char *
ScrollBar_GetTypeNameStatic ()
{
	return stringdup((ScrollBar::GetTypeNameStatic ()).CString ());
}


DllExport void *
ScrollBar_ScrollBar (Urho3D::Context * context)
{
	return WeakPtr<ScrollBar>(new ScrollBar(context));
}


DllExport void
ScrollBar_RegisterObject (Urho3D::Context * context)
{
	ScrollBar::RegisterObject (context);
}


DllExport void
ScrollBar_ApplyAttributes (Urho3D::ScrollBar *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
ScrollBar_OnResize (Urho3D::ScrollBar *_target, const class Urho3D::IntVector2 & newSize, const class Urho3D::IntVector2 & delta)
{
	_target->OnResize (newSize, delta);
}


DllExport void
ScrollBar_OnSetEditable (Urho3D::ScrollBar *_target)
{
	_target->OnSetEditable ();
}


DllExport void
ScrollBar_SetOrientation (Urho3D::ScrollBar *_target, enum Urho3D::Orientation orientation)
{
	_target->SetOrientation (orientation);
}


DllExport void
ScrollBar_SetRange (Urho3D::ScrollBar *_target, float range)
{
	_target->SetRange (range);
}


DllExport void
ScrollBar_SetValue (Urho3D::ScrollBar *_target, float value)
{
	_target->SetValue (value);
}


DllExport void
ScrollBar_ChangeValue (Urho3D::ScrollBar *_target, float delta)
{
	_target->ChangeValue (delta);
}


DllExport void
ScrollBar_SetScrollStep (Urho3D::ScrollBar *_target, float step)
{
	_target->SetScrollStep (step);
}


DllExport void
ScrollBar_SetStepFactor (Urho3D::ScrollBar *_target, float factor)
{
	_target->SetStepFactor (factor);
}


DllExport void
ScrollBar_StepBack (Urho3D::ScrollBar *_target)
{
	_target->StepBack ();
}


DllExport void
ScrollBar_StepForward (Urho3D::ScrollBar *_target)
{
	_target->StepForward ();
}


DllExport enum Urho3D::Orientation
ScrollBar_GetOrientation (Urho3D::ScrollBar *_target)
{
	return _target->GetOrientation ();
}


DllExport float
ScrollBar_GetRange (Urho3D::ScrollBar *_target)
{
	return _target->GetRange ();
}


DllExport float
ScrollBar_GetValue (Urho3D::ScrollBar *_target)
{
	return _target->GetValue ();
}


DllExport float
ScrollBar_GetScrollStep (Urho3D::ScrollBar *_target)
{
	return _target->GetScrollStep ();
}


DllExport float
ScrollBar_GetStepFactor (Urho3D::ScrollBar *_target)
{
	return _target->GetStepFactor ();
}


DllExport float
ScrollBar_GetEffectiveScrollStep (Urho3D::ScrollBar *_target)
{
	return _target->GetEffectiveScrollStep ();
}


DllExport Urho3D::Button *
ScrollBar_GetBackButton (Urho3D::ScrollBar *_target)
{
	return _target->GetBackButton ();
}


DllExport Urho3D::Button *
ScrollBar_GetForwardButton (Urho3D::ScrollBar *_target)
{
	return _target->GetForwardButton ();
}


DllExport Urho3D::Slider *
ScrollBar_GetSlider (Urho3D::ScrollBar *_target)
{
	return _target->GetSlider ();
}


DllExport int
Slider_GetType (Urho3D::Slider *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Slider_GetTypeName (Urho3D::Slider *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Slider_GetTypeStatic ()
{
	return (Slider::GetTypeStatic ()).Value ();
}


DllExport const char *
Slider_GetTypeNameStatic ()
{
	return stringdup((Slider::GetTypeNameStatic ()).CString ());
}


DllExport void *
Slider_Slider (Urho3D::Context * context)
{
	return WeakPtr<Slider>(new Slider(context));
}


DllExport void
Slider_RegisterObject (Urho3D::Context * context)
{
	Slider::RegisterObject (context);
}


DllExport void
Slider_Update (Urho3D::Slider *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
Slider_OnHover (Urho3D::Slider *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnHover (position, screenPosition, buttons, qualifiers, cursor);
}


DllExport void
Slider_OnClickBegin (Urho3D::Slider *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnClickBegin (position, screenPosition, button, buttons, qualifiers, cursor);
}


DllExport void
Slider_OnClickEnd (Urho3D::Slider *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int button, int buttons, int qualifiers, Urho3D::Cursor * cursor, Urho3D::UIElement * beginElement)
{
	_target->OnClickEnd (position, screenPosition, button, buttons, qualifiers, cursor, beginElement);
}


DllExport void
Slider_OnResize (Urho3D::Slider *_target, const class Urho3D::IntVector2 & newSize, const class Urho3D::IntVector2 & delta)
{
	_target->OnResize (newSize, delta);
}


DllExport void
Slider_SetOrientation (Urho3D::Slider *_target, enum Urho3D::Orientation orientation)
{
	_target->SetOrientation (orientation);
}


DllExport void
Slider_SetRange (Urho3D::Slider *_target, float range)
{
	_target->SetRange (range);
}


DllExport void
Slider_SetValue (Urho3D::Slider *_target, float value)
{
	_target->SetValue (value);
}


DllExport void
Slider_ChangeValue (Urho3D::Slider *_target, float delta)
{
	_target->ChangeValue (delta);
}


DllExport void
Slider_SetRepeatRate (Urho3D::Slider *_target, float rate)
{
	_target->SetRepeatRate (rate);
}


DllExport enum Urho3D::Orientation
Slider_GetOrientation (Urho3D::Slider *_target)
{
	return _target->GetOrientation ();
}


DllExport float
Slider_GetRange (Urho3D::Slider *_target)
{
	return _target->GetRange ();
}


DllExport float
Slider_GetValue (Urho3D::Slider *_target)
{
	return _target->GetValue ();
}


DllExport Urho3D::BorderImage *
Slider_GetKnob (Urho3D::Slider *_target)
{
	return _target->GetKnob ();
}


DllExport float
Slider_GetRepeatRate (Urho3D::Slider *_target)
{
	return _target->GetRepeatRate ();
}


DllExport int
Sprite_GetType (Urho3D::Sprite *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Sprite_GetTypeName (Urho3D::Sprite *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Sprite_GetTypeStatic ()
{
	return (Sprite::GetTypeStatic ()).Value ();
}


DllExport const char *
Sprite_GetTypeNameStatic ()
{
	return stringdup((Sprite::GetTypeNameStatic ()).CString ());
}


DllExport void *
Sprite_Sprite (Urho3D::Context * context)
{
	return WeakPtr<Sprite>(new Sprite(context));
}


DllExport void
Sprite_RegisterObject (Urho3D::Context * context)
{
	Sprite::RegisterObject (context);
}


DllExport int
Sprite_IsWithinScissor (Urho3D::Sprite *_target, const class Urho3D::IntRect & currentScissor)
{
	return _target->IsWithinScissor (currentScissor);
}


DllExport Interop::IntVector2 
Sprite_GetScreenPosition (Urho3D::Sprite *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetScreenPosition ()));
}


DllExport void
Sprite_OnPositionSet (Urho3D::Sprite *_target, const class Urho3D::IntVector2 & newPosition)
{
	_target->OnPositionSet (newPosition);
}


DllExport Interop::IntVector2 
Sprite_ScreenToElement (Urho3D::Sprite *_target, const class Urho3D::IntVector2 & screenPosition)
{
	return *((Interop::IntVector2  *) &(_target->ScreenToElement (screenPosition)));
}


DllExport Interop::IntVector2 
Sprite_ElementToScreen (Urho3D::Sprite *_target, const class Urho3D::IntVector2 & position)
{
	return *((Interop::IntVector2  *) &(_target->ElementToScreen (position)));
}


DllExport void
Sprite_SetPosition (Urho3D::Sprite *_target, const class Urho3D::Vector2 & position)
{
	_target->SetPosition (position);
}


DllExport void
Sprite_SetPosition0 (Urho3D::Sprite *_target, float x, float y)
{
	_target->SetPosition (x, y);
}


DllExport void
Sprite_SetHotSpot (Urho3D::Sprite *_target, const class Urho3D::IntVector2 & hotSpot)
{
	_target->SetHotSpot (hotSpot);
}


DllExport void
Sprite_SetHotSpot1 (Urho3D::Sprite *_target, int x, int y)
{
	_target->SetHotSpot (x, y);
}


DllExport void
Sprite_SetScale (Urho3D::Sprite *_target, const class Urho3D::Vector2 & scale)
{
	_target->SetScale (scale);
}


DllExport void
Sprite_SetScale2 (Urho3D::Sprite *_target, float x, float y)
{
	_target->SetScale (x, y);
}


DllExport void
Sprite_SetScale3 (Urho3D::Sprite *_target, float scale)
{
	_target->SetScale (scale);
}


DllExport void
Sprite_SetRotation (Urho3D::Sprite *_target, float angle)
{
	_target->SetRotation (angle);
}


DllExport void
Sprite_SetTexture (Urho3D::Sprite *_target, Urho3D::Texture * texture)
{
	_target->SetTexture (texture);
}


DllExport void
Sprite_SetImageRect (Urho3D::Sprite *_target, const class Urho3D::IntRect & rect)
{
	_target->SetImageRect (rect);
}


DllExport void
Sprite_SetFullImageRect (Urho3D::Sprite *_target)
{
	_target->SetFullImageRect ();
}


DllExport void
Sprite_SetBlendMode (Urho3D::Sprite *_target, enum Urho3D::BlendMode mode)
{
	_target->SetBlendMode (mode);
}


DllExport Interop::Vector2 
Sprite_GetPosition (Urho3D::Sprite *_target)
{
	return *((Interop::Vector2  *) &(_target->GetPosition ()));
}


DllExport Interop::IntVector2 
Sprite_GetHotSpot (Urho3D::Sprite *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetHotSpot ()));
}


DllExport Interop::Vector2 
Sprite_GetScale (Urho3D::Sprite *_target)
{
	return *((Interop::Vector2  *) &(_target->GetScale ()));
}


DllExport float
Sprite_GetRotation (Urho3D::Sprite *_target)
{
	return _target->GetRotation ();
}


DllExport Urho3D::Texture *
Sprite_GetTexture (Urho3D::Sprite *_target)
{
	return _target->GetTexture ();
}


DllExport Interop::IntRect 
Sprite_GetImageRect (Urho3D::Sprite *_target)
{
	return *((Interop::IntRect  *) &(_target->GetImageRect ()));
}


DllExport enum Urho3D::BlendMode
Sprite_GetBlendMode (Urho3D::Sprite *_target)
{
	return _target->GetBlendMode ();
}


DllExport Urho3D::ResourceRef
Sprite_GetTextureAttr (Urho3D::Sprite *_target)
{
	return _target->GetTextureAttr ();
}


DllExport Interop::Matrix3x4 
Sprite_GetTransform (Urho3D::Sprite *_target)
{
	return *((Interop::Matrix3x4  *) &(_target->GetTransform ()));
}


DllExport int
UISelectable_GetType (Urho3D::UISelectable *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
UISelectable_GetTypeName (Urho3D::UISelectable *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
UISelectable_GetTypeStatic ()
{
	return (UISelectable::GetTypeStatic ()).Value ();
}


DllExport const char *
UISelectable_GetTypeNameStatic ()
{
	return stringdup((UISelectable::GetTypeNameStatic ()).CString ());
}


DllExport void
UISelectable_RegisterObject (Urho3D::Context * context)
{
	UISelectable::RegisterObject (context);
}


DllExport void
UISelectable_SetSelectionColor (Urho3D::UISelectable *_target, const class Urho3D::Color & color)
{
	_target->SetSelectionColor (color);
}


DllExport void
UISelectable_SetHoverColor (Urho3D::UISelectable *_target, const class Urho3D::Color & color)
{
	_target->SetHoverColor (color);
}


DllExport Interop::Color 
UISelectable_GetSelectionColor (Urho3D::UISelectable *_target)
{
	return *((Interop::Color  *) &(_target->GetSelectionColor ()));
}


DllExport Interop::Color 
UISelectable_GetHoverColor (Urho3D::UISelectable *_target)
{
	return *((Interop::Color  *) &(_target->GetHoverColor ()));
}


DllExport void *
UISelectable_UISelectable (Urho3D::Context * param1)
{
	return WeakPtr<UISelectable>(new UISelectable(param1));
}


DllExport int
Text_GetType (Urho3D::Text *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Text_GetTypeName (Urho3D::Text *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Text_GetTypeStatic ()
{
	return (Text::GetTypeStatic ()).Value ();
}


DllExport const char *
Text_GetTypeNameStatic ()
{
	return stringdup((Text::GetTypeNameStatic ()).CString ());
}


DllExport void *
Text_Text (Urho3D::Context * context)
{
	return WeakPtr<Text>(new Text(context));
}


DllExport void
Text_RegisterObject (Urho3D::Context * context)
{
	Text::RegisterObject (context);
}


DllExport void
Text_ApplyAttributes (Urho3D::Text *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
Text_OnResize (Urho3D::Text *_target, const class Urho3D::IntVector2 & newSize, const class Urho3D::IntVector2 & delta)
{
	_target->OnResize (newSize, delta);
}


DllExport void
Text_OnIndentSet (Urho3D::Text *_target)
{
	_target->OnIndentSet ();
}


DllExport int
Text_SetFont (Urho3D::Text *_target, const char * fontName, float size)
{
	return _target->SetFont (Urho3D::String(fontName), size);
}


DllExport int
Text_SetFont0 (Urho3D::Text *_target, Urho3D::Font * font, float size)
{
	return _target->SetFont (font, size);
}


DllExport int
Text_SetFontSize (Urho3D::Text *_target, float size)
{
	return _target->SetFontSize (size);
}


DllExport void
Text_SetText (Urho3D::Text *_target, const char * text)
{
	_target->SetText (Urho3D::String(text));
}


DllExport void
Text_SetTextAlignment (Urho3D::Text *_target, enum Urho3D::HorizontalAlignment align)
{
	_target->SetTextAlignment (align);
}


DllExport void
Text_SetRowSpacing (Urho3D::Text *_target, float spacing)
{
	_target->SetRowSpacing (spacing);
}


DllExport void
Text_SetWordwrap (Urho3D::Text *_target, bool enable)
{
	_target->SetWordwrap (enable);
}


DllExport void
Text_SetAutoLocalizable (Urho3D::Text *_target, bool enable)
{
	_target->SetAutoLocalizable (enable);
}


DllExport void
Text_SetSelection (Urho3D::Text *_target, unsigned int start, unsigned int length)
{
	_target->SetSelection (start, length);
}


DllExport void
Text_ClearSelection (Urho3D::Text *_target)
{
	_target->ClearSelection ();
}


DllExport void
Text_SetTextEffect (Urho3D::Text *_target, enum Urho3D::TextEffect textEffect)
{
	_target->SetTextEffect (textEffect);
}


DllExport void
Text_SetEffectShadowOffset (Urho3D::Text *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetEffectShadowOffset (offset);
}


DllExport void
Text_SetEffectStrokeThickness (Urho3D::Text *_target, int thickness)
{
	_target->SetEffectStrokeThickness (thickness);
}


DllExport void
Text_SetEffectRoundStroke (Urho3D::Text *_target, bool roundStroke)
{
	_target->SetEffectRoundStroke (roundStroke);
}


DllExport void
Text_SetEffectColor (Urho3D::Text *_target, const class Urho3D::Color & effectColor)
{
	_target->SetEffectColor (effectColor);
}


DllExport Urho3D::Font *
Text_GetFont (Urho3D::Text *_target)
{
	return _target->GetFont ();
}


DllExport float
Text_GetFontSize (Urho3D::Text *_target)
{
	return _target->GetFontSize ();
}


DllExport const char *
Text_GetText (Urho3D::Text *_target)
{
	return stringdup((_target->GetText ()).CString ());
}


DllExport enum Urho3D::HorizontalAlignment
Text_GetTextAlignment (Urho3D::Text *_target)
{
	return _target->GetTextAlignment ();
}


DllExport float
Text_GetRowSpacing (Urho3D::Text *_target)
{
	return _target->GetRowSpacing ();
}


DllExport int
Text_GetWordwrap (Urho3D::Text *_target)
{
	return _target->GetWordwrap ();
}


DllExport int
Text_GetAutoLocalizable (Urho3D::Text *_target)
{
	return _target->GetAutoLocalizable ();
}


DllExport unsigned int
Text_GetSelectionStart (Urho3D::Text *_target)
{
	return _target->GetSelectionStart ();
}


DllExport unsigned int
Text_GetSelectionLength (Urho3D::Text *_target)
{
	return _target->GetSelectionLength ();
}


DllExport enum Urho3D::TextEffect
Text_GetTextEffect (Urho3D::Text *_target)
{
	return _target->GetTextEffect ();
}


DllExport Interop::IntVector2 
Text_GetEffectShadowOffset (Urho3D::Text *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetEffectShadowOffset ()));
}


DllExport int
Text_GetEffectStrokeThickness (Urho3D::Text *_target)
{
	return _target->GetEffectStrokeThickness ();
}


DllExport int
Text_GetEffectRoundStroke (Urho3D::Text *_target)
{
	return _target->GetEffectRoundStroke ();
}


DllExport Interop::Color 
Text_GetEffectColor (Urho3D::Text *_target)
{
	return *((Interop::Color  *) &(_target->GetEffectColor ()));
}


DllExport float
Text_GetRowHeight (Urho3D::Text *_target)
{
	return _target->GetRowHeight ();
}


DllExport unsigned int
Text_GetNumRows (Urho3D::Text *_target)
{
	return _target->GetNumRows ();
}


DllExport unsigned int
Text_GetNumChars (Urho3D::Text *_target)
{
	return _target->GetNumChars ();
}


DllExport float
Text_GetRowWidth (Urho3D::Text *_target, unsigned int index)
{
	return _target->GetRowWidth (index);
}


DllExport Interop::Vector2 
Text_GetCharPosition (Urho3D::Text *_target, unsigned int index)
{
	return *((Interop::Vector2  *) &(_target->GetCharPosition (index)));
}


DllExport Interop::Vector2 
Text_GetCharSize (Urho3D::Text *_target, unsigned int index)
{
	return *((Interop::Vector2  *) &(_target->GetCharSize (index)));
}


DllExport void
Text_SetEffectDepthBias (Urho3D::Text *_target, float bias)
{
	_target->SetEffectDepthBias (bias);
}


DllExport float
Text_GetEffectDepthBias (Urho3D::Text *_target)
{
	return _target->GetEffectDepthBias ();
}


DllExport Urho3D::ResourceRef
Text_GetFontAttr (Urho3D::Text *_target)
{
	return _target->GetFontAttr ();
}


DllExport void
Text_SetTextAttr (Urho3D::Text *_target, const char * value)
{
	_target->SetTextAttr (Urho3D::String(value));
}


DllExport const char *
Text_GetTextAttr (Urho3D::Text *_target)
{
	return stringdup((_target->GetTextAttr ()).CString ());
}


DllExport int
Text3D_GetType (Urho3D::Text3D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Text3D_GetTypeName (Urho3D::Text3D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Text3D_GetTypeStatic ()
{
	return (Text3D::GetTypeStatic ()).Value ();
}


DllExport const char *
Text3D_GetTypeNameStatic ()
{
	return stringdup((Text3D::GetTypeNameStatic ()).CString ());
}


DllExport void *
Text3D_Text3D (Urho3D::Context * context)
{
	return WeakPtr<Text3D>(new Text3D(context));
}


DllExport void
Text3D_RegisterObject (Urho3D::Context * context)
{
	Text3D::RegisterObject (context);
}


DllExport void
Text3D_ApplyAttributes (Urho3D::Text3D *_target)
{
	_target->ApplyAttributes ();
}


DllExport enum Urho3D::UpdateGeometryType
Text3D_GetUpdateGeometryType (Urho3D::Text3D *_target)
{
	return _target->GetUpdateGeometryType ();
}


DllExport int
Text3D_SetFont (Urho3D::Text3D *_target, const char * fontName, float size)
{
	return _target->SetFont (Urho3D::String(fontName), size);
}


DllExport int
Text3D_SetFont0 (Urho3D::Text3D *_target, Urho3D::Font * font, float size)
{
	return _target->SetFont (font, size);
}


DllExport int
Text3D_SetFontSize (Urho3D::Text3D *_target, float size)
{
	return _target->SetFontSize (size);
}


DllExport void
Text3D_SetMaterial (Urho3D::Text3D *_target, Urho3D::Material * material)
{
	_target->SetMaterial (material);
}


DllExport void
Text3D_SetText (Urho3D::Text3D *_target, const char * text)
{
	_target->SetText (Urho3D::String(text));
}


DllExport void
Text3D_SetAlignment (Urho3D::Text3D *_target, enum Urho3D::HorizontalAlignment hAlign, enum Urho3D::VerticalAlignment vAlign)
{
	_target->SetAlignment (hAlign, vAlign);
}


DllExport void
Text3D_SetHorizontalAlignment (Urho3D::Text3D *_target, enum Urho3D::HorizontalAlignment align)
{
	_target->SetHorizontalAlignment (align);
}


DllExport void
Text3D_SetVerticalAlignment (Urho3D::Text3D *_target, enum Urho3D::VerticalAlignment align)
{
	_target->SetVerticalAlignment (align);
}


DllExport void
Text3D_SetTextAlignment (Urho3D::Text3D *_target, enum Urho3D::HorizontalAlignment align)
{
	_target->SetTextAlignment (align);
}


DllExport void
Text3D_SetRowSpacing (Urho3D::Text3D *_target, float spacing)
{
	_target->SetRowSpacing (spacing);
}


DllExport void
Text3D_SetWordwrap (Urho3D::Text3D *_target, bool enable)
{
	_target->SetWordwrap (enable);
}


DllExport void
Text3D_SetTextEffect (Urho3D::Text3D *_target, enum Urho3D::TextEffect textEffect)
{
	_target->SetTextEffect (textEffect);
}


DllExport void
Text3D_SetEffectShadowOffset (Urho3D::Text3D *_target, const class Urho3D::IntVector2 & offset)
{
	_target->SetEffectShadowOffset (offset);
}


DllExport void
Text3D_SetEffectStrokeThickness (Urho3D::Text3D *_target, int thickness)
{
	_target->SetEffectStrokeThickness (thickness);
}


DllExport void
Text3D_SetEffectRoundStroke (Urho3D::Text3D *_target, bool roundStroke)
{
	_target->SetEffectRoundStroke (roundStroke);
}


DllExport void
Text3D_SetEffectColor (Urho3D::Text3D *_target, const class Urho3D::Color & effectColor)
{
	_target->SetEffectColor (effectColor);
}


DllExport void
Text3D_SetEffectDepthBias (Urho3D::Text3D *_target, float bias)
{
	_target->SetEffectDepthBias (bias);
}


DllExport void
Text3D_SetWidth (Urho3D::Text3D *_target, int width)
{
	_target->SetWidth (width);
}


DllExport void
Text3D_SetColor (Urho3D::Text3D *_target, const class Urho3D::Color & color)
{
	_target->SetColor (color);
}


DllExport void
Text3D_SetColor1 (Urho3D::Text3D *_target, enum Urho3D::Corner corner, const class Urho3D::Color & color)
{
	_target->SetColor (corner, color);
}


DllExport void
Text3D_SetOpacity (Urho3D::Text3D *_target, float opacity)
{
	_target->SetOpacity (opacity);
}


DllExport void
Text3D_SetFixedScreenSize (Urho3D::Text3D *_target, bool enable)
{
	_target->SetFixedScreenSize (enable);
}


DllExport void
Text3D_SetFaceCameraMode (Urho3D::Text3D *_target, enum Urho3D::FaceCameraMode mode)
{
	_target->SetFaceCameraMode (mode);
}


DllExport Urho3D::Font *
Text3D_GetFont (Urho3D::Text3D *_target)
{
	return _target->GetFont ();
}


DllExport float
Text3D_GetFontSize (Urho3D::Text3D *_target)
{
	return _target->GetFontSize ();
}


DllExport Urho3D::Material *
Text3D_GetMaterial (Urho3D::Text3D *_target)
{
	return _target->GetMaterial ();
}


DllExport const char *
Text3D_GetText (Urho3D::Text3D *_target)
{
	return stringdup((_target->GetText ()).CString ());
}


DllExport enum Urho3D::HorizontalAlignment
Text3D_GetTextAlignment (Urho3D::Text3D *_target)
{
	return _target->GetTextAlignment ();
}


DllExport enum Urho3D::HorizontalAlignment
Text3D_GetHorizontalAlignment (Urho3D::Text3D *_target)
{
	return _target->GetHorizontalAlignment ();
}


DllExport enum Urho3D::VerticalAlignment
Text3D_GetVerticalAlignment (Urho3D::Text3D *_target)
{
	return _target->GetVerticalAlignment ();
}


DllExport float
Text3D_GetRowSpacing (Urho3D::Text3D *_target)
{
	return _target->GetRowSpacing ();
}


DllExport int
Text3D_GetWordwrap (Urho3D::Text3D *_target)
{
	return _target->GetWordwrap ();
}


DllExport enum Urho3D::TextEffect
Text3D_GetTextEffect (Urho3D::Text3D *_target)
{
	return _target->GetTextEffect ();
}


DllExport Interop::IntVector2 
Text3D_GetEffectShadowOffset (Urho3D::Text3D *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetEffectShadowOffset ()));
}


DllExport int
Text3D_GetEffectStrokeThickness (Urho3D::Text3D *_target)
{
	return _target->GetEffectStrokeThickness ();
}


DllExport int
Text3D_GetEffectRoundStroke (Urho3D::Text3D *_target)
{
	return _target->GetEffectRoundStroke ();
}


DllExport Interop::Color 
Text3D_GetEffectColor (Urho3D::Text3D *_target)
{
	return *((Interop::Color  *) &(_target->GetEffectColor ()));
}


DllExport float
Text3D_GetEffectDepthBias (Urho3D::Text3D *_target)
{
	return _target->GetEffectDepthBias ();
}


DllExport int
Text3D_GetWidth (Urho3D::Text3D *_target)
{
	return _target->GetWidth ();
}


DllExport int
Text3D_GetHeight (Urho3D::Text3D *_target)
{
	return _target->GetHeight ();
}


DllExport int
Text3D_GetRowHeight (Urho3D::Text3D *_target)
{
	return _target->GetRowHeight ();
}


DllExport unsigned int
Text3D_GetNumRows (Urho3D::Text3D *_target)
{
	return _target->GetNumRows ();
}


DllExport unsigned int
Text3D_GetNumChars (Urho3D::Text3D *_target)
{
	return _target->GetNumChars ();
}


DllExport int
Text3D_GetRowWidth (Urho3D::Text3D *_target, unsigned int index)
{
	return _target->GetRowWidth (index);
}


DllExport Interop::Vector2 
Text3D_GetCharPosition (Urho3D::Text3D *_target, unsigned int index)
{
	return *((Interop::Vector2  *) &(_target->GetCharPosition (index)));
}


DllExport Interop::Vector2 
Text3D_GetCharSize (Urho3D::Text3D *_target, unsigned int index)
{
	return *((Interop::Vector2  *) &(_target->GetCharSize (index)));
}


DllExport Interop::Color 
Text3D_GetColor (Urho3D::Text3D *_target, enum Urho3D::Corner corner)
{
	return *((Interop::Color  *) &(_target->GetColor (corner)));
}


DllExport float
Text3D_GetOpacity (Urho3D::Text3D *_target)
{
	return _target->GetOpacity ();
}


DllExport int
Text3D_IsFixedScreenSize (Urho3D::Text3D *_target)
{
	return _target->IsFixedScreenSize ();
}


DllExport enum Urho3D::FaceCameraMode
Text3D_GetFaceCameraMode (Urho3D::Text3D *_target)
{
	return _target->GetFaceCameraMode ();
}


DllExport Urho3D::ResourceRef
Text3D_GetFontAttr (Urho3D::Text3D *_target)
{
	return _target->GetFontAttr ();
}


DllExport Urho3D::ResourceRef
Text3D_GetMaterialAttr (Urho3D::Text3D *_target)
{
	return _target->GetMaterialAttr ();
}


DllExport void
Text3D_SetTextAttr (Urho3D::Text3D *_target, const char * value)
{
	_target->SetTextAttr (Urho3D::String(value));
}


DllExport const char *
Text3D_GetTextAttr (Urho3D::Text3D *_target)
{
	return stringdup((_target->GetTextAttr ()).CString ());
}


DllExport Interop::Color 
Text3D_GetColorAttr (Urho3D::Text3D *_target)
{
	return *((Interop::Color  *) &(_target->GetColorAttr ()));
}


DllExport int
ToolTip_GetType (Urho3D::ToolTip *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ToolTip_GetTypeName (Urho3D::ToolTip *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ToolTip_GetTypeStatic ()
{
	return (ToolTip::GetTypeStatic ()).Value ();
}


DllExport const char *
ToolTip_GetTypeNameStatic ()
{
	return stringdup((ToolTip::GetTypeNameStatic ()).CString ());
}


DllExport void *
ToolTip_ToolTip (Urho3D::Context * context)
{
	return WeakPtr<ToolTip>(new ToolTip(context));
}


DllExport void
ToolTip_RegisterObject (Urho3D::Context * context)
{
	ToolTip::RegisterObject (context);
}


DllExport void
ToolTip_Update (Urho3D::ToolTip *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
ToolTip_Reset (Urho3D::ToolTip *_target)
{
	_target->Reset ();
}


DllExport void
ToolTip_AddAltTarget (Urho3D::ToolTip *_target, Urho3D::UIElement * target)
{
	_target->AddAltTarget (target);
}


DllExport void
ToolTip_SetDelay (Urho3D::ToolTip *_target, float delay)
{
	_target->SetDelay (delay);
}


DllExport float
ToolTip_GetDelay (Urho3D::ToolTip *_target)
{
	return _target->GetDelay ();
}


DllExport int
UI_GetType (Urho3D::UI *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
UI_GetTypeName (Urho3D::UI *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
UI_GetTypeStatic ()
{
	return (UI::GetTypeStatic ()).Value ();
}


DllExport const char *
UI_GetTypeNameStatic ()
{
	return stringdup((UI::GetTypeNameStatic ()).CString ());
}


DllExport void *
UI_UI (Urho3D::Context * context)
{
	return WeakPtr<UI>(new UI(context));
}


DllExport void
UI_SetCursor (Urho3D::UI *_target, Urho3D::Cursor * cursor)
{
	_target->SetCursor (cursor);
}


DllExport void
UI_SetFocusElement (Urho3D::UI *_target, Urho3D::UIElement * element, bool byKey)
{
	_target->SetFocusElement (element, byKey);
}


DllExport int
UI_SetModalElement (Urho3D::UI *_target, Urho3D::UIElement * modalElement, bool enable)
{
	return _target->SetModalElement (modalElement, enable);
}


DllExport void
UI_Clear (Urho3D::UI *_target)
{
	_target->Clear ();
}


DllExport void
UI_Update (Urho3D::UI *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
UI_RenderUpdate (Urho3D::UI *_target)
{
	_target->RenderUpdate ();
}


DllExport void
UI_Render (Urho3D::UI *_target, bool renderUICommand)
{
	_target->Render (renderUICommand);
}


DllExport void
UI_DebugDraw (Urho3D::UI *_target, Urho3D::UIElement * element)
{
	_target->DebugDraw (element);
}


DllExport Urho3D::UIElement *
UI_LoadLayout_File (Urho3D::UI *_target, File * source, Urho3D::XMLFile * styleFile)
{
	auto copy = _target->LoadLayout (*source, styleFile);
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::UIElement *
UI_LoadLayout_MemoryBuffer (Urho3D::UI *_target, MemoryBuffer * source, Urho3D::XMLFile * styleFile)
{
	auto copy = _target->LoadLayout (*source, styleFile);
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::UIElement *
UI_LoadLayout0 (Urho3D::UI *_target, Urho3D::XMLFile * file, Urho3D::XMLFile * styleFile)
{
	auto copy = _target->LoadLayout (file, styleFile);
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport int
UI_SaveLayout_File (Urho3D::UI *_target, File * dest, Urho3D::UIElement * element)
{
	return _target->SaveLayout (*dest, element);
}


DllExport int
UI_SaveLayout_MemoryBuffer (Urho3D::UI *_target, MemoryBuffer * dest, Urho3D::UIElement * element)
{
	return _target->SaveLayout (*dest, element);
}


DllExport void
UI_SetClipboardText (Urho3D::UI *_target, const char * text)
{
	_target->SetClipboardText (Urho3D::String(text));
}


DllExport void
UI_SetDoubleClickInterval (Urho3D::UI *_target, float interval)
{
	_target->SetDoubleClickInterval (interval);
}


DllExport void
UI_SetMaxDoubleClickDistance (Urho3D::UI *_target, float distPixels)
{
	_target->SetMaxDoubleClickDistance (distPixels);
}


DllExport void
UI_SetDragBeginInterval (Urho3D::UI *_target, float interval)
{
	_target->SetDragBeginInterval (interval);
}


DllExport void
UI_SetDragBeginDistance (Urho3D::UI *_target, int pixels)
{
	_target->SetDragBeginDistance (pixels);
}


DllExport void
UI_SetDefaultToolTipDelay (Urho3D::UI *_target, float delay)
{
	_target->SetDefaultToolTipDelay (delay);
}


DllExport void
UI_SetMaxFontTextureSize (Urho3D::UI *_target, int size)
{
	_target->SetMaxFontTextureSize (size);
}


DllExport void
UI_SetNonFocusedMouseWheel (Urho3D::UI *_target, bool nonFocusedMouseWheel)
{
	_target->SetNonFocusedMouseWheel (nonFocusedMouseWheel);
}


DllExport void
UI_SetUseSystemClipboard (Urho3D::UI *_target, bool enable)
{
	_target->SetUseSystemClipboard (enable);
}


DllExport void
UI_SetUseScreenKeyboard (Urho3D::UI *_target, bool enable)
{
	_target->SetUseScreenKeyboard (enable);
}


DllExport void
UI_SetUseMutableGlyphs (Urho3D::UI *_target, bool enable)
{
	_target->SetUseMutableGlyphs (enable);
}


DllExport void
UI_SetForceAutoHint (Urho3D::UI *_target, bool enable)
{
	_target->SetForceAutoHint (enable);
}


DllExport void
UI_SetFontHintLevel (Urho3D::UI *_target, enum Urho3D::FontHintLevel level)
{
	_target->SetFontHintLevel (level);
}


DllExport void
UI_SetFontSubpixelThreshold (Urho3D::UI *_target, float threshold)
{
	_target->SetFontSubpixelThreshold (threshold);
}


DllExport void
UI_SetFontOversampling (Urho3D::UI *_target, int oversampling)
{
	_target->SetFontOversampling (oversampling);
}


DllExport void
UI_SetScale (Urho3D::UI *_target, float scale)
{
	_target->SetScale (scale);
}


DllExport void
UI_SetWidth (Urho3D::UI *_target, float width)
{
	_target->SetWidth (width);
}


DllExport void
UI_SetHeight (Urho3D::UI *_target, float height)
{
	_target->SetHeight (height);
}


DllExport void
UI_SetCustomSize (Urho3D::UI *_target, const class Urho3D::IntVector2 & size)
{
	_target->SetCustomSize (size);
}


DllExport void
UI_SetCustomSize1 (Urho3D::UI *_target, int width, int height)
{
	_target->SetCustomSize (width, height);
}


DllExport Urho3D::UIElement *
UI_GetRoot (Urho3D::UI *_target)
{
	return _target->GetRoot ();
}


DllExport Urho3D::UIElement *
UI_GetRootModalElement (Urho3D::UI *_target)
{
	return _target->GetRootModalElement ();
}


DllExport Urho3D::Cursor *
UI_GetCursor (Urho3D::UI *_target)
{
	return _target->GetCursor ();
}


DllExport Interop::IntVector2 
UI_GetCursorPosition (Urho3D::UI *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetCursorPosition ()));
}


DllExport Urho3D::UIElement *
UI_GetElementAt (Urho3D::UI *_target, const class Urho3D::IntVector2 & position, bool enabledOnly)
{
	return _target->GetElementAt (position, enabledOnly);
}


DllExport Urho3D::UIElement *
UI_GetElementAt2 (Urho3D::UI *_target, int x, int y, bool enabledOnly)
{
	return _target->GetElementAt (x, y, enabledOnly);
}


DllExport Urho3D::UIElement *
UI_GetElementAt3 (Urho3D::UI *_target, Urho3D::UIElement * root, const class Urho3D::IntVector2 & position, bool enabledOnly)
{
	return _target->GetElementAt (root, position, enabledOnly);
}


DllExport Urho3D::UIElement *
UI_GetFocusElement (Urho3D::UI *_target)
{
	return _target->GetFocusElement ();
}


DllExport Urho3D::UIElement *
UI_GetFrontElement (Urho3D::UI *_target)
{
	return _target->GetFrontElement ();
}


DllExport unsigned int
UI_GetNumDragElements (Urho3D::UI *_target)
{
	return _target->GetNumDragElements ();
}


DllExport Urho3D::UIElement *
UI_GetDragElement (Urho3D::UI *_target, unsigned int index)
{
	return _target->GetDragElement (index);
}


DllExport const char *
UI_GetClipboardText (Urho3D::UI *_target)
{
	return stringdup((_target->GetClipboardText ()).CString ());
}


DllExport float
UI_GetDoubleClickInterval (Urho3D::UI *_target)
{
	return _target->GetDoubleClickInterval ();
}


DllExport float
UI_GetMaxDoubleClickDistance (Urho3D::UI *_target)
{
	return _target->GetMaxDoubleClickDistance ();
}


DllExport float
UI_GetDragBeginInterval (Urho3D::UI *_target)
{
	return _target->GetDragBeginInterval ();
}


DllExport int
UI_GetDragBeginDistance (Urho3D::UI *_target)
{
	return _target->GetDragBeginDistance ();
}


DllExport float
UI_GetDefaultToolTipDelay (Urho3D::UI *_target)
{
	return _target->GetDefaultToolTipDelay ();
}


DllExport int
UI_GetMaxFontTextureSize (Urho3D::UI *_target)
{
	return _target->GetMaxFontTextureSize ();
}


DllExport int
UI_IsNonFocusedMouseWheel (Urho3D::UI *_target)
{
	return _target->IsNonFocusedMouseWheel ();
}


DllExport int
UI_GetUseSystemClipboard (Urho3D::UI *_target)
{
	return _target->GetUseSystemClipboard ();
}


DllExport int
UI_GetUseScreenKeyboard (Urho3D::UI *_target)
{
	return _target->GetUseScreenKeyboard ();
}


DllExport int
UI_GetUseMutableGlyphs (Urho3D::UI *_target)
{
	return _target->GetUseMutableGlyphs ();
}


DllExport int
UI_GetForceAutoHint (Urho3D::UI *_target)
{
	return _target->GetForceAutoHint ();
}


DllExport enum Urho3D::FontHintLevel
UI_GetFontHintLevel (Urho3D::UI *_target)
{
	return _target->GetFontHintLevel ();
}


DllExport float
UI_GetFontSubpixelThreshold (Urho3D::UI *_target)
{
	return _target->GetFontSubpixelThreshold ();
}


DllExport int
UI_GetFontOversampling (Urho3D::UI *_target)
{
	return _target->GetFontOversampling ();
}


DllExport int
UI_HasModalElement (Urho3D::UI *_target)
{
	return _target->HasModalElement ();
}


DllExport int
UI_IsDragging (Urho3D::UI *_target)
{
	return _target->IsDragging ();
}


DllExport float
UI_GetScale (Urho3D::UI *_target)
{
	return _target->GetScale ();
}


DllExport Interop::IntVector2 
UI_GetCustomSize (Urho3D::UI *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetCustomSize ()));
}


DllExport void
UI_SetElementRenderTexture (Urho3D::UI *_target, Urho3D::UIElement * element, Urho3D::Texture2D * texture)
{
	_target->SetElementRenderTexture (element, texture);
}


DllExport int
Window_GetType (Urho3D::Window *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Window_GetTypeName (Urho3D::Window *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Window_GetTypeStatic ()
{
	return (Window::GetTypeStatic ()).Value ();
}


DllExport const char *
Window_GetTypeNameStatic ()
{
	return stringdup((Window::GetTypeNameStatic ()).CString ());
}


DllExport void *
Window_Window (Urho3D::Context * context)
{
	return WeakPtr<Window>(new Window(context));
}


DllExport void
Window_RegisterObject (Urho3D::Context * context)
{
	Window::RegisterObject (context);
}


DllExport void
Window_OnHover (Urho3D::Window *_target, const class Urho3D::IntVector2 & position, const class Urho3D::IntVector2 & screenPosition, int buttons, int qualifiers, Urho3D::Cursor * cursor)
{
	_target->OnHover (position, screenPosition, buttons, qualifiers, cursor);
}


DllExport void
Window_SetMovable (Urho3D::Window *_target, bool enable)
{
	_target->SetMovable (enable);
}


DllExport void
Window_SetResizable (Urho3D::Window *_target, bool enable)
{
	_target->SetResizable (enable);
}


DllExport void
Window_SetFixedWidthResizing (Urho3D::Window *_target, bool enable)
{
	_target->SetFixedWidthResizing (enable);
}


DllExport void
Window_SetFixedHeightResizing (Urho3D::Window *_target, bool enable)
{
	_target->SetFixedHeightResizing (enable);
}


DllExport void
Window_SetResizeBorder (Urho3D::Window *_target, const class Urho3D::IntRect & rect)
{
	_target->SetResizeBorder (rect);
}


DllExport void
Window_SetModal (Urho3D::Window *_target, bool modal)
{
	_target->SetModal (modal);
}


DllExport void
Window_SetModalShadeColor (Urho3D::Window *_target, const class Urho3D::Color & color)
{
	_target->SetModalShadeColor (color);
}


DllExport void
Window_SetModalFrameColor (Urho3D::Window *_target, const class Urho3D::Color & color)
{
	_target->SetModalFrameColor (color);
}


DllExport void
Window_SetModalFrameSize (Urho3D::Window *_target, const class Urho3D::IntVector2 & size)
{
	_target->SetModalFrameSize (size);
}


DllExport void
Window_SetModalAutoDismiss (Urho3D::Window *_target, bool enable)
{
	_target->SetModalAutoDismiss (enable);
}


DllExport int
Window_IsMovable (Urho3D::Window *_target)
{
	return _target->IsMovable ();
}


DllExport int
Window_IsResizable (Urho3D::Window *_target)
{
	return _target->IsResizable ();
}


DllExport int
Window_GetFixedWidthResizing (Urho3D::Window *_target)
{
	return _target->GetFixedWidthResizing ();
}


DllExport int
Window_GetFixedHeightResizing (Urho3D::Window *_target)
{
	return _target->GetFixedHeightResizing ();
}


DllExport Interop::IntRect 
Window_GetResizeBorder (Urho3D::Window *_target)
{
	return *((Interop::IntRect  *) &(_target->GetResizeBorder ()));
}


DllExport int
Window_IsModal (Urho3D::Window *_target)
{
	return _target->IsModal ();
}


DllExport Interop::Color 
Window_GetModalShadeColor (Urho3D::Window *_target)
{
	return *((Interop::Color  *) &(_target->GetModalShadeColor ()));
}


DllExport Interop::Color 
Window_GetModalFrameColor (Urho3D::Window *_target)
{
	return *((Interop::Color  *) &(_target->GetModalFrameColor ()));
}


DllExport Interop::IntVector2 
Window_GetModalFrameSize (Urho3D::Window *_target)
{
	return *((Interop::IntVector2  *) &(_target->GetModalFrameSize ()));
}


DllExport int
Window_GetModalAutoDismiss (Urho3D::Window *_target)
{
	return _target->GetModalAutoDismiss ();
}


DllExport int
View3D_GetType (Urho3D::View3D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
View3D_GetTypeName (Urho3D::View3D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
View3D_GetTypeStatic ()
{
	return (View3D::GetTypeStatic ()).Value ();
}


DllExport const char *
View3D_GetTypeNameStatic ()
{
	return stringdup((View3D::GetTypeNameStatic ()).CString ());
}


DllExport void *
View3D_View3D (Urho3D::Context * context)
{
	return WeakPtr<View3D>(new View3D(context));
}


DllExport void
View3D_RegisterObject (Urho3D::Context * context)
{
	View3D::RegisterObject (context);
}


DllExport void
View3D_OnResize (Urho3D::View3D *_target, const class Urho3D::IntVector2 & newSize, const class Urho3D::IntVector2 & delta)
{
	_target->OnResize (newSize, delta);
}


DllExport void
View3D_SetView (Urho3D::View3D *_target, Urho3D::Scene * scene, Urho3D::Camera * camera, bool ownScene)
{
	_target->SetView (scene, camera, ownScene);
}


DllExport void
View3D_SetFormat (Urho3D::View3D *_target, unsigned int format)
{
	_target->SetFormat (format);
}


DllExport void
View3D_SetAutoUpdate (Urho3D::View3D *_target, bool enable)
{
	_target->SetAutoUpdate (enable);
}


DllExport void
View3D_QueueUpdate (Urho3D::View3D *_target)
{
	_target->QueueUpdate ();
}


DllExport unsigned int
View3D_GetFormat (Urho3D::View3D *_target)
{
	return _target->GetFormat ();
}


DllExport int
View3D_GetAutoUpdate (Urho3D::View3D *_target)
{
	return _target->GetAutoUpdate ();
}


DllExport Urho3D::Scene *
View3D_GetScene (Urho3D::View3D *_target)
{
	return _target->GetScene ();
}


DllExport Urho3D::Node *
View3D_GetCameraNode (Urho3D::View3D *_target)
{
	return _target->GetCameraNode ();
}


DllExport Urho3D::Texture2D *
View3D_GetRenderTexture (Urho3D::View3D *_target)
{
	return _target->GetRenderTexture ();
}


DllExport Urho3D::Texture2D *
View3D_GetDepthTexture (Urho3D::View3D *_target)
{
	return _target->GetDepthTexture ();
}


DllExport Urho3D::Viewport *
View3D_GetViewport (Urho3D::View3D *_target)
{
	return _target->GetViewport ();
}


DllExport int
Drawable2D_GetType (Urho3D::Drawable2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Drawable2D_GetTypeName (Urho3D::Drawable2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Drawable2D_GetTypeStatic ()
{
	return (Drawable2D::GetTypeStatic ()).Value ();
}


DllExport const char *
Drawable2D_GetTypeNameStatic ()
{
	return stringdup((Drawable2D::GetTypeNameStatic ()).CString ());
}


DllExport void
Drawable2D_RegisterObject (Urho3D::Context * context)
{
	Drawable2D::RegisterObject (context);
}


DllExport void
Drawable2D_OnSetEnabled (Urho3D::Drawable2D *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
Drawable2D_SetLayer (Urho3D::Drawable2D *_target, int layer)
{
	_target->SetLayer (layer);
}


DllExport void
Drawable2D_SetOrderInLayer (Urho3D::Drawable2D *_target, int orderInLayer)
{
	_target->SetOrderInLayer (orderInLayer);
}


DllExport int
Drawable2D_GetLayer (Urho3D::Drawable2D *_target)
{
	return _target->GetLayer ();
}


DllExport int
Drawable2D_GetOrderInLayer (Urho3D::Drawable2D *_target)
{
	return _target->GetOrderInLayer ();
}


DllExport int
StaticSprite2D_GetType (Urho3D::StaticSprite2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
StaticSprite2D_GetTypeName (Urho3D::StaticSprite2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
StaticSprite2D_GetTypeStatic ()
{
	return (StaticSprite2D::GetTypeStatic ()).Value ();
}


DllExport const char *
StaticSprite2D_GetTypeNameStatic ()
{
	return stringdup((StaticSprite2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
StaticSprite2D_StaticSprite2D (Urho3D::Context * context)
{
	return WeakPtr<StaticSprite2D>(new StaticSprite2D(context));
}


DllExport void
StaticSprite2D_RegisterObject (Urho3D::Context * context)
{
	StaticSprite2D::RegisterObject (context);
}


DllExport void
StaticSprite2D_SetSprite (Urho3D::StaticSprite2D *_target, Urho3D::Sprite2D * sprite)
{
	_target->SetSprite (sprite);
}


DllExport void
StaticSprite2D_SetBlendMode (Urho3D::StaticSprite2D *_target, enum Urho3D::BlendMode blendMode)
{
	_target->SetBlendMode (blendMode);
}


DllExport void
StaticSprite2D_SetFlip (Urho3D::StaticSprite2D *_target, bool flipX, bool flipY, bool swapXY)
{
	_target->SetFlip (flipX, flipY, swapXY);
}


DllExport void
StaticSprite2D_SetFlipX (Urho3D::StaticSprite2D *_target, bool flipX)
{
	_target->SetFlipX (flipX);
}


DllExport void
StaticSprite2D_SetFlipY (Urho3D::StaticSprite2D *_target, bool flipY)
{
	_target->SetFlipY (flipY);
}


DllExport void
StaticSprite2D_SetSwapXY (Urho3D::StaticSprite2D *_target, bool swapXY)
{
	_target->SetSwapXY (swapXY);
}


DllExport void
StaticSprite2D_SetColor (Urho3D::StaticSprite2D *_target, const class Urho3D::Color & color)
{
	_target->SetColor (color);
}


DllExport void
StaticSprite2D_SetAlpha (Urho3D::StaticSprite2D *_target, float alpha)
{
	_target->SetAlpha (alpha);
}


DllExport void
StaticSprite2D_SetUseHotSpot (Urho3D::StaticSprite2D *_target, bool useHotSpot)
{
	_target->SetUseHotSpot (useHotSpot);
}


DllExport void
StaticSprite2D_SetUseDrawRect (Urho3D::StaticSprite2D *_target, bool useDrawRect)
{
	_target->SetUseDrawRect (useDrawRect);
}


DllExport void
StaticSprite2D_SetUseTextureRect (Urho3D::StaticSprite2D *_target, bool useTextureRect)
{
	_target->SetUseTextureRect (useTextureRect);
}


DllExport void
StaticSprite2D_SetHotSpot (Urho3D::StaticSprite2D *_target, const class Urho3D::Vector2 & hotspot)
{
	_target->SetHotSpot (hotspot);
}


DllExport void
StaticSprite2D_SetCustomMaterial (Urho3D::StaticSprite2D *_target, Urho3D::Material * customMaterial)
{
	_target->SetCustomMaterial (customMaterial);
}


DllExport Urho3D::Sprite2D *
StaticSprite2D_GetSprite (Urho3D::StaticSprite2D *_target)
{
	return _target->GetSprite ();
}


DllExport enum Urho3D::BlendMode
StaticSprite2D_GetBlendMode (Urho3D::StaticSprite2D *_target)
{
	return _target->GetBlendMode ();
}


DllExport int
StaticSprite2D_GetFlipX (Urho3D::StaticSprite2D *_target)
{
	return _target->GetFlipX ();
}


DllExport int
StaticSprite2D_GetFlipY (Urho3D::StaticSprite2D *_target)
{
	return _target->GetFlipY ();
}


DllExport int
StaticSprite2D_GetSwapXY (Urho3D::StaticSprite2D *_target)
{
	return _target->GetSwapXY ();
}


DllExport Interop::Color 
StaticSprite2D_GetColor (Urho3D::StaticSprite2D *_target)
{
	return *((Interop::Color  *) &(_target->GetColor ()));
}


DllExport float
StaticSprite2D_GetAlpha (Urho3D::StaticSprite2D *_target)
{
	return _target->GetAlpha ();
}


DllExport int
StaticSprite2D_GetUseHotSpot (Urho3D::StaticSprite2D *_target)
{
	return _target->GetUseHotSpot ();
}


DllExport int
StaticSprite2D_GetUseDrawRect (Urho3D::StaticSprite2D *_target)
{
	return _target->GetUseDrawRect ();
}


DllExport int
StaticSprite2D_GetUseTextureRect (Urho3D::StaticSprite2D *_target)
{
	return _target->GetUseTextureRect ();
}


DllExport Interop::Vector2 
StaticSprite2D_GetHotSpot (Urho3D::StaticSprite2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetHotSpot ()));
}


DllExport Urho3D::Material *
StaticSprite2D_GetCustomMaterial (Urho3D::StaticSprite2D *_target)
{
	return _target->GetCustomMaterial ();
}


DllExport Urho3D::ResourceRef
StaticSprite2D_GetSpriteAttr (Urho3D::StaticSprite2D *_target)
{
	return _target->GetSpriteAttr ();
}


DllExport Urho3D::ResourceRef
StaticSprite2D_GetCustomMaterialAttr (Urho3D::StaticSprite2D *_target)
{
	return _target->GetCustomMaterialAttr ();
}


DllExport int
AnimatedSprite2D_GetType (Urho3D::AnimatedSprite2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
AnimatedSprite2D_GetTypeName (Urho3D::AnimatedSprite2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
AnimatedSprite2D_GetTypeStatic ()
{
	return (AnimatedSprite2D::GetTypeStatic ()).Value ();
}


DllExport const char *
AnimatedSprite2D_GetTypeNameStatic ()
{
	return stringdup((AnimatedSprite2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
AnimatedSprite2D_AnimatedSprite2D (Urho3D::Context * context)
{
	return WeakPtr<AnimatedSprite2D>(new AnimatedSprite2D(context));
}


DllExport void
AnimatedSprite2D_RegisterObject (Urho3D::Context * context)
{
	AnimatedSprite2D::RegisterObject (context);
}


DllExport void
AnimatedSprite2D_OnSetEnabled (Urho3D::AnimatedSprite2D *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
AnimatedSprite2D_SetAnimationSet (Urho3D::AnimatedSprite2D *_target, Urho3D::AnimationSet2D * animationSet)
{
	_target->SetAnimationSet (animationSet);
}


DllExport void
AnimatedSprite2D_SetEntity (Urho3D::AnimatedSprite2D *_target, const char * entity)
{
	_target->SetEntity (Urho3D::String(entity));
}


DllExport void
AnimatedSprite2D_SetAnimation (Urho3D::AnimatedSprite2D *_target, const char * name, enum LoopMode2D loopMode)
{
	_target->SetAnimation (Urho3D::String(name), loopMode);
}


DllExport void
AnimatedSprite2D_SetLoopMode (Urho3D::AnimatedSprite2D *_target, enum LoopMode2D loopMode)
{
	_target->SetLoopMode (loopMode);
}


DllExport void
AnimatedSprite2D_SetSpeed (Urho3D::AnimatedSprite2D *_target, float speed)
{
	_target->SetSpeed (speed);
}


DllExport Urho3D::AnimationSet2D *
AnimatedSprite2D_GetAnimationSet (Urho3D::AnimatedSprite2D *_target)
{
	return _target->GetAnimationSet ();
}


DllExport const char *
AnimatedSprite2D_GetEntity (Urho3D::AnimatedSprite2D *_target)
{
	return stringdup((_target->GetEntity ()).CString ());
}


DllExport const char *
AnimatedSprite2D_GetAnimation (Urho3D::AnimatedSprite2D *_target)
{
	return stringdup((_target->GetAnimation ()).CString ());
}


DllExport enum LoopMode2D
AnimatedSprite2D_GetLoopMode (Urho3D::AnimatedSprite2D *_target)
{
	return _target->GetLoopMode ();
}


DllExport float
AnimatedSprite2D_GetSpeed (Urho3D::AnimatedSprite2D *_target)
{
	return _target->GetSpeed ();
}


DllExport Urho3D::ResourceRef
AnimatedSprite2D_GetAnimationSetAttr (Urho3D::AnimatedSprite2D *_target)
{
	return _target->GetAnimationSetAttr ();
}


DllExport void
AnimatedSprite2D_SetAnimationAttr (Urho3D::AnimatedSprite2D *_target, const char * name)
{
	_target->SetAnimationAttr (Urho3D::String(name));
}


DllExport int
AnimationSet2D_GetType (Urho3D::AnimationSet2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
AnimationSet2D_GetTypeName (Urho3D::AnimationSet2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
AnimationSet2D_GetTypeStatic ()
{
	return (AnimationSet2D::GetTypeStatic ()).Value ();
}


DllExport const char *
AnimationSet2D_GetTypeNameStatic ()
{
	return stringdup((AnimationSet2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
AnimationSet2D_AnimationSet2D (Urho3D::Context * context)
{
	return WeakPtr<AnimationSet2D>(new AnimationSet2D(context));
}


DllExport void
AnimationSet2D_RegisterObject (Urho3D::Context * context)
{
	AnimationSet2D::RegisterObject (context);
}


DllExport int
AnimationSet2D_BeginLoad_File (Urho3D::AnimationSet2D *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
AnimationSet2D_BeginLoad_MemoryBuffer (Urho3D::AnimationSet2D *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
AnimationSet2D_EndLoad (Urho3D::AnimationSet2D *_target)
{
	return _target->EndLoad ();
}


DllExport unsigned int
AnimationSet2D_GetNumAnimations (Urho3D::AnimationSet2D *_target)
{
	return _target->GetNumAnimations ();
}


DllExport const char *
AnimationSet2D_GetAnimation (Urho3D::AnimationSet2D *_target, unsigned int index)
{
	return stringdup((_target->GetAnimation (index)).CString ());
}


DllExport int
AnimationSet2D_HasAnimation (Urho3D::AnimationSet2D *_target, const char * animationName)
{
	return _target->HasAnimation (Urho3D::String(animationName));
}


DllExport Urho3D::Sprite2D *
AnimationSet2D_GetSprite (Urho3D::AnimationSet2D *_target)
{
	return _target->GetSprite ();
}


DllExport Urho3D::Sprite2D *
AnimationSet2D_GetSpriterFileSprite (Urho3D::AnimationSet2D *_target, int folderId, int fileId)
{
	return _target->GetSpriterFileSprite (folderId, fileId);
}


DllExport int
CollisionShape2D_GetType (Urho3D::CollisionShape2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CollisionShape2D_GetTypeName (Urho3D::CollisionShape2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CollisionShape2D_GetTypeStatic ()
{
	return (CollisionShape2D::GetTypeStatic ()).Value ();
}


DllExport const char *
CollisionShape2D_GetTypeNameStatic ()
{
	return stringdup((CollisionShape2D::GetTypeNameStatic ()).CString ());
}


DllExport void
CollisionShape2D_RegisterObject (Urho3D::Context * context)
{
	CollisionShape2D::RegisterObject (context);
}


DllExport void
CollisionShape2D_OnSetEnabled (Urho3D::CollisionShape2D *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
CollisionShape2D_SetTrigger (Urho3D::CollisionShape2D *_target, bool trigger)
{
	_target->SetTrigger (trigger);
}


DllExport void
CollisionShape2D_SetCategoryBits (Urho3D::CollisionShape2D *_target, int categoryBits)
{
	_target->SetCategoryBits (categoryBits);
}


DllExport void
CollisionShape2D_SetMaskBits (Urho3D::CollisionShape2D *_target, int maskBits)
{
	_target->SetMaskBits (maskBits);
}


DllExport void
CollisionShape2D_SetGroupIndex (Urho3D::CollisionShape2D *_target, int groupIndex)
{
	_target->SetGroupIndex (groupIndex);
}


DllExport void
CollisionShape2D_SetDensity (Urho3D::CollisionShape2D *_target, float density)
{
	_target->SetDensity (density);
}


DllExport void
CollisionShape2D_SetFriction (Urho3D::CollisionShape2D *_target, float friction)
{
	_target->SetFriction (friction);
}


DllExport void
CollisionShape2D_SetRestitution (Urho3D::CollisionShape2D *_target, float restitution)
{
	_target->SetRestitution (restitution);
}


DllExport void
CollisionShape2D_CreateFixture (Urho3D::CollisionShape2D *_target)
{
	_target->CreateFixture ();
}


DllExport void
CollisionShape2D_ReleaseFixture (Urho3D::CollisionShape2D *_target)
{
	_target->ReleaseFixture ();
}


DllExport int
CollisionShape2D_IsTrigger (Urho3D::CollisionShape2D *_target)
{
	return _target->IsTrigger ();
}


DllExport int
CollisionShape2D_GetCategoryBits (Urho3D::CollisionShape2D *_target)
{
	return _target->GetCategoryBits ();
}


DllExport int
CollisionShape2D_GetMaskBits (Urho3D::CollisionShape2D *_target)
{
	return _target->GetMaskBits ();
}


DllExport int
CollisionShape2D_GetGroupIndex (Urho3D::CollisionShape2D *_target)
{
	return _target->GetGroupIndex ();
}


DllExport float
CollisionShape2D_GetDensity (Urho3D::CollisionShape2D *_target)
{
	return _target->GetDensity ();
}


DllExport float
CollisionShape2D_GetFriction (Urho3D::CollisionShape2D *_target)
{
	return _target->GetFriction ();
}


DllExport float
CollisionShape2D_GetRestitution (Urho3D::CollisionShape2D *_target)
{
	return _target->GetRestitution ();
}


DllExport float
CollisionShape2D_GetMass (Urho3D::CollisionShape2D *_target)
{
	return _target->GetMass ();
}


DllExport float
CollisionShape2D_GetInertia (Urho3D::CollisionShape2D *_target)
{
	return _target->GetInertia ();
}


DllExport Interop::Vector2 
CollisionShape2D_GetMassCenter (Urho3D::CollisionShape2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetMassCenter ()));
}


DllExport int
CollisionBox2D_GetType (Urho3D::CollisionBox2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CollisionBox2D_GetTypeName (Urho3D::CollisionBox2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CollisionBox2D_GetTypeStatic ()
{
	return (CollisionBox2D::GetTypeStatic ()).Value ();
}


DllExport const char *
CollisionBox2D_GetTypeNameStatic ()
{
	return stringdup((CollisionBox2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
CollisionBox2D_CollisionBox2D (Urho3D::Context * context)
{
	return WeakPtr<CollisionBox2D>(new CollisionBox2D(context));
}


DllExport void
CollisionBox2D_RegisterObject (Urho3D::Context * context)
{
	CollisionBox2D::RegisterObject (context);
}


DllExport void
CollisionBox2D_SetSize (Urho3D::CollisionBox2D *_target, const class Urho3D::Vector2 & size)
{
	_target->SetSize (size);
}


DllExport void
CollisionBox2D_SetSize0 (Urho3D::CollisionBox2D *_target, float width, float height)
{
	_target->SetSize (width, height);
}


DllExport void
CollisionBox2D_SetCenter (Urho3D::CollisionBox2D *_target, const class Urho3D::Vector2 & center)
{
	_target->SetCenter (center);
}


DllExport void
CollisionBox2D_SetCenter1 (Urho3D::CollisionBox2D *_target, float x, float y)
{
	_target->SetCenter (x, y);
}


DllExport void
CollisionBox2D_SetAngle (Urho3D::CollisionBox2D *_target, float angle)
{
	_target->SetAngle (angle);
}


DllExport Interop::Vector2 
CollisionBox2D_GetSize (Urho3D::CollisionBox2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetSize ()));
}


DllExport Interop::Vector2 
CollisionBox2D_GetCenter (Urho3D::CollisionBox2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetCenter ()));
}


DllExport float
CollisionBox2D_GetAngle (Urho3D::CollisionBox2D *_target)
{
	return _target->GetAngle ();
}


DllExport int
CollisionChain2D_GetType (Urho3D::CollisionChain2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CollisionChain2D_GetTypeName (Urho3D::CollisionChain2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CollisionChain2D_GetTypeStatic ()
{
	return (CollisionChain2D::GetTypeStatic ()).Value ();
}


DllExport const char *
CollisionChain2D_GetTypeNameStatic ()
{
	return stringdup((CollisionChain2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
CollisionChain2D_CollisionChain2D (Urho3D::Context * context)
{
	return WeakPtr<CollisionChain2D>(new CollisionChain2D(context));
}


DllExport void
CollisionChain2D_RegisterObject (Urho3D::Context * context)
{
	CollisionChain2D::RegisterObject (context);
}


DllExport void
CollisionChain2D_SetLoop (Urho3D::CollisionChain2D *_target, bool loop)
{
	_target->SetLoop (loop);
}


DllExport void
CollisionChain2D_SetVertexCount (Urho3D::CollisionChain2D *_target, unsigned int count)
{
	_target->SetVertexCount (count);
}


DllExport void
CollisionChain2D_SetVertex (Urho3D::CollisionChain2D *_target, unsigned int index, const class Urho3D::Vector2 & vertex)
{
	_target->SetVertex (index, vertex);
}


DllExport int
CollisionChain2D_GetLoop (Urho3D::CollisionChain2D *_target)
{
	return _target->GetLoop ();
}


DllExport unsigned int
CollisionChain2D_GetVertexCount (Urho3D::CollisionChain2D *_target)
{
	return _target->GetVertexCount ();
}


DllExport Interop::Vector2 
CollisionChain2D_GetVertex (Urho3D::CollisionChain2D *_target, unsigned int index)
{
	return *((Interop::Vector2  *) &(_target->GetVertex (index)));
}


DllExport int
CollisionCircle2D_GetType (Urho3D::CollisionCircle2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CollisionCircle2D_GetTypeName (Urho3D::CollisionCircle2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CollisionCircle2D_GetTypeStatic ()
{
	return (CollisionCircle2D::GetTypeStatic ()).Value ();
}


DllExport const char *
CollisionCircle2D_GetTypeNameStatic ()
{
	return stringdup((CollisionCircle2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
CollisionCircle2D_CollisionCircle2D (Urho3D::Context * context)
{
	return WeakPtr<CollisionCircle2D>(new CollisionCircle2D(context));
}


DllExport void
CollisionCircle2D_RegisterObject (Urho3D::Context * context)
{
	CollisionCircle2D::RegisterObject (context);
}


DllExport void
CollisionCircle2D_SetRadius (Urho3D::CollisionCircle2D *_target, float radius)
{
	_target->SetRadius (radius);
}


DllExport void
CollisionCircle2D_SetCenter (Urho3D::CollisionCircle2D *_target, const class Urho3D::Vector2 & center)
{
	_target->SetCenter (center);
}


DllExport void
CollisionCircle2D_SetCenter0 (Urho3D::CollisionCircle2D *_target, float x, float y)
{
	_target->SetCenter (x, y);
}


DllExport float
CollisionCircle2D_GetRadius (Urho3D::CollisionCircle2D *_target)
{
	return _target->GetRadius ();
}


DllExport Interop::Vector2 
CollisionCircle2D_GetCenter (Urho3D::CollisionCircle2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetCenter ()));
}


DllExport int
CollisionEdge2D_GetType (Urho3D::CollisionEdge2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CollisionEdge2D_GetTypeName (Urho3D::CollisionEdge2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CollisionEdge2D_GetTypeStatic ()
{
	return (CollisionEdge2D::GetTypeStatic ()).Value ();
}


DllExport const char *
CollisionEdge2D_GetTypeNameStatic ()
{
	return stringdup((CollisionEdge2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
CollisionEdge2D_CollisionEdge2D (Urho3D::Context * context)
{
	return WeakPtr<CollisionEdge2D>(new CollisionEdge2D(context));
}


DllExport void
CollisionEdge2D_RegisterObject (Urho3D::Context * context)
{
	CollisionEdge2D::RegisterObject (context);
}


DllExport void
CollisionEdge2D_SetVertex1 (Urho3D::CollisionEdge2D *_target, const class Urho3D::Vector2 & vertex)
{
	_target->SetVertex1 (vertex);
}


DllExport void
CollisionEdge2D_SetVertex2 (Urho3D::CollisionEdge2D *_target, const class Urho3D::Vector2 & vertex)
{
	_target->SetVertex2 (vertex);
}


DllExport void
CollisionEdge2D_SetVertices (Urho3D::CollisionEdge2D *_target, const class Urho3D::Vector2 & vertex1, const class Urho3D::Vector2 & vertex2)
{
	_target->SetVertices (vertex1, vertex2);
}


DllExport Interop::Vector2 
CollisionEdge2D_GetVertex1 (Urho3D::CollisionEdge2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetVertex1 ()));
}


DllExport Interop::Vector2 
CollisionEdge2D_GetVertex2 (Urho3D::CollisionEdge2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetVertex2 ()));
}


DllExport int
CollisionPolygon2D_GetType (Urho3D::CollisionPolygon2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
CollisionPolygon2D_GetTypeName (Urho3D::CollisionPolygon2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
CollisionPolygon2D_GetTypeStatic ()
{
	return (CollisionPolygon2D::GetTypeStatic ()).Value ();
}


DllExport const char *
CollisionPolygon2D_GetTypeNameStatic ()
{
	return stringdup((CollisionPolygon2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
CollisionPolygon2D_CollisionPolygon2D (Urho3D::Context * context)
{
	return WeakPtr<CollisionPolygon2D>(new CollisionPolygon2D(context));
}


DllExport void
CollisionPolygon2D_RegisterObject (Urho3D::Context * context)
{
	CollisionPolygon2D::RegisterObject (context);
}


DllExport void
CollisionPolygon2D_SetVertexCount (Urho3D::CollisionPolygon2D *_target, unsigned int count)
{
	_target->SetVertexCount (count);
}


DllExport void
CollisionPolygon2D_SetVertex (Urho3D::CollisionPolygon2D *_target, unsigned int index, const class Urho3D::Vector2 & vertex)
{
	_target->SetVertex (index, vertex);
}


DllExport unsigned int
CollisionPolygon2D_GetVertexCount (Urho3D::CollisionPolygon2D *_target)
{
	return _target->GetVertexCount ();
}


DllExport Interop::Vector2 
CollisionPolygon2D_GetVertex (Urho3D::CollisionPolygon2D *_target, unsigned int index)
{
	return *((Interop::Vector2  *) &(_target->GetVertex (index)));
}


DllExport int
Constraint2D_GetType (Urho3D::Constraint2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Constraint2D_GetTypeName (Urho3D::Constraint2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Constraint2D_GetTypeStatic ()
{
	return (Constraint2D::GetTypeStatic ()).Value ();
}


DllExport const char *
Constraint2D_GetTypeNameStatic ()
{
	return stringdup((Constraint2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
Constraint2D_Constraint2D (Urho3D::Context * context)
{
	return WeakPtr<Constraint2D>(new Constraint2D(context));
}


DllExport void
Constraint2D_RegisterObject (Urho3D::Context * context)
{
	Constraint2D::RegisterObject (context);
}


DllExport void
Constraint2D_ApplyAttributes (Urho3D::Constraint2D *_target)
{
	_target->ApplyAttributes ();
}


DllExport void
Constraint2D_OnSetEnabled (Urho3D::Constraint2D *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
Constraint2D_CreateJoint (Urho3D::Constraint2D *_target)
{
	_target->CreateJoint ();
}


DllExport void
Constraint2D_ReleaseJoint (Urho3D::Constraint2D *_target)
{
	_target->ReleaseJoint ();
}


DllExport void
Constraint2D_SetOtherBody (Urho3D::Constraint2D *_target, Urho3D::RigidBody2D * body)
{
	_target->SetOtherBody (body);
}


DllExport void
Constraint2D_SetCollideConnected (Urho3D::Constraint2D *_target, bool collideConnected)
{
	_target->SetCollideConnected (collideConnected);
}


DllExport void
Constraint2D_SetAttachedConstraint (Urho3D::Constraint2D *_target, Urho3D::Constraint2D * constraint)
{
	_target->SetAttachedConstraint (constraint);
}


DllExport Urho3D::RigidBody2D *
Constraint2D_GetOwnerBody (Urho3D::Constraint2D *_target)
{
	return _target->GetOwnerBody ();
}


DllExport Urho3D::RigidBody2D *
Constraint2D_GetOtherBody (Urho3D::Constraint2D *_target)
{
	return _target->GetOtherBody ();
}


DllExport int
Constraint2D_GetCollideConnected (Urho3D::Constraint2D *_target)
{
	return _target->GetCollideConnected ();
}


DllExport Urho3D::Constraint2D *
Constraint2D_GetAttachedConstraint (Urho3D::Constraint2D *_target)
{
	return _target->GetAttachedConstraint ();
}


DllExport int
ConstraintDistance2D_GetType (Urho3D::ConstraintDistance2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintDistance2D_GetTypeName (Urho3D::ConstraintDistance2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintDistance2D_GetTypeStatic ()
{
	return (ConstraintDistance2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintDistance2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintDistance2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintDistance2D_ConstraintDistance2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintDistance2D>(new ConstraintDistance2D(context));
}


DllExport void
ConstraintDistance2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintDistance2D::RegisterObject (context);
}


DllExport void
ConstraintDistance2D_SetOwnerBodyAnchor (Urho3D::ConstraintDistance2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetOwnerBodyAnchor (anchor);
}


DllExport void
ConstraintDistance2D_SetOtherBodyAnchor (Urho3D::ConstraintDistance2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetOtherBodyAnchor (anchor);
}


DllExport void
ConstraintDistance2D_SetFrequencyHz (Urho3D::ConstraintDistance2D *_target, float frequencyHz)
{
	_target->SetFrequencyHz (frequencyHz);
}


DllExport void
ConstraintDistance2D_SetDampingRatio (Urho3D::ConstraintDistance2D *_target, float dampingRatio)
{
	_target->SetDampingRatio (dampingRatio);
}


DllExport void
ConstraintDistance2D_SetLength (Urho3D::ConstraintDistance2D *_target, float length)
{
	_target->SetLength (length);
}


DllExport Interop::Vector2 
ConstraintDistance2D_GetOwnerBodyAnchor (Urho3D::ConstraintDistance2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetOwnerBodyAnchor ()));
}


DllExport Interop::Vector2 
ConstraintDistance2D_GetOtherBodyAnchor (Urho3D::ConstraintDistance2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetOtherBodyAnchor ()));
}


DllExport float
ConstraintDistance2D_GetFrequencyHz (Urho3D::ConstraintDistance2D *_target)
{
	return _target->GetFrequencyHz ();
}


DllExport float
ConstraintDistance2D_GetDampingRatio (Urho3D::ConstraintDistance2D *_target)
{
	return _target->GetDampingRatio ();
}


DllExport float
ConstraintDistance2D_GetLength (Urho3D::ConstraintDistance2D *_target)
{
	return _target->GetLength ();
}


DllExport int
ConstraintFriction2D_GetType (Urho3D::ConstraintFriction2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintFriction2D_GetTypeName (Urho3D::ConstraintFriction2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintFriction2D_GetTypeStatic ()
{
	return (ConstraintFriction2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintFriction2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintFriction2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintFriction2D_ConstraintFriction2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintFriction2D>(new ConstraintFriction2D(context));
}


DllExport void
ConstraintFriction2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintFriction2D::RegisterObject (context);
}


DllExport void
ConstraintFriction2D_SetAnchor (Urho3D::ConstraintFriction2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetAnchor (anchor);
}


DllExport void
ConstraintFriction2D_SetMaxForce (Urho3D::ConstraintFriction2D *_target, float maxForce)
{
	_target->SetMaxForce (maxForce);
}


DllExport void
ConstraintFriction2D_SetMaxTorque (Urho3D::ConstraintFriction2D *_target, float maxTorque)
{
	_target->SetMaxTorque (maxTorque);
}


DllExport Interop::Vector2 
ConstraintFriction2D_GetAnchor (Urho3D::ConstraintFriction2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetAnchor ()));
}


DllExport float
ConstraintFriction2D_GetMaxForce (Urho3D::ConstraintFriction2D *_target)
{
	return _target->GetMaxForce ();
}


DllExport float
ConstraintFriction2D_GetMaxTorque (Urho3D::ConstraintFriction2D *_target)
{
	return _target->GetMaxTorque ();
}


DllExport int
ConstraintGear2D_GetType (Urho3D::ConstraintGear2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintGear2D_GetTypeName (Urho3D::ConstraintGear2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintGear2D_GetTypeStatic ()
{
	return (ConstraintGear2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintGear2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintGear2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintGear2D_ConstraintGear2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintGear2D>(new ConstraintGear2D(context));
}


DllExport void
ConstraintGear2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintGear2D::RegisterObject (context);
}


DllExport void
ConstraintGear2D_SetOwnerConstraint (Urho3D::ConstraintGear2D *_target, Urho3D::Constraint2D * constraint)
{
	_target->SetOwnerConstraint (constraint);
}


DllExport void
ConstraintGear2D_SetOtherConstraint (Urho3D::ConstraintGear2D *_target, Urho3D::Constraint2D * constraint)
{
	_target->SetOtherConstraint (constraint);
}


DllExport void
ConstraintGear2D_SetRatio (Urho3D::ConstraintGear2D *_target, float ratio)
{
	_target->SetRatio (ratio);
}


DllExport Urho3D::Constraint2D *
ConstraintGear2D_GetOwnerConstraint (Urho3D::ConstraintGear2D *_target)
{
	return _target->GetOwnerConstraint ();
}


DllExport Urho3D::Constraint2D *
ConstraintGear2D_GetOtherConstraint (Urho3D::ConstraintGear2D *_target)
{
	return _target->GetOtherConstraint ();
}


DllExport float
ConstraintGear2D_GetRatio (Urho3D::ConstraintGear2D *_target)
{
	return _target->GetRatio ();
}


DllExport int
ConstraintMotor2D_GetType (Urho3D::ConstraintMotor2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintMotor2D_GetTypeName (Urho3D::ConstraintMotor2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintMotor2D_GetTypeStatic ()
{
	return (ConstraintMotor2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintMotor2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintMotor2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintMotor2D_ConstraintMotor2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintMotor2D>(new ConstraintMotor2D(context));
}


DllExport void
ConstraintMotor2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintMotor2D::RegisterObject (context);
}


DllExport void
ConstraintMotor2D_SetLinearOffset (Urho3D::ConstraintMotor2D *_target, const class Urho3D::Vector2 & linearOffset)
{
	_target->SetLinearOffset (linearOffset);
}


DllExport void
ConstraintMotor2D_SetAngularOffset (Urho3D::ConstraintMotor2D *_target, float angularOffset)
{
	_target->SetAngularOffset (angularOffset);
}


DllExport void
ConstraintMotor2D_SetMaxForce (Urho3D::ConstraintMotor2D *_target, float maxForce)
{
	_target->SetMaxForce (maxForce);
}


DllExport void
ConstraintMotor2D_SetMaxTorque (Urho3D::ConstraintMotor2D *_target, float maxTorque)
{
	_target->SetMaxTorque (maxTorque);
}


DllExport void
ConstraintMotor2D_SetCorrectionFactor (Urho3D::ConstraintMotor2D *_target, float correctionFactor)
{
	_target->SetCorrectionFactor (correctionFactor);
}


DllExport Interop::Vector2 
ConstraintMotor2D_GetLinearOffset (Urho3D::ConstraintMotor2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetLinearOffset ()));
}


DllExport float
ConstraintMotor2D_GetAngularOffset (Urho3D::ConstraintMotor2D *_target)
{
	return _target->GetAngularOffset ();
}


DllExport float
ConstraintMotor2D_GetMaxForce (Urho3D::ConstraintMotor2D *_target)
{
	return _target->GetMaxForce ();
}


DllExport float
ConstraintMotor2D_GetMaxTorque (Urho3D::ConstraintMotor2D *_target)
{
	return _target->GetMaxTorque ();
}


DllExport float
ConstraintMotor2D_GetCorrectionFactor (Urho3D::ConstraintMotor2D *_target)
{
	return _target->GetCorrectionFactor ();
}


DllExport int
ConstraintMouse2D_GetType (Urho3D::ConstraintMouse2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintMouse2D_GetTypeName (Urho3D::ConstraintMouse2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintMouse2D_GetTypeStatic ()
{
	return (ConstraintMouse2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintMouse2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintMouse2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintMouse2D_ConstraintMouse2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintMouse2D>(new ConstraintMouse2D(context));
}


DllExport void
ConstraintMouse2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintMouse2D::RegisterObject (context);
}


DllExport void
ConstraintMouse2D_SetTarget (Urho3D::ConstraintMouse2D *_target, const class Urho3D::Vector2 & target)
{
	_target->SetTarget (target);
}


DllExport void
ConstraintMouse2D_SetMaxForce (Urho3D::ConstraintMouse2D *_target, float maxForce)
{
	_target->SetMaxForce (maxForce);
}


DllExport void
ConstraintMouse2D_SetFrequencyHz (Urho3D::ConstraintMouse2D *_target, float frequencyHz)
{
	_target->SetFrequencyHz (frequencyHz);
}


DllExport void
ConstraintMouse2D_SetDampingRatio (Urho3D::ConstraintMouse2D *_target, float dampingRatio)
{
	_target->SetDampingRatio (dampingRatio);
}


DllExport Interop::Vector2 
ConstraintMouse2D_GetTarget (Urho3D::ConstraintMouse2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetTarget ()));
}


DllExport float
ConstraintMouse2D_GetMaxForce (Urho3D::ConstraintMouse2D *_target)
{
	return _target->GetMaxForce ();
}


DllExport float
ConstraintMouse2D_GetFrequencyHz (Urho3D::ConstraintMouse2D *_target)
{
	return _target->GetFrequencyHz ();
}


DllExport float
ConstraintMouse2D_GetDampingRatio (Urho3D::ConstraintMouse2D *_target)
{
	return _target->GetDampingRatio ();
}


DllExport int
ConstraintPrismatic2D_GetType (Urho3D::ConstraintPrismatic2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintPrismatic2D_GetTypeName (Urho3D::ConstraintPrismatic2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintPrismatic2D_GetTypeStatic ()
{
	return (ConstraintPrismatic2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintPrismatic2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintPrismatic2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintPrismatic2D_ConstraintPrismatic2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintPrismatic2D>(new ConstraintPrismatic2D(context));
}


DllExport void
ConstraintPrismatic2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintPrismatic2D::RegisterObject (context);
}


DllExport void
ConstraintPrismatic2D_SetAnchor (Urho3D::ConstraintPrismatic2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetAnchor (anchor);
}


DllExport void
ConstraintPrismatic2D_SetAxis (Urho3D::ConstraintPrismatic2D *_target, const class Urho3D::Vector2 & axis)
{
	_target->SetAxis (axis);
}


DllExport void
ConstraintPrismatic2D_SetEnableLimit (Urho3D::ConstraintPrismatic2D *_target, bool enableLimit)
{
	_target->SetEnableLimit (enableLimit);
}


DllExport void
ConstraintPrismatic2D_SetLowerTranslation (Urho3D::ConstraintPrismatic2D *_target, float lowerTranslation)
{
	_target->SetLowerTranslation (lowerTranslation);
}


DllExport void
ConstraintPrismatic2D_SetUpperTranslation (Urho3D::ConstraintPrismatic2D *_target, float upperTranslation)
{
	_target->SetUpperTranslation (upperTranslation);
}


DllExport void
ConstraintPrismatic2D_SetEnableMotor (Urho3D::ConstraintPrismatic2D *_target, bool enableMotor)
{
	_target->SetEnableMotor (enableMotor);
}


DllExport void
ConstraintPrismatic2D_SetMaxMotorForce (Urho3D::ConstraintPrismatic2D *_target, float maxMotorForce)
{
	_target->SetMaxMotorForce (maxMotorForce);
}


DllExport void
ConstraintPrismatic2D_SetMotorSpeed (Urho3D::ConstraintPrismatic2D *_target, float motorSpeed)
{
	_target->SetMotorSpeed (motorSpeed);
}


DllExport Interop::Vector2 
ConstraintPrismatic2D_GetAnchor (Urho3D::ConstraintPrismatic2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetAnchor ()));
}


DllExport Interop::Vector2 
ConstraintPrismatic2D_GetAxis (Urho3D::ConstraintPrismatic2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetAxis ()));
}


DllExport int
ConstraintPrismatic2D_GetEnableLimit (Urho3D::ConstraintPrismatic2D *_target)
{
	return _target->GetEnableLimit ();
}


DllExport float
ConstraintPrismatic2D_GetLowerTranslation (Urho3D::ConstraintPrismatic2D *_target)
{
	return _target->GetLowerTranslation ();
}


DllExport float
ConstraintPrismatic2D_GetUpperTranslation (Urho3D::ConstraintPrismatic2D *_target)
{
	return _target->GetUpperTranslation ();
}


DllExport int
ConstraintPrismatic2D_GetEnableMotor (Urho3D::ConstraintPrismatic2D *_target)
{
	return _target->GetEnableMotor ();
}


DllExport float
ConstraintPrismatic2D_GetMaxMotorForce (Urho3D::ConstraintPrismatic2D *_target)
{
	return _target->GetMaxMotorForce ();
}


DllExport float
ConstraintPrismatic2D_GetMotorSpeed (Urho3D::ConstraintPrismatic2D *_target)
{
	return _target->GetMotorSpeed ();
}


DllExport int
ConstraintPulley2D_GetType (Urho3D::ConstraintPulley2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintPulley2D_GetTypeName (Urho3D::ConstraintPulley2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintPulley2D_GetTypeStatic ()
{
	return (ConstraintPulley2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintPulley2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintPulley2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintPulley2D_ConstraintPulley2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintPulley2D>(new ConstraintPulley2D(context));
}


DllExport void
ConstraintPulley2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintPulley2D::RegisterObject (context);
}


DllExport void
ConstraintPulley2D_SetOwnerBodyGroundAnchor (Urho3D::ConstraintPulley2D *_target, const class Urho3D::Vector2 & groundAnchor)
{
	_target->SetOwnerBodyGroundAnchor (groundAnchor);
}


DllExport void
ConstraintPulley2D_SetOtherBodyGroundAnchor (Urho3D::ConstraintPulley2D *_target, const class Urho3D::Vector2 & groundAnchor)
{
	_target->SetOtherBodyGroundAnchor (groundAnchor);
}


DllExport void
ConstraintPulley2D_SetOwnerBodyAnchor (Urho3D::ConstraintPulley2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetOwnerBodyAnchor (anchor);
}


DllExport void
ConstraintPulley2D_SetOtherBodyAnchor (Urho3D::ConstraintPulley2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetOtherBodyAnchor (anchor);
}


DllExport void
ConstraintPulley2D_SetRatio (Urho3D::ConstraintPulley2D *_target, float ratio)
{
	_target->SetRatio (ratio);
}


DllExport Interop::Vector2 
ConstraintPulley2D_GetOwnerBodyGroundAnchor (Urho3D::ConstraintPulley2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetOwnerBodyGroundAnchor ()));
}


DllExport Interop::Vector2 
ConstraintPulley2D_GetOtherBodyGroundAnchor (Urho3D::ConstraintPulley2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetOtherBodyGroundAnchor ()));
}


DllExport Interop::Vector2 
ConstraintPulley2D_GetOwnerBodyAnchor (Urho3D::ConstraintPulley2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetOwnerBodyAnchor ()));
}


DllExport Interop::Vector2 
ConstraintPulley2D_GetOtherBodyAnchor (Urho3D::ConstraintPulley2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetOtherBodyAnchor ()));
}


DllExport float
ConstraintPulley2D_GetRatio (Urho3D::ConstraintPulley2D *_target)
{
	return _target->GetRatio ();
}


DllExport int
ConstraintRevolute2D_GetType (Urho3D::ConstraintRevolute2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintRevolute2D_GetTypeName (Urho3D::ConstraintRevolute2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintRevolute2D_GetTypeStatic ()
{
	return (ConstraintRevolute2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintRevolute2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintRevolute2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintRevolute2D_ConstraintRevolute2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintRevolute2D>(new ConstraintRevolute2D(context));
}


DllExport void
ConstraintRevolute2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintRevolute2D::RegisterObject (context);
}


DllExport void
ConstraintRevolute2D_SetAnchor (Urho3D::ConstraintRevolute2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetAnchor (anchor);
}


DllExport void
ConstraintRevolute2D_SetEnableLimit (Urho3D::ConstraintRevolute2D *_target, bool enableLimit)
{
	_target->SetEnableLimit (enableLimit);
}


DllExport void
ConstraintRevolute2D_SetLowerAngle (Urho3D::ConstraintRevolute2D *_target, float lowerAngle)
{
	_target->SetLowerAngle (lowerAngle);
}


DllExport void
ConstraintRevolute2D_SetUpperAngle (Urho3D::ConstraintRevolute2D *_target, float upperAngle)
{
	_target->SetUpperAngle (upperAngle);
}


DllExport void
ConstraintRevolute2D_SetEnableMotor (Urho3D::ConstraintRevolute2D *_target, bool enableMotor)
{
	_target->SetEnableMotor (enableMotor);
}


DllExport void
ConstraintRevolute2D_SetMotorSpeed (Urho3D::ConstraintRevolute2D *_target, float motorSpeed)
{
	_target->SetMotorSpeed (motorSpeed);
}


DllExport void
ConstraintRevolute2D_SetMaxMotorTorque (Urho3D::ConstraintRevolute2D *_target, float maxMotorTorque)
{
	_target->SetMaxMotorTorque (maxMotorTorque);
}


DllExport Interop::Vector2 
ConstraintRevolute2D_GetAnchor (Urho3D::ConstraintRevolute2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetAnchor ()));
}


DllExport int
ConstraintRevolute2D_GetEnableLimit (Urho3D::ConstraintRevolute2D *_target)
{
	return _target->GetEnableLimit ();
}


DllExport float
ConstraintRevolute2D_GetLowerAngle (Urho3D::ConstraintRevolute2D *_target)
{
	return _target->GetLowerAngle ();
}


DllExport float
ConstraintRevolute2D_GetUpperAngle (Urho3D::ConstraintRevolute2D *_target)
{
	return _target->GetUpperAngle ();
}


DllExport int
ConstraintRevolute2D_GetEnableMotor (Urho3D::ConstraintRevolute2D *_target)
{
	return _target->GetEnableMotor ();
}


DllExport float
ConstraintRevolute2D_GetMotorSpeed (Urho3D::ConstraintRevolute2D *_target)
{
	return _target->GetMotorSpeed ();
}


DllExport float
ConstraintRevolute2D_GetMaxMotorTorque (Urho3D::ConstraintRevolute2D *_target)
{
	return _target->GetMaxMotorTorque ();
}


DllExport int
ConstraintRope2D_GetType (Urho3D::ConstraintRope2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintRope2D_GetTypeName (Urho3D::ConstraintRope2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintRope2D_GetTypeStatic ()
{
	return (ConstraintRope2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintRope2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintRope2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintRope2D_ConstraintRope2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintRope2D>(new ConstraintRope2D(context));
}


DllExport void
ConstraintRope2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintRope2D::RegisterObject (context);
}


DllExport void
ConstraintRope2D_SetOwnerBodyAnchor (Urho3D::ConstraintRope2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetOwnerBodyAnchor (anchor);
}


DllExport void
ConstraintRope2D_SetOtherBodyAnchor (Urho3D::ConstraintRope2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetOtherBodyAnchor (anchor);
}


DllExport void
ConstraintRope2D_SetMaxLength (Urho3D::ConstraintRope2D *_target, float maxLength)
{
	_target->SetMaxLength (maxLength);
}


DllExport Interop::Vector2 
ConstraintRope2D_GetOwnerBodyAnchor (Urho3D::ConstraintRope2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetOwnerBodyAnchor ()));
}


DllExport Interop::Vector2 
ConstraintRope2D_GetOtherBodyAnchor (Urho3D::ConstraintRope2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetOtherBodyAnchor ()));
}


DllExport float
ConstraintRope2D_GetMaxLength (Urho3D::ConstraintRope2D *_target)
{
	return _target->GetMaxLength ();
}


DllExport int
ConstraintWeld2D_GetType (Urho3D::ConstraintWeld2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintWeld2D_GetTypeName (Urho3D::ConstraintWeld2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintWeld2D_GetTypeStatic ()
{
	return (ConstraintWeld2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintWeld2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintWeld2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintWeld2D_ConstraintWeld2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintWeld2D>(new ConstraintWeld2D(context));
}


DllExport void
ConstraintWeld2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintWeld2D::RegisterObject (context);
}


DllExport void
ConstraintWeld2D_SetAnchor (Urho3D::ConstraintWeld2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetAnchor (anchor);
}


DllExport void
ConstraintWeld2D_SetFrequencyHz (Urho3D::ConstraintWeld2D *_target, float frequencyHz)
{
	_target->SetFrequencyHz (frequencyHz);
}


DllExport void
ConstraintWeld2D_SetDampingRatio (Urho3D::ConstraintWeld2D *_target, float dampingRatio)
{
	_target->SetDampingRatio (dampingRatio);
}


DllExport Interop::Vector2 
ConstraintWeld2D_GetAnchor (Urho3D::ConstraintWeld2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetAnchor ()));
}


DllExport float
ConstraintWeld2D_GetFrequencyHz (Urho3D::ConstraintWeld2D *_target)
{
	return _target->GetFrequencyHz ();
}


DllExport float
ConstraintWeld2D_GetDampingRatio (Urho3D::ConstraintWeld2D *_target)
{
	return _target->GetDampingRatio ();
}


DllExport int
ConstraintWheel2D_GetType (Urho3D::ConstraintWheel2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ConstraintWheel2D_GetTypeName (Urho3D::ConstraintWheel2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ConstraintWheel2D_GetTypeStatic ()
{
	return (ConstraintWheel2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ConstraintWheel2D_GetTypeNameStatic ()
{
	return stringdup((ConstraintWheel2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ConstraintWheel2D_ConstraintWheel2D (Urho3D::Context * context)
{
	return WeakPtr<ConstraintWheel2D>(new ConstraintWheel2D(context));
}


DllExport void
ConstraintWheel2D_RegisterObject (Urho3D::Context * context)
{
	ConstraintWheel2D::RegisterObject (context);
}


DllExport void
ConstraintWheel2D_SetAnchor (Urho3D::ConstraintWheel2D *_target, const class Urho3D::Vector2 & anchor)
{
	_target->SetAnchor (anchor);
}


DllExport void
ConstraintWheel2D_SetAxis (Urho3D::ConstraintWheel2D *_target, const class Urho3D::Vector2 & axis)
{
	_target->SetAxis (axis);
}


DllExport void
ConstraintWheel2D_SetEnableMotor (Urho3D::ConstraintWheel2D *_target, bool enableMotor)
{
	_target->SetEnableMotor (enableMotor);
}


DllExport void
ConstraintWheel2D_SetMaxMotorTorque (Urho3D::ConstraintWheel2D *_target, float maxMotorTorque)
{
	_target->SetMaxMotorTorque (maxMotorTorque);
}


DllExport void
ConstraintWheel2D_SetMotorSpeed (Urho3D::ConstraintWheel2D *_target, float motorSpeed)
{
	_target->SetMotorSpeed (motorSpeed);
}


DllExport void
ConstraintWheel2D_SetFrequencyHz (Urho3D::ConstraintWheel2D *_target, float frequencyHz)
{
	_target->SetFrequencyHz (frequencyHz);
}


DllExport void
ConstraintWheel2D_SetDampingRatio (Urho3D::ConstraintWheel2D *_target, float dampingRatio)
{
	_target->SetDampingRatio (dampingRatio);
}


DllExport Interop::Vector2 
ConstraintWheel2D_GetAnchor (Urho3D::ConstraintWheel2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetAnchor ()));
}


DllExport Interop::Vector2 
ConstraintWheel2D_GetAxis (Urho3D::ConstraintWheel2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetAxis ()));
}


DllExport int
ConstraintWheel2D_GetEnableMotor (Urho3D::ConstraintWheel2D *_target)
{
	return _target->GetEnableMotor ();
}


DllExport float
ConstraintWheel2D_GetMaxMotorTorque (Urho3D::ConstraintWheel2D *_target)
{
	return _target->GetMaxMotorTorque ();
}


DllExport float
ConstraintWheel2D_GetMotorSpeed (Urho3D::ConstraintWheel2D *_target)
{
	return _target->GetMotorSpeed ();
}


DllExport float
ConstraintWheel2D_GetFrequencyHz (Urho3D::ConstraintWheel2D *_target)
{
	return _target->GetFrequencyHz ();
}


DllExport float
ConstraintWheel2D_GetDampingRatio (Urho3D::ConstraintWheel2D *_target)
{
	return _target->GetDampingRatio ();
}


DllExport int
ParticleEffect2D_GetType (Urho3D::ParticleEffect2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ParticleEffect2D_GetTypeName (Urho3D::ParticleEffect2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ParticleEffect2D_GetTypeStatic ()
{
	return (ParticleEffect2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ParticleEffect2D_GetTypeNameStatic ()
{
	return stringdup((ParticleEffect2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ParticleEffect2D_ParticleEffect2D (Urho3D::Context * context)
{
	return WeakPtr<ParticleEffect2D>(new ParticleEffect2D(context));
}


DllExport void
ParticleEffect2D_RegisterObject (Urho3D::Context * context)
{
	ParticleEffect2D::RegisterObject (context);
}


DllExport int
ParticleEffect2D_BeginLoad_File (Urho3D::ParticleEffect2D *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
ParticleEffect2D_BeginLoad_MemoryBuffer (Urho3D::ParticleEffect2D *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
ParticleEffect2D_EndLoad (Urho3D::ParticleEffect2D *_target)
{
	return _target->EndLoad ();
}


DllExport int
ParticleEffect2D_Save_File (Urho3D::ParticleEffect2D *_target, File * dest)
{
	return _target->Save (*dest);
}


DllExport int
ParticleEffect2D_Save_MemoryBuffer (Urho3D::ParticleEffect2D *_target, MemoryBuffer * dest)
{
	return _target->Save (*dest);
}


DllExport void
ParticleEffect2D_SetSprite (Urho3D::ParticleEffect2D *_target, Urho3D::Sprite2D * sprite)
{
	_target->SetSprite (sprite);
}


DllExport void
ParticleEffect2D_SetSourcePositionVariance (Urho3D::ParticleEffect2D *_target, const class Urho3D::Vector2 & sourcePositionVariance)
{
	_target->SetSourcePositionVariance (sourcePositionVariance);
}


DllExport void
ParticleEffect2D_SetSpeed (Urho3D::ParticleEffect2D *_target, float speed)
{
	_target->SetSpeed (speed);
}


DllExport void
ParticleEffect2D_SetSpeedVariance (Urho3D::ParticleEffect2D *_target, float speedVariance)
{
	_target->SetSpeedVariance (speedVariance);
}


DllExport void
ParticleEffect2D_SetParticleLifeSpan (Urho3D::ParticleEffect2D *_target, float particleLifeSpan)
{
	_target->SetParticleLifeSpan (particleLifeSpan);
}


DllExport void
ParticleEffect2D_SetParticleLifespanVariance (Urho3D::ParticleEffect2D *_target, float particleLifespanVariance)
{
	_target->SetParticleLifespanVariance (particleLifespanVariance);
}


DllExport void
ParticleEffect2D_SetAngle (Urho3D::ParticleEffect2D *_target, float angle)
{
	_target->SetAngle (angle);
}


DllExport void
ParticleEffect2D_SetAngleVariance (Urho3D::ParticleEffect2D *_target, float angleVariance)
{
	_target->SetAngleVariance (angleVariance);
}


DllExport void
ParticleEffect2D_SetGravity (Urho3D::ParticleEffect2D *_target, const class Urho3D::Vector2 & gravity)
{
	_target->SetGravity (gravity);
}


DllExport void
ParticleEffect2D_SetRadialAcceleration (Urho3D::ParticleEffect2D *_target, float radialAcceleration)
{
	_target->SetRadialAcceleration (radialAcceleration);
}


DllExport void
ParticleEffect2D_SetTangentialAcceleration (Urho3D::ParticleEffect2D *_target, float tangentialAcceleration)
{
	_target->SetTangentialAcceleration (tangentialAcceleration);
}


DllExport void
ParticleEffect2D_SetRadialAccelVariance (Urho3D::ParticleEffect2D *_target, float radialAccelVariance)
{
	_target->SetRadialAccelVariance (radialAccelVariance);
}


DllExport void
ParticleEffect2D_SetTangentialAccelVariance (Urho3D::ParticleEffect2D *_target, float tangentialAccelVariance)
{
	_target->SetTangentialAccelVariance (tangentialAccelVariance);
}


DllExport void
ParticleEffect2D_SetStartColor (Urho3D::ParticleEffect2D *_target, const class Urho3D::Color & startColor)
{
	_target->SetStartColor (startColor);
}


DllExport void
ParticleEffect2D_SetStartColorVariance (Urho3D::ParticleEffect2D *_target, const class Urho3D::Color & startColorVariance)
{
	_target->SetStartColorVariance (startColorVariance);
}


DllExport void
ParticleEffect2D_SetFinishColor (Urho3D::ParticleEffect2D *_target, const class Urho3D::Color & finishColor)
{
	_target->SetFinishColor (finishColor);
}


DllExport void
ParticleEffect2D_SetFinishColorVariance (Urho3D::ParticleEffect2D *_target, const class Urho3D::Color & finishColorVariance)
{
	_target->SetFinishColorVariance (finishColorVariance);
}


DllExport void
ParticleEffect2D_SetMaxParticles (Urho3D::ParticleEffect2D *_target, int maxParticles)
{
	_target->SetMaxParticles (maxParticles);
}


DllExport void
ParticleEffect2D_SetStartParticleSize (Urho3D::ParticleEffect2D *_target, float startParticleSize)
{
	_target->SetStartParticleSize (startParticleSize);
}


DllExport void
ParticleEffect2D_SetStartParticleSizeVariance (Urho3D::ParticleEffect2D *_target, float startParticleSizeVariance)
{
	_target->SetStartParticleSizeVariance (startParticleSizeVariance);
}


DllExport void
ParticleEffect2D_SetFinishParticleSize (Urho3D::ParticleEffect2D *_target, float finishParticleSize)
{
	_target->SetFinishParticleSize (finishParticleSize);
}


DllExport void
ParticleEffect2D_SetFinishParticleSizeVariance (Urho3D::ParticleEffect2D *_target, float finishParticleSizeVariance)
{
	_target->SetFinishParticleSizeVariance (finishParticleSizeVariance);
}


DllExport void
ParticleEffect2D_SetDuration (Urho3D::ParticleEffect2D *_target, float duration)
{
	_target->SetDuration (duration);
}


DllExport void
ParticleEffect2D_SetEmitterType (Urho3D::ParticleEffect2D *_target, enum Urho3D::EmitterType2D emitterType)
{
	_target->SetEmitterType (emitterType);
}


DllExport void
ParticleEffect2D_SetMaxRadius (Urho3D::ParticleEffect2D *_target, float maxRadius)
{
	_target->SetMaxRadius (maxRadius);
}


DllExport void
ParticleEffect2D_SetMaxRadiusVariance (Urho3D::ParticleEffect2D *_target, float maxRadiusVariance)
{
	_target->SetMaxRadiusVariance (maxRadiusVariance);
}


DllExport void
ParticleEffect2D_SetMinRadius (Urho3D::ParticleEffect2D *_target, float minRadius)
{
	_target->SetMinRadius (minRadius);
}


DllExport void
ParticleEffect2D_SetMinRadiusVariance (Urho3D::ParticleEffect2D *_target, float minRadiusVariance)
{
	_target->SetMinRadiusVariance (minRadiusVariance);
}


DllExport void
ParticleEffect2D_SetRotatePerSecond (Urho3D::ParticleEffect2D *_target, float rotatePerSecond)
{
	_target->SetRotatePerSecond (rotatePerSecond);
}


DllExport void
ParticleEffect2D_SetRotatePerSecondVariance (Urho3D::ParticleEffect2D *_target, float rotatePerSecondVariance)
{
	_target->SetRotatePerSecondVariance (rotatePerSecondVariance);
}


DllExport void
ParticleEffect2D_SetBlendMode (Urho3D::ParticleEffect2D *_target, enum Urho3D::BlendMode blendMode)
{
	_target->SetBlendMode (blendMode);
}


DllExport void
ParticleEffect2D_SetRotationStart (Urho3D::ParticleEffect2D *_target, float rotationStart)
{
	_target->SetRotationStart (rotationStart);
}


DllExport void
ParticleEffect2D_SetRotationStartVariance (Urho3D::ParticleEffect2D *_target, float rotationStartVariance)
{
	_target->SetRotationStartVariance (rotationStartVariance);
}


DllExport void
ParticleEffect2D_SetRotationEnd (Urho3D::ParticleEffect2D *_target, float rotationEnd)
{
	_target->SetRotationEnd (rotationEnd);
}


DllExport void
ParticleEffect2D_SetRotationEndVariance (Urho3D::ParticleEffect2D *_target, float rotationEndVariance)
{
	_target->SetRotationEndVariance (rotationEndVariance);
}


DllExport Urho3D::ParticleEffect2D *
ParticleEffect2D_Clone (Urho3D::ParticleEffect2D *_target, const char * cloneName)
{
	auto copy = _target->Clone (Urho3D::String(cloneName));
	auto plain = copy.Get();
	copy.Detach();
	delete copy;
	return plain;
}


DllExport Urho3D::Sprite2D *
ParticleEffect2D_GetSprite (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetSprite ();
}


DllExport Interop::Vector2 
ParticleEffect2D_GetSourcePositionVariance (Urho3D::ParticleEffect2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetSourcePositionVariance ()));
}


DllExport float
ParticleEffect2D_GetSpeed (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetSpeed ();
}


DllExport float
ParticleEffect2D_GetSpeedVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetSpeedVariance ();
}


DllExport float
ParticleEffect2D_GetParticleLifeSpan (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetParticleLifeSpan ();
}


DllExport float
ParticleEffect2D_GetParticleLifespanVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetParticleLifespanVariance ();
}


DllExport float
ParticleEffect2D_GetAngle (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetAngle ();
}


DllExport float
ParticleEffect2D_GetAngleVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetAngleVariance ();
}


DllExport Interop::Vector2 
ParticleEffect2D_GetGravity (Urho3D::ParticleEffect2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetGravity ()));
}


DllExport float
ParticleEffect2D_GetRadialAcceleration (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetRadialAcceleration ();
}


DllExport float
ParticleEffect2D_GetTangentialAcceleration (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetTangentialAcceleration ();
}


DllExport float
ParticleEffect2D_GetRadialAccelVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetRadialAccelVariance ();
}


DllExport float
ParticleEffect2D_GetTangentialAccelVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetTangentialAccelVariance ();
}


DllExport Interop::Color 
ParticleEffect2D_GetStartColor (Urho3D::ParticleEffect2D *_target)
{
	return *((Interop::Color  *) &(_target->GetStartColor ()));
}


DllExport Interop::Color 
ParticleEffect2D_GetStartColorVariance (Urho3D::ParticleEffect2D *_target)
{
	return *((Interop::Color  *) &(_target->GetStartColorVariance ()));
}


DllExport Interop::Color 
ParticleEffect2D_GetFinishColor (Urho3D::ParticleEffect2D *_target)
{
	return *((Interop::Color  *) &(_target->GetFinishColor ()));
}


DllExport Interop::Color 
ParticleEffect2D_GetFinishColorVariance (Urho3D::ParticleEffect2D *_target)
{
	return *((Interop::Color  *) &(_target->GetFinishColorVariance ()));
}


DllExport int
ParticleEffect2D_GetMaxParticles (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetMaxParticles ();
}


DllExport float
ParticleEffect2D_GetStartParticleSize (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetStartParticleSize ();
}


DllExport float
ParticleEffect2D_GetStartParticleSizeVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetStartParticleSizeVariance ();
}


DllExport float
ParticleEffect2D_GetFinishParticleSize (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetFinishParticleSize ();
}


DllExport float
ParticleEffect2D_GetFinishParticleSizeVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetFinishParticleSizeVariance ();
}


DllExport float
ParticleEffect2D_GetDuration (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetDuration ();
}


DllExport enum Urho3D::EmitterType2D
ParticleEffect2D_GetEmitterType (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetEmitterType ();
}


DllExport float
ParticleEffect2D_GetMaxRadius (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetMaxRadius ();
}


DllExport float
ParticleEffect2D_GetMaxRadiusVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetMaxRadiusVariance ();
}


DllExport float
ParticleEffect2D_GetMinRadius (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetMinRadius ();
}


DllExport float
ParticleEffect2D_GetMinRadiusVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetMinRadiusVariance ();
}


DllExport float
ParticleEffect2D_GetRotatePerSecond (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetRotatePerSecond ();
}


DllExport float
ParticleEffect2D_GetRotatePerSecondVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetRotatePerSecondVariance ();
}


DllExport enum Urho3D::BlendMode
ParticleEffect2D_GetBlendMode (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetBlendMode ();
}


DllExport float
ParticleEffect2D_GetRotationStart (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetRotationStart ();
}


DllExport float
ParticleEffect2D_GetRotationStartVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetRotationStartVariance ();
}


DllExport float
ParticleEffect2D_GetRotationEnd (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetRotationEnd ();
}


DllExport float
ParticleEffect2D_GetRotationEndVariance (Urho3D::ParticleEffect2D *_target)
{
	return _target->GetRotationEndVariance ();
}


DllExport int
ParticleEmitter2D_GetType (Urho3D::ParticleEmitter2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
ParticleEmitter2D_GetTypeName (Urho3D::ParticleEmitter2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
ParticleEmitter2D_GetTypeStatic ()
{
	return (ParticleEmitter2D::GetTypeStatic ()).Value ();
}


DllExport const char *
ParticleEmitter2D_GetTypeNameStatic ()
{
	return stringdup((ParticleEmitter2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
ParticleEmitter2D_ParticleEmitter2D (Urho3D::Context * context)
{
	return WeakPtr<ParticleEmitter2D>(new ParticleEmitter2D(context));
}


DllExport void
ParticleEmitter2D_RegisterObject (Urho3D::Context * context)
{
	ParticleEmitter2D::RegisterObject (context);
}


DllExport void
ParticleEmitter2D_OnSetEnabled (Urho3D::ParticleEmitter2D *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
ParticleEmitter2D_SetEffect (Urho3D::ParticleEmitter2D *_target, Urho3D::ParticleEffect2D * effect)
{
	_target->SetEffect (effect);
}


DllExport void
ParticleEmitter2D_SetSprite (Urho3D::ParticleEmitter2D *_target, Urho3D::Sprite2D * sprite)
{
	_target->SetSprite (sprite);
}


DllExport void
ParticleEmitter2D_SetBlendMode (Urho3D::ParticleEmitter2D *_target, enum Urho3D::BlendMode blendMode)
{
	_target->SetBlendMode (blendMode);
}


DllExport void
ParticleEmitter2D_SetMaxParticles (Urho3D::ParticleEmitter2D *_target, unsigned int maxParticles)
{
	_target->SetMaxParticles (maxParticles);
}


DllExport void
ParticleEmitter2D_SetEmitting (Urho3D::ParticleEmitter2D *_target, bool enable)
{
	_target->SetEmitting (enable);
}


DllExport Urho3D::ParticleEffect2D *
ParticleEmitter2D_GetEffect (Urho3D::ParticleEmitter2D *_target)
{
	return _target->GetEffect ();
}


DllExport Urho3D::Sprite2D *
ParticleEmitter2D_GetSprite (Urho3D::ParticleEmitter2D *_target)
{
	return _target->GetSprite ();
}


DllExport enum Urho3D::BlendMode
ParticleEmitter2D_GetBlendMode (Urho3D::ParticleEmitter2D *_target)
{
	return _target->GetBlendMode ();
}


DllExport unsigned int
ParticleEmitter2D_GetMaxParticles (Urho3D::ParticleEmitter2D *_target)
{
	return _target->GetMaxParticles ();
}


DllExport Urho3D::ResourceRef
ParticleEmitter2D_GetParticleEffectAttr (Urho3D::ParticleEmitter2D *_target)
{
	return _target->GetParticleEffectAttr ();
}


DllExport Urho3D::ResourceRef
ParticleEmitter2D_GetSpriteAttr (Urho3D::ParticleEmitter2D *_target)
{
	return _target->GetSpriteAttr ();
}


DllExport int
ParticleEmitter2D_IsEmitting (Urho3D::ParticleEmitter2D *_target)
{
	return _target->IsEmitting ();
}


DllExport int
PhysicsWorld2D_GetType (Urho3D::PhysicsWorld2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
PhysicsWorld2D_GetTypeName (Urho3D::PhysicsWorld2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
PhysicsWorld2D_GetTypeStatic ()
{
	return (PhysicsWorld2D::GetTypeStatic ()).Value ();
}


DllExport const char *
PhysicsWorld2D_GetTypeNameStatic ()
{
	return stringdup((PhysicsWorld2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
PhysicsWorld2D_PhysicsWorld2D (Urho3D::Context * context)
{
	return WeakPtr<PhysicsWorld2D>(new PhysicsWorld2D(context));
}


DllExport void
PhysicsWorld2D_RegisterObject (Urho3D::Context * context)
{
	PhysicsWorld2D::RegisterObject (context);
}


DllExport void
PhysicsWorld2D_DrawDebugGeometry (Urho3D::PhysicsWorld2D *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
PhysicsWorld2D_Update (Urho3D::PhysicsWorld2D *_target, float timeStep)
{
	_target->Update (timeStep);
}


DllExport void
PhysicsWorld2D_DrawDebugGeometry0 (Urho3D::PhysicsWorld2D *_target)
{
	_target->DrawDebugGeometry ();
}


DllExport void
PhysicsWorld2D_SetUpdateEnabled (Urho3D::PhysicsWorld2D *_target, bool enable)
{
	_target->SetUpdateEnabled (enable);
}


DllExport void
PhysicsWorld2D_SetDrawShape (Urho3D::PhysicsWorld2D *_target, bool drawShape)
{
	_target->SetDrawShape (drawShape);
}


DllExport void
PhysicsWorld2D_SetDrawJoint (Urho3D::PhysicsWorld2D *_target, bool drawJoint)
{
	_target->SetDrawJoint (drawJoint);
}


DllExport void
PhysicsWorld2D_SetDrawAabb (Urho3D::PhysicsWorld2D *_target, bool drawAabb)
{
	_target->SetDrawAabb (drawAabb);
}


DllExport void
PhysicsWorld2D_SetDrawPair (Urho3D::PhysicsWorld2D *_target, bool drawPair)
{
	_target->SetDrawPair (drawPair);
}


DllExport void
PhysicsWorld2D_SetDrawCenterOfMass (Urho3D::PhysicsWorld2D *_target, bool drawCenterOfMass)
{
	_target->SetDrawCenterOfMass (drawCenterOfMass);
}


DllExport void
PhysicsWorld2D_SetAllowSleeping (Urho3D::PhysicsWorld2D *_target, bool enable)
{
	_target->SetAllowSleeping (enable);
}


DllExport void
PhysicsWorld2D_SetWarmStarting (Urho3D::PhysicsWorld2D *_target, bool enable)
{
	_target->SetWarmStarting (enable);
}


DllExport void
PhysicsWorld2D_SetContinuousPhysics (Urho3D::PhysicsWorld2D *_target, bool enable)
{
	_target->SetContinuousPhysics (enable);
}


DllExport void
PhysicsWorld2D_SetSubStepping (Urho3D::PhysicsWorld2D *_target, bool enable)
{
	_target->SetSubStepping (enable);
}


DllExport void
PhysicsWorld2D_SetGravity (Urho3D::PhysicsWorld2D *_target, const class Urho3D::Vector2 & gravity)
{
	_target->SetGravity (gravity);
}


DllExport void
PhysicsWorld2D_SetAutoClearForces (Urho3D::PhysicsWorld2D *_target, bool enable)
{
	_target->SetAutoClearForces (enable);
}


DllExport void
PhysicsWorld2D_SetVelocityIterations (Urho3D::PhysicsWorld2D *_target, int velocityIterations)
{
	_target->SetVelocityIterations (velocityIterations);
}


DllExport void
PhysicsWorld2D_SetPositionIterations (Urho3D::PhysicsWorld2D *_target, int positionIterations)
{
	_target->SetPositionIterations (positionIterations);
}


DllExport void
PhysicsWorld2D_AddRigidBody (Urho3D::PhysicsWorld2D *_target, Urho3D::RigidBody2D * rigidBody)
{
	_target->AddRigidBody (rigidBody);
}


DllExport void
PhysicsWorld2D_RemoveRigidBody (Urho3D::PhysicsWorld2D *_target, Urho3D::RigidBody2D * rigidBody)
{
	_target->RemoveRigidBody (rigidBody);
}


DllExport Urho3D::RigidBody2D *
PhysicsWorld2D_GetRigidBody (Urho3D::PhysicsWorld2D *_target, const class Urho3D::Vector2 & point, unsigned int collisionMask)
{
	return _target->GetRigidBody (point, collisionMask);
}


DllExport Urho3D::RigidBody2D *
PhysicsWorld2D_GetRigidBody1 (Urho3D::PhysicsWorld2D *_target, int screenX, int screenY, unsigned int collisionMask)
{
	return _target->GetRigidBody (screenX, screenY, collisionMask);
}


DllExport int
PhysicsWorld2D_IsUpdateEnabled (Urho3D::PhysicsWorld2D *_target)
{
	return _target->IsUpdateEnabled ();
}


DllExport int
PhysicsWorld2D_GetDrawShape (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetDrawShape ();
}


DllExport int
PhysicsWorld2D_GetDrawJoint (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetDrawJoint ();
}


DllExport int
PhysicsWorld2D_GetDrawAabb (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetDrawAabb ();
}


DllExport int
PhysicsWorld2D_GetDrawPair (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetDrawPair ();
}


DllExport int
PhysicsWorld2D_GetDrawCenterOfMass (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetDrawCenterOfMass ();
}


DllExport int
PhysicsWorld2D_GetAllowSleeping (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetAllowSleeping ();
}


DllExport int
PhysicsWorld2D_GetWarmStarting (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetWarmStarting ();
}


DllExport int
PhysicsWorld2D_GetContinuousPhysics (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetContinuousPhysics ();
}


DllExport int
PhysicsWorld2D_GetSubStepping (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetSubStepping ();
}


DllExport int
PhysicsWorld2D_GetAutoClearForces (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetAutoClearForces ();
}


DllExport Interop::Vector2 
PhysicsWorld2D_GetGravity (Urho3D::PhysicsWorld2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetGravity ()));
}


DllExport int
PhysicsWorld2D_GetVelocityIterations (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetVelocityIterations ();
}


DllExport int
PhysicsWorld2D_GetPositionIterations (Urho3D::PhysicsWorld2D *_target)
{
	return _target->GetPositionIterations ();
}


DllExport void
PhysicsWorld2D_SetApplyingTransforms (Urho3D::PhysicsWorld2D *_target, bool enable)
{
	_target->SetApplyingTransforms (enable);
}


DllExport int
PhysicsWorld2D_IsApplyingTransforms (Urho3D::PhysicsWorld2D *_target)
{
	return _target->IsApplyingTransforms ();
}


DllExport int
Renderer2D_GetType (Urho3D::Renderer2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
Renderer2D_GetTypeName (Urho3D::Renderer2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
Renderer2D_GetTypeStatic ()
{
	return (Renderer2D::GetTypeStatic ()).Value ();
}


DllExport const char *
Renderer2D_GetTypeNameStatic ()
{
	return stringdup((Renderer2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
Renderer2D_Renderer2D (Urho3D::Context * context)
{
	return WeakPtr<Renderer2D>(new Renderer2D(context));
}


DllExport void
Renderer2D_RegisterObject (Urho3D::Context * context)
{
	Renderer2D::RegisterObject (context);
}


DllExport enum Urho3D::UpdateGeometryType
Renderer2D_GetUpdateGeometryType (Urho3D::Renderer2D *_target)
{
	return _target->GetUpdateGeometryType ();
}


DllExport void
Renderer2D_AddDrawable (Urho3D::Renderer2D *_target, Urho3D::Drawable2D * drawable)
{
	_target->AddDrawable (drawable);
}


DllExport void
Renderer2D_RemoveDrawable (Urho3D::Renderer2D *_target, Urho3D::Drawable2D * drawable)
{
	_target->RemoveDrawable (drawable);
}


DllExport Urho3D::Material *
Renderer2D_GetMaterial (Urho3D::Renderer2D *_target, Urho3D::Texture2D * texture, enum Urho3D::BlendMode blendMode)
{
	return _target->GetMaterial (texture, blendMode);
}


DllExport int
Renderer2D_CheckVisibility (Urho3D::Renderer2D *_target, Urho3D::Drawable2D * drawable)
{
	return _target->CheckVisibility (drawable);
}


DllExport int
RigidBody2D_GetType (Urho3D::RigidBody2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
RigidBody2D_GetTypeName (Urho3D::RigidBody2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
RigidBody2D_GetTypeStatic ()
{
	return (RigidBody2D::GetTypeStatic ()).Value ();
}


DllExport const char *
RigidBody2D_GetTypeNameStatic ()
{
	return stringdup((RigidBody2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
RigidBody2D_RigidBody2D (Urho3D::Context * context)
{
	return WeakPtr<RigidBody2D>(new RigidBody2D(context));
}


DllExport void
RigidBody2D_RegisterObject (Urho3D::Context * context)
{
	RigidBody2D::RegisterObject (context);
}


DllExport void
RigidBody2D_OnSetEnabled (Urho3D::RigidBody2D *_target)
{
	_target->OnSetEnabled ();
}


DllExport void
RigidBody2D_SetBodyType (Urho3D::RigidBody2D *_target, enum Urho3D::BodyType2D type)
{
	_target->SetBodyType (type);
}


DllExport void
RigidBody2D_SetMass (Urho3D::RigidBody2D *_target, float mass)
{
	_target->SetMass (mass);
}


DllExport void
RigidBody2D_SetInertia (Urho3D::RigidBody2D *_target, float inertia)
{
	_target->SetInertia (inertia);
}


DllExport void
RigidBody2D_SetMassCenter (Urho3D::RigidBody2D *_target, const class Urho3D::Vector2 & center)
{
	_target->SetMassCenter (center);
}


DllExport void
RigidBody2D_SetUseFixtureMass (Urho3D::RigidBody2D *_target, bool useFixtureMass)
{
	_target->SetUseFixtureMass (useFixtureMass);
}


DllExport void
RigidBody2D_SetLinearDamping (Urho3D::RigidBody2D *_target, float linearDamping)
{
	_target->SetLinearDamping (linearDamping);
}


DllExport void
RigidBody2D_SetAngularDamping (Urho3D::RigidBody2D *_target, float angularDamping)
{
	_target->SetAngularDamping (angularDamping);
}


DllExport void
RigidBody2D_SetAllowSleep (Urho3D::RigidBody2D *_target, bool allowSleep)
{
	_target->SetAllowSleep (allowSleep);
}


DllExport void
RigidBody2D_SetFixedRotation (Urho3D::RigidBody2D *_target, bool fixedRotation)
{
	_target->SetFixedRotation (fixedRotation);
}


DllExport void
RigidBody2D_SetBullet (Urho3D::RigidBody2D *_target, bool bullet)
{
	_target->SetBullet (bullet);
}


DllExport void
RigidBody2D_SetGravityScale (Urho3D::RigidBody2D *_target, float gravityScale)
{
	_target->SetGravityScale (gravityScale);
}


DllExport void
RigidBody2D_SetAwake (Urho3D::RigidBody2D *_target, bool awake)
{
	_target->SetAwake (awake);
}


DllExport void
RigidBody2D_SetLinearVelocity (Urho3D::RigidBody2D *_target, const class Urho3D::Vector2 & linearVelocity)
{
	_target->SetLinearVelocity (linearVelocity);
}


DllExport void
RigidBody2D_SetAngularVelocity (Urho3D::RigidBody2D *_target, float angularVelocity)
{
	_target->SetAngularVelocity (angularVelocity);
}


DllExport void
RigidBody2D_ApplyForce (Urho3D::RigidBody2D *_target, const class Urho3D::Vector2 & force, const class Urho3D::Vector2 & point, bool wake)
{
	_target->ApplyForce (force, point, wake);
}


DllExport void
RigidBody2D_ApplyForceToCenter (Urho3D::RigidBody2D *_target, const class Urho3D::Vector2 & force, bool wake)
{
	_target->ApplyForceToCenter (force, wake);
}


DllExport void
RigidBody2D_ApplyTorque (Urho3D::RigidBody2D *_target, float torque, bool wake)
{
	_target->ApplyTorque (torque, wake);
}


DllExport void
RigidBody2D_ApplyLinearImpulse (Urho3D::RigidBody2D *_target, const class Urho3D::Vector2 & impulse, const class Urho3D::Vector2 & point, bool wake)
{
	_target->ApplyLinearImpulse (impulse, point, wake);
}


DllExport void
RigidBody2D_ApplyLinearImpulseToCenter (Urho3D::RigidBody2D *_target, const class Urho3D::Vector2 & impulse, bool wake)
{
	_target->ApplyLinearImpulseToCenter (impulse, wake);
}


DllExport void
RigidBody2D_ApplyAngularImpulse (Urho3D::RigidBody2D *_target, float impulse, bool wake)
{
	_target->ApplyAngularImpulse (impulse, wake);
}


DllExport void
RigidBody2D_CreateBody (Urho3D::RigidBody2D *_target)
{
	_target->CreateBody ();
}


DllExport void
RigidBody2D_ReleaseBody (Urho3D::RigidBody2D *_target)
{
	_target->ReleaseBody ();
}


DllExport void
RigidBody2D_ApplyWorldTransform (Urho3D::RigidBody2D *_target)
{
	_target->ApplyWorldTransform ();
}


DllExport void
RigidBody2D_ApplyWorldTransform0 (Urho3D::RigidBody2D *_target, const class Urho3D::Vector3 & newWorldPosition, const class Urho3D::Quaternion & newWorldRotation)
{
	_target->ApplyWorldTransform (newWorldPosition, newWorldRotation);
}


DllExport void
RigidBody2D_AddCollisionShape2D (Urho3D::RigidBody2D *_target, Urho3D::CollisionShape2D * collisionShape)
{
	_target->AddCollisionShape2D (collisionShape);
}


DllExport void
RigidBody2D_RemoveCollisionShape2D (Urho3D::RigidBody2D *_target, Urho3D::CollisionShape2D * collisionShape)
{
	_target->RemoveCollisionShape2D (collisionShape);
}


DllExport void
RigidBody2D_AddConstraint2D (Urho3D::RigidBody2D *_target, Urho3D::Constraint2D * constraint)
{
	_target->AddConstraint2D (constraint);
}


DllExport void
RigidBody2D_RemoveConstraint2D (Urho3D::RigidBody2D *_target, Urho3D::Constraint2D * constraint)
{
	_target->RemoveConstraint2D (constraint);
}


DllExport enum Urho3D::BodyType2D
RigidBody2D_GetBodyType (Urho3D::RigidBody2D *_target)
{
	return _target->GetBodyType ();
}


DllExport float
RigidBody2D_GetMass (Urho3D::RigidBody2D *_target)
{
	return _target->GetMass ();
}


DllExport float
RigidBody2D_GetInertia (Urho3D::RigidBody2D *_target)
{
	return _target->GetInertia ();
}


DllExport Interop::Vector2 
RigidBody2D_GetMassCenter (Urho3D::RigidBody2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetMassCenter ()));
}


DllExport int
RigidBody2D_GetUseFixtureMass (Urho3D::RigidBody2D *_target)
{
	return _target->GetUseFixtureMass ();
}


DllExport float
RigidBody2D_GetLinearDamping (Urho3D::RigidBody2D *_target)
{
	return _target->GetLinearDamping ();
}


DllExport float
RigidBody2D_GetAngularDamping (Urho3D::RigidBody2D *_target)
{
	return _target->GetAngularDamping ();
}


DllExport int
RigidBody2D_IsAllowSleep (Urho3D::RigidBody2D *_target)
{
	return _target->IsAllowSleep ();
}


DllExport int
RigidBody2D_IsFixedRotation (Urho3D::RigidBody2D *_target)
{
	return _target->IsFixedRotation ();
}


DllExport int
RigidBody2D_IsBullet (Urho3D::RigidBody2D *_target)
{
	return _target->IsBullet ();
}


DllExport float
RigidBody2D_GetGravityScale (Urho3D::RigidBody2D *_target)
{
	return _target->GetGravityScale ();
}


DllExport int
RigidBody2D_IsAwake (Urho3D::RigidBody2D *_target)
{
	return _target->IsAwake ();
}


DllExport Interop::Vector2 
RigidBody2D_GetLinearVelocity (Urho3D::RigidBody2D *_target)
{
	return *((Interop::Vector2  *) &(_target->GetLinearVelocity ()));
}


DllExport float
RigidBody2D_GetAngularVelocity (Urho3D::RigidBody2D *_target)
{
	return _target->GetAngularVelocity ();
}


DllExport int
SpriteSheet2D_GetType (Urho3D::SpriteSheet2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
SpriteSheet2D_GetTypeName (Urho3D::SpriteSheet2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
SpriteSheet2D_GetTypeStatic ()
{
	return (SpriteSheet2D::GetTypeStatic ()).Value ();
}


DllExport const char *
SpriteSheet2D_GetTypeNameStatic ()
{
	return stringdup((SpriteSheet2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
SpriteSheet2D_SpriteSheet2D (Urho3D::Context * context)
{
	return WeakPtr<SpriteSheet2D>(new SpriteSheet2D(context));
}


DllExport void
SpriteSheet2D_RegisterObject (Urho3D::Context * context)
{
	SpriteSheet2D::RegisterObject (context);
}


DllExport int
SpriteSheet2D_BeginLoad_File (Urho3D::SpriteSheet2D *_target, File * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
SpriteSheet2D_BeginLoad_MemoryBuffer (Urho3D::SpriteSheet2D *_target, MemoryBuffer * source)
{
	return _target->BeginLoad (*source);
}


DllExport int
SpriteSheet2D_EndLoad (Urho3D::SpriteSheet2D *_target)
{
	return _target->EndLoad ();
}


DllExport void
SpriteSheet2D_SetTexture (Urho3D::SpriteSheet2D *_target, Urho3D::Texture2D * texture)
{
	_target->SetTexture (texture);
}


DllExport void
SpriteSheet2D_DefineSprite (Urho3D::SpriteSheet2D *_target, const char * name, const class Urho3D::IntRect & rectangle, const class Urho3D::Vector2 & hotSpot, const class Urho3D::IntVector2 & offset)
{
	_target->DefineSprite (Urho3D::String(name), rectangle, hotSpot, offset);
}


DllExport Urho3D::Texture2D *
SpriteSheet2D_GetTexture (Urho3D::SpriteSheet2D *_target)
{
	return _target->GetTexture ();
}


DllExport Urho3D::Sprite2D *
SpriteSheet2D_GetSprite (Urho3D::SpriteSheet2D *_target, const char * name)
{
	return _target->GetSprite (Urho3D::String(name));
}


DllExport int
TileMap2D_GetType (Urho3D::TileMap2D *_target)
{
	return (_target->GetType ()).Value ();
}


DllExport const char *
TileMap2D_GetTypeName (Urho3D::TileMap2D *_target)
{
	return stringdup((_target->GetTypeName ()).CString ());
}


DllExport int
TileMap2D_GetTypeStatic ()
{
	return (TileMap2D::GetTypeStatic ()).Value ();
}


DllExport const char *
TileMap2D_GetTypeNameStatic ()
{
	return stringdup((TileMap2D::GetTypeNameStatic ()).CString ());
}


DllExport void *
TileMap2D_TileMap2D (Urho3D::Context * context)
{
	return WeakPtr<TileMap2D>(new TileMap2D(context));
}


DllExport void
TileMap2D_RegisterObject (Urho3D::Context * context)
{
	TileMap2D::RegisterObject (context);
}


DllExport void
TileMap2D_DrawDebugGeometry (Urho3D::TileMap2D *_target, Urho3D::DebugRenderer * debug, bool depthTest)
{
	_target->DrawDebugGeometry (debug, depthTest);
}


DllExport void
TileMap2D_SetTmxFile (Urho3D::TileMap2D *_target, Urho3D::TmxFile2D * tmxFile)
{
	_target->SetTmxFile (tmxFile);
}


DllExport void
TileMap2D_DrawDebugGeometry0 (Urho3D::TileMap2D *_target)
{
	_target->DrawDebugGeometry ();
}


DllExport Urho3D::TmxFile2D *
TileMap2D_GetTmxFile (Urho3D::TileMap2D *_target)
{
	return _target->GetTmxFile ();
}


DllExport Urho3D::TileMapInfo2D
TileMap2D_GetInfo (Urho3D::TileMap2D *_target)
{
	return _target->GetInfo ();
}


DllExport unsigned int
TileMap2D_GetNumLayers (Urho3D::TileMap2D *_target)
{
	return _target->GetNumLayers ();
}


DllExport Urho3D::TileMapLayer2D *
TileMap2D_GetLayer (Urho3D::TileMap2D *_target, unsigned int index)
{
	return _target->GetLayer (index);
}


DllExport Interop::Vector2 
TileMap2D_TileIndexToPosition (Urho3D::TileMap2D *_target, int x, int y)
{
	return *((Interop::Vector2  *) &(_target->TileIndexToPosition (x, y)));
}


DllExport int
TileMap2D_PositionToTileIndex (Urho3D::TileMap2D *_target, int & x, int & y, const class Urho3D::Vector2 & position)
{
	return _target->PositionToTileIndex (x, y, position);
}


DllExport Urho3D::ResourceRef
TileMap2D_GetTmxFileAttr (Urho3D::TileMap2D *_target)
{
	return _target->GetTmxFileAttr ();
}


}
