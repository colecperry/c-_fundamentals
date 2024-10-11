#include <iostream>
using namespace std;

int seqSearch(int arr[], int size, int target);
int binarySearch(int arr[], int size, int target);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index = seqSearch(arr, 10, 7);
    cout << "7 was found at index " << index << endl;

    int index2 = binarySearch(arr, 10, 9);
    cout << "9 was found at index " << index2 << endl;

    return 0;
}

int seqSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}



