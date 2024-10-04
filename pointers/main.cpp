#include <iostream>

using namespace std;

// A simple struct for demonstration
struct MyStruct {
    int value;
};

// Struct studentType
struct studentType {
    char name[26];
    double gpa;
    int sID;
    char grade;
};

// Example of dynamic memory allocation. The pointer intPtr is assigned the memory address
// of the newly created int on the heap. This allows you to use intPtr to access or modify the value in the heap.
// Dynamic variables cannot be accessed directly because they are unnamed.
int dynamicMemory() {
    int* intPtr = nullptr;        // Declare an integer pointer and initialize it to nullptr

    intPtr = new int(5);          // Dynamically allocate memory for an integer and assign 5 to it.

    cout << *intPtr << endl;  // Dereference the pointer to get the value (output: 5)

    delete intPtr;                // Free the allocated memory to prevent memory leaks
    intPtr = nullptr;             // Set the pointer to nullptr after deletion

    return 0;
}

// Function that demonstrates passing a pointer by value.
void modifyValue(int* ptr) {
    if (ptr) {
        *ptr = 20;  // Must use dereferencing to modify the value stored at memory location
    }
}

// Function that demonstrates passing a pointer by reference. int*& in the parameter means that it receives a reference to the pointer, not a copy
void modifyPointer(int*& ptr) {
    ptr = new int(30); // change the pointer itself to point to a new memory location that stores 30
}

// Function that returns a pointer
int* createDynamicInt() {
    return new int(10);
}

// shallowCopy: When two or more pointers of the same types point to the same memory. Only copies a pointers value
void shallowCopy(int* source, int*& dest) { // int* source is a pointer to the source data, int*& dest is a reference pointer to point to the same location as source
    dest = source; // dest is set to point at the same memory location as source
}

// deepCopy: A deep copy creates a new memory location and copies the value from the source memory to this new location. As a result, source and dest are completely
// independent of each other. Changes made to dest will not affect source and vice versa.
void deepCopy(int* source, int*& dest) { // int* source is a pointer to the source data, int*& dest is a reference pointer to point to the same location as source
    dest = new int(*source); // Allocate new memory and copies the value pointed to by source into this new memory, and stores it in variable dest
}

int main() {
    // Pointer declaration -> Point to null because otherwise it will point to an undefined memory address
    int* intPtr = nullptr;         // Pointer intPtr stores data type int, nullptr is a special keyword in C++ that represents a null pointer constant
    double* doublePtr = nullptr;   // doublePtr is a pointer that stores a double
    MyStruct* structPtr = nullptr; // structPtr is a pointer that stores a struct


    // Dynamic memory allocation: allows you to allocate memory for variables at runtime opposed to compile time
    // Useful for situations where you don't know the size of the data or array beforehand
    intPtr = new int(5);
    doublePtr = new double(10.5);
    structPtr = new MyStruct{15};

    // Pointer reassignment
    int* anotherIntPtr = nullptr;
    anotherIntPtr = intPtr; // Pointing to the same memory
    cout << *anotherIntPtr << endl; // Prints the value assigned to that memory (5)

    // Comparing pointers for equality
    if (intPtr == anotherIntPtr) {
        cout << "intPtr and anotherIntPtr point to the same memory." << endl;
    }

    // Dereferencing operator - is used to access the value stored at the memory address pointed to by a pointer
    cout << "intPtr pointer printed with dereferencing operator: " << *intPtr << endl;
    cout<< "intPtr pointer printed without dereferencing operator: " << intPtr << endl;

    // Store address of student in studentPtr
    studentType student; // Create object student of struct type StudentType
    studentType *studentPtr; // Create studentPtr, a pointer variable of type StudentType
    studentPtr = &student; // Store address of student in studentPtr
    studentPtr->grade = 'A'; // Store char in grade field of student

    // Accessing struct member using the arrow operator
    cout << "Struct value: " << structPtr->value << endl;

    // Dynamic array allocation -> an array during program execution
    int size = 5;
    int* dynamicArray = new int[size];

    // Assign value using array notation
    dynamicArray[0] = 10;

    // Initializing the dynamic array
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i * 2; // Assigning values
    }

    // Displaying dynamic array contents
    cout << "Dynamic Array: ";
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    // Passing pointer by value, meaning the pointer's value is copied and used in the function
    modifyValue(intPtr);
    cout << "Value after modifyValue: " << *intPtr << endl;

    // Passing pointer by reference, meaning any changes to the pointer itself will reflect back in the caller
    modifyPointer(intPtr);
    cout << "Value after modifyPointer: " << *intPtr << endl;

    // Returning a pointer from a function
    int* returnedPtr = createDynamicInt(); // A pointer returnedPtr is created and initialized using the return value of the createDynamicInt function
    cout << "Returned value: " << *returnedPtr << endl; // Prints the value stored at the memory location that returnedPtr points to

    // Shallow and deep copies
    int* shallowCopyPtr = nullptr; // Initialize shallowCopyPtr to nullptr
    shallowCopy(intPtr, shallowCopyPtr); // Call shallowCopy
    cout << "Shallow copy value: " << *shallowCopyPtr << endl;

    int* deepCopyPtr = nullptr; // Initialize deepCopyPtr to a nullptr
    deepCopy(intPtr, deepCopyPtr); // Call deepcopy
    cout << "Deep copy value: " << *deepCopyPtr << endl;

    // Clean up
    delete intPtr;           // Delete dynamic int
    delete doublePtr;       // Delete dynamic double
    delete structPtr;       // Delete struct
    delete[] dynamicArray;  // Delete dynamic array
    delete returnedPtr;     // Delete returned dynamic int
    delete shallowCopyPtr;  // Shallow copy does not require delete since it points to the same memory as intPtr
    delete deepCopyPtr;     // Delete deep copied value

    return 0;
}

