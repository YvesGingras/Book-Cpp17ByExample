//
// Created by Yves Gingras on 18-04-15.
//

#include "Car.h"

namespace Chapter01 {

    Car::Car()
        : m_speed(0),
          m_direction{0} {
        /*Empty*/
    }

    Car::Car(int speed, int direction)
        : m_speed(speed),
          m_direction{direction} {
        /*Empty*/
    }

    Car::~Car() {
        /*Empty*/
    }

    int Car::GetSpeed() const {
        return m_speed;
    }

    int Car::GetDirection() const {
        return m_direction;
    }

    void Car::Accelerate(int speed) {
        m_speed += speed;
    }

    void Car::Decelerate(int speed) {
        m_speed -= speed;
    }

    void Car::TurnLeft(int degrees) {
        m_direction -= degrees;
    }

    void Car::TurnRight(int degrees) {
        m_direction += degrees;
    }
}
