#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for an integer
    int* ptr = new int(12);  // Manual allocation
    cout << "Value = " << *ptr << endl;
    delete ptr;  // Manual deallocation
    return 0;
}
