#pragma once

#define DOUBLE

#ifdef INTEGER
typedef int Type;
#define FILL_ARRAY fillArrayNumbers
#define PRINT_ARRAY printArray

#elif defined DOUBLE
typedef double Type;
#define FILL_ARRAY fillArrayDoubles
#define PRINT_ARRAY printArray

#elif defined CHAR
typedef char Type;
#define FILL_ARRAY fillArraySymbols
#define PRINT_ARRAY printArray

#endif

int getRandomNumber(int min, int max);
double getRandomDouble(double min, double max);
char getRandomSymbol();
void fillArrayNumbers(int* arr, const int size);
void fillArrayDoubles(double* arr, const int size);
void fillArraySymbols(char* arr, const int size);
void printArray(Type* arr, const int size);
