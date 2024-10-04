#include <iostream>

using namespace std;  // Allows the use of standard library objects without the 'std::' prefix

int main () {
    // main is an int because is it required to return an integer value
    char grade = 'C';

    switch (grade)
    {
        case 'A':
            cout << "4.0";
        break;
        case 'B':
            cout << "3.0";
        break;
        case 'C':
            cout << "2.0";
        break;
        case 'D':
            cout << "1.0";
        break;
        default: // default acts like an 'else' and executes if no case matches
            cout << "The grade is invalid";
    }
}

// Note: in cpp single quotes are used to represent a single character, and double quotes are used to represent more than a single character