#include <iostream>


using namespace std;

int getRandomNumber(int min, int max)
{
    return rand() % (max - min) + min;
}


void printTwoDimArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl << endl;
}

void deleteArr(int** arr, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

void appendToEnd(int**& arr, int& rows, int cols, int row[]) {
    int newRows = rows + 1;
    int** newArr = new int* [newRows];

    for (int i = 0; i < newRows; i++) {
        newArr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            newArr[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < cols; i++) {
        newArr[rows][i] = row[i];
    }

    deleteArr(arr, rows);

    arr = newArr;
    rows++;
}

void appendToStart(int**& arr, int& rows, int cols, int row[]) {
    int newRows = rows + 1;
    int** newArr = new int* [newRows];

    for (int i = 0; i < newRows; i++) {
        newArr[i] = new int[cols];
    }

    for (int i = 0; i < cols; i++) {
        newArr[0][i] = row[i];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            newArr[i+1][j] = arr[i][j];
        }
    }

    deleteArr(arr, rows);

    arr = newArr;
    rows++;
}

void appendByIndex(int**& arr, int& rows, int cols, int row[], int index) {
    int newRows = rows + 1;
    int** newArr = new int* [newRows];

    for (int i = 0; i < newRows; i++) {
        newArr[i] = new int[cols];
    }

    for (int i = 0; i < index; i++) {
        for (int j = 0; j < cols; j++) {
            newArr[i][j] = arr[i][j];
        }
    }

    for (int j = 0; j < cols; j++) {
        newArr[index][j] = row[j];
    }

    for (int i = index+1; i < newRows; i++) {
        for (int j = 0; j < cols; j++) {
            newArr[i][j] = arr[i-1][j];
        }
    }

    deleteArr(arr, rows);

    arr = newArr;
    rows++;
}

void deleteByIndex(int**& arr, int& rows, int cols, int index) {
    if (index >= rows || index < 0) {
        cout << "Index undefinied" << endl;
        return;
    }

    int newRows = rows - 1;
    int** newArr = new int* [newRows];

    for (int i = 0; i < newRows; i++) {
        newArr[i] = new int[cols];
    }

    for (int i = 0, a = 0; i < rows; i++) {
        if (i == index) {
            continue;
        }

        for (int j = 0; j < cols; j++) {
            newArr[a][j] = arr[i][j];
        }

        a++;
    }
    
    deleteArr(arr, rows);

    arr = newArr;
    rows = newRows;
}

void deleteRowsWithZeros(int**& arr, int& rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 0) {
                deleteByIndex(arr, rows, cols, i);
            }
        }
    }
}

void sumArrays(int**& arr, int**& arr2, int& rows, int cols) {
    int** newArr = new int* [rows];

    for (int i = 0; i < rows; i++) {
        newArr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            newArr[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    printTwoDimArray(newArr, rows, cols);

}

int main() {
    int rows = 4;
    int cols = 5;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = ::getRandomNumber(0, 9);
        }
    }

    int row[5] = { 5, 4, 3, 2, 1 };

                // Append to end
    /*printTwoDimArray(arr, rows, cols);
    appendToEnd(arr, rows, cols, row);
    printTwoDimArray(arr, rows, cols);*/

                // Append to start
    /*printTwoDimArray(arr, rows, cols);
    appendToStart(arr, rows, cols, row);
    printTwoDimArray(arr, rows, cols);*/

                // Append by index
    /*printTwoDimArray(arr, rows, cols);
    appendByIndex(arr, rows, cols, row, 1);
    printTwoDimArray(arr, rows, cols);*/

                // Delete by index
    /*printTwoDimArray(arr, rows, cols);
    deleteByIndex(arr, rows, cols, 1);
    printTwoDimArray(arr, rows, cols);*/

                // Delete rows with zeros
    /*printTwoDimArray(arr, rows, cols);
    deleteRowsWithZeros(arr, rows, cols);
    printTwoDimArray(arr, rows, cols);*/

                // Sum two arrays
    printTwoDimArray(arr, rows, cols);
    sumArrays(arr, arr, rows, cols);

    // Доречі я тільки зауважив що робив вказівник на вказівник у своїх функціях. (Хотів поміняти але мені було лінь переробляти)

    return 0;
}
