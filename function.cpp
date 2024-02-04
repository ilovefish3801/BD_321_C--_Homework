#include <iostream>
#include "function.h"

using namespace std;

int getRandomNumber(int min, int max) {
    return rand() % (max - min) + min;
};

double getRandomDouble(double min, double max) {
    double number = ((double)rand() / RAND_MAX) * (max - min) + min;

    return round(number * 10) / 10;
}

char getRandomSymbol() {
    const char symbols[22] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+', '=', '{', '}', '[', ']', '|', '<', '>', '?', '/' };

    int index = rand() % (sizeof(symbols) / sizeof(symbols[0]));

    return symbols[index];
};

void fillArrayNumbers(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = getRandomNumber(-9, 9);
    }
};

void fillArrayDoubles(double* arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = getRandomDouble(-9.9, 9.9);
    }
};

void fillArraySymbols(char* arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = getRandomSymbol();
    }
};

void printArray(Type* arr, const int size) {
    cout << "Array: " << endl;

    for (int i = 0; i < size; i++) {
        if (i != size - 1) {
            cout << arr[i] << ", ";
        }
        else {
            cout << arr[i] << ".";
        }
    }

    cout << endl;
};
