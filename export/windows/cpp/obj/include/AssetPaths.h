// Generated by Haxe 3.4.4
#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)



class HXCPP_CLASS_ATTRIBUTES AssetPaths_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();

	public:
		enum { _hx_ClassId = 0x60e60f3e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="AssetPaths")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"AssetPaths"); }

		hx::ObjectPtr< AssetPaths_obj > __new() {
			hx::ObjectPtr< AssetPaths_obj > __this = new AssetPaths_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AssetPaths_obj > __alloc(hx::Ctx *_hx_ctx) {
			AssetPaths_obj *__this = (AssetPaths_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetPaths_obj), false, "AssetPaths"));
			*(void **)__this = AssetPaths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60"); }

		static void __boot();
		static ::String data_goes_here__txt;
		static ::String chat__png;
		static ::String cursor__png;
		static ::String cursorBW__png;
		static ::String exit__png;
		static ::String images_go_here__txt;
		static ::String minimize__ase;
		static ::String minimize__png;
		static ::String OSOPal__ase;
		static ::String OSOThumbNail__png;
		static ::String OSOTitle__png;
		static ::String scanlines08__jpg;
		static ::String twitter__png;
		static ::String TXT__ase;
		static ::String TXT__png;
		static ::String vignette__png;
		static ::String bumblebee__mp3;
		static ::String Denwa_wo_Kakete___mp3;
		static ::String music_goes_here__txt;
		static ::String girlCrying__mp3;
		static ::String message__mp3;
		static ::String mouse__mp3;
		static ::String mouseP0__mp3;
		static ::String mouseP1__mp3;
		static ::String mouseP2__mp3;
		static ::String mouseR__mp3;
		static ::String pcAmbience__mp3;
		static ::String sounds_go_here__txt;
};


#endif /* INCLUDED_AssetPaths */ 
