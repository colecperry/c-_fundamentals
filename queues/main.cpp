#include <iostream>
using namespace std;
#include "Queue.h"

// Use STL Queue from C Library which is an array

int main() {
    Queue q1;

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

    cout << endl;

    cout << "Front of queue: " << q1.front() << endl;
    cout << "Back of queue: " << q1.back() << endl;
    cout << "Dequeue number 1: " << q1.dequeue() << endl;
    cout << "Dequeue number 2: " << q1.dequeue() << endl;




    return 0;
}
