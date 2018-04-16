#include <iostream>
#include "Car.h"

using namespace std;
using namespace Chapter01;

int main() {
    std::cout << "Hello, Car!" << std::endl;

    Car volvo;
    cout << "The Volvo speed: " << volvo.GetSpeed() << " miles per hour, "
            << "direction: " << volvo.GetDirection() << " degrees." << endl;

    volvo.Accelerate(40);
    volvo.TurnRight(30);

    cout << "The Volvo speed: " << volvo.GetSpeed() << " miles per hour, "
         << "direction: " << volvo.GetDirection() << " degrees." << endl;

    volvo.Decelerate(10);
    volvo.TurnLeft(10);

    cout << "The Volvo speed: " << volvo.GetSpeed() << " miles per hour, "
            << "direction: " << volvo.GetDirection() << " degrees." << endl;


    const Car fiat(100,90);
    cout << "The Fiat speed: " << fiat.GetSpeed() << " miles per hour, "
         << "direction: " << fiat.GetDirection() << " degrees." << endl;

    return 0;
}