// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
namespace openfl{
namespace _legacy{
namespace text{

::openfl::_legacy::text::TextFieldAutoSize TextFieldAutoSize_obj::CENTER;

::openfl::_legacy::text::TextFieldAutoSize TextFieldAutoSize_obj::LEFT;

::openfl::_legacy::text::TextFieldAutoSize TextFieldAutoSize_obj::NONE;

::openfl::_legacy::text::TextFieldAutoSize TextFieldAutoSize_obj::RIGHT;

bool TextFieldAutoSize_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) { outValue = TextFieldAutoSize_obj::CENTER; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = TextFieldAutoSize_obj::LEFT; return true; }
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = TextFieldAutoSize_obj::NONE; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = TextFieldAutoSize_obj::RIGHT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TextFieldAutoSize_obj)

int TextFieldAutoSize_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 1;
	if (inName==HX_("NONE",b8,da,ca,33)) return 2;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 3;
	return super::__FindIndex(inName);
}

int TextFieldAutoSize_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TextFieldAutoSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return CENTER;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String TextFieldAutoSize_obj_sStaticFields[] = {
	HX_("CENTER",d5,d1,5d,b8),
	HX_("LEFT",07,d0,70,32),
	HX_("NONE",b8,da,ca,33),
	HX_("RIGHT",bc,43,52,67),
	::String(null())
};

static void TextFieldAutoSize_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFieldAutoSize_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::RIGHT,"RIGHT");
};
#endif

hx::Class TextFieldAutoSize_obj::__mClass;

Dynamic __Create_TextFieldAutoSize_obj() { return new TextFieldAutoSize_obj; }

void TextFieldAutoSize_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.text.TextFieldAutoSize","\x80","\x20","\x7c","\x12"), hx::TCanCast< TextFieldAutoSize_obj >,TextFieldAutoSize_obj_sStaticFields,0,
	&__Create_TextFieldAutoSize_obj, &__Create,
	&super::__SGetClass(), &CreateTextFieldAutoSize_obj, TextFieldAutoSize_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , TextFieldAutoSize_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TextFieldAutoSize_obj::__GetStatic;
}

void TextFieldAutoSize_obj::__boot()
{
CENTER = hx::CreateEnum< TextFieldAutoSize_obj >(HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),0,0);
LEFT = hx::CreateEnum< TextFieldAutoSize_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),1,0);
NONE = hx::CreateEnum< TextFieldAutoSize_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),2,0);
RIGHT = hx::CreateEnum< TextFieldAutoSize_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),3,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace text
