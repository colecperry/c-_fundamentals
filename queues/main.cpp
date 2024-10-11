#include "Queue.h"
#include <iostream>
using namespace std;

int main() {
    Queue q1; // Create a Queue object

    // Add elements to the queue
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);
    q1.enqueue(70);
    q1.enqueue(80);
    q1.enqueue(90);
    q1.enqueue(100);

    // Try to add an element to a full queue
    q1.enqueue(110); // This will print "Queue is full"

    // Display the front and back of the queue
    cout << "Front of queue: " << q1.front() << endl;
    cout << "Back of queue: " << q1.back() << endl;

    // Dequeue two elements
    cout << "Dequeue number 1: " << q1.dequeue() << endl;
    cout << "Dequeue number 2: " << q1.dequeue() << endl;

    // Display the front and back after dequeuing
    cout << "Front of queue after dequeuing: " << q1.front() << endl;
    cout << "Back of queue after dequeuing: " << q1.back() << endl;

    // Test deleting the queue
    q1.deleteQueue(); // Clear the queue
    cout << "Front of queue after deleting: " << q1.front() << endl; // This should print "Queue is empty"

    return 0;
}
