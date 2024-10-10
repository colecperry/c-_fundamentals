//
// Created by Cole Perry on 10/10/24.
//

#include "linkedList.h"
#include <iostream>
#include <list>
using namespace std;

// Initialize an empty list
LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

// Destructor: Destroy the linked list and free memory
LinkedList::~LinkedList() {
    destroyList();
}

// Print List
void LinkedList::printList() const {
    Node *current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->link;
    }
}

// Check if the list is empty
bool LinkedList::isEmpty() const {
    return head == nullptr;
}

// Calculate the length of the linked list
int LinkedList::length() const {
    int length = 0;
    Node *current = head;
    while (current != nullptr) {
        length++;
        current = current->link;
    }
    return length;
}

// Destroy List
void LinkedList::destroyList() {
    Node *current = head;
    while (current != nullptr) {
        Node *temp = current;
        current = current->link;
        delete temp;
    }
    head = nullptr;
    tail = nullptr;
}

void LinkedList::append(int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->link = newNode;
        tail = newNode;
    }
}

void LinkedList::prepend(int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->link = head;
        head = newNode;
    }
}

int LinkedList::pop() {
    if (head == nullptr) {
        return -1;
    }
    Node *current = head;
    while (current->link != tail) {
        current = current->link;
    }
    int value = tail->data;
    delete tail;
    tail = current;
    tail->link = nullptr;
    if (length() == 0) {
        head = nullptr;
        tail = nullptr;
    }
    return value;
}

int LinkedList::popFirst() {
    if (head == nullptr) {
        return -1;
    }
    Node *current = head;
    head = head->link;
    current->link = nullptr;
    if (length() == 0) {
        head = nullptr;
        tail = nullptr;
    }
    return current->data;
}

int LinkedList::get(int index) const {
    if (index < 0 || index >= length()) {
        return -1;
    }
    Node *current = head;
    for (int i = 0; i < index; i++) {
        current = current->link;
    }
    return current->data;
}


void LinkedList::insert(int index, int value) {
    if (index < 0 || index > length()) {
        return;
    }
    // If index == 0:
    if (index == 0) {
        prepend(value);
        return;
    }
    if (index == length()) {
        append(value);
        return;
    }
    Node *newNode = new Node(value);

    Node *prev = nullptr;
    Node *current = head;
    for (int i = 0; i < index; i++) {
        prev = current;
        current = current->link;
    }
    prev->link = newNode;
    newNode->link = current;
}


void LinkedList::remove(int value) {
    if (head == nullptr) {
        return;
    }
    Node *current = head;
    Node *prev = nullptr;
    while (current->data != value) {
        prev = current;
        current = current->link;
        }
    prev->link = current->link;
    current->link = nullptr;
    delete current;
    }









