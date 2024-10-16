#include <iostream>
#include <cstring> // For strcpy, strcmp, and strlen
#include <string>
using namespace std;

// ARRAYS: holds a collection of homogeneous elements: all integers, all decimals, all strings, all objects. Arrays have a fixed size

// Declare a constant for the array size
const int ARRAY_SIZE = 10;

struct Name {
    string firstName;
    string lastName;
};

// Function to find the largest element in the array
int findLargest(const int arr[], int size) { // When you pass an array into a function, don't use args
    int largest = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update if a larger element is found
        }
    }
    return largest;
}

// Function to find the smallest element in the array
int findSmallest(const int arr[], int size) {
    int smallest = arr[0]; // Assume the first element is the smallest
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update if a smaller element is found
        }
    }
    return smallest;
}

// Function for a linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}


int main() {
    // Declare an array of integers
    int numbers_array[ARRAY_SIZE] = {0}; // Partial initialization, declares an array of 10 integers and remaining elements set to 0. numbers_array is the name of the one-dimensional array that stores integers

    // Declare whole array
    int numbers_array_2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // 10 is the size

    // Declare partial array: declares array of 10 components and initializes index 0, 1, and 2, and all other components to 0
    int numbers_array_3[10] = {8, 5, 12};

    // Don't have to declare the size, it will be determined by the number of initial vales in the braces
    double sales[] = {12.25, 32.50, 16.90, 23, 45.68};

    // Array of strings
    string stringArr[4] = {"I", "AM", "AN", "ARRAY"};

    // Print the string array
    for (int i = 0; i < 4; i++) {
        cout << stringArr[i] << " " << endl;
    }

    // Array of structs
    Name nameArr[3] = {{"cole", "perry"}, {"lucia", "hartmann"}, {"eric", "perry"}};

    // Print the array of structs
    for (int i = 0; i < 3; i++) {
        cout << nameArr[i].firstName << " " << nameArr[i].lastName << endl;
    }

    // Input elements into the array
    cout << "Enter " << ARRAY_SIZE << " integers:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cin >> numbers_array[i]; // Input each element into the array
    }

    // Output the array elements
    cout << "Array elements are: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << numbers_array[i] << " "; // Output each element
    }
    cout << endl;

    // Access specific elements
    cout << "Element at index 1 is: " << numbers_array[1] << endl;

    // Reassign specific element in array
    numbers_array[0] = 10;
    cout << "Reassigned index 0: " << numbers_array[0] << endl;

    // Find the largest element in the array
    int largestElement = findLargest(numbers_array, ARRAY_SIZE);
    cout << "Largest element in the array is: " << largestElement << endl;

    // Find the smallest element in the array
    int smallestElement = findSmallest(numbers_array, ARRAY_SIZE);
    cout << "Smallest element in the array is: " << smallestElement << endl;

    // Restriction on array processing: Aggregate operations (like assigning one array to another directly) are not allowed.
    // Example: You cannot do something like: numbers_array2 = numbers_array; // This is invalid

    // To copy an array, you must do it element by element. If you just use a reference variable like array = numbers_array, it creates a reference, and if you delete the original array, no copy is made from the reference variable.
    int copyArray[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        copyArray[i] = numbers_array[i]; // Copy each element from intExp to copyArray
    }

    cout << "Array has been copied into copyArray. Elements of copyArray are: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << copyArray[i] << " "; // Output copied array elements
    }
    cout << endl;

    // Character array: Simply an array that holds characters, does not have to be null terminated
    char charArray[5] = {'a', 'b', 'c', 'd', 'e'};

    // C-String: a type of character array that is 'null terminated' (ends with a special character '\0'). Operations include strcpy(), strcmp(), and strlen()

    char name[] = "John"; // declares an array of length 5 and stores the C-string "John" -> C-strings are an array that represents a sequence of characters

    // strcpy: Copy one C-string to a character array -> Make sure it is large enough to store null operator
    char copyName[20]; // Declare an empty array to hold the copied string
    strcpy(copyName, name); // Copy the content of 'name' into 'copyName'
    cout << "Copied string: " << copyName << endl;

    // strcmp: Compare two C-strings
    char anotherName[] = "John"; // Another character array
    cout << "And the result is.... " << strcmp(name, anotherName) << endl; // outputs 0 if the strings are equal, a positive value is str1 is greater, and a negative value if str1 is smaller

    // strlen: Get the length of a C-string excluding the null operator
    int length = strlen(name);
    cout << "Length of the string: " << length << endl;

    // Searching an array (linear search) -> search list for a given item, starting from the first element. Compare each element in the array to the value being searched for, continue until no data is left in the list.
    // Initialize array size, array, and value we are searching for
    const int SIZE = 6;
    int linear_array[SIZE] = {1, 2, 3, 4, 5, 6};
    int target = 5;

    // Call the linear search function
    int result = linearSearch(linear_array, SIZE, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }



    return 0;
}