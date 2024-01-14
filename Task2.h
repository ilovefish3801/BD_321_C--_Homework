#pragma once
#include <iostream>

using namespace std;

string Task2_m;

void countPairs(string text) {
	int count = 0;
	string pairRepeat = "";

	for (int i = 0; i < text.length(); i++) {
		string pair = text.substr(i, 2);
		count = 1;

		for (int j = i + 1; j < text.length(); j++) {
			string pairValidation = text.substr(j, 2);

			if (pair == pairValidation) {
				count++;
			}
		}

		
		if (count > 1 && pairRepeat.find(pair) == std::string::npos) {
			cout << pair << "-" << count << endl;
		}
		else if (count > 1 && i == 0) {
			cout << pair << "-" << count << endl;
		}
		pairRepeat += pair;
	}
}
