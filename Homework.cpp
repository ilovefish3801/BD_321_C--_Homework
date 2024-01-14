#include <iostream>
#include "Task1.h"
#include "Structs.h"
#include "Task5.h"


using namespace std;

int main()
{
                    // Task 1
    /*const int Size = 3;
    Book arr[Size];
    arr[0] = { "Title1", "Author1", "Publisher1", "Genre1" };
    arr[1] = { "Title2", "Author2", "Publisher2", "Genre2" };
    arr[2] = { "Title3", "Author3", "Publisher3", "Genre3" };

    printAllBooks(arr, Size);
    editBook(arr, Size, "Title2");
    printAllBooks(arr, Size);*/

                    // Task 2
    /*WashingMachine machine{ "Samsung", "White", 0.8, 1.2, 3.1, 0, 0, 100 };
    machine.powerOn();
    machine.setSpinSpeed(500);
    machine.Start();
    machine.Pause();
    machine.Resume();
    machine.Stop();
    machine.powerOff();*/

                    // Task 3
    /*Iron iron{ "Samsung", "Iron 2000", "Cyan", 60, 120, false, 0 };
    iron.powerOn();
    iron.checkWaterSupply();
    iron.turnOnSteamSupply();
    iron.turnOffSteamSupply();
    iron.powerOff();*/
    
                    // Task 4
    /*Boiler boiler{ "Samsung", "Brown", 0, 1000, 10 };
    boiler.powerOn();
    boiler.changeHeatingTemperature(47);*/

                    // Task 5
    Animal animal;
    animal.objectFill();
    animal.printObjectData();
    animal.speakCommand();

    return 0;
}
