#include <iostream>  // For input and output operations
#include <string>    // For std::string class

// Using the standard namespace to avoid prefixing std:: -> namespace is a set of identifiers in cpp such as classes, functions, and variables. Used to avoid naming conflicts
using namespace std;

int main() {
    // Initialize strings with data type "string"
    string str1 = "Hello, ";
    string str2 = "World!";
    string str3 = "String Operations in C++";

    // Output initial strings
    cout << "Initial strings:" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;

    // Concatenation
    string concatenated_string = str1 + str2; // Combine str1 and str2
    cout << "\nConcatenation of str1 and str2:" << endl;
    cout << "concatenated: " << concatenated_string << endl;

    // Length of a string: size_t is a class in cpp that helps represent the size of an object or array, and ensures non-negative values only
    size_t length = str3.length(); // Get the length of str3
    cout << "Length of str3: " << length << endl;

    // Substring extraction
    string substring = str3.substr(8, 11); // Extract substring starting at index 8 with length 11
    cout << "Substring of str3: " << substring << endl;

    // Finding a substring: size_t is also used for the find method because it represents a non-negative value and can handle large data
    size_t position = str3.find("Operations"); // Find position of "Operations" in str3
    cout << "\nFinding substring in str3:" << endl;
    if (position != string::npos) { // Check if the substring was found
        cout << "Found 'Operations' at position: " << position << endl;
    } else {
        cout << "'Operations' not found in str3." << endl;
    }

    // Replacing a substring
    string replaced = str3;
    replaced.replace(7, 11, "Manipulations"); // Replace substring starting at index 7, replace 11 characters (removes 11 chars) in the original string with "Manipulations"
    cout << "\nReplacing a substring in str3:" << endl;
    cout << "Replaced str3: " << replaced << endl;

    // Comparing strings
    string compare1 = "Apple";
    string compare2 = "Banana";
    cout << "\nComparing strings:" << endl;
    if (compare1 == compare2) {
        cout << "compare1 is equal to compare2." << endl;
    } else {
        cout << "compare1 is not equal to compare2." << endl;
    }

    // Checking if a string is empty
    string emptyStr;
    cout << "\nChecking if a string is empty:" << endl;
    if (emptyStr.empty()) {
        cout << "emptyStr is empty." << endl;
    } else {
        cout << "emptyStr is not empty." << endl;
    }

    // Appending to a string
    string appended = str1;
    appended += "C++!"; // Append "C++!" to str1
    cout << "\nAppending to a string:" << endl;
    cout << "appended: " << appended << endl;

    // Get method - used for reading a string with blanks from input streams (cin). Unlike cin>> which stops reading at the first whitespace, .get() reads everything up to a newline
    const int MAX_LENGTH = 100; // Define the maximum length of the input
    char str[MAX_LENGTH];       // Create a character array str to hold the input

    cout << "Enter a string with blanks (up to " << MAX_LENGTH - 1 << " characters): ";
    cin.get(str, MAX_LENGTH);   // Read a line of input including spaces up to MAX_LENGTH-1 -> first arg is a character array to store the input, second arg specifies the maximum number of chars to read

    cout << "You entered: " << str << endl; // Output the string entered

    return 0;
}

