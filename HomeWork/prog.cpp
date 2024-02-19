#include <iostream>

#include "passport.h"
#include "pet.h"

using namespace std;

int main() {
			// Task1

	/*Passport passport{ "John", "Doe" };
	ForeignPassport fPassport{ 100, "Visa Data" };

	passport.getInfo();
	fPassport.getInfo();*/

			// Task2
	Cat cat{"Kitty", 2, 6};
	Dog dog{ "Doggy", 5, 12 };
	Parrot parrot{"Mr.Parrot", 1, 0.1};

	cat.getInfo();
	dog.getInfo();
	parrot.getInfo();

	return 0;
}
