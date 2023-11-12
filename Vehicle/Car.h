#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
public:
	void start() override {
		cout << "You have successfully started a car !" << endl;
	}

	void stop() override {
		cout << "You have successfully stopped a car !" << endl;
	}

};