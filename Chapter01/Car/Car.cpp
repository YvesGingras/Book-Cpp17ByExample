//
// Created by Yves Gingras on 18-04-15.
//

#include <runetype.h>
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

    Car::~Car() = default;

    int Car::GetSpeed() const {
        return m_speed;
    }

    int Car::GetDirection() const {
        return m_direction;
    }

    void Car::Accelerate(int speed) {
        m_speed += speed;

        if(m_speed > 200)
            m_speed = 200;
    }

    void Car::Decelerate(int speed) {
        m_speed -= speed;

        if(m_speed < 0) {
            m_speed = -m_speed;

            if(m_speed > 200)
                m_speed = 200;
        }

        if (m_direction < 180)
            m_direction += 180;
        else
            m_direction -= 180;
    }

    void Car::TurnLeft(int degrees) {
        m_direction -= degrees;
        m_direction %= 360;

        if (m_direction < 0)
            m_direction += 360;
    }

    void Car::TurnRight(int degrees) {
        m_direction += degrees;
        m_direction %= 360;
    }
}
