// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_OSOPal
#include <OSOPal.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_085c9c767b08ffdd_11_boot,"OSOPal","boot",0xc2c231f0,"OSOPal.boot","OSOPal.hx",11,0x96eb7d4e)
HX_LOCAL_STACK_FRAME(_hx_pos_085c9c767b08ffdd_12_boot,"OSOPal","boot",0xc2c231f0,"OSOPal.boot","OSOPal.hx",12,0x96eb7d4e)
HX_LOCAL_STACK_FRAME(_hx_pos_085c9c767b08ffdd_13_boot,"OSOPal","boot",0xc2c231f0,"OSOPal.boot","OSOPal.hx",13,0x96eb7d4e)
HX_LOCAL_STACK_FRAME(_hx_pos_085c9c767b08ffdd_14_boot,"OSOPal","boot",0xc2c231f0,"OSOPal.boot","OSOPal.hx",14,0x96eb7d4e)

void OSOPal_obj::__construct() { }

Dynamic OSOPal_obj::__CreateEmpty() { return new OSOPal_obj; }

void *OSOPal_obj::_hx_vtable = 0;

Dynamic OSOPal_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OSOPal_obj > _hx_result = new OSOPal_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OSOPal_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11ad5238;
}

int OSOPal_obj::lightPink;

int OSOPal_obj::darkPink;

int OSOPal_obj::lightPurple;

int OSOPal_obj::darkPurple;


OSOPal_obj::OSOPal_obj()
{
}

bool OSOPal_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"darkPink") ) { outValue = ( darkPink ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lightPink") ) { outValue = ( lightPink ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"darkPurple") ) { outValue = ( darkPurple ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightPurple") ) { outValue = ( lightPurple ); return true; }
	}
	return false;
}

bool OSOPal_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"darkPink") ) { darkPink=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lightPink") ) { lightPink=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"darkPurple") ) { darkPurple=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightPurple") ) { lightPurple=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *OSOPal_obj_sMemberStorageInfo = 0;
static hx::StaticInfo OSOPal_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &OSOPal_obj::lightPink,HX_HCSTRING("lightPink","\x6c","\xd2","\x75","\xc3")},
	{hx::fsInt,(void *) &OSOPal_obj::darkPink,HX_HCSTRING("darkPink","\x0c","\xe6","\x16","\x7f")},
	{hx::fsInt,(void *) &OSOPal_obj::lightPurple,HX_HCSTRING("lightPurple","\xb2","\x3f","\xd8","\xd5")},
	{hx::fsInt,(void *) &OSOPal_obj::darkPurple,HX_HCSTRING("darkPurple","\x52","\x7b","\x9d","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void OSOPal_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OSOPal_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OSOPal_obj::lightPink,"lightPink");
	HX_MARK_MEMBER_NAME(OSOPal_obj::darkPink,"darkPink");
	HX_MARK_MEMBER_NAME(OSOPal_obj::lightPurple,"lightPurple");
	HX_MARK_MEMBER_NAME(OSOPal_obj::darkPurple,"darkPurple");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OSOPal_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OSOPal_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OSOPal_obj::lightPink,"lightPink");
	HX_VISIT_MEMBER_NAME(OSOPal_obj::darkPink,"darkPink");
	HX_VISIT_MEMBER_NAME(OSOPal_obj::lightPurple,"lightPurple");
	HX_VISIT_MEMBER_NAME(OSOPal_obj::darkPurple,"darkPurple");
};

#endif

hx::Class OSOPal_obj::__mClass;

static ::String OSOPal_obj_sStaticFields[] = {
	HX_HCSTRING("lightPink","\x6c","\xd2","\x75","\xc3"),
	HX_HCSTRING("darkPink","\x0c","\xe6","\x16","\x7f"),
	HX_HCSTRING("lightPurple","\xb2","\x3f","\xd8","\xd5"),
	HX_HCSTRING("darkPurple","\x52","\x7b","\x9d","\x8a"),
	::String(null())
};

void OSOPal_obj::__register()
{
	hx::Object *dummy = new OSOPal_obj;
	OSOPal_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("OSOPal","\x70","\x8b","\xe8","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OSOPal_obj::__GetStatic;
	__mClass->mSetStaticField = &OSOPal_obj::__SetStatic;
	__mClass->mMarkFunc = OSOPal_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(OSOPal_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OSOPal_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OSOPal_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OSOPal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OSOPal_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OSOPal_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_085c9c767b08ffdd_11_boot)
HXDLIN(  11)		lightPink = (int)-4698187;
            	}
{
            	HX_STACKFRAME(&_hx_pos_085c9c767b08ffdd_12_boot)
HXDLIN(  12)		darkPink = (int)-6210402;
            	}
{
            	HX_STACKFRAME(&_hx_pos_085c9c767b08ffdd_13_boot)
HXDLIN(  13)		lightPurple = (int)-6856505;
            	}
{
            	HX_STACKFRAME(&_hx_pos_085c9c767b08ffdd_14_boot)
HXDLIN(  14)		darkPurple = (int)-8697922;
            	}
}

