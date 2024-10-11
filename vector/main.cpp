#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include "Person (4).h"

using namespace std;

// In C++, a vector is part of the Standard Template Library (STL) and represents a dynamic
// array. It is a sequence container that provides a flexible array-like data structure.
// Unlike traditional arrays, vectors can grow and shrink dynamically, which makes them
// a powerful and commonly used tool for managing collections of data. It is basically the
// equivalent of a list in python (do not have to declare the size)

// Function to push integers onto a stack
void pushIntegers(stack<int>& s, int count) {
    cout << "Pushing " << count << " integers onto the stack: " << endl;
    for (int i = 0; i < count; i++) {
        s.push(i); // Push integers onto the stack using the built-in function
    }
}

// Function to pop and print elements from the stack
void popAndPrintStack(stack<int>& s) {
    cout << "Popping and printing elements from the stack: " << endl;
    while (!s.empty()) {  // Continue until the stack is empty using the built-in method
        int x = s.top();  // Get the top element using the built-in method
        cout << x << endl;  // Print the top element
        s.pop();  // Pop the top element off using the built-in method
    }
}

// Function to print elements of a vector of type `Person`
void printPersonVector(const vector<Person>& vec) { // Takes argument vector of Person objects, vec is the name
    cout << "Printing Person objects in the vector:" << endl;
    for (int i = 0; i < vec.size(); i++) { // Use built in .size() method
        vec[i].print();  // Call the `print()` method of each `Person` object which is located in the Person class
    }
}

// Function to print elements of a vector of type `int`
void printIntVector(const vector<int>& vec) {
    cout << "Printing integer elements in the vector:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

// Function to print elements of a vector of type `string`
void printStringVector(const vector<string>& vec) {
    cout << "Printing string elements in the vector:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    // Create a stack using the built-in stack container from the C++ STL
    stack<int> s1;

    // Push 5 integers onto the stack using the `pushIntegers` function
    pushIntegers(s1, 5);

    // Pop and print elements from the stack using the `popAndPrintStack` function
    popAndPrintStack(s1);

    // Create vectors of different data types
    vector<int> myList1 = {10, 20, 30, 40, 50};  // Initialize vector of integers
    vector<string> myList2 = {"Alice", "Bob", "Charlie"};  // Initialize vector of strings
    vector<Person> myList3;  // Vector of `Person` objects

    // Create `Person` objects and add them to `myList3`
    Person p1("John", "Doe", "Smith");
    Person p2("Sally", "Smith", "Jones");
    Person p3("James", "Sally", "Thomas");

    myList3.push_back(p1); // .push_back() is a built in method specifically for the vector library, used to add
    myList3.push_back(p2); // an element to the end of the vector
    myList3.push_back(p3);

    myList3.pop_back(); // Built in method to remove the last element from the vector


    // Print each vector using the respective print functions
    printIntVector(myList1);  // Prints integers
    printStringVector(myList2);  // Prints strings
    printPersonVector(myList3);  // Prints Person objects

    // Another example
    string flower;
    stack <string> flowerList;

    string flag = "y";

    while (flag == "y") {
        cout << "Enter flower name: " << endl;
        cin >> flower;
        flowerList.push(flower);

        cout << "Do you wish to add more flowers? (Enter y to continue)" << endl;
        cin >> flag;
    }

    while (!flowerList.empty()) {
        cout << flowerList.top() << " "; // Top is built in
        flowerList.pop(); // Pop is built in
    }

    return 0;
}
