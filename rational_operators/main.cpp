#include <iostream>  // Includes the iostream library for input/output
using namespace std;  // Allows the use of standard library objects without the 'std::' prefix

// 0 is False and 1 is True
int main() {
    int a = 10, b = 20;

    // Output the values of a and b
    cout << "Values: a = " << a << ", b = " << b << endl << endl;

    // Relational Operators in C++
    cout << "Relational Operators in Action:" << endl;

    // 1. Equal to (==)
    cout << "a == b: " << (a == b) << endl;  // Checks if a is equal to b (false)

    // 2. Not equal to (!=)
    cout << "a != b: " << (a != b) << endl;  // Checks if a is not equal to b (true)

    // 3. Greater than (>)
    cout << "a > b: " << (a > b) << endl;  // Checks if a is greater than b (false)

    // 4. Less than (<)
    cout << "a < b: " << (a < b) << endl;  // Checks if a is less than b (true)

    // 5. Greater than or equal to (>=)
    cout << "a >= b: " << (a >= b) << endl;  // Checks if a is greater than or equal to b (false)

    // 6. Less than or equal to (<=)
    cout << "a <= b: " << (a <= b) << endl;  // Checks if a is less than or equal to b (true)

    return 0;  // Indicate that the program executed successfully
}

