fn main() {
    // Heap allocation via Box
    let value = Box::new(42);  
    // Automatic cleanup when value goes out of scope
    println!("Value = {}", value);  
}
