//
// Created by Yves Gingras on 18-04-17.
//

class Student : public Person {

public:
    Student(string name, string university);
    void Print();

private:
    string m_university;
};



