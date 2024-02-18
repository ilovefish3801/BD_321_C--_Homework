#pragma once
#include <iostream>

using namespace std;

class pointFunctorX {
public:
	template<typename Point>
	int operator() (Point* point1, Point& point2) {
		int x1 = point1->getX();
		int x2 = point2.getX();

		if (x1 > x2) {
			return x1 - x2;
		}
		else {
			return x2 - x1;
		}
	}
};

class pointFunctorY {
public:
	template<typename Point>
	int operator() (Point* point1, Point& point2) {
		int y1 = point1->getY();
		int y2 = point2.getY();

		if (y1 > y2) {
			return y1 - y2;
		}
		else {
			return y2 - y1;
		}
	}
};

