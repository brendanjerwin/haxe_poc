#ifndef INCLUDED_mendel_Poc
#define INCLUDED_mendel_Poc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(mendel,Poc)
namespace mendel{


class HXCPP_CLASS_ATTRIBUTES  Poc_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Poc_obj OBJ_;
		Poc_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Poc_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Poc_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Poc"); }

		static Void main( );
		static Dynamic main_dyn();

		static ::String DataInOut( ::String val);
		static Dynamic DataInOut_dyn();

};

} // end namespace mendel

#endif /* INCLUDED_mendel_Poc */ 
