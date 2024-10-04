#include <iostream>// For input/output operations
#include <iomanip>
using namespace std;

// the cast operator provides explicit type converstion
// static_cast<dataTypeName> (expression) -> convert this data to this data type

int main() {
    cout << fixed << setprecision(1); // Set output to fixed-point notation with 1 decimal place

    cout << "Convert to integer: " << static_cast<int>(7.9) << endl;
    cout << "Convert to double: " << static_cast<double>(25) << endl;
    cout << "Convert to double: " << static_cast<double>(15/2) << endl;
    cout << "Convert to int: " << static_cast<int>(7.8 + static_cast<double>(15)/2) << endl;

    return 0;
}