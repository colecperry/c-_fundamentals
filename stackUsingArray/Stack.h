#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack {
public:
    Stack(int size = 10);     // Constructor with default stack size of 10
    ~Stack();                 // Destructor to clean up dynamic memory

    void push(int value);     // Push a value onto the stack
    int pop();                // Pop a value off the stack
    int peek() const;         // Peek at the top value without removing it
    bool isEmpty() const;     // Check if the stack is empty
    bool isFull() const;      // Check if the stack is full
    void print() const;       // Print the stack elements

private:
    void resize();            // Resize the array if it becomes full
    int* arr;                 // Pointer to the array that will hold stack elements
    int top;                  // Index of the top element in the stack
    int capacity;             // Maximum number of elements the stack can hold
};

#endif // STACK_H