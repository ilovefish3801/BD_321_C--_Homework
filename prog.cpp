#include <iostream>

using namespace std;

class Student {
private:
	string fullName;
	string birthDate;
	string phoneNumber;
	string city;
	string country;
	string school;

public:
	Student(string fullName_, string birthDate_, string phoneNumber_, string city_, string country_, string school_) 
		: fullName{ fullName_ }, birthDate{ birthDate_ }, phoneNumber{ phoneNumber_ }, city{ city_ }, country{ country_ }, school{ school_ } {}

	Student() {
		inputData();
	}

	void printData() {
		cout << "Full name: " << this->fullName << endl;
		cout << "Birth date: " << this->birthDate << endl;
		cout << "Phone number: " << this->phoneNumber << endl;
		cout << "City: " << this->city << endl;
		cout << "Country: " << this->country << endl;
		cout << "School: " << this->school << endl;
	}

	void inputData() {
		string fullName_; 
		string birthDate_; 
		string phoneNumber_; 
		string city_; 
		string country_; 
		string school_;

		cout << "Enter full name: ";
		cin >> fullName_;
		cout << endl;

		cout << "Enter birth date: ";
		cin >> birthDate_;
		cout << endl;

		cout << "Enter phone number: ";
		cin >> phoneNumber_;
		cout << endl;

		cout << "Enter city name: ";
		cin >> city_;
		cout << endl;

		cout << "Enter country name: ";
		cin >> country_;
		cout << endl;

		cout << "Enter school name: ";
		cin >> school_;
		cout << endl;

		this->fullName = fullName_;
		this->birthDate = birthDate_;
		this->phoneNumber = phoneNumber_;
		this->city = city_;
		this->country = country_;
		this->school = school_;
	}

	string getFullName() {
		return this->fullName;
	}

	string getBirthDate() {
		return this->birthDate;
	}

	string getPhoneNumber() {
		return this->phoneNumber;
	}

	string getCityName() {
		return this->city;
	}

	string getCountryName() {
		return this->country;
	}

	string getSchoolName() {
		return this->school;
	}
};

class String {
private:
	char* text;
	static int counter;

public:

	String() : text{ new char[81]} {
		this->counter++;
		strcpy_s(text, 81, "Default constructor text");
	}

	String(const int size, const char* data) : text{ new char[size + 1] } {
		this->counter++;
		strcpy_s(text, size + 1 ,data);
	}

	String(const char* data) : text{ new char[strlen(data) + 1]} {
		this->counter++;
		strcpy_s(text, strlen(data) + 1, data);
	}

	void printData() {
		puts(text);
	}

	static int getCounter() {
		return counter;
	}

	void enterData(const char* data) {
		text = new char[strlen(data) + 1];
		strcpy_s(text, strlen(data) + 1, data);
	}

	~String() {
		this->counter--;
		delete[] text;
	}
};


int String::counter = 0;
int main() {

	/*Student student{"Name", "Date", "Number", "City", "Country", "School Name"};
	student.printData();*/

	String str{};
	// String str{ "Text" };
	// String str{ 5, "Text" };

	String str2{}; // Я це створив для перевірки counter
	str.printData();
	str.enterData("New text");
	str.printData();

	cout << str.getCounter() << endl;

	return 0;
}
