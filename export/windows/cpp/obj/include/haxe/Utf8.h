// Generated by Haxe 3.4.4
#ifndef INCLUDED_haxe_Utf8
#define INCLUDED_haxe_Utf8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Utf8)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Utf8_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Utf8_obj OBJ_;
		Utf8_obj();

	public:
		enum { _hx_ClassId = 0x11cee8b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.Utf8")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.Utf8"); }

		hx::ObjectPtr< Utf8_obj > __new() {
			hx::ObjectPtr< Utf8_obj > __this = new Utf8_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Utf8_obj > __alloc(hx::Ctx *_hx_ctx) {
			Utf8_obj *__this = (Utf8_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Utf8_obj), false, "haxe.Utf8"));
			*(void **)__this = Utf8_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utf8_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Utf8","\x51","\x81","\x87","\x38"); }

		static int length(::String s);
		static ::Dynamic length_dyn();

		static int compare(::String a,::String b);
		static ::Dynamic compare_dyn();

		static ::String sub(::String s,int pos,int len);
		static ::Dynamic sub_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Utf8 */ 
