public class Memory_Management {
    public static void main(String[] args) {
        // Object allocation
        Integer num = 45; 
        System.out.println("Value = " + num);
        // num goes out of scope, GC will clean it later
    }
}
