#include <iostream>
using namespace std;
const int SIZE = 10;

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}

void insertionSort(int array[], int size) {

}




int main() {
    int array[SIZE] = {1, 10, 3, 14, 12, 8, 6, 2, 13, 19};
    bubbleSort(array, SIZE); // pass only the variable names
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int array2[SIZE] = {1, 10, 3, 14, 12, 8, 6, 2, 13, 19};
    selectionSort(array2, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << array2[i] << " ";
    }

    int array3[SIZE] = {1, 10, 3, 14, 12, 8, 6, 2, 13, 19};
    insertionSort(array3, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << array3[i] << " ";
    }



    return 0;
}


