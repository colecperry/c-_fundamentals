//
// Created by Cole Perry on 10/10/24.
//

#include "stack.h"
#include <iostream>
using namespace std;

// Initialize an empty stack
 stack::stack() {
     top = nullptr;
 }

// Destructor
 stack::~stack() {
     deleteStack();
 }

// Push a node on to the stack
void stack::push(int value) {
     Node* newNode = new Node(value);
     newNode->next = top;
     top = newNode;
 }

// Pop a node off of the stack
int stack::pop() {
     if (top == nullptr) {
         return -1;
     }
     Node *temp = top;
     int poppedValue = temp->data;
     top = top->next;
     delete temp;
     return poppedValue;
 }

// Peek at the top of the stack
int stack::peek() const {
     if (top == nullptr) {
         return -1;
     }
     return top->data;
 }

// Check if the stack is empty
bool stack::isEmpty() const {
     return top == nullptr;
 }

// Print stack
void stack::print() const {
     Node *current = top;
     while (current != nullptr) {
         cout << current->data << " ";
         current = current->next;
     }
 }

// Delete the stack
void stack::deleteStack() {
     while (top != nullptr) {
         Node *temp = top;
         top = top->next;
         delete temp;
     }
 }


