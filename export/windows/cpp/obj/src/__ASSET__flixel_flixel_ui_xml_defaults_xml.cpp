// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__flixel_flixel_ui_xml_defaults_xml
#include <__ASSET__flixel_flixel_ui_xml_defaults_xml.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7e0ca4237cae5cfa_2181_new,"__ASSET__flixel_flixel_ui_xml_defaults_xml","new",0x9f4395df,"__ASSET__flixel_flixel_ui_xml_defaults_xml.new","openfl/_legacy/Assets.hx",2181,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_92aefff3e5e0a292_1_boot,"__ASSET__flixel_flixel_ui_xml_defaults_xml","boot",0xb3f88dd3,"__ASSET__flixel_flixel_ui_xml_defaults_xml.boot","?",1,0x0000003f)

void __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__construct( ::Dynamic __o_size){
 ::Dynamic size = __o_size.Default(0);
            	HX_STACKFRAME(&_hx_pos_7e0ca4237cae5cfa_2181_new)
HXLINE(2183)		super::__construct(null());
HXLINE(2188)		{
HXLINE(2188)			 ::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(::__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::resourceName);
HXDLIN(2188)			this->b = bytes->b;
HXDLIN(2188)			this->length = bytes->length;
            		}
            	}

Dynamic __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__CreateEmpty() { return new __ASSET__flixel_flixel_ui_xml_defaults_xml_obj; }

void *__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::_hx_vtable = 0;

Dynamic __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_defaults_xml_obj > _hx_result = new __ASSET__flixel_flixel_ui_xml_defaults_xml_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2517afd1) {
		if (inClassId<=(int)0x140d0a90) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x140d0a90;
		} else {
			return inClassId==(int)0x2517afd1;
		}
	} else {
		return inClassId==(int)0x5b931193;
	}
}

::String __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::resourceName;


hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_defaults_xml_obj > __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__new( ::Dynamic __o_size) {
	hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_defaults_xml_obj > __this = new __ASSET__flixel_flixel_ui_xml_defaults_xml_obj();
	__this->__construct(__o_size);
	return __this;
}

hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_defaults_xml_obj > __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_size) {
	__ASSET__flixel_flixel_ui_xml_defaults_xml_obj *__this = (__ASSET__flixel_flixel_ui_xml_defaults_xml_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__flixel_flixel_ui_xml_defaults_xml_obj), true, "__ASSET__flixel_flixel_ui_xml_defaults_xml"));
	*(void **)__this = __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::_hx_vtable;
	__this->__construct(__o_size);
	return __this;
}

__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__ASSET__flixel_flixel_ui_xml_defaults_xml_obj()
{
}

bool __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *__ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sMemberStorageInfo = 0;
static hx::StaticInfo __ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void __ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::resourceName,"resourceName");
};

#endif

hx::Class __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__mClass;

static ::String __ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__register()
{
	hx::Object *dummy = new __ASSET__flixel_flixel_ui_xml_defaults_xml_obj;
	__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__flixel_flixel_ui_xml_defaults_xml","\x6d","\xba","\x75","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__GetStatic;
	__mClass->mSetStaticField = &__ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__SetStatic;
	__mClass->mMarkFunc = __ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(__ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__flixel_flixel_ui_xml_defaults_xml_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__flixel_flixel_ui_xml_defaults_xml_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void __ASSET__flixel_flixel_ui_xml_defaults_xml_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_92aefff3e5e0a292_1_boot)
HXDLIN(   1)		resourceName = HX_("__ASSET__:file___ASSET__flixel_flixel_ui_xml_defaults_xml",66,61,52,48);
            	}
}

