#include <iostream>
using namespace std;

#include "linkedList.h"

int main() {
    LinkedList list; // Create an instance of the linked list class

    // Populate the linked list with some integers
    list.append(10);
    list.append(20);
    list.append(30);
    list.prepend(5);

    // Test the list operations
    cout << "Initial list: ";
    list.printList();
    cout << endl;

    // Check if the list is empty
    cout << "Is the list empty? " << (list.isEmpty() ? "Yes" : "No") << endl;
    cout << endl;

    // Get the length of the list
    cout << "Length of the list: " << list.length() << endl;
    cout << endl;

    // Remove the first element
    int valuePopped = list.popFirst();
    cout << "Popped value: " << valuePopped << endl;
    cout << "List after pop first: " << endl;
    list.printList();
    cout << endl;

    // Remove the last element
    int valuePopped2 = list.pop();
    cout << "Popped value: " << valuePopped2 << endl;
    cout << "List after pop: " << endl;
    list.printList();
    cout << endl;

    // Refresh the list
    cout << "Refreshed list: " << endl;
    list.append(30);
    list.printList();
    cout << endl;

    // Get a node by index
    int value = list.get(2);
    cout << "Value at index 2: " << value << endl;

    // Insert a node
    cout << "Inserting a node at index 1: " << endl;
    list.insert(1, 1);
    list.printList();
    cout << endl;

    // Delete a node by value
    cout << "Deleting node with value 1: " << endl;
    list.remove(1);
    list.printList();
    cout << endl;

    return 0;
}
