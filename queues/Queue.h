#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;

// Queue using array

class Queue {
public:
    Queue(); // Constructor to initialize the queue
    void enqueue(int i); // Add value to the back of the queue
    int dequeue(); // Remove value from the front of the queue
    bool full(); // Check if the queue is full
    bool empty(); // Check if the queue is empty
    int front(); // Access the front element
    int back(); // Access the back element
    void deleteQueue(); // Delete the queue (clear all elements)

private:
    int size; // Number of elements in the queue
    int list[10]; // Array to hold queue elements (fixed size 10). The memory for that array is automatically allocated for each instance of the queue class when the object is created.
    int queueFront; // Index of the front element
    int queueBack; // Index of the back element
};

#endif //QUEUE_H

