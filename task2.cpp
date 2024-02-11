#include <iostream>
#include <vector>

using namespace std;

class Reservoir {
private:
	string type;
	string name;
	int width;
	int length;
	int maxDepth;
	int volume = 0;
	int waterArea = 0;

public:
	Reservoir() : type{ "Unknown" }, name{"Reservoir"}, width{0}, length{0}, maxDepth{0} {};
	explicit Reservoir(string type_) : type{ type_ }, name{ "Reservoir" }, width{0}, length{0}, maxDepth{0} {};
	Reservoir(string type_, string name_, int width_, int length_, int maxDepth_) : type{ type_ }, name{ name_ }, width{ width_ }, length{ length_ }, maxDepth{ maxDepth_ } {};

	int calculateVolume();
	int calculateWaterArea();
	bool checkTypes(Reservoir& reservoir) const;
	bool compareArea(Reservoir& reservoir);
	void copyObject(Reservoir& reservoir);

	string getType() {
		return this->type;
	}

	string getName() {
		return this->name;
	}

	int getWidth() {
		return this->width;
	}

	int getLength() {
		return this->length;
	}

	int getMaxDepth() {
		return this->maxDepth;
	}

	int getVolume() {
		return calculateVolume();
	}

	int getWaterArea() {
		return calculateWaterArea();
	}

};


// METHOD REALISATION
int Reservoir::calculateVolume() {
	this->volume = width * length * maxDepth;
	return this->volume;
}

int Reservoir::calculateWaterArea() {
	this->waterArea = width * length;
	return this->waterArea;
}

bool Reservoir::checkTypes(Reservoir& reservoir) const{
	if (this->type == reservoir.type) {
		return true;
	}
	else {
		return false;
	}
}

bool Reservoir::compareArea(Reservoir& reservoir) {
	if (checkTypes(reservoir)) {
		if (calculateWaterArea() > reservoir.calculateWaterArea()) {
			return true;
		}
		else if (calculateWaterArea() == reservoir.calculateWaterArea()) {
			cout << endl << "Water area is same" << endl;
			return false;
		}
		else {
			return false;
		}
	}
	else {
		cout << endl << "Types doesn't match" << endl;
		return false;
	}
}

void Reservoir::copyObject(Reservoir& reservoir) {
	this->type = reservoir.type;
	this->name = reservoir.name;
	this->width = reservoir.width;
	this->length = reservoir.length;
	this->maxDepth = reservoir.maxDepth;
	this->volume = reservoir.calculateVolume();
	this->waterArea = reservoir.calculateWaterArea();
}



// VECTOR
template<typename vctr>
void addReservoir(vctr& arr, Reservoir& reservoir) {
	arr.emplace_back(reservoir);
}

template<typename vctr>
void deleteReservoir(vctr& arr, Reservoir& reservoir) {
	int size = arr.size();
	int index = -1;

	for (int i = 0; i < size; i++) {
		if (reservoir.getName() == arr[i].getName()) {
			index = i;
			break;
		}
	}

	if (index != -1) {
		arr.erase(arr.begin() + index);
	}
	else {
		cout << endl << "Not found" << endl;
	}

}

template<typename vctr>
void printReservoirVector(vctr arr) {
	int size = arr.size();

	cout << endl << '\t' << "RESERVOIRS" << endl;
	for (int i = 0; i < size; i++) {
		cout << endl;

		cout << arr[i].getName() << " " << arr[i].getType() << " " << arr[i].getWidth() << " " << arr[i].getLength() << " " << arr[i].getMaxDepth() << " " << arr[i].getVolume() << " " << arr[i].getWaterArea();

		cout << endl;
	}
}

int main() {
	vector<Reservoir> arr;
	Reservoir sea{ "Sea", "Red Sea", 323, 202, 1000 };
	Reservoir lake{ "Lake", "Tiger Lake", 125, 56, 50 };
	Reservoir lake2{ "Lake", "Lion Lake", 192, 100, 121 };
	Reservoir sea2{ "Sea" };
	sea2.copyObject(sea);
	
	addReservoir(arr, sea);
	addReservoir(arr, lake);
	addReservoir(arr, lake2);
	addReservoir(arr, sea2);
	
	sea.compareArea(sea2);
	// Оце нічого в консоль не виведе бо виводить тільки тоді коли рівні або типи не співпадають
	lake.compareArea(lake2);

	printReservoirVector(arr);
	deleteReservoir(arr, lake);
	printReservoirVector(arr);
	
	return 0;
}
