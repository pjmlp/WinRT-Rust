use std::ffi::OsStr;
use std::os::windows::ffi::OsStrExt;

fn to_wchar(str : &str) -> *const u16 {
    let v : Vec<u16> =
            OsStr::new(str).encode_wide(). chain(Some(0).into_iter()).collect();

    v.as_ptr()
}


#[no_mangle]
pub extern "C" fn say_hello() -> *const u16 {
    to_wchar("Hello from Rust\0")
}
