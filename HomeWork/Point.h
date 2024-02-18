#pragma once
#include <iostream>
#include <ostream>
#include <istream>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point() : x{ 0 }, y{ 0 } {}
	explicit Point(int x_) : x{ x_ }, y{ 0 } {}
	Point(int x_, int y_) : x{ x_ }, y{ y_ } {}

	int getX() {
		return this->x;
	}

	int getY() {
		return this->y;
	}

	template<typename Functor>
	int calculateDistance(Point& point, Functor functor) {
		return functor(this, point);
	}

	// Було написано використовувати дружні методи тому я так і зробив деякі. (Більше менше не робив бо так буде багато писати)
	friend Point operator+(const Point& point1, const Point& point2) {
		int newX = point1.x + point2.x;
		int newY = point1.y + point2.y;

		return Point{ newX, newY };
	}

	friend Point operator-(const Point& point1, const Point& point2) {
		int newX = point1.x - point2.x;
		int newY = point1.y - point2.y;

		return Point{ newX, newY };
	}

	bool operator>(const Point& point2) {
		bool resultX = this->x > point2.x;
		bool resultY = this->y > point2.y;

		if (resultX && resultY) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator>=(const Point& point2) {
		bool resultX = this->x >= point2.x;
		bool resultY = this->y >= point2.y;

		if (resultX && resultY) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator<(const Point& point2) {
		bool resultX = this->x > point2.x;
		bool resultY = this->y > point2.y;

		if (resultX && resultY) {
			return false;
		}
		else {
			return true;
		}
	}

	bool operator<=(const Point& point2) {
		bool resultX = this->x >= point2.x;
		bool resultY = this->y >= point2.y;

		if (resultX && resultY) {
			return false;
		}
		else {
			return true;
		}
	}

	bool operator==(const Point& point2) {

		if (this->x == point2.x && this->y == point2.y) {
			return true;
		}
		else {
			return false;
		}

	}

	bool operator!=(const Point& point2) {

		if (this->x == point2.x && this->y == point2.y) {
			return false;
		}
		else {
			return true;
		}

	}

	friend ostream& operator<<(ostream& text, const Point& point) {

		cout << "X: " << point.x << " Y: " << point.y << endl;

		return text;
	}

	friend istream& operator>>(istream& value, Point& point) {
		cout << endl;
		cout << "New X: ";
		value >> point.x;

		cout << "New Y: ";
		value >> point.y;
		cout << endl;

		return value;
	}

	void operator++() {
		this->x += 1;
		this->y += 1;
	}

	void operator--() {
		this->x -= 1;
		this->y -= 1;
	}

};