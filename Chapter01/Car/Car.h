//
// Created by Yves Gingras on 18-04-15.
//

//#ifndef CHAPTER01_CAR_H
//#define CHAPTER01_CAR_H

namespace Chapter01
{

    class Car
    {
    public:
        Car();
        Car(int speed, int direction);
        ~Car();

        int GetSpeed() const;
        int GetDirection() const;

        void Accelerate(int speed);
        void Decelerate(int speed);
        void TurnLeft(int degrees);
        void TurnRight(int degrees);

    private:
        int m_speed;
        int m_direction;
    };
}



//#endif //CHAPTER01_CAR_H
