#include <iostream>
#include <vector>

using namespace std;

class Car {
private:
    Wheel* wheel1;
    Wheel* wheel2;
    Wheel* wheel3;
    Wheel* wheel4;
public:
    Car(Wheel* wheel1_, Wheel* wheel2_, Wheel* wheel3_, Wheel* wheel4_) {
        this->wheel1 = wheel1_;
        this->wheel2 = wheel2_;
        this->wheel3 = wheel3_;
        this->wheel4 = wheel4_;
    }

    void start() {
        wheel1->startSpinning();
        wheel2->startSpinning();
        wheel3->startSpinning();
        wheel4->startSpinning();
    }

    void stop() {
        wheel1->startBraking();
        wheel2->startBraking();
        wheel3->startBraking();
        wheel4->startBraking();
    }
};

int main()
{
    Car* car = new Car(new Wheel(5, "All terrain"), new Wheel(5, "All terrain"), new Wheel(5, "All terrain"), new Wheel(5, "All terrain"));

    car->start();
    return 0;
}
