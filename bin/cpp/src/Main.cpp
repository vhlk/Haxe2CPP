// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_6_getArrayLength,"Main","getArrayLength",0xa2a39ede,"Main.getArrayLength","Main.hx",6,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_10_randomFunction,"Main","randomFunction",0x640fe0b0,"Main.randomFunction","Main.hx",10,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_14_createEmptyArray2D,"Main","createEmptyArray2D",0x47c832af,"Main.createEmptyArray2D","Main.hx",14,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_18_createEmptyArray1D,"Main","createEmptyArray1D",0x47c831d0,"Main.createEmptyArray1D","Main.hx",18,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_22_printArrayElements,"Main","printArrayElements",0x4f7dbb78,"Main.printArrayElements","Main.hx",22,0x087e5c05)

void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07825a7d;
}

int Main_obj::getArrayLength(::Array< ::Dynamic> array){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_6_getArrayLength)
HXDLIN(   6)		return array->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,getArrayLength,return )

int Main_obj::randomFunction(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_10_randomFunction)
HXDLIN(  10)		return ::Std_obj::random(10);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,randomFunction,return )

::Array< ::Dynamic> Main_obj::createEmptyArray2D(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_14_createEmptyArray2D)
HXDLIN(  14)		::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  14)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,createEmptyArray2D,return )

::Array< Float > Main_obj::createEmptyArray1D(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_18_createEmptyArray1D)
HXDLIN(  18)		::Array< Float > this1 = ::Array_obj< Float >::__new(0);
HXDLIN(  18)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,createEmptyArray1D,return )

void Main_obj::printArrayElements(::Array< ::Dynamic> array){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_22_printArrayElements)
HXDLIN(  22)		int _g = 0;
HXDLIN(  22)		int _g1 = array->length;
HXDLIN(  22)		while((_g < _g1)){
HXDLIN(  22)			_g = (_g + 1);
HXDLIN(  22)			int i = (_g - 1);
HXLINE(  23)			{
HXLINE(  23)				int _g1 = 0;
HXDLIN(  23)				int _g2 = ( (::Array< Float >)(_hx_array_unsafe_get(array,i)) )->length;
HXDLIN(  23)				while((_g1 < _g2)){
HXLINE(  23)					_g1 = (_g1 + 1);
HXDLIN(  23)					int j = (_g1 - 1);
HXLINE(  24)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  24)					Float _hx_tmp1 = ( (Float)(_hx_array_unsafe_get(( (::Array< Float >)(_hx_array_unsafe_get(array,i)) ),j)) );
HXDLIN(  24)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),24,HX_("Main",59,64,2f,33),HX_("printArrayElements",83,c0,a7,97)));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,printArrayElements,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"getArrayLength") ) { outValue = getArrayLength_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"randomFunction") ) { outValue = randomFunction_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createEmptyArray2D") ) { outValue = createEmptyArray2D_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createEmptyArray1D") ) { outValue = createEmptyArray1D_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"printArrayElements") ) { outValue = printArrayElements_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Main_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("getArrayLength",69,82,ed,13),
	HX_("randomFunction",3b,c4,59,d5),
	HX_("createEmptyArray2D",ba,37,f2,8f),
	HX_("createEmptyArray1D",db,36,f2,8f),
	HX_("printArrayElements",83,c0,a7,97),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

