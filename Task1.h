#pragma once
#include <iostream>

using namespace std;

string Task1_m = "test (TO REMOVE)";

void removeInBrackets(string &text) {
	int opened = -1;
	int closed = -1;

	for (int i = 0; i < text.length(); i++) {
		if (text[i] == '(') {
			opened = i;
		}
		else if (text[i] == ')') {
			closed = i;
		}
	}

	if (opened == -1 || closed == -1) {
		cout << "===============================" << endl;
		cout << "Bracket or brackets are missing" << endl;
		cout << "===============================" << endl;
		return;
	}
	else {
		text.erase(opened + 1, (closed - opened)-1);
	}
}
