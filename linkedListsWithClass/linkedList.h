//
// Created by Cole Perry on 10/10/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Define a Node struct to represent each element in the linked list
struct Node {
    int data;
    Node *link;

    // Constructor to initialize node data
    Node(int value) : data(value), link(nullptr) {};
};


// Define the linkedList class
class LinkedList {
public:
    LinkedList(); // Default constructor
    ~LinkedList(); //Destructor to delete the Linked List

    // Member functions
    void printList() const;
    bool isEmpty() const;
    int length() const;
    void destroyList();
    void append(int value);
    void prepend(int value);
    int pop();
    int popFirst();
    int get(int index) const;
    void insert(int index, int value);
    void remove(int value);

private:
    Node *head;
    Node *tail;
};



#endif //LINKEDLIST_H
