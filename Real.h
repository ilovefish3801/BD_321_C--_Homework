#pragma once
#include "Number.h"
class Real : public Number
{
private:
	double number1 = 1;
	double number2 = 1;
public:
	Real(double number1_, double number2_) {
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

