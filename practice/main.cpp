#include <iostream>
using namespace std;

// Declare a struct
struct Node {
    int x;
    int y;
};

void printNode(Node node) {
    cout << node.x << " " << node.y << endl;
}


int main() {
    // Initialize a struct
    Node node1;
    node1.x = 1;
    node1.y = 2;

    // Access struct members
    cout << "Accessing node 1: " << endl;
    cout << node1.x << " " << node1.y << endl;

    // Copy a struct
    Node node2 = node1;
    cout << "Accessing node 2: " << endl;
    cout << node2.x << " " << node2.y << endl;

    // Modify the struct
    node2.x = 2;
    node2.y = 2;
    cout << "Modified node 2: " << endl;
    cout << node2.x << " " << node2.y << endl;

    // Compare members of structs
    if (node1.x == node2.x && node1.y == node2.y) {
        cout << "Nodes are equal" << endl;
    } else {
        cout << "Nodes are not equal" << endl;
    }

    // Passing a struct by value
    cout <<


    return 0;
}

