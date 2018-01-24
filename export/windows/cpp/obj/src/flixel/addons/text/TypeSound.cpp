// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_text_TypeSound
#include <flixel/addons/text/TypeSound.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f665a81fd036aa4a_2283_new,"flixel.addons.text.TypeSound","new",0xea1a5b8f,"flixel.addons.text.TypeSound.new","openfl/_legacy/Assets.hx",2283,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_632c18e0d6b5dc15_1_boot,"flixel.addons.text.TypeSound","boot",0xe50ec223,"flixel.addons.text.TypeSound.boot","?",1,0x0000003f)
namespace flixel{
namespace addons{
namespace text{

void TypeSound_obj::__construct( ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context, ::Dynamic __o_forcePlayAsMusic){
 ::Dynamic forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_f665a81fd036aa4a_2283_new)
HXLINE(2285)		super::__construct(null(),null(),null());
HXLINE(2287)		 ::openfl::_legacy::utils::ByteArray byteArray = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::addons::text::TypeSound_obj::resourceName));
HXLINE(2288)		this->loadCompressedDataFromByteArray(byteArray,byteArray->length,forcePlayAsMusic);
            	}

Dynamic TypeSound_obj::__CreateEmpty() { return new TypeSound_obj; }

void *TypeSound_obj::_hx_vtable = 0;

Dynamic TypeSound_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TypeSound_obj > _hx_result = new TypeSound_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TypeSound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x575939e3) {
		if (inClassId<=(int)0x25b00754) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25b00754;
		} else {
			return inClassId==(int)0x575939e3;
		}
	} else {
		return inClassId==(int)0x7f5b32bd;
	}
}

::String TypeSound_obj::resourceName;


hx::ObjectPtr< TypeSound_obj > TypeSound_obj::__new( ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context, ::Dynamic __o_forcePlayAsMusic) {
	hx::ObjectPtr< TypeSound_obj > __this = new TypeSound_obj();
	__this->__construct(stream,context,__o_forcePlayAsMusic);
	return __this;
}

hx::ObjectPtr< TypeSound_obj > TypeSound_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context, ::Dynamic __o_forcePlayAsMusic) {
	TypeSound_obj *__this = (TypeSound_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TypeSound_obj), true, "flixel.addons.text.TypeSound"));
	*(void **)__this = TypeSound_obj::_hx_vtable;
	__this->__construct(stream,context,__o_forcePlayAsMusic);
	return __this;
}

TypeSound_obj::TypeSound_obj()
{
}

bool TypeSound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool TypeSound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TypeSound_obj_sMemberStorageInfo = 0;
static hx::StaticInfo TypeSound_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TypeSound_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void TypeSound_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeSound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TypeSound_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TypeSound_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeSound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TypeSound_obj::resourceName,"resourceName");
};

#endif

hx::Class TypeSound_obj::__mClass;

static ::String TypeSound_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void TypeSound_obj::__register()
{
	hx::Object *dummy = new TypeSound_obj;
	TypeSound_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.text.TypeSound","\x1d","\xe8","\xab","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypeSound_obj::__GetStatic;
	__mClass->mSetStaticField = &TypeSound_obj::__SetStatic;
	__mClass->mMarkFunc = TypeSound_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TypeSound_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TypeSound_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TypeSound_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypeSound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypeSound_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TypeSound_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_632c18e0d6b5dc15_1_boot)
HXDLIN(   1)		resourceName = HX_("__ASSET__:sound_flixel_addons_text_TypeSound",86,8d,a7,7b);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace text
