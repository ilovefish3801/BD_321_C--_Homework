#pragma once
#include <iostream>

using namespace std;

class Pet {
protected:
	string type;
	string name;
	int age;
	double weight;

public:
	Pet(string type_, string name_, int age_, double weight_) : type{ type_ }, name{ name_ }, age{ age_ }, weight{ weight_ } {}

	void getInfo(){
		cout << endl;
		cout << "Type: " << type << " Name: " << name << " Age: " << age << " Weight: " << weight;
		cout << endl;
	};
};

class Cat : public Pet {
public:
	Cat(string name_, int age_, double weight_) : Pet("Cat", name_, age_, weight_) {}
};

class Dog : public Pet {
public:
	Dog(string name_, int age_, double weight_) : Pet("Dog", name_, age_, weight_) {}
};

class Parrot : public Pet {
public:
	Parrot(string name_, int age_, double weight_) : Pet("Parrot", name_, age_, weight_) {}
};