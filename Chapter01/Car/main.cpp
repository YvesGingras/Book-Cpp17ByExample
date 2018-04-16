#include <iostream>
#include "Car.h"

using namespace std;
using namespace Chapter01;


int main() {
    std::cout << "Hello, Car!" << std::endl;

    /*volvo*/
    Car volvo(20,30);
    cout << "The Volvo speed: " << volvo.GetSpeed() << " miles per hour, "
         << "direction: " << volvo.GetDirection() << " degrees." << endl;

    volvo.Accelerate(30);
    volvo.TurnLeft(60);

    cout << "The Volvo speed: " << volvo.GetSpeed() << " miles per hour, "
         << "direction: " << volvo.GetDirection() << " degrees." << endl;

    volvo.Decelerate(60);
    volvo.TurnRight(50);

    cout << "The Volvo speed: " << volvo.GetSpeed() << " miles per hour, "
         << "direction: " << volvo.GetDirection() << " degrees." << endl;

    /*fiat*/
    const Car fiat(100,90);
    cout << "The Fiat speed: " << fiat.GetSpeed() << " miles per hour, "
         << "direction: " << fiat.GetDirection() << " degrees." << endl;

    return 0;
}