#include <iostream>
using namespace std;

// Stacks using linked list

// Node structure to represent each element in the stack
class Node {
public:
    int data;       // Data stored in the node
    Node *next;     // Pointer to the next node in the stack

    // Constructor to initialize a new node
    Node(int value) : data(value), next(nullptr) {}
};

// Stack class definition
class Stack {
private:
    Node *top;  // Pointer to the top node of the stack

public:
    // Constructor to initialize an empty stack
    Stack() : top(nullptr) {}

    // Method to push an element onto the stack
    void push(int value) {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    // Method to pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot pop." << endl;
            return -1; // Return an error value
        }
        Node *temp = top;
        int poppedValue = top->data;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    // Method to get the top element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot peek." << endl;
            return -1; // Return an error value
        }
        return top->data;
    }

    // Method to check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Method to print all elements in the stack
    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node *current = top;
        cout << "Stack elements: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Destructor to clean up allocated memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack stack;
    int choice, value;

    cout << "Stack Operations:\n1. Push\n2. Pop\n3. Peek\n4. Print Stack\n5. Exit" << endl;

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                cout << value << " pushed onto the stack." << endl;
                break;
            case 2:
                value = stack.pop();
                if (value != -1)
                    cout << value << " popped from the stack." << endl;
                break;
            case 3:
                value = stack.peek();
                if (value != -1)
                    cout << "Top element is: " << value << endl;
                break;
            case 4:
                stack.printStack();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please choose again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}

