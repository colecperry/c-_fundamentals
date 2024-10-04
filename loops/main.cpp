#include <iostream>   // Includes iostream for input/output operations
using namespace std;

// Count-controlled while loop
void while_loop() {
    int i = 0;

    cout << "Count-controlled while loop: " << endl;
    while (i <= 20) {
        cout << i << endl;
        i = i + 1;
    }
    cout << endl;
}

// For loop
// Note - can also count backwards with i--
void for_loop() {
    int i;
    cout << "\nFor loop: " << endl;

    for (i = 1; i <= 5; i++) {
        cout << "Hello" << endl;
    }
}

// Flag-controlled while loop: uses a boolean variable to control when the loop should stop or continue executing
void flag_controlled_loop() {
    bool flag = true;
    int counter = 0;

    cout << "\nFlag-controlled while loop: " << endl;
    while (flag) {
        cout << "Counter is: " << counter << endl;
        counter++;

        if (counter >= 5) {
            flag = false;  // Set flag to false to terminate the loop
        }
    }
    cout << "Loop terminated using flag control." << endl << endl;
}

// Sentinel-controlled while loop: continues executing until a special value, known as a sentinel is encountered
void sentinel_controlled_loop() {
    int number;
    cout << "Sentinel-controlled loop: Enter numbers (enter -1 to stop): ";

    cin >> number;

    while (number != -1) {  // Continue until the sentinel value (-1) is entered
        cout << "You entered: " << number << endl;
        cin >> number;
    }
    cout << "Loop terminated by sentinel value." << endl << endl;
}

// Ex: Nested loop to create a multiplication table
void nested_loop() {
    cout << "Multiplication table (3x3): " << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <=3; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
}

// Ex: Nested while loop counts down from 3 and then subtracts one, counts down from 2, etc
void nested_loop_2() {
    cout << "Countdown from 3: " << endl;
    int count = 3;
    while (count > 0) {
        int innerCount = count;
        while (innerCount > 0) {
            cout << innerCount << " ";
            --innerCount;
        }
        cout << endl;
        --count;
    }
    cout << endl;
}

// Ex: Nested if statements to check conditions
void nested_loop_3 () {
    cout << "Checking conditions:\n";
    cout << "Enter a number: ";
    int num;
    cin >> num;

    if (num > 0) {
        cout << num << " is positive.\n";
        if (num % 2 == 0) { // Nested if-else if the number is positive
            cout << num << " is even.\n";
        } else {
            cout << num << " is odd.\n";
        }
    } else { // Final else statement
        cout << num << " is not positive.\n";
    }
    cout << endl;
}


// EOF-Controller while loops: a type of loop that continues executing until the end of file (EOF) is reached: this is commonly used for reading input until no more data is available. In this example I keep typing in numbers and when i'm finished, it prints out the sum
void eof_controlled_loop() {
    int sum = 0;
    int num;

    cout << "Enter numbers (Ctrl+D to end): ";

    // Use the input operation in the loop condition
    while (cin >> num) {
        sum += num; // Add valid input to the sum
    }

    cout << "Sum = " << sum << endl;
}

// Infinite loop
// void infinite_loop() {
//     for (;;) {
//         cout << "Hello" << endl;
//     }
// }



int main() {
    // Call each function to demonstrate the three types of while loops
    while_loop();                   // Count-controlled loop
    for_loop();                     // For-loop
    flag_controlled_loop();         // Flag-controlled loop
    sentinel_controlled_loop();     // Sentinel-controlled loop
    nested_loop();                  // Nested loop
    nested_loop_2();                // Nested loop 2
    eof_controlled_loop();          // EOF-controlled loop

    return 0;  // Return 0 to indicate successful execution
}
