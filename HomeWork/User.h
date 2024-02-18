#pragma once
#include <iostream>

using namespace std;


class User {
private:
	string userName;
	string password;
	bool isValidated = false;
	string passwordProblem = "None";
public:
	friend class PasswordValidation;
	User() : userName{ "Anonym" } {
		string pass;
		cout << "Please enter your password: ";
		cin >> pass;
		cout << endl;

		this->password = pass;
	};
	explicit User(string password_) : password{ password_ } {}
	User(string userName_, string password_) : userName{ userName_ }, password{ password_ } {}

	// Цей метод потрібний, щоб провірити чи наш User валідейтнутий
	template<typename Functar>
	void checkIfValidated(Functar val) {
		this->isValidated = val(this);
		if (!this->isValidated) {
			cout << endl;
			cout << this->passwordProblem;
			cout << endl;
		}else {
			cout << endl << "Password validated" << endl;
		}
	}

};


class PasswordValidation {
public:
	template<typename User>
	bool operator() (User* user) {
		string pass = user->password;
		bool upper = false;
		bool symbol = false;

		if (pass.length() < 6) {
			user->passwordProblem = "Password length must be atleast 6";
			return false;
		}

		for (char symb : user->password) {
			if (isupper(symb)) {
				upper = true;
			}else if (!isalnum(symb)) {
				symbol = true;
			}
		}

		if (upper == false) {
			user->passwordProblem = "Password must contain atleast 1 upper case letter";
			return false;
		}else if (symbol == false) {
			user->passwordProblem = "Password must contain atleast 1 symbol";
			return false;
		}

		return true;
	}

};