#include <iostream>
#include <limits>
using namespace std;

// Define an enumeration type called MatrixIndex. An enumeration is a user-defined type in C++ that consists of a set of named integral constants. It's a way to define a collection of related values and use them in a more meaningful way (instead of using 0 and 1, you use ROW and COL). MatrixIndex is the name of the enumeration type and can be used to declare variables of this enum type. Inside the curly braces you define a list of named constants with values
enum MatrixIndex { ROW = 0, COL = 1 };

int main() {
    // Parallel Arrays Example
    const int SIZE = 5;
    int ages[SIZE] = {21, 22, 23, 24, 25};
    string names[SIZE] = {"Alice", "Bob", "Charlie", "David", "Eva"};

    cout << "Parallel Arrays Example:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << names[i] << " is " << ages[i] << " years old.\n";
    }

    // Two-Dimensional Array Declaration and Initialization
    const int ROWS = 3;
    const int COLS = 4;

    // Method 1: Declare and initialize
    int matrix1[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Method 2: Declare without initialization
    int matrix2[ROWS][COLS]; // Matrix will be uninitialized

    // Method 3: Declare with a loop for initialization
    int matrix3[ROWS][COLS];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix3[i][j] = 0; // Initialize all elements to 0
        }
    }

    // Accessing Components of a Two-Dimensional Array
    cout << "\nAccessing matrix1 elements:\n";
    cout << "Element at (1, 2): " << matrix1[1][2] << endl;

    // Changing component of a Two-Dimensional Array
    cout << "Changing component [0][0]: " << matrix3[0][0] << endl;
    matrix3[0][0] = 5;
    cout << "Changed component [0][0]: " << matrix3[0][0] << endl;

    // Using Enumeration Types for Array Indices.
    MatrixIndex index = ROW; // declaring a new variable of type MatrixIndex and assigning it to row
    if (index == ROW) {
        cout << "MatrixIndex is set to ROW" << endl;
    } else if (index == COL) {
        cout << "Index is COL" << endl;
    }


    // Initializing an Entire Row to Zero : [1] is the row, loop through the column
    for (int j = 0; j < COLS; ++j) {
        matrix1[1][j] = 0; // Initialize 2nd row to 0
    }

    // Initializing the Entire Matrix to Zero
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix1[i][j] = 0; // Initialize all elements to 0
        }
    }

    // Nested Loop to Output Components of a Two-Dimensional Array
    cout << "\nMatrix1 elements after initialization:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Input Data into an Entire Row
    cout << "\nEnter data for the 1st row of matrix2:\n";
    for (int j = 0; j < COLS; ++j) {
        cin >> matrix2[0][j];
    }

    // Input Data into a Specific Component of the Matrix
    int row, col, value;
    cout << "\nEnter row, column, and value to update matrix2:\n";
    cin >> row >> col >> value;
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
        matrix2[row][col] = value;
    } else {
        cout << "Invalid indices!\n";
    }

    // Sum by Row
    cout << "\nSum of each row in matrix2:\n";
    for (int i = 0; i < ROWS; ++i) {
        int sum = 0;
        for (int j = 0; j < COLS; ++j) {
            sum += matrix2[i][j];
        }
        cout << "Row " << i << ": " << sum << endl;
    }

    // Sum by Column
    cout << "\nSum of each column in matrix2:\n";
    for (int j = 0; j < COLS; ++j) {
        int sum = 0;
        for (int i = 0; i < ROWS; ++i) {
            sum += matrix2[i][j];
        }
        cout << "Column " << j << ": " << sum << endl;
    }

    // Find the Largest Element in Each Row and Column
    cout << "\nLargest element in each row of matrix2:\n";
    for (int i = 0; i < ROWS; ++i) {
        int maxElement = matrix2[i][0]; // start the first loop where i = 0, set largest element to matrix2[0][0]
        for (int j = 1; j < COLS; ++j) { // start j loop at matrix2[0][1], if it's larger...
            if (matrix2[i][j] > maxElement) {
                maxElement = matrix2[i][j]; // update the element, continue to matrix2[0][2]
            }
        }
        cout << "Row " << i << ": " << maxElement << endl;
    }

    // Find the Largest Element in each column
    cout << "\nLargest element in each column of matrix2:\n";
    for (int j = 0; j < COLS; ++j) {
        int maxElement = matrix2[0][j];
        for (int i = 1; i < ROWS; ++i) {
            if (matrix2[i][j] > maxElement) {
                maxElement = matrix2[i][j];
            }
        }
        cout << "Column " << j << ": " << maxElement << endl; // Difference is that it prints the maxElement before the first loop continues to the next column
    }

    return 0;
}

