#include <iostream>
#include <vector>

using namespace std;

class Person {
private:
	string fullName;
	int age;

public:
	Person() : fullName{ "Anonymous"}, age{-1} {}
	Person(string name_, int age_) : fullName{ name_ }, age{ age_ } {}

	string getFullName() {
		return this->fullName;
	}

	int getAge() {
		return this->age;
	}


	~Person() {}
};

class Apartment {
private:
	vector<Person> people;
	string name;

public:
	Apartment() : name{ "Anonymous Apartment" } {}
	Apartment(string name_) : name{ name_ } {}
	Apartment(const Apartment& apartment) {
		this->people.clear();
		this->people.resize(apartment.people.size());
		this->name = apartment.name;
		
		for (int i = 0; i < apartment.people.size(); i++) {
			this->people[i] = apartment.people[i];
		}
	}

	void addPerson(Person& person) {
		people.push_back(person);
	}

	void printPeople() {
		if (people.size() == 0) {
			cout << "Apartment is empty" << endl;
			return;
		}

		for (int i = 0; i < people.size(); i++) {
			cout << people[i].getFullName() << " " << people[i].getAge() << endl;
		}
	}

	string getApartmentName() {
		return this->name;
	}


	~Apartment() {}
};

class Building {
private:
	vector<Apartment> apartments;

public:
	Building() {}

	void addApartment(Apartment& apartment) {
		apartments.push_back(apartment);
	}

	void printApartments() {
		if (apartments.size() == 0) {
			cout << "Apartment is empty" << endl;
			return;
		}

		for (int i = 0; i < apartments.size(); i++) {
			cout << apartments[i].getApartmentName() << endl;
		}
	}

	~Building() {}
};

int main() {
	Building building{};
	Person person{"Name", 15};
	Person person2{ "Name2", 16 };
	Apartment a1{"1"};
	a1.addPerson(person);
	Apartment a2{a1};
	Apartment a3{ "3" };
	a3.addPerson(person2);
	a2.printPeople();
	a1.printPeople();
	a3.printPeople();

	building.addApartment(a1);
	building.addApartment(a2);
	building.addApartment(a3);

	building.printApartments();

	return 0;
}
