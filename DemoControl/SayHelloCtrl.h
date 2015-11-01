#pragma once

namespace DemoControl
{

	/// <summary>
	/// WinRT control to wrap the Rust library
	/// </summary>
	public ref class SayHelloCtrl sealed
	{
	public:

		static Platform::String^ SayHelloFromRust(Platform::String^ name);
	};
}