#Introduction

An example on how to use Rust as shared library in WinRT applications.

# Overview

The sample application is composed of a simple form written in XAML and C#, which
makes use of a WinRT Component done in C++/CX is used to expose the Rust function
to the WinRT world.

The application after starting it:

![Starting](/images/start.png)

After entering some text, the function gets called and its result is displayed:

![Message](/images/msg.png)

# Future plans

~~If Rust eventually supports the creation of WinRT components, the C++/CX wrapper code can
be replaced by pure Rust code.~~

As .NET Native isn't getting any updates beyond .NET Core 3, C++/CX got replaced with C++/WinRT, and Rust/WinRT is still work in progress, I am archiving this repo.