#include "stack.h"
#include <iostream>

using namespace std;

int main() {
    stack s;  // Create an instance of the stack class

    // Demonstrate isEmpty() on an empty stack
    cout << "Is the stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    // Push elements onto the stack
    cout << "Pushing 10 onto the stack." << endl;
    s.push(10);
    cout << "Pushing 20 onto the stack." << endl;
    s.push(20);
    cout << "Pushing 30 onto the stack." << endl;
    s.push(30);

    // Display the stack
    cout << "Stack after pushing 10, 20, 30: ";
    s.print();

    // Peek at the top element
    cout << "Peek at the top of the stack: " << s.peek() << endl;

    // Pop an element from the stack
    cout << "Popping from the stack: " << s.pop() << endl;
    cout << "Stack after popping: ";
    s.print();

    // Peek at the top element again
    cout << "Peek at the top of the stack: " << s.peek() << endl;

    // Push another element
    cout << "Pushing 40 onto the stack." << endl;
    s.push(40);
    cout << "Stack after pushing 40: ";
    s.print();

    // Demonstrate isEmpty() on a non-empty stack
    cout << "Is the stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    // Pop all elements to make the stack empty
    cout << "Popping from the stack: " << s.pop() << endl;
    cout << "Popping from the stack: " << s.pop() << endl;
    cout << "Popping from the stack: " << s.pop() << endl;

    // Try to pop from an empty stack
    cout << "Popping from an empty stack: " << s.pop() << endl;

    // Check if the stack is empty now
    cout << "Is the stack empty now? " << (s.isEmpty() ? "Yes" : "No") << endl;

    // Display the stack after all pops
    cout << "Stack after popping all elements: ";
    s.print();

    // Push a few more elements onto the stack
    cout << "Pushing 50 onto the stack." << endl;
    s.push(50);
    cout << "Pushing 60 onto the stack." << endl;
    s.push(60);

    // Display the stack again
    cout << "Stack after pushing 50 and 60: ";
    s.print();

    // Peek at the top element
    cout << "Peek at the top of the stack: " << s.peek() << endl;

    // Demonstrate deleteStack()
    cout << "Deleting the entire stack." << endl;
    s.deleteStack();
    cout << "Stack after deletion: ";
    s.print();

    // Check if the stack is empty after deletion
    cout << "Is the stack empty after deletion? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
