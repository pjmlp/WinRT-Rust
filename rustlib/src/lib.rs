use std::ffi::OsStr;
use std::ffi::CStr;
use std::os::windows::ffi::OsStrExt;

use std::str;

fn to_wchar(str : &str) -> *const u16 {
    let v : Vec<u16> =
            OsStr::new(str).encode_wide(). chain(Some(0).into_iter()).collect();

    v.as_ptr()
}


#[no_mangle]
pub extern "C" fn say_hello_name(name: *const i8) -> *const u16 {
    let c_str = unsafe {
        assert!(!name.is_null());
        CStr::from_ptr(name)
    };
    
    let s = String::from("Hello ") + (c_str.to_str().unwrap());
    to_wchar(&s)
}