#pragma once
#include "Number.h"

class Integer : public Number
{
private:
	int number1 = 1;
	int number2 = 1;
public:
	Integer(int number1_, int number2_) {
		this->number1 = number1_;
		this->number2 = number2_;
	}

	void showSum() override {
		cout << number1 + number2 << endl;
	}
	void showSubstraction() override {
		cout << number1 - number2 << endl;
	}
	void showProduct() override {
		cout << number1 * number2 << endl;
	}
	void showFraction() override {
		cout << number1 / number2 << endl;
	}

};

