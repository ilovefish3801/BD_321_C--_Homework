#include <iostream>
#include <ostream>
#include <istream>

#include "Point.h"
#include "Vector.h"
#include "Functor.h"
#include "Distance.h"
#include "Document.h"
#include "User.h"

using namespace std;



int main() {
			// Task1
	/*Point p1{ 12, 5 };
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
	cout << p1;*/

			// Task2
	/*Vector<int> arr{1, 2, 3, 4, 5};
	cout << arr[4];
	arr.printVector();
	arr.addElement(100);
	arr[4] = 1;
	arr.printVector();
	arr.removeElementByIndex(2);
	arr.printVector();

	cout << arr;*/

			// Task3
	/*Point p1{ 12, 5 };
	Point p2{ 22, 8 };

	pointFunctorX x;
	pointFunctorY y;

	cout << endl << p1.calculateDistance(p2, x) << endl;
	cout << endl << p1.calculateDistance(p2, y) << endl;*/

			// Task4
	/*Distance distance{ 10 };
	cout << (double)distance << endl;
	cout << (float)distance << endl;*/

			// Task5
	//Document doc{};
	//DocumentEditor editor{ doc };

	//// У класі document я зробив printDocument(), щоб було наглядніше видно зміну документа, а не чернетки
	//doc.printDocument();

	//editor.editData("New data");
	//editor.editTitle("New title");
	//editor.editYear(999);
	//

	//editor.saveDocument();
	//doc.printDocument();

			// Task6
	User user{"adaFja#"}; // Цей пароль проходить валідацію
	user.checkIfValidated(PasswordValidation{});

	return 0;
}
