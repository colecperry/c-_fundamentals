//
// Created by Cole Perry on 10/9/24.
//

#include "Queue.h"
#include <iostream>
using namespace std;

// When we initialize a queue, we initialize it with default variables
Queue::Queue() {
    size = 0;
    queueFront = 0;
    queueBack = -1;

}

void Queue::enqueue(int i) {
    if (size == 10) {
        cout << "Queue is full" << endl;
    }
    else {
        size ++;
        queueBack = (queueBack + 1) % 10;
        list[queueBack] = i;
    }
}

int Queue::dequeue() {
    int value;
    if (size == 0) {
        cout << "Queue is empty" << endl;
    } else {
        value = list[queueFront];
        queueFront = (queueFront + 1) % 10;
        size--;
        if (size == 0) {
            queueFront = 0;
            queueBack = -1;
        }
    }
    return value;
}

bool Queue::full() {
    return (size == 10);

}

bool Queue::empty() {
    return (size == 0);

}

int Queue::front() {
    if (empty()) {
        cout << "Queue is empty" << endl;
    } else {
    return list[queueFront];
}
}

int Queue::back() {
    if (empty()) {
        cout << "Queue is empty" << endl;
    } else {
        return list[queueBack];
    }
}