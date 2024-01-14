#pragma once
#include <iostream>

using namespace std;

struct Animal {
	string name;
	string animalClass;
	string nickname;

	void objectFill() {
		string name_;
		string animalClass_;
		string nickname_;

		cout << "Enter your animal's breed: ";
		cin >> name_;
		cout << endl;
		this->name = name_;

		cout << "Enter your animal's class: ";
		cin >> animalClass_;
		cout << endl;
		this->animalClass = animalClass_;

		cout << "Enter your animal's nickname: ";
		cin >> nickname_;
		cout << endl;
		this->nickname = nickname_;
	}

	void printObjectData() {
		cout << "Breed: " << this->name << endl;
		cout << "Class: " << this->animalClass << endl;
		cout << "Nickname: " << this->nickname << endl;
	}

	void speakCommand() {
		cout << "Rawr !" << endl;
	}
};
