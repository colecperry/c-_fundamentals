//
// Created by Cole Perry on 10/10/24.
//

#include "Stack.h"
#include <iostream>
using namespace std;

// Constructor: initialize the stack with the given size
Stack::Stack(int size) { // Initialize stack with arg size
    arr = new int[size]; // Allocate memory for the stack array
    top = -1; // Initialize the top to -1, indicating an empty stack
    capacity = size; // Set the capacity to the given size
}

// Destructor: Clean up dynamic memory
Stack::~Stack() {
    delete[] arr; // Deallocate the memory for the stack array
}

// Push a value onto the stack
void Stack::push(int value) {
    if (isFull()) { // Check if the stack is full
        resize();
    }
    top++; // Increment the top index
    arr[top] = value; // Assign the value to the current top index
}

// Pop a value off the top of the stack
int Stack::pop() {
    if (isEmpty()) { // Check if the stack is empty
        return -1;
    }
    int returnValue = arr[top]; // Store the current top value in a temp variable
    top --; // Decrement the top index
    return returnValue; // Return the stored value
}

// Peek at the top value and return it
int Stack::peek() const {
    if (isEmpty()) { // Check if the stack is empty
        return -1;
    }
    return arr[top]; // Return the value at the top index
}

// Check if the stack is empty
bool Stack::isEmpty() const {
    return top == -1; // If the top is -1, the stack is empty
}

// Check if the stack is full
bool Stack::isFull() const {
    return top == capacity - 1; // If the top index is equal to capacity - 1, the stack is full
}

// Resize the array if full
void Stack::resize() {
    int newCapacity = capacity * 2; // Double the capacity
    int* newArr = new int[newCapacity]; // Create a new array with larger capacity

    // Copy elements from the old array to the new array
    for (int i = 0; i < capacity; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr; // Delete the old array
    arr = newArr; // Update arr to point at the new array
    capacity = newCapacity; // Update the capacity

    cout << "Stack resized to capacity: " << capacity << endl;

}

// Print the elements of the stack
void Stack::print() const {
    if (isEmpty()) {
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Copy the contents of another stack into this stack
void Stack::copyStack(const Stack& source) {
    // Step 1: Allocate new memory for the copied stack's array
    int* newArr = new int[source.capacity];

    // Step 2: Copy the elements from the source stack's array to the new array
    for (int i = 0; i <= source.top; i++) {
        newArr[i] = source.arr[i];
    }

    // Step 3: Delete the current stack's array
    delete[] arr;

    // Step 4: Update this stack's array, capacity, and top with the copied values
    arr = newArr;
    capacity = source.capacity;
    top = source.top;

    cout << "Stack copied successfully." << endl;
}


