#pragma once
#include "Vehicle.h"

class Motorcycle : public Vehicle
{
public:
	void start() override {
		cout << "You have successfully started a motorcycle !" << endl;
	}

	void stop() override {
		cout << "You have successfully stopped a motorcycle !" << endl;
	}

	void stunts() {
		cout << "You are performing stunts !" << endl;
	}

};

