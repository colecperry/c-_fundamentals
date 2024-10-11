#include "Stack.h"

int main() {
    Stack s(3);  // Create a stack with initial capacity of 3

    // Test isEmpty() on an empty stack
    cout << "Is the stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Print the stack
    cout << "Stack after pushing 10, 20, and 30: ";
    s.print();

    // Push another element to trigger resizing
    cout << "Pushing 40 to trigger resize..." << endl;
    s.push(40);  // This should trigger a resize
    s.print();

    // Push more elements to test further resizing
    s.push(50);
    s.push(60);
    s.push(70);

    // Print the stack after more pushes
    cout << "Stack after pushing 40, 50, 60, and 70: ";
    s.print();

    // Peek at the top element
    cout << "Top element is: " << s.peek() << endl;

    // Pop elements from the stack
    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;

    // Display the stack after popping
    s.print();

    // Peek again
    cout << "Top element is: " << s.peek() << endl;

    // Empty the stack completely
    while (!s.isEmpty()) {
        cout << "Popped element: " << s.pop() << endl;
    }

    // Check if the stack is empty now
    cout << "Is the stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    // Try to pop from an empty stack
    s.pop();  // This should trigger a stack underflow message

    return 0;
}
