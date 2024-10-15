#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>

using namespace std;

// Function to demonstrate vector operations
void vectorOperations() {
    cout << "\n--- Vector Operations ---" << endl;

    vector<int> myVector; // Declare a vector using STL Library

    // Insertion: Adding elements to the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Display the vector using an iterator
    cout << "Vector elements: ";
    vector<int>::iterator it;
    for (it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Vector size and capacity
    cout << "Vector size: " << myVector.size() << endl;
    cout << "Vector capacity: " << myVector.capacity() << endl;

    // Deletion: Removing the last element
    myVector.pop_back();
    cout << "Vector after pop_back: ";
    for (it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Check if the vector is empty
    cout << "Is the vector empty? " << (myVector.empty() ? "Yes" : "No") << endl;

    // Insert at a specific position
    myVector.insert(myVector.begin() + 1, 15);
    cout << "Vector after inserting 15 at position 1: ";
    for (it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Erase an element at a specific position
    myVector.erase(myVector.begin());
    cout << "Vector after erasing the first element: ";
    for (it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Function to demonstrate deque operations
void dequeOperations() {
    cout << "\n--- Deque Operations ---" << endl;

    deque<int> myDeque; // Declare a deque (doubly ended queue) with type integer

    // Insertion: Adding elements to the front and back of the deque
    myDeque.push_back(10);
    myDeque.push_front(20);
    myDeque.push_back(30);
    myDeque.push_front(40);

    // Display the deque
    cout << "Deque elements: ";
    deque<int>::iterator it;
    for (it = myDeque.begin(); it != myDeque.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Size and access methods
    cout << "Deque size: " << myDeque.size() << endl;
    cout << "Front element: " << myDeque.front() << endl;
    cout << "Back element: " << myDeque.back() << endl;

    // Deletion from both ends
    myDeque.pop_back();
    myDeque.pop_front();
    cout << "Deque after pop_back and pop_front: ";
    for (it = myDeque.begin(); it != myDeque.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Check if deque is empty
    cout << "Is the deque empty? " << (myDeque.empty() ? "Yes" : "No") << endl;

    // Insert at a specific position in the middle
    myDeque.insert(myDeque.begin() + 1, 25);
    cout << "Deque after inserting 25 at position 1: ";
    for (it = myDeque.begin(); it != myDeque.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Erase an element at a specific position in the middle
    myDeque.erase(myDeque.begin() + 1);
    cout << "Deque after erasing element at position 1: ";
    for (it = myDeque.begin(); it != myDeque.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Function to demonstrate list operations : STL list uses a doubly linked list
void listOperations() {
    cout << "\n--- List Operations ---" << endl;

    list<int> myList;

    // Insertion: Adding elements to the list
    myList.push_back(100);
    myList.push_back(200);
    myList.push_front(300);
    myList.push_back(400);

    // Display the list
    cout << "List elements: ";
    list<int>::iterator it;
    for (it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // List size
    cout << "List size: " << myList.size() << endl;

    // Deletion: Removing elements from the front and back
    myList.pop_front();
    myList.pop_back();
    cout << "List after pop_front and pop_back: ";
    for (it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert and erase using an iterator
    it = myList.begin();
    advance(it, 1);  // Move iterator a specified number of steps forward
    myList.insert(it, 150); // Insert a value at the position pointed to by the iterator
    cout << "List after inserting 150 at position 1: ";
    for (it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Erase the element at position 1
    it = myList.begin();
    advance(it, 1);  // Move iterator to the second position
    myList.erase(it);
    cout << "List after erasing the element at position 1: ";
    for (it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Function to demonstrate stack operations
void stackOperations() {
    cout << "\n--- Stack Operations ---" << endl;

    stack<int> myStack; // Declare a stack with type integer

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Stack size
    cout << "Stack size: " << myStack.size() << endl;

    // Display and pop all elements from the stack
    cout << "Stack elements (popped): ";
    while (!myStack.empty()) {
        cout << myStack.top() << " "; // Access the top element
        myStack.pop(); // Remove the top element
    }
    cout << endl;

    // Check if stack is empty
    cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;
}

// Function to demonstrate queue operations
void queueOperations() {
    cout << "\n--- Queue Operations ---" << endl;

    queue<int> myQueue; // Declare a queue with type integer

    // Push elements onto the queue
    myQueue.push(100);
    myQueue.push(200);
    myQueue.push(300);

    // Queue size
    cout << "Queue size: " << myQueue.size() << endl;

    // Display and pop all elements from the queue
    cout << "Queue elements (popped): ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " "; // Access the front element
        myQueue.pop(); // Remove the front element
    }
    cout << endl;

    // Check if queue is empty
    cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;
}

int main() {
    // Call vector operations
    vectorOperations();

    // Call deque operations
    dequeOperations();

    // Call list operations
    listOperations();

    // Call stack operations
    stackOperations();

    // Call queue operations
    queueOperations();

    return 0;
}
