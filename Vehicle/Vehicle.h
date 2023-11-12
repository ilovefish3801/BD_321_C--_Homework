#pragma once

#include <iostream>

using namespace std;

class Vehicle
{
public:
	virtual void start() = 0;

	virtual void stop() = 0;
};

