#pragma once
#include <iostream>

using namespace std;

class Passport {
protected:
	string name;
	string surname;
	
public:
	Passport() {
		string name_;
		string surname_;

		cout << "Name: ";
		cin >> name_;
		cout << endl;

		cout << "Surname: ";
		cin >> surname_;
		cout << endl;

		this->name = name_;
		this->surname = surname_;
	}
	Passport(string name_, string surname_) : name{ name_ }, surname{ surname_ } {}

	void getInfo() {
		cout << endl;
		cout << "Name: " << name << " Surname: " << surname;
		cout << endl;
	}
};

class ForeignPassport : public Passport {
private:
	int passportId;
	string visaData;
public:
	ForeignPassport() {
		int passportId_;
		string visaData_;

		cout << "Passport Id: ";
		cin >> passportId_;
		cout << endl;

		cout << "Visa Data: ";
		cin >> visaData_;
		cout << endl;

		this->passportId = passportId_;
		this->visaData = visaData_;
	}
	ForeignPassport(int passportId_, string visaData_) : passportId{ passportId_ }, visaData{ visaData_ }, Passport{"qwerty", "zxcvbn"} {}

	void getInfo() {
		cout << endl;
		cout << "Passport Id: " << passportId << " Visa Data: " << visaData;
		cout << endl;
	}
};