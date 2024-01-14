#pragma once
#include <iostream>

using namespace std;

string Task3_m = "Lorem TE ipsum RE dolor sit SE amet, RE consectetur adipis.";

void removeWordsUnderThree(string &text) {
    string word;
    string result;

    for (char letter : text) {
        if (isalpha(letter)) {
            word += letter;
        }else {
            if (word.length() >= 3) {
                result += word + letter + ' ';
            }

            word = "";
        }
    }


    if (word.length() >= 3) {
        result += word;
    }

    text = result;
}
