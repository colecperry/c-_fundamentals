#include <iostream>
using namespace std;

// Define a node structure for a doubly linked list
struct NodeType {
    int data;          // Variable data stores an integer value at each node
    NodeType *next;    // Pointer next points to the next node in the list
    NodeType *prev;    // Pointer prev points to the previous node in the list
};

// Print all elements in the doubly linked list starting from the head node
void printList(NodeType *head) {
    NodeType *current = head;  // Create a temporary pointer `current` and set it to the head node
    while (current != nullptr) {  // Traverse the list until `current` reaches nullptr (end of list)
        cout << current->data << " ";  // Print the data of the current node
        current = current->next;  // Move the `current` pointer to the next node in the list
    }
    cout << endl;  // Print a new line after printing all elements
}

// Print the doubly linked list in reverse order starting from the tail node
void printListReverse(NodeType *tail) {
    NodeType *current = tail;  // Create a temporary pointer `current` and set it to the tail node
    while (current != nullptr) {  // Traverse the list until `current` reaches nullptr (start of list)
        cout << current->data << " ";  // Print the data of the current node
        current = current->prev;  // Move the `current` pointer to the previous node in the list
    }
    cout << endl;  // Print a new line after printing all elements in reverse
}

// Check if the doubly linked list is empty by verifying if the head pointer is nullptr
bool isEmpty(NodeType *head) {
    return head == nullptr;  // Return true if head is nullptr, meaning the list is empty
}

// Calculate the length of the doubly linked list by counting the number of nodes
int length(NodeType *head) {
    int count = 0;  // Initialize a counter to 0
    NodeType *current = head;  // Create a temporary pointer `current` set to the head node
    while (current != nullptr) {  // Traverse the list until `current` reaches nullptr (end of list)
        count++;  // Increment the counter for each node encountered
        current = current->next;  // Move the `current` pointer to the next node in the list
    }
    return count;  // Return the total number of nodes in the list
}

// Get the value at a specific position in the list
int get(NodeType *head, int position) {
    NodeType *current = head;  // Create a temporary pointer `current` and set it to the head node
    int index = 0;  // Initialize a counter to keep track of the current position
    while (current != nullptr && index < position) {  // Traverse the list until reaching the position
        current = current->next;  // Move to the next node
        index++;  // Increment the index
    }
    if (current != nullptr) {  // If the desired position is found
        return current->data;  // Return the data at that position
    } else {
        cout << "Position out of range!" << endl;
        return -1;  // Return -1 if position is out of range
    }
}

// Set a new value at a specific position in the list
void set(NodeType *head, int position, int value) {
    NodeType *current = head;  // Create a temporary pointer `current` and set it to the head node
    int index = 0;  // Initialize a counter to keep track of the current position
    while (current != nullptr && index < position) {  // Traverse the list until reaching the position
        current = current->next;  // Move to the next node
        index++;  // Increment the index
    }
    if (current != nullptr) {  // If the desired position is found
        current->data = value;  // Set the new value at that position
    } else {
        cout << "Position out of range!" << endl;
    }
}

// Insert a new node with the given value at a specific position in the list
void insert(NodeType *&head, NodeType *&tail, int position, int value) {
    NodeType *newNode = new NodeType{value, nullptr, nullptr};  // Create a new node with the given value
    if (position == 0) {  // If position is 0, insert at the beginning
        prepend(head, tail, value);
        return;
    }
    NodeType *current = head;  // Create a temporary pointer `current` and set it to the head node
    int index = 0;  // Initialize a counter to keep track of the current position
    while (current != nullptr && index < position - 1) {  // Traverse to the node before the desired position
        current = current->next;  // Move to the next node
        index++;  // Increment the index
    }
    if (current != nullptr) {  // If position is valid and within range
        newNode->next = current->next;  // Link the new node to the next node
        if (current->next != nullptr) {
            current->next->prev = newNode;  // Update the previous pointer of the next node
        }
        newNode->prev = current;  // Link the new node's previous pointer to the current node
        current->next = newNode;  // Link the current node to the new node

        if (newNode->next == nullptr) {  // If newNode is now the last node, update the tail pointer
            tail = newNode;
        }
    } else {
        cout << "Position out of range!" << endl;
        delete newNode;  // Delete the new node to avoid memory leak
    }
}

// Remove the first node with a specific value from the list
void remove(NodeType *&head, NodeType *&tail, int value) {
    NodeType *current = head;  // Create a temporary pointer `current` and set it to the head node
    while (current != nullptr && current->data != value) {  // Traverse until the value is found
        current = current->next;  // Move to the next node
    }
    if (current != nullptr) {  // If the value is found
        if (current == head) {  // If the node to be removed is the head node
            head = head->next;  // Update the head pointer
            if (head != nullptr) {
                head->prev = nullptr;  // Update the previous pointer of the new head node
            }
        } else if (current == tail) {  // If the node to be removed is the tail node
            tail = tail->prev;  // Update the tail pointer
            tail->next = nullptr;  // Set the next pointer of the new tail to nullptr
        } else {
            current->prev->next = current->next;  // Bypass the current node in the list
            if (current->next != nullptr) {
                current->next->prev = current->prev;  // Update the previous pointer of the next node
            }
        }
        delete current;  // Delete the node
    } else {
        cout << "Value not found in the list!" << endl;
    }
}

// Append a new node with the given value to the end of the list using the tail pointer
void append(NodeType *&head, NodeType *&tail, int value) {
    NodeType *newNode = new NodeType{value, nullptr, nullptr};  // Create a new node with the given value and null next/prev pointers
    if (head == nullptr) {  // Check if the list is empty
        head = newNode;  // Set both head and tail to the new node since it is the first node
        tail = newNode;  // Set both head and tail to the new node since it is the first node
    } else {
        newNode->prev = tail;  // Link the new node's prev pointer to the current tail node
        tail->next = newNode;  // Link the current tail's next pointer to the new node
        tail = newNode;  // Move the tail pointer to the new node, making it the new end of the list
    }
}

// Prepend a new node with the given value to the beginning of the list
void prepend(NodeType *&head, NodeType *&tail, int value) {
    NodeType *newNode = new NodeType{value, head, nullptr};  // Create a new node with the given value, next as head, and prev as nullptr
    if (head == nullptr) {  // Check if the list is empty
        head = newNode;  // Set both head and tail to the new node since it is the first node
        tail = newNode;  // Set both head and tail to the new node since it is the first node
    } else {
        head->prev = newNode;  // Link the current head's prev pointer to the new node
        head = newNode;  // Update head to the new node, making it the new beginning of the list
    }
}

// Remove and return the last element from the list using the tail pointer
int pop(NodeType *&head, NodeType *&tail) {
    if (head == nullptr) {  // Check if the list is empty
        cout << "List is empty!" << endl;  // Print an error message if the list is empty
        return -1;  // Return -1 to indicate that there are no elements to pop
    }
    int value = tail->data;  // Store the value of the last node
    NodeType *temp = tail;  // Store the tail node in a temporary pointer `temp`
    if (head == tail) {  // Check if there is only one element in the list
        head = nullptr;  // Set head to nullptr to indicate the list is now empty
        tail = nullptr;  // Set tail to nullptr to indicate the list is now empty
    } else {
        tail = tail->prev;  // Move the tail pointer to the previous node
        tail->next = nullptr;  // Set the new tail's next pointer to nullptr
    }
    delete temp;  // Delete the original tail node
    return value;  // Return the value of the removed node
}

// Remove and return the first element from the list
int popFirst(NodeType *&head, NodeType *&tail) {
    if (head == nullptr) {  // Check if the list is empty
        cout << "List is empty!" << endl;  // Print an error message if the list is empty
        return -1;  // Return -1 to indicate that there are no elements to pop
    }
    int value = head->data;  // Store the value of the first node
    NodeType *temp = head;  // Store the head node in a temporary pointer `temp`
    if (head == tail) {  // Check if there is only one element in the list
        head = nullptr;  // Set head to nullptr to indicate the list is now empty
        tail = nullptr;  // Set tail to nullptr to indicate the list is now empty
    } else {
        head = head->next;  // Move the head pointer to the next node
        head->prev = nullptr;  // Set the new head's prev pointer to nullptr
    }
    delete temp;  // Delete the original head node
    return value;  // Return the value of the removed node
}

// Destroy the entire doubly linked list by deleting each node and freeing up memory
void destroyList(NodeType *&head, NodeType *&tail) {
    NodeType *current = head;  // Create a temporary pointer `current` and set it to the head node
    while (current != nullptr) {  // Traverse the list and delete each node
        NodeType *temp = current;  // Store the current node in a temporary pointer `temp`
        current = current->next;  // Move `current` to the next node before deleting the current node
        delete temp;  // Delete the node stored in `temp` to free memory
    }
    head = nullptr;  // Set head to nullptr since the list is now empty
    tail = nullptr;  // Set tail to nullptr since the list is now empty
    cout << "The list has been destroyed." << endl;  // Print a message indicating the list has been destroyed
}

// Main function to test the doubly linked list operations
int main() {
    NodeType *head = nullptr;  // Create pointer `head` and initialize it to nullptr (empty list)
    NodeType *tail = nullptr;  // Create pointer `tail` and initialize it to nullptr (empty list)
    int num;  // Variable to store input integers

    // Input a list of integers ending with 999
    cout << "Enter a list of integers ending with 999:" << endl;
    cin >> num;

    // Populate the doubly linked list with input integers
    while (num != 999) {  // Continue until the user enters 999
        append(head, tail, num);  // Append each integer to the linked list
        cout << "Enter the next number: " << endl;
        cin >> num;
    }

    // Test the doubly linked list operations
    cout << "Initial List: ";
    printList(head);

    // Print the list in reverse order
    cout << "List in Reverse Order: ";
    printListReverse(tail);

    // Test the get function
    cout << "Value at position 2: " << get(head, 2) << endl;

    // Test the set function
    set(head, 2, 42);
    cout << "After setting value at position 2 to 42: ";
    printList(head);

    // Test the insert function
    insert(head, tail, 1, 99);
    cout << "After inserting 99 at position 1: ";
    printList(head);

    // Test the remove function
    remove(head, tail, 42);
    cout << "After removing 42 from the list: ";
    printList(head);

    // Check if the list is empty
    cout << "Is the list empty? " << (isEmpty(head) ? "Yes" : "No") << endl;

    // Get the length of the list
    cout << "Length of the list: " << length(head) << endl;

    // Destroy the list and print the result
    destroyList(head, tail);
    cout << "After destroying the list, is it empty? " << (isEmpty(head) ? "Yes" : "No") << endl;

    return 0;
}

