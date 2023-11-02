#pragma once
#include <iostream>

using namespace std;

class Triangle
{
private:
	int katet1;
	int katet2;
	double hypotenuse;
	double S;

public:
	void setKatet1Length(int length_) {
		this->katet1 = length_;
	}

	void setKatet2Length(int length_) {
		this->katet2 = length_;
	}

	double hypotenuseLength() {
		double hypotenuse = sqrt((this->katet1^2)+(this->katet2 ^ 2));
		this->hypotenuse = hypotenuse;

		return this->hypotenuse;
	}

	double triangle_S() {
		double S = (this->katet1 * this->katet2) / 2;
		this->S = S;

		return this->S;
	}
};
