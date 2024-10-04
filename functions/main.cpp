#include <iostream>  // For input/output operations
# include <cmath> // include for math functions -> abs(x), log(x),
using namespace std;

void printMessage() { // void functions don't return a value
    cout << "Hello from the void function!" << endl;
}

// Function that calculates the square of a number (value-returning function)
int square(int number) { // must declare data type of return value "int square" and arg
    return number * number; // Returns the square of the number
}

// Some value returning peculiarities
// The comma operator in cpp evaluates 23, discards the result, and then evaluates the second operator x
int funcRet1() {
    int x = 45;

    return 23, x; // only the value of x is returned
}

int funcRet2(int z){
    int a = 2;
    int b = 3;

    return z = z + 1, z + b;
} // in this example the comma operator increments z before z + b is returned

void formalParameters(int x, int y) { // These are 'formal parameters' x and y which are listed in the function definition
    cout << "Sum: " << x + y << endl;
}

// Function overloading: defining two functions with the same name but different parameter lists. The compiler
// determines which function to call based on the args passed to it
// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width; // Area = length * width
}

// Function to calculate the area of a circle
double area(double radius) {
    return M_PI * radius * radius; // Area = π * radius^2
}

int main() {
    printMessage();
    cout << "Value of square: " << square(2) << endl;
    cout << "funcRet1(): " << funcRet1() << endl;
    cout << "funcRet2(): " << funcRet2(0) << endl;

    int a = 5;
    int b = 10;
    formalParameters(a, b); // 'a' and 'b' are actual parameters

    double length, width, radius;

    // Get user input for rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;

    // Get user input for circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    return 0;
}