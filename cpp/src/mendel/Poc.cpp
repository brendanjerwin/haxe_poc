#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_mendel_Poc
#include <mendel/Poc.h>
#endif
namespace mendel{

Void Poc_obj::__construct()
{
	return null();
}

Poc_obj::~Poc_obj() { }

Dynamic Poc_obj::__CreateEmpty() { return  new Poc_obj; }
hx::ObjectPtr< Poc_obj > Poc_obj::__new()
{  hx::ObjectPtr< Poc_obj > result = new Poc_obj();
	result->__construct();
	return result;}

Dynamic Poc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Poc_obj > result = new Poc_obj();
	result->__construct();
	return result;}

Void Poc_obj::main( ){
{
		HX_STACK_PUSH("Poc::main","Poc.hx",3);
		HX_STACK_LINE(3)
		::haxe::Log_obj::trace(::mendel::Poc_obj::DataInOut(HX_CSTRING("haxe to haxe")),hx::SourceInfo(HX_CSTRING("Poc.hx"),4,HX_CSTRING("Poc"),HX_CSTRING("main")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Poc_obj,main,(void))

::String Poc_obj::DataInOut( ::String val){
	HX_STACK_PUSH("Poc::DataInOut","Poc.hx",7);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(7)
	return ((HX_CSTRING("You passed a string (") + val) + HX_CSTRING(") to me!"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Poc_obj,DataInOut,return )


Poc_obj::Poc_obj()
{
}

void Poc_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Poc);
	HX_MARK_END_CLASS();
}

void Poc_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Poc_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DataInOut") ) { return DataInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Poc_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Poc_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	HX_CSTRING("DataInOut"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Poc_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Poc_obj::__mClass,"__mClass");
};

Class Poc_obj::__mClass;

void Poc_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("mendel.Poc"), hx::TCanCast< Poc_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Poc_obj::__boot()
{
}

} // end namespace mendel
