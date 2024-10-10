#include <iostream>
using namespace std;

// Function prototypes for sequential search and binary search
int seqSearch(int list[], int length, int numToSearch);
int binarySearch(int list[], int length, int item);

int main() {
    int list[10];  // Array to store 10 numbers
    int num;  // Variable to hold the input number
    int numToSearch;  // Variable for the number to search
    int length = 10;  // The length of the list (array size)
    int numFound1;  // Variable to store the result of sequential search
    int numFound2;  // Variable to store the result of binary search

    // Input loop to populate the array
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i << " : ";
        cin >> num;  // Read the number from the user
        list[i] = num;  // Store it in the list
    }

    // Ask the user for the number to search
    cout << "Enter the number you want to search for: ";
    cin >> numToSearch;

    // Perform sequential search
    numFound1 = seqSearch(list, length, numToSearch);

    // Perform binary search
    // Note: Binary search requires the list to be sorted for correct results.
    numFound2 = binarySearch(list, length, numToSearch);

    // Display the results of both searches
    if (numFound1 != -1) {
        cout << "Sequential Search: Number found at position " << numFound1 << endl;
    } else {
        cout << "Sequential Search: Number not found" << endl;
    }

    if (numFound2 != -1) {
        cout << "Binary Search: Number found at position " << numFound2 << endl;
    } else {
        cout << "Binary Search: Number not found" << endl;
    }

    return 0;
}

// Sequential search function: Goes through each element one by one
// and returns the position if the number is found or -1 if not
int seqSearch(int list[], int length, int numToSearch) {
    int pos = 0;  // Variable to track current position in the array
    bool found = false;  // Flag to track if the number is found

    // Loop through the list to search for the number
    while (pos < length && !found) { // Stop searching if found is true
        if (list[pos] == numToSearch) {
            found = true;  // If number is found, set found to true
        } else {
            pos++;  // Move to the next position if the number is not found
        }
    }

    // Return the position if the number is found, otherwise return -1
    if (found) {
        return pos;  // Return the index where the number was found
    } else {
        return -1;  // Return -1 if the number is not found
    }
}

// Binary search function: Efficiently searches a sorted array by dividing the search range in half. Assumes that the array is sorted
int binarySearch(int list[], int length, int item) {
    int first = 0;  // Start of the search range
    int last = length - 1;  // End of the search range
    int mid;  // Variable to hold the midpoint of the search range
    bool found = false;  // Flag to track if the number is found

    // Loop to repeatedly divide the search range in half
    while (first <= last && !found) {
        mid = first + (last - first) / 2;  // Find the midpoint

        if (list[mid] == item) {  // If the item is at the midpoint
            found = true;  // Set found to true
        } else if (list[mid] > item) {
            last = mid - 1;  // If the item is smaller, search the left half
        } else {
            first = mid + 1;  // If the item is larger, search the right half
        }
    }

    // Return the midpoint if the number is found, otherwise return -1
    if (found) {
        return mid;  // Return the index where the number was found
    } else {
        return -1;  // Return -1 if the number is not found
    }
}
