#include <hxcpp.h>

#include <haxe/Log.h>
#include <Std.h>
#include <Poc.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::haxe::Log_obj::__register();
::Std_obj::__register();
::Poc_obj::__register();
::haxe::Log_obj::__boot();
::Poc_obj::__boot();
::Std_obj::__boot();
}

