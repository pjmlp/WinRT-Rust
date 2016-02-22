// SayHelloCtrl.cpp
#include "pch.h"
#include "SayHelloCtrl.h"
#include <string>

using namespace DemoControl;
using namespace Platform;

// Rust exported function
extern "C" const wchar_t* say_hello();

Platform::String^ SayHelloCtrl::SayHelloFromRust(Platform::String^ name)
{
	std::wstring wstr = say_hello();

	auto commaStr = Platform::String::Concat(L", ", name);
	return Platform::String::Concat(ref new Platform::String(wstr.c_str()), commaStr);
}