#pragma once
#include <iostream>

using namespace std;

struct WashingMachine {
	string company;
	string color;
	double width;
	double length;
	double height;
	int power;
	int spinSpeed;
	int heatingTemp;

	void Start() {

	}

	void Stop() {

	}

	void Pause() {

	}

	void Resume() {

	}

	void setSpinSpeed(int speed) {
		this->spinSpeed = speed;
	}

	void powerOn() {
		this->power = 100;
	}

	void powerOff() {
		this->power = 0;
	}
};

struct Iron {
	string company;
	string model;
	string color;
	int minTemp;
	int maxTemp;
	bool steamSupply;
	int power;

	void powerOn() {
		this->power = 100;
	}

	void powerOff() {
		this->power = 0;
	}

	void checkWaterSupply() {

	}

	void turnOnSteamSupply() {
		this->steamSupply = true;
	}

	void turnOffSteamSupply() {
		this->steamSupply = false;
	}
};

struct Boiler {
	string company;
	string color;
	int power;
	int capacity;
	int heatTemp;

	void powerOn() {
		this->power = 100;
	}

	void powerOff() {
		this->power = 0;
	}

	void changeHeatingTemperature(int temp) {
		if (temp > 100) {
			this->heatTemp = 100;
		}
		else if (temp < 10) {
			this->heatTemp = 10;
		}
		else {
			this->heatTemp = temp;
		}
	}
};
