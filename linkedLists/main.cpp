#include <iostream>  // Include the iostream library for input and output operations
using namespace std;

// Define a node structure for a linked list
struct NodeType {
    int data;           // Integer data to store the value of the node
    NodeType *link;     // Pointer to the next node in the list
};

// Print all elements in the linked list starting from the head node
void printList(NodeType *head) {
    NodeType *current = head;  // Create a temporary pointer `current` and set it to the head node
    while (current != nullptr) {  // Traverse the list until `current` reaches nullptr (end of list)
        cout << current->data << " ";  // Print the data of the current node
        current = current->link;  // Move the `current` pointer to the next node in the list
    }
    cout << endl;  // Print a new line after printing all elements
}

// Check if the linked list is empty by verifying if the head pointer is nullptr
bool isEmpty(NodeType *head) {
    return head == nullptr;  // Return true if head is nullptr, meaning the list is empty
}

// Calculate the length of the linked list by counting the number of nodes
int length(NodeType *head) {
    int count = 0;  // Initialize a counter to 0
    NodeType *current = head;  // Create a temporary pointer `current` set to the head node
    while (current != nullptr) {  // Traverse the list until `current` reaches nullptr (end of list)
        count++;  // Increment the counter for each node encountered
        current = current->link;  // Move the `current` pointer to the next node in the list
    }
    return count;  // Return the total number of nodes in the list
}

// Destroy the linked list by deleting each node and freeing up memory
void destroyList(NodeType *&head, NodeType *&tail) {
    NodeType *current = head;  // Create a temporary pointer `current` and set it to the head node
    while (current != nullptr) {  // Traverse the list and delete each node
        NodeType *temp = current;  // Store the current node in a temporary pointer `temp`
        current = current->link;  // Move `current` to the next node before deleting the current node
        delete temp;  // Delete the node stored in `temp` to free memory
    }
    head = nullptr;  // Set `head` to nullptr to indicate the list is now empty
    tail = nullptr;  // Set `tail` to nullptr to indicate the list is now empty
    cout << "The list has been destroyed." << endl;  // Print a message indicating the list has been destroyed
}

// Append a new node with the given value to the end of the list using the tail pointer
void append(NodeType *&head, NodeType *&tail, int value) {
    NodeType *newNode = new NodeType{value, nullptr};  // Dynamically create a new node with the given value
    if (head == nullptr) {  // Check if the list is empty
        head = newNode;  // Set both head and tail to the new node since it is the first node
        tail = newNode;  // Set both head and tail to the new node since it is the first node
    } else {
        tail->link = newNode;  // Link the current tail node to the new node
        tail = newNode;  // Move the tail pointer to the new node, making it the new end of the list
    }
}

// Prepend a new node with the given value to the beginning of the list
void prepend(NodeType *&head, NodeType *&tail, int value) {
    NodeType *newNode = new NodeType{value, nullptr};  // Dynamically create a new node with the given value
    if (head == nullptr) {  // Check if the list is empty
        head = newNode;  // Set both head and tail to the new node since it is the first node
        tail = newNode;  // Set both head and tail to the new node since it is the first node
    } else {
        newNode->link = head;  // Link the new node to the current head node
        head = newNode;  // Update head to the new node, making it the new beginning of the list
    }
}

// Remove and return the last element from the list using the tail pointer
int pop(NodeType *&head, NodeType *&tail) {
    if (head == nullptr) {  // Check if the list is empty
        cout << "List is empty!" << endl;  // Print an error message if the list is empty
        return -1;  // Return -1 to indicate that there are no elements to pop
    }
    if (head->link == nullptr) {  // Check if there is only one element in the list
        int value = head->data;  // Store the value of the single node
        delete head;  // Delete the node
        head = nullptr;  // Set head to nullptr to indicate the list is now empty
        tail = nullptr;  // Set tail to nullptr to indicate the list is now empty
        return value;  // Return the value of the removed node
    }
    NodeType *current = head;  // Create a temporary pointer `current` set to the head node
    while (current->link != tail) {  // Traverse the list to find the node before the last node
        current = current->link;  // Move `current` to the next node
    }
    int value = tail->data;  // Store the value of the last node
    delete tail;  // Delete the last node
    current->link = nullptr;  // Set the link of the second last node to nullptr
    tail = current;  // Update tail to point to the new last node
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
    head = head->link;  // Move the head pointer to the next node in the list
    delete temp;  // Delete the original head node
    if (head == nullptr) {  // If the list is now empty, update the tail pointer
        tail = nullptr;  // Set tail to nullptr since the list is empty
    }
    return value;  // Return the value of the removed node
}

// Get the value at a specific position in the list
int get(NodeType *head, int position) {
    NodeType *current = head;  // Create a temporary pointer `current` set to the head node
    int index = 0;  // Initialize an index to track the current position
    while (current != nullptr) {  // Traverse the list until `current` reaches nullptr
        if (index == position) {  // Check if the current index matches the desired position
            return current->data;  // Return the value at the desired position
        }
        index++;  // Increment the index
        current = current->link;  // Move `current` to the next node
    }
    cout << "Position out of range!" << endl;  // Print an error message if position is invalid
    return -1;  // Return -1 to indicate that the position was out of range
}

// Insert a new node with the given value at a specific position in the list
void insert(NodeType *&head, NodeType *&tail, int position, int value) {
    NodeType *newNode = new NodeType{value, nullptr};  // Dynamically create a new node with the given value
    if (position == 0) {  // If position is 0, use the prepend function
        prepend(head, tail, value);
        return;
    }
    NodeType *current = head;  // Create a temporary pointer `current` set to the head node
    int index = 0;  // Initialize an index to track the current position
    while (current != nullptr && index < position - 1) {  // Traverse the list to find the insertion point
        current = current->link;  // Move `current` to the next node
        index++;  // Increment the index
    }
    if (current == nullptr) {  // Check if the insertion position is out of range
        cout << "Position out of range!" << endl;  // Print an error message if position is invalid
        delete newNode;  // Delete the newly created node to avoid memory leak
        return;
    }
    newNode->link = current->link;  // Link the new node to the next node
    current->link = newNode;  // Link the previous node to the new node
    if (newNode->link == nullptr) {  // Update the tail pointer if the new node is the last node
        tail = newNode;  // Set tail to the new node
    }
}

// Remove the first node with a specific value from the list
void remove(NodeType *&head, NodeType *&tail, int value) {
    if (head == nullptr) {  // Check if the list is empty
        cout << "List is empty!" << endl;  // Print an error message if the list is empty
        return;
    }
    if (head->data == value) {  // Check if the value is at the head node
        NodeType *temp = head;  // Store the head node in a temporary pointer `temp`
        head = head->link;  // Move head to the next node
        delete temp;  // Delete the original head node
        if (head == nullptr) {  // If the list is now empty, update the tail pointer
            tail = nullptr;  // Set tail to nullptr
        }
        return;
    }
    NodeType *current = head;  // Create a temporary pointer `current` set to the head node
    while (current->link != nullptr && current->link->data != value) {  // Traverse the list to find the node before the one to be removed
        current = current->link;  // Move `current` to the next node
    }
    if (current->link == nullptr) {  // Check if the value was not found
        cout << "Value not found!" << endl;  // Print an error message if the value was not found
    } else {
        NodeType *temp = current->link;  // Store the node to be removed in a temporary pointer `temp`
        current->link = temp->link;  // Bypass the node to be removed
        if (current->link == nullptr) {  // Update tail pointer if the removed node was the last node
            tail = current;  // Set tail to the new last node
        }
        delete temp;  // Delete the node to free memory
    }
}

// Main function to test the linked list operations
int main() {
    NodeType *head = nullptr;  // Create pointer `head` and initialize it to nullptr (empty list)
    NodeType *tail = nullptr;  // Create pointer `tail` and initialize it to nullptr (empty list)
    int num;  // Variable to store input integers

    // Input a list of integers ending with 999
    cout << "Enter a list of integers ending with 999:" << endl;
    cin >> num;

    // Populate the linked list with input integers
    while (num != 999) {  // Continue until the user enters 999
        append(head, tail, num);  // Append each integer to the linked list
        cout << "Enter the next number: " << endl;
        cin >> num;
    }

    // Test the linked list operations
    cout << "Initial List: ";
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

