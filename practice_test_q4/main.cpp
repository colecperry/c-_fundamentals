#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Student {
    string firstName;
    string lastName;
};

void popAndPrint(stack<Student>& sStack) {
    while (!sStack.empty()) {
        cout << sStack.top().firstName << " " << sStack.top().lastName << endl;
        sStack.pop();
    }
}


int main() {
    stack<Student> studentStack;
    string fn;
    string ln;

    // Pushing students onto the stack
    while (true) {
        cout << "Enter First Name (type exit to exit): ";
        cin >> fn;
        if (fn == "exit") {
            break;
        }
        cout << "Enter Last Name: ";
        cin >> ln;

        studentStack.push({fn, ln});
    }

    cout << "Printing and popping: " << endl;
    popAndPrint(studentStack);




    return 0;
}
