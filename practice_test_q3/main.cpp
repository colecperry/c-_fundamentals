#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector;
    vector <int> myVector2;

    // Show push_back
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    myVector.push_back(6);
    myVector.push_back(7);

    myVector2.push_back(10);
    myVector2.push_back(20);
    myVector2.push_back(30);

    // Show pop_back
    myVector.pop_back();
    myVector.pop_back();

    // Show insert
    myVector.insert(myVector.begin(), 9); // Insert one 9 at index 0
    myVector.insert(myVector.begin() + 1, 2, 9); // Insert two 9's starting at index 1
    myVector.insert(myVector.begin(), myVector2.begin(), myVector2.end()); // Insert elements from myVectorstarting at index 0

    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }



    return 0;
}
