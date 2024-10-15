#include <iostream>
#include <cmath> // Include cmath for mathematical functions

using namespace std;

int main() {
    // Example value
    double value = 16.7;

    // Square root function
    double sqrtValue = sqrt(value); // Compute the square root of 'value'
    cout << "Square root of " << value << " is " << sqrtValue << endl;

    // Power function
    double powerValue = pow(value, 2); // Compute 'value' raised to the power of 2
    cout << value << " raised to the power of 2 is " << powerValue << endl;

    // Absolute value function
    double negativeValue = -value; // A negative value for demonstration
    double absValue = abs(negativeValue); // Compute the absolute value
    cout << "Absolute value of " << negativeValue << " is " << absValue << endl;

    // Sine function
    double angle = 30.0; // Angle in degrees
    double radians = angle * (M_PI / 180.0); // Convert degrees to radians
    double sineValue = sin(radians); // Compute the sine of the angle
    cout << "Sine of " << angle << " degrees is " << sineValue << endl;

    // Cosine function
    double cosineValue = cos(radians); // Compute the cosine of the angle
    cout << "Cosine of " << angle << " degrees is " << cosineValue << endl;

    // Tangent function
    double tangentValue = tan(radians); // Compute the tangent of the angle
    cout << "Tangent of " << angle << " degrees is " << tangentValue << endl;

    // Logarithm function
    double logValue = log10(value); // Compute the base-10 logarithm of 'value'
    cout << "Base-10 logarithm of " << value << " is " << logValue << endl;

    // Exponential function
    double expValue = exp(1); // Compute e raised to the power of 1 (approximately 2.718)
    cout << "e raised to the power of 1 is " << expValue << endl;

    // Floor function
    double floorValue = floor(value); // Compute the largest integer less than or equal to 'value'
    cout << "Floor of " << value << " is " << floorValue << endl;

    // Ceil function
    double ceilValue = ceil(value); // Compute the smallest integer greater than or equal to 'value'
    cout << "Ceil of " << value << " is " << ceilValue << endl;

    // Round
    double roundValue = round(value); // Round the integer to nearest
    cout << "Round of " << value << " is " << roundValue << endl;

    return 0;
}

