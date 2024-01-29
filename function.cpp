#include <iostream>
#include "function.h"

using namespace std;

int getRandomNumber(int min, int max) {
    return rand() % (max - min) + min;
};

char getRandomSymbol() {
    const char symbols[26] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+', '=', '{', '}', '[', ']', '|', ';', ':', '<', '>', '?', '/', '.', ',' };

    int index = rand() % (sizeof(symbols) / sizeof(symbols[0]));

    return symbols[index];
};

void fillArray(Type*& arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = getRandomNumber(-9, 9);
    }
};

void printArray(Type*& arr, const int size) {
    cout << "Array: " << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }

    cout << endl;
};
