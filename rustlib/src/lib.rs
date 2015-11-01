#[no_mangle]
pub extern "C" fn say_hello() -> *const u8 {
    "Hello from Rust\0".as_ptr()
}