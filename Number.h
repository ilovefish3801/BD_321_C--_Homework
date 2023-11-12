#pragma once
#include <iostream>

using namespace std;

class Number
{
public:
	virtual void showSum() = 0;
	virtual void showSubstraction() = 0;
	virtual void showProduct() = 0;
	virtual void showFraction() = 0;
};

