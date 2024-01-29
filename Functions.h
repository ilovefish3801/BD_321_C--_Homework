#pragma once
#include <iostream>
#include <sstream>
#include <Windows.h>
#include <string>

using namespace std;

string textResult(string filename) {

    FILE* in;
    if (fopen_s(&in, filename.c_str(), "r") != NULL) {
        cout << "There is no file with name: " << filename << endl;
        return "Not found";
    }

    stringstream ss;
    while (!feof(in)) {
        char symbol = fgetc(in);
        // В кінці всіх текстових файлів постійно була літера "я" хоч я її не додавав можливо у вас буде інша літера (я не знав як це пофіксити тому зробив так)
        if (symbol != 'я') {
            ss << symbol;
        }
    }
    fclose(in);
    string result = ss.str();

    return result;
}

void countWordsInTextFile(char symbol, string filename) {

	int counter = 0;

    string result = textResult(filename);

    if (result == "Not found") {
        return;
    }

    // Я тут не перевіряв чи це слово наприклад на його length, проте код може розрізнити чи є буква перед символом і так думає, що це слово
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == symbol && (isalpha(result[i + 1]) && !isdigit(result[i + 1]))) {
            counter += 1;
        }
    }

    cout << "Кількість слів, що починаються на " << symbol << " = " << counter << endl;
}

void findTextDifference(string filename1, string filename2) {
    string result1 = textResult(filename1);
    string result2 = textResult(filename2);

    if (result1 == "Not found" || result2 == "Not found") {
        return;
    }

    if (result1.compare(result2) == 0) {
        cout << "Strings match" << endl;
    }else {
        cout << result1 << endl;
        cout << result2 << endl;
    }

}

void fileStatistics(string filename) {
    
    string result = textResult(filename);
    if (result == "Not found") {
        return;
    }
    
    int alphaCount = 0;
    int symbolCount = 0;
    for (int i = 0; i < result.length(); i++) {
        
        if (isalpha(result[i])) {
            alphaCount += 1;
        }
        else if (!isdigit(result[i]) && !isalpha(result[i]) && result[i] != ' ' && result[i] != '\n') {
            symbolCount += 1;
        }

    }

    FILE* out;
    string outFileName = "Statistics_" + filename;
    if (fopen_s(&out, outFileName.c_str(), "w") != NULL)
    {
        cout << "Error occurred on file: " << outFileName << endl;
        return;
    }

    string alpha = "Letter count: " + to_string(alphaCount) + '\n';
    string symbol = "Symbol count: " + to_string(symbolCount);
    string text = alpha + symbol;

    fputs(text.c_str(), out);
    fclose(out);

    cout << "Successfully created file: " << outFileName << endl;
}
