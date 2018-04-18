//
// Created by Yves Gingras on 18-04-17.
//


class Employee : public Person{

public:
    Employee(string name, string company);
    void Print();

private:
    string m_company;
};
