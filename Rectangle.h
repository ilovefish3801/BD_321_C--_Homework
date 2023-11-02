#pragma once
#include <iostream>

using namespace std;
class Rectangle
{
private:
	int width;
	int height;
	double P;
	double S;

public:
	void setWidth(int width_) {
		this->width = width_;
	}

	void setHeight(int height_) {
		this->height = height_;
	}

	double showRectangle_P() {
		double P = 2 * (this->width + this->height);
		this->P = P;
		return this->P;
	}

	double showRectangle_S() {
		double S = this->width * this->height;
		this->S = S;
		return this->S;
	}
};
