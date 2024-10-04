#include <iostream>  // Includes the iostream library for input/output
using namespace std;  // Allows the use of standard library objects without the 'std::' prefix

int main() {
    int age = 21;

    if (age > 21) {
        cout << "Eligible to vote and drink" << endl;
    }
    else if (age > 18 ) {
        cout << "Eligible to vote" << endl;
    }
    else {
        cout << "Not eligible to vote";
    }
}
