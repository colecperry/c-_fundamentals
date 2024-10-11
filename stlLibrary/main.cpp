#include <iostream>
#include <vector>
#include <deque>
#include <list>

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
    vector<int>::iterator it; // Declare an iterator "it" of type vector<int>::iterator
    for (it = myVector.begin(); it != myVector.end(); ++it) { // it = myVector.begin() is initializing the iterator
        cout << *it << " "; // it to point to the first element of the vector, and the loop continues as long as it
    } // does not point to the position after the last element in the vector
    cout << endl;

    // Deletion: Removing the last element
    myVector.pop_back();
    cout << "Vector after pop_back: ";
    for (it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

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
    // Print the vector
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

    // Deletion from both ends
    myDeque.pop_back();
    myDeque.pop_front();
    cout << "Deque after pop_back and pop_front: ";
    for (it = myDeque.begin(); it != myDeque.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

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

    // Deletion: Removing elements from the front and back
    myList.pop_front();
    myList.pop_back();
    cout << "List after pop_front and pop_back: ";
    for (it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert and erase using an iterator-> must use iterator because of DLL
    it = myList.begin(); // "it" is an iterator of type list<int>::iterator that points at the first element
    advance(it, 1);  // Move iterator a specified number of steps forward
    myList.insert(it, 150); // Insert a value at the position pointed to by the iterator
    // Print the list
    cout << "List after inserting 150 at position 1: ";
    for (it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " "; // Dereferencing to access the value of the element
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

int main() {
    // Call vector operations
    vectorOperations();

    // Call deque operations
    dequeOperations();

    // Call list operations
    listOperations();

    return 0;
}
