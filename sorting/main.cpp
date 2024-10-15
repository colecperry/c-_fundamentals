#include <iostream>
using namespace std;

// Function to print the elements of an array
void printList(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Bubble Sort Function: Move through the list, compare i and i+1, if i is bigger, swap them
void bubbleSort(int array[], int length) {
    for (int i = 0; i < length - 1; i++) {  // Outer loop for each pass
        for (int j = 0; j < length - i - 1; j++) {  // Inner loop for comparing adjacent elements
            if (array[j] > array[j + 1]) {  // If the current element is greater than the next
                int temp = array[j];  // Swap the elements
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Bubble Sort 2: Sorts an array in ascending order using the bubble sort algorithm
// The function iteratively "bubbles" the largest unsorted element to its correct position
void bubbleSort2(int array[], int length) {
    // Outer loop: Controls the number of passes over the entire array
    // Each pass places one element in its correct sorted position from right to left
    for (int i = 0; i < length - 1; i++) {

        // Inner loop: Traverses the unsorted part of the array
        // As `i` increases, the number of elements to check decreases because the last `i` elements are already sorted
        for (int j = 0; j < length - i - 1; j++) {

            // Compare adjacent elements in the array
            // If the current element (array[j]) is greater than the next element (array[j + 1]),
            // it means they are out of order, and we need to swap them
            if (array[j] > array[j + 1]) {

                // Swap the elements: Use a temporary variable `temp` to hold the value of array[j]
                // This ensures that no data is lost during the swap process
                int temp = array[j];      // Store array[j] in `temp`
                array[j] = array[j + 1];  // Move the next element to the current position
                array[j + 1] = temp;      // Assign `temp` (original array[j]) to the next position, j moves to the next index
            }
        }
        // After the inner loop, the largest unsorted element has "bubbled" up to its correct position at the end of the array.
        // The range of the unsorted section shrinks by 1 with each pass (i.e., `length - i - 1`).
    }
}


// Insertion sort: Start from the second element and compare to the first, if smaller, swap them. From the third element, compare to the second
// element, if smaller, swap, and then the first element, if smaller, swap. Continue to fourth element...
void insertionSort(int array[], int length) {
    // Outer loop: Traverse through the array starting from index 1
    // The element at index 0 is considered as the initial sorted portion
    for (int i = 1; i < length; i++) {
        // `temp` temporarily holds the value of the current element to be inserted into the sorted portion
        int temp = array[i];

        // `location` keeps track of where `temp` should be inserted
        int location = i;

        // Inner loop: Move elements of the sorted portion that are greater than `temp` one position to the right. Continue shifting elements as long as:
        // - `location` is greater than 0 (we haven't reached the beginning of the array) The element to the left of `location` is greater than `temp`
        while (location > 0 && array[location - 1] > temp) {
            array[location] = array[location - 1];  // Shift the element at `location - 1` to the right
            location--;  // Move `location` one step to the left
        }
        // Insert `temp` into its correct position within the sorted portion of the array
        array[location] = temp;
    }
}

#include <iostream>
using namespace std;

// Selection sort: Find the smallest (or largest) element and move it to the beginning (or end) of the list
void selectionSort(int array[], int length) {
    // Outer loop: Iterate through the entire array
    // `i` marks the beginning of the unsorted portion and the end of the sorted portion.
    for (int i = 0; i < length - 1; i++) {

        // Assume the first element of the unsorted portion is the minimum.
        int minIndex = i;

        // Inner loop: Traverse the unsorted portion of the array to find the actual minimum element.
        // `j` starts from `i + 1` because elements before `i` are already sorted.
        for (int j = i + 1; j < length; j++) {
            // If we find an element smaller than the current minimum, update `minIndex`.
            if (array[j] < array[minIndex]) {
                minIndex = j;  // Update `minIndex` with the index of the new minimum element.
            }
        }

        // After finding the smallest element in the unsorted portion, swap it with the first element of the unsorted portion.
        // This ensures that the smallest element is placed in its correct sorted position.
        if (minIndex != i) {  // Only swap if a new minimum was found -> avoid unnecessary swaps if the values are equal
            int temp = array[i];     // Store the element at index `i` in `temp`.
            array[i] = array[minIndex];  // Move the minimum element to index `i`.
            array[minIndex] = temp;      // Place the original element from index `i` to the `minIndex`.
        }
    }
}


int main() {
    // Original array to be used for all sorting algorithms
    int originalArray[] = {2, 56, 34, 82, 75, 89, 22, 5, 4, 11};
    int size = sizeof(originalArray) / sizeof(originalArray[0]); // Calculate the size of the array

    // Arrays for each sorting algorithm to keep them independent
    int bubbleSortArray[size];
    int bubbleSort2Array[size];
    int insertionSortArray[size];
    int selectionSortArray[size];

    // Copy the original array into each array for sorting
    for (int i = 0; i < size; i++) {
        bubbleSortArray[i] = originalArray[i];
        bubbleSort2Array[i] = originalArray[i];
        insertionSortArray[i] = originalArray[i];
        selectionSortArray[i] = originalArray[i];
    }

    // Before sorting
    cout << "Original Array (before sorting): ";
    printList(originalArray, size);

    // Bubble Sort
    cout << "\nApplying Bubble Sort...\n";
    bubbleSort(bubbleSortArray, size); // Pass only the variable names, no need to use & because in C++ arrays are passed by reference automatically
    cout << "Bubble Sort Result: ";
    printList(bubbleSortArray, size);

    // Bubble Sort 2
    cout << "\nApplying Bubble Sort 2...\n";
    bubbleSort2(bubbleSort2Array, size);
    cout << "Bubble Sort 2 Result: ";
    printList(bubbleSort2Array, size);

    // Insertion Sort
    cout << "\nApplying Insertion Sort...\n";
    insertionSort(insertionSortArray, size);
    cout << "Insertion Sort Result: ";
    printList(insertionSortArray, size);

    // Selection Sort
    cout << "\nApplying Selection Sort...\n";
    selectionSort(selectionSortArray, size);
    cout << "Selection Sort Result: ";
    printList(selectionSortArray, size);

    return 0;
}



