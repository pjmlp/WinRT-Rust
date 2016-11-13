// SayHelloCtrl.cpp
#include "pch.h"
#include "SayHelloCtrl.h"
#include <string>

using namespace DemoControl;
using namespace Platform;

// Rust exported function
extern "C" const wchar_t* say_hello_name(const char *name);

Platform::String^ SayHelloCtrl::SayHelloFromRust(Platform::String^ name)
{
	// convert the WinRT string into an UTF-8 for the Rust call.
	std::wstring winStr(name->Begin());
	std::string fooA(winStr.begin(), winStr.end());
	const char* charStr = fooA.c_str();

	auto wstr = say_hello_name(charStr);
	return ref new Platform::String(wstr);
}