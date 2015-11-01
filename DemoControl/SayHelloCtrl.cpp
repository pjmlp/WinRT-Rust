// SayHelloCtrl.cpp
#include "pch.h"
#include "SayHelloCtrl.h"
#include <string>

using namespace DemoControl;
using namespace Platform;

// Rust exported function
extern "C" const char* say_hello();

Platform::String^ SayHelloCtrl::SayHelloFromRust(Platform::String^ name)
{
	// Get the Rust string result and convert it into a double byte string.
	// Need to find out how this should be properly done.
	std::string str = say_hello();
	std::wstring wstr(str.begin(), str.end());

	auto commaStr = Platform::String::Concat(L", ", name);
	return Platform::String::Concat(ref new Platform::String(wstr.c_str()), commaStr);
}