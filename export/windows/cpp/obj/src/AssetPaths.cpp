// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a71b198b2cf5b646_28_boot,"AssetPaths","boot",0x7f6e2362,"AssetPaths.boot","flixel/system/macros/FlxAssetPaths.hx",28,0x71054749)

void AssetPaths_obj::__construct() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return new AssetPaths_obj; }

void *AssetPaths_obj::_hx_vtable = 0;

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetPaths_obj > _hx_result = new AssetPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60e60f3e;
}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::chat__png;

::String AssetPaths_obj::cursor__png;

::String AssetPaths_obj::cursorBW__png;

::String AssetPaths_obj::exit__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::minimize__ase;

::String AssetPaths_obj::minimize__png;

::String AssetPaths_obj::OSOPal__ase;

::String AssetPaths_obj::OSOThumbNail__png;

::String AssetPaths_obj::OSOTitle__png;

::String AssetPaths_obj::scanlines08__jpg;

::String AssetPaths_obj::twitter__png;

::String AssetPaths_obj::TXT__ase;

::String AssetPaths_obj::TXT__png;

::String AssetPaths_obj::vignette__png;

::String AssetPaths_obj::bumblebee__mp3;

::String AssetPaths_obj::Denwa_wo_Kakete___mp3;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::girlCrying__mp3;

::String AssetPaths_obj::message__mp3;

::String AssetPaths_obj::mouse__mp3;

::String AssetPaths_obj::mouseP0__mp3;

::String AssetPaths_obj::mouseP1__mp3;

::String AssetPaths_obj::mouseP2__mp3;

::String AssetPaths_obj::mouseR__mp3;

::String AssetPaths_obj::pcAmbience__mp3;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AssetPaths_obj_sMemberStorageInfo = 0;
static hx::StaticInfo AssetPaths_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::chat__png,HX_HCSTRING("chat__png","\xb1","\x8f","\x13","\xe5")},
	{hx::fsString,(void *) &AssetPaths_obj::cursor__png,HX_HCSTRING("cursor__png","\xf3","\xa6","\xe5","\xe7")},
	{hx::fsString,(void *) &AssetPaths_obj::cursorBW__png,HX_HCSTRING("cursorBW__png","\x7e","\x57","\x57","\x2d")},
	{hx::fsString,(void *) &AssetPaths_obj::exit__png,HX_HCSTRING("exit__png","\xab","\x39","\xc9","\x6a")},
	{hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93")},
	{hx::fsString,(void *) &AssetPaths_obj::minimize__ase,HX_HCSTRING("minimize__ase","\x35","\x94","\x7d","\x54")},
	{hx::fsString,(void *) &AssetPaths_obj::minimize__png,HX_HCSTRING("minimize__png","\xab","\xf1","\x88","\x54")},
	{hx::fsString,(void *) &AssetPaths_obj::OSOPal__ase,HX_HCSTRING("OSOPal__ase","\xa3","\x5e","\x5e","\xf7")},
	{hx::fsString,(void *) &AssetPaths_obj::OSOThumbNail__png,HX_HCSTRING("OSOThumbNail__png","\x08","\x16","\xfc","\xd6")},
	{hx::fsString,(void *) &AssetPaths_obj::OSOTitle__png,HX_HCSTRING("OSOTitle__png","\x7c","\xc3","\xb4","\x03")},
	{hx::fsString,(void *) &AssetPaths_obj::scanlines08__jpg,HX_HCSTRING("scanlines08__jpg","\x97","\xdf","\x66","\x19")},
	{hx::fsString,(void *) &AssetPaths_obj::twitter__png,HX_HCSTRING("twitter__png","\x36","\xb6","\xc4","\xff")},
	{hx::fsString,(void *) &AssetPaths_obj::TXT__ase,HX_HCSTRING("TXT__ase","\xc3","\xf3","\x0e","\x98")},
	{hx::fsString,(void *) &AssetPaths_obj::TXT__png,HX_HCSTRING("TXT__png","\x39","\x51","\x1a","\x98")},
	{hx::fsString,(void *) &AssetPaths_obj::vignette__png,HX_HCSTRING("vignette__png","\x8f","\x9a","\xcb","\xe7")},
	{hx::fsString,(void *) &AssetPaths_obj::bumblebee__mp3,HX_HCSTRING("bumblebee__mp3","\x2f","\x75","\x25","\xb5")},
	{hx::fsString,(void *) &AssetPaths_obj::Denwa_wo_Kakete___mp3,HX_HCSTRING("Denwa_wo_Kakete___mp3","\xd1","\x53","\xc2","\x55")},
	{hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f")},
	{hx::fsString,(void *) &AssetPaths_obj::girlCrying__mp3,HX_HCSTRING("girlCrying__mp3","\x1c","\x28","\x24","\x1b")},
	{hx::fsString,(void *) &AssetPaths_obj::message__mp3,HX_HCSTRING("message__mp3","\x29","\xf1","\xa2","\xb5")},
	{hx::fsString,(void *) &AssetPaths_obj::mouse__mp3,HX_HCSTRING("mouse__mp3","\x0b","\xfc","\xce","\x7c")},
	{hx::fsString,(void *) &AssetPaths_obj::mouseP0__mp3,HX_HCSTRING("mouseP0__mp3","\xeb","\x0e","\x5a","\x36")},
	{hx::fsString,(void *) &AssetPaths_obj::mouseP1__mp3,HX_HCSTRING("mouseP1__mp3","\x4a","\x6b","\xb5","\x9c")},
	{hx::fsString,(void *) &AssetPaths_obj::mouseP2__mp3,HX_HCSTRING("mouseP2__mp3","\xa9","\xc7","\x10","\x03")},
	{hx::fsString,(void *) &AssetPaths_obj::mouseR__mp3,HX_HCSTRING("mouseR__mp3","\xa3","\xce","\x66","\x7c")},
	{hx::fsString,(void *) &AssetPaths_obj::pcAmbience__mp3,HX_HCSTRING("pcAmbience__mp3","\x1f","\x33","\x22","\x95")},
	{hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void AssetPaths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::chat__png,"chat__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::cursor__png,"cursor__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::cursorBW__png,"cursorBW__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::exit__png,"exit__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::minimize__ase,"minimize__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::minimize__png,"minimize__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::OSOPal__ase,"OSOPal__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::OSOThumbNail__png,"OSOThumbNail__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::OSOTitle__png,"OSOTitle__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::scanlines08__jpg,"scanlines08__jpg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::twitter__png,"twitter__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::TXT__ase,"TXT__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::TXT__png,"TXT__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::vignette__png,"vignette__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bumblebee__mp3,"bumblebee__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Denwa_wo_Kakete___mp3,"Denwa_wo_Kakete___mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::girlCrying__mp3,"girlCrying__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::message__mp3,"message__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mouse__mp3,"mouse__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mouseP0__mp3,"mouseP0__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mouseP1__mp3,"mouseP1__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mouseP2__mp3,"mouseP2__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mouseR__mp3,"mouseR__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pcAmbience__mp3,"pcAmbience__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetPaths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::chat__png,"chat__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::cursor__png,"cursor__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::cursorBW__png,"cursorBW__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::exit__png,"exit__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::minimize__ase,"minimize__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::minimize__png,"minimize__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::OSOPal__ase,"OSOPal__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::OSOThumbNail__png,"OSOThumbNail__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::OSOTitle__png,"OSOTitle__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::scanlines08__jpg,"scanlines08__jpg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::twitter__png,"twitter__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::TXT__ase,"TXT__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::TXT__png,"TXT__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::vignette__png,"vignette__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bumblebee__mp3,"bumblebee__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Denwa_wo_Kakete___mp3,"Denwa_wo_Kakete___mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::girlCrying__mp3,"girlCrying__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::message__mp3,"message__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mouse__mp3,"mouse__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mouseP0__mp3,"mouseP0__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mouseP1__mp3,"mouseP1__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mouseP2__mp3,"mouseP2__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mouseR__mp3,"mouseR__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pcAmbience__mp3,"pcAmbience__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String AssetPaths_obj_sStaticFields[] = {
	HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8"),
	HX_HCSTRING("chat__png","\xb1","\x8f","\x13","\xe5"),
	HX_HCSTRING("cursor__png","\xf3","\xa6","\xe5","\xe7"),
	HX_HCSTRING("cursorBW__png","\x7e","\x57","\x57","\x2d"),
	HX_HCSTRING("exit__png","\xab","\x39","\xc9","\x6a"),
	HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93"),
	HX_HCSTRING("minimize__ase","\x35","\x94","\x7d","\x54"),
	HX_HCSTRING("minimize__png","\xab","\xf1","\x88","\x54"),
	HX_HCSTRING("OSOPal__ase","\xa3","\x5e","\x5e","\xf7"),
	HX_HCSTRING("OSOThumbNail__png","\x08","\x16","\xfc","\xd6"),
	HX_HCSTRING("OSOTitle__png","\x7c","\xc3","\xb4","\x03"),
	HX_HCSTRING("scanlines08__jpg","\x97","\xdf","\x66","\x19"),
	HX_HCSTRING("twitter__png","\x36","\xb6","\xc4","\xff"),
	HX_HCSTRING("TXT__ase","\xc3","\xf3","\x0e","\x98"),
	HX_HCSTRING("TXT__png","\x39","\x51","\x1a","\x98"),
	HX_HCSTRING("vignette__png","\x8f","\x9a","\xcb","\xe7"),
	HX_HCSTRING("bumblebee__mp3","\x2f","\x75","\x25","\xb5"),
	HX_HCSTRING("Denwa_wo_Kakete___mp3","\xd1","\x53","\xc2","\x55"),
	HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f"),
	HX_HCSTRING("girlCrying__mp3","\x1c","\x28","\x24","\x1b"),
	HX_HCSTRING("message__mp3","\x29","\xf1","\xa2","\xb5"),
	HX_HCSTRING("mouse__mp3","\x0b","\xfc","\xce","\x7c"),
	HX_HCSTRING("mouseP0__mp3","\xeb","\x0e","\x5a","\x36"),
	HX_HCSTRING("mouseP1__mp3","\x4a","\x6b","\xb5","\x9c"),
	HX_HCSTRING("mouseP2__mp3","\xa9","\xc7","\x10","\x03"),
	HX_HCSTRING("mouseR__mp3","\xa3","\xce","\x66","\x7c"),
	HX_HCSTRING("pcAmbience__mp3","\x1f","\x33","\x22","\x95"),
	HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02"),
	::String(null())
};

void AssetPaths_obj::__register()
{
	hx::Object *dummy = new AssetPaths_obj;
	AssetPaths_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetPaths_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AssetPaths_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetPaths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPaths_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		data_goes_here__txt = HX_("assets/data/data-goes-here.txt",5f,4b,b2,8e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		chat__png = HX_("assets/images/chat.png",be,42,3c,73);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		cursor__png = HX_("assets/images/cursor.png",7c,8a,a0,3f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		cursorBW__png = HX_("assets/images/cursorBW.png",11,65,8d,40);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		exit__png = HX_("assets/images/exit.png",04,76,d3,b1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		images_go_here__txt = HX_("assets/images/images-go-here.txt",0d,1d,45,a6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		minimize__ase = HX_("assets/images/minimize.ase",0e,92,e9,13);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		minimize__png = HX_("assets/images/minimize.png",84,ef,f4,13);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		OSOPal__ase = HX_("assets/images/OSOPal.ase",a0,7e,f8,a6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		OSOThumbNail__png = HX_("assets/images/OSOThumbNail.png",47,37,06,ae);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		OSOTitle__png = HX_("assets/images/OSOTitle.png",d3,02,3a,01);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		scanlines08__jpg = HX_("assets/images/scanlines08.jpg",12,11,da,d6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		twitter__png = HX_("assets/images/twitter.png",63,fb,d0,e3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		TXT__ase = HX_("assets/images/TXT.ase",ca,15,bb,42);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		TXT__png = HX_("assets/images/TXT.png",40,73,c6,42);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		vignette__png = HX_("assets/images/vignette.png",20,ef,11,da);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		bumblebee__mp3 = HX_("assets/music/bumblebee.mp3",0d,77,c6,b8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		Denwa_wo_Kakete___mp3 = HX_("assets/music/Denwa-wo-Kakete-.mp3",e5,e3,7d,74);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		music_goes_here__txt = HX_("assets/music/music-goes-here.txt",6b,32,60,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		girlCrying__mp3 = HX_("assets/sounds/girlCrying.mp3",15,08,e0,51);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		message__mp3 = HX_("assets/sounds/message.mp3",8a,99,e8,b4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		mouse__mp3 = HX_("assets/sounds/mouse.mp3",a8,be,ef,55);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		mouseP0__mp3 = HX_("assets/sounds/mouseP0.mp3",08,ea,97,cd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		mouseP1__mp3 = HX_("assets/sounds/mouseP1.mp3",89,7e,fe,60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		mouseP2__mp3 = HX_("assets/sounds/mouseP2.mp3",0a,13,65,f4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		mouseR__mp3 = HX_("assets/sounds/mouseR.mp3",ee,73,9d,6c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		pcAmbience__mp3 = HX_("assets/sounds/pcAmbience.mp3",72,8e,77,1c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		sounds_go_here__txt = HX_("assets/sounds/sounds-go-here.txt",8d,b6,3d,a7);
            	}
}

