#include <iostream>
#include <ostream>
#include <istream>

#include "Point.h"

using namespace std;



int main() {
	Point p1{ 12, 5 };
	Point p2{ 22, 8 };
	
	Point sum = p1 + p2;
	cout << "Sum: " << sum;

	Point difference = p1 - p2;
	cout << "Difference: " << difference;

	cout << (p2 > p1) << endl;
	cout << (p2 < p1) << endl;

	cin >> p1;
	cout << p1;
	++p1;
	cout << p1;
	--p1;
	cout << p1;

	return 0;
}
