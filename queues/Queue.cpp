//
// Created by Cole Perry on 10/9/24.
//

#include "Queue.h"
#include <iostream>
using namespace std;

// Constructor: Initialize the queue with default values
Queue::Queue() {
    size = 0; // No elements initially
    queueFront = 0; // Front starts at index 0
    queueBack = -1; // Back starts at -1 to indicate an empty queue
}

// Add a value to the back of the queue
void Queue::enqueue(int i) {
    if (size == 10) { // Check if the queue is full
        cout << "Queue is full" << endl;
    } else {
        size++; // Increase the size
        queueBack = (queueBack + 1) % 10; // Move back to the next index (circular)
        list[queueBack] = i; // Add the new element at the back
    }
}

// Remove and return the value at the front of the queue
int Queue::dequeue() {
    if (size == 0) { // Check if the queue is empty
        cout << "Queue is empty" << endl;
        return -1; // Return an error value
    } else {
        int value = list[queueFront]; // Get the front value
        queueFront = (queueFront + 1) % 10; // Move front to the next index (circular)
        size--; // Decrease the size
        if (size == 0) { // If queue becomes empty, reset front and back
            queueFront = 0;
            queueBack = -1;
        }
        return value; // Return the removed value
    }
}

// Check if the queue is full
bool Queue::full() {
    return size == 10;
}

// Check if the queue is empty
bool Queue::empty() {
    return size == 0;
}

// Access the value at the front of the queue
int Queue::front() {
    if (empty()) { // Check if the queue is empty
        cout << "Queue is empty" << endl;
        return -1; // Return an error value
    } else {
        return list[queueFront]; // Return the front value
    }
}

// Access the value at the back of the queue
int Queue::back() {
    if (empty()) { // Check if the queue is empty
        cout << "Queue is empty" << endl;
        return -1; // Return an error value
    } else {
        return list[queueBack]; // Return the back value
    }
}

// Clear the queue by resetting size, front, and back
void Queue::deleteQueue() {
    size = 0; // Reset the size to 0
    queueFront = 0; // Reset the front index
    queueBack = -1; // Reset the back index
    cout << "Queue has been deleted." << endl; // Print confirmation
}
