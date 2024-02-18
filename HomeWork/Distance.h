#pragma once
#include <iostream>

using namespace std;

class Distance {
private:
	int meters;

public:
	Distance() : meters{ 0 } {};
	explicit Distance(int meters_) : meters{ meters_ } {};

	operator double() {
		return meters * 100;
	}

	operator float() {
		return meters * 3.2808399;
	}
};