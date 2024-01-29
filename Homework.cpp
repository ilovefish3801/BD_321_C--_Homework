#include <iostream>
#include "Functions.h"


using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // На слова кирилецию видаються помилки
    

    // countWordsInTextFile('|', "Task1.txt");

    //findTextDifference("Task2_1.txt", "Task2_2.txt");

    fileStatistics("Task3.txt");

    return 0;
}
