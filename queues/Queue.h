//
// Created by Cole Perry on 10/9/24.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;



class Queue {
public:
    Queue();
    void enqueue(int i); // Add value
    int dequeue(); // Remove first value
    bool full(); // Check if queue is full
    bool empty(); // Check is queue is empty
    int front(); // Access first element
    int back(); // Access last element

private:
    int size; // Declare a class variable size
    int list[10]; // Declare a list array with 10 elements. Every instance of the queue class will have its own list array with size 10
    int queueFront;
    int queueBack;

};



#endif //QUEUE_H
