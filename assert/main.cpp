#include <iostream>   // Includes iostream for input/output operations
#include <cassert>    // Includes cassert for using the assert function

using namespace std;

int divide(int numerator, int denominator) {
    // Use assert to check that the denominator is not zero
    assert(denominator != 0 && "Denominator cannot be zero");

    return numerator / denominator;
}
// note you have to declare the data type for the function divide (the function returns an integer, and the two arguments (numerator and denominator are both integers))

int main() {
    cout << "Demonstrating the assert function in C++" << endl;

    int a = 10;
    int b = 2;

    // This should work because b the denominator is not zero
    cout << "Result of " << a << " / " << b << " = " << divide(a, b) << endl;

    // Example of an assert failure:
    b = 0;

    // This will trigger the assert because b is zero
    cout << "Attempting division by zero..." << endl;
    cout << "Result of " << a << " / " << b << " = " << divide(a, b) << endl;  // This will not execute due to assert

    return 0;
}
