#include <iostream>
using namespace std;

// Pass by value -> Creates a copy of the passed in variable into the function. changes made in the function do not affect the original variable in the calling function: useful when you don't want the function to modify the original data saving memory
void funcValue(int num) {
    num ++;
    cout << "Value in funcValue: ";
    cout << num << endl;
}

// Pass by reference -> The function receives the actual memory address of the variable, so changes made to the parameter variable are reflected in the original variable.
void funcValue2(int& num) {
    num ++;
    cout << "Value in funcValue2: ";
    cout << num << endl;

}

// Pass by value: if you pass in value 5, funcValue prints 6 but main "num" stays the same
// Pass by reference: if you pass in value 5, funValue 2 prints 6 and main "num" changes
int main(){
    int value;

    cout << "Please enter a number: ";
    cin >> value;
    funcValue(value);
    cout << "Value in main: ";
    cout << value << endl;

    funcValue2(value);
    cout << "Value in main: ";
    cout << value << endl;



    return 0;
}