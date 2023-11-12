#include <iostream>
#include "Vehicle.h"
#include "Motorcycle.h"
#include "Car.h"

using namespace std;




int main()
{
    
    Car car;
    Motorcycle motorcycle;

    car.start();
    car.stop();

    motorcycle.start();
    motorcycle.stop();
    motorcycle.stunts();
    
 

    return 0;

}