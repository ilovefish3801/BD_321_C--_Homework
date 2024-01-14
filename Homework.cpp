#include <iostream>

using namespace std;

void selectionSort(int* arr, int size) {
    int min = INT32_MAX;
    int index = 0;

    for (int i = 0; i < size; i++) {
        int min = INT32_MAX;
        for (int j = i; j < size; j++) {
            if (min > arr[j]) {
                min = arr[j];
                index = j;
            }
        }

        swap(arr[i], arr[index]);
    }
}

void insertionSort(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j >= 0; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

void linearSearching(int* arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            cout << "Index:" << " " << i;
            break;
        }
    }
}

void binarySearching(int* arr, int size, int value) {
    int low = 0;
    int high = size;
    int mid = (low + high) / 2;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == value) {
            cout << "Index:" << " " << mid << endl;
            return;
        }
        else if (arr[low] == value) {
            cout << "Index:" << " " << low << endl;
            return;
        }
        else if (arr[high] == value) {
            cout << "Index:" << " " << high << endl;
            return;
        }
        else if (arr[mid] < value) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << "Not found" << endl;
    return;
}

void Print(int* arr, int size) {
    cout << "=================" << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "=================" << endl;
}

int main()
{
    const int Size = 10;
    int* Array = new int[Size] { 5, 7, 3, 2, 12, 13, 4, 16, 18, 20 };

        // Selection Sorting
    /*Print(Array, Size);
    selectionSort(Array, Size);
    Print(Array, Size);*/

        // Insertion Sorting
    /*Print(Array, Size);
    insertionSort(Array, Size);
    Print(Array, Size);*/

        // Linear Searching
    /*linearSearching(Array, Size, 12);*/

        // Binary Searching
    insertionSort(Array, Size);
    binarySearching(Array, Size, 29);
    Print(Array, Size);

    return 0;
}
