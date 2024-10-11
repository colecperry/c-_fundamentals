//
// Created by Cole Perry on 10/10/24.
//

#ifndef STACK_H
#define STACK_H

struct Node {
    int data;
    Node *next;

    // Dont forget constructor for node init
    Node(int value) : data(value), next(nullptr) {}
};



class stack {
public:
    stack();
    ~stack();

    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
    void print() const;
    void deleteStack();

private:
    Node *top;
};



#endif //STACK_H
