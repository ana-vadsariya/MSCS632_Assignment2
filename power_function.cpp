#include <iostream>
#include <functional>
#include <cmath>

using namespace std; 

// Function that returns a closure (lambda) to raise a number to a given exponent
function<double(double)> power_function(int exponent) {
    return [exponent](double base) {
        return pow(base, exponent);
    };
}

int main() {
    auto square = power_function(2);
    cout << "Square of 5 using C++: " << square(5) << endl;
    return 0;
}
