#pragma once
#include <iostream>
#include <vector>
#include <ostream>
#include <initializer_list>

using namespace std;

template<typename T>
class Vector {
private:
	vector<T> arr;
	
	bool isEmpty() {
		
		return arr.size() == 0 ? true : false;
	}

public:
	Vector() {};
	Vector(initializer_list<T> args) {
		for (T arg : args) {
			addElement(arg);
		}
	}

	void addElement(T el) {
		arr.emplace_back(el);
	}

	void removeElementByIndex(int index) {
		if (isEmpty() || index > arr.size() || index < 0) {
			cout << endl << "Out of range" << endl;
		}else{
			arr.erase(arr.begin() + index);
		}
	}

	void printVector() {
		if (isEmpty()) {
			cout << endl << "Vector is empty" << endl;
		}
		else {
			cout << endl;
			for (int i = 0; i < arr.size(); i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	}

	T& operator[] (int index) {
		if (isEmpty() || index > arr.size() || index < 0) {
			cout << endl << "Out of range" << endl;
		}
		else{
			return arr[index];
		}
	}

	friend ostream& operator << (ostream& os, const Vector& arr_) {
		cout << endl;
		for (int i = 0; i < arr_.arr.size(); i++) {
			os << arr_.arr[i];
			cout << " ";
		}

		return os;
	}
};