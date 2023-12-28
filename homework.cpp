#include <iostream>

using namespace std;

void push_block(int*& arr, int size, int*& block, int block_size) {
    int* newArr = new int[size + block_size];

    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    for (int i = size; i < size + block_size; i++) {
        newArr[i] = block[i - size];
    }

    delete[] arr;

    arr = newArr;
}

void push_block_anywhere(int*& arr, int size, int*& block, int block_size, int index) {
    int end_index = (index + block_size) - 1;
    int newSize = size + block_size;

    int* newArr = new int[newSize];

    for (int i = 0; i < index; i++) {
        newArr[i] = arr[i];
    };

    for (int i = index; i <= end_index; i++) {
        newArr[i] = block[i - index];
    };

    for (int i = end_index + 1; i < size + block_size; i++) {
        newArr[i] = arr[(i - end_index)+index - 1];
    };

    delete[] arr;

    arr = newArr;
}

int main()
{
    int length = 5;
    int* arr = new int[length];

    int block_length = 5;
    int* block = new int[block_length];

    for (int i = 0; i < length; i++) {
        arr[i] = i;
    };

    for (int i = 0; i < block_length; i++) {
        block[i] = i + 10;
    };

    /*push_block(arr, length, block, block_length);*/

    int block_index = 3;

    push_block_anywhere(arr, length, block, block_length, block_index);


    cout << "ARR: " << endl;
    for (int i = 0; i < length + block_length; i++) {
        cout << arr[i] << endl;
    };

    return 0;
}
