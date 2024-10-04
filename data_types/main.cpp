#include <iostream>  // For input/output operations
using namespace std;

int main() {
    // Integer types
    int a = 10;           // Standard integer (typically 4 bytes) - anything under +-/2B
    short b = 20;         // Short integer (typically 2 bytes) - anything under +-/32k
    long c = 30000;       // Long integer (typically 4 or 8 bytes)
    long long d = 100000; // Long long integer (typically 8 bytes) - anything under +-/ 2 quintillion
    unsigned int e = 50;  // Unsigned integer (only positive numbers)

    // Floating-point types
    float f = 3.14f;      // Single precision floating point (typically 4 bytes) - 6 or 7 decimals - need to include f to specify that it is a float and not a double
    double g = 3.14159;   // Double precision floating point (typically 8 bytes) - 15 to 17 decimals
    long double h = 3.14159265359L; // Extended precision floating point (usually more than 8 bytes) - 18 or 19 decimals

    // Character type: A data type that represents a single character
    char i = 'A';         // Single character (typically 1 byte) - can represent over 256 values - ASCII character library

    // Boolean type
    bool j = true;        // Boolean (can be true or false)

    // Wide character type: Still represents a single character
    wchar_t k = L'B';     // Wide character (typically 2 or 4 bytes) - holds up to 65,536 distinct values - UCS-2 encoding

    // Void type
    // The void type is not used to store values, but can be used for functions.
    // It will not be printed as it does not store data.

    // Constant: memory location whose content can't change - capital letters
    const double CONVERSION = 2.54;

    // Output the values and their types
    cout << "Integer (int): " << a << endl;
    cout << "Short (short): " << b << endl;
    cout << "Long (long): " << c << endl;
    cout << "Long Long (long long): " << d << endl;
    cout << "Unsigned Integer (unsigned int): " << e << endl;

    cout << "Float (float): " << f << endl;
    cout << "Double (double): " << g << endl;
    cout << "Long Double (long double): " << h << endl;

    cout << "Character (char): " << i << endl;
    cout << "Boolean (bool): " << j << endl;
    cout << "Wide Character (wchar_t): " << k << endl;

    cout << "Constant: " << CONVERSION << endl;

    return 0;
    // the 0 exit code is widely accepted as 'OK the program execution was successful and the function doesn't return any value'

}