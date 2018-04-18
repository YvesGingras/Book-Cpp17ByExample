//
// Created by Yves Gingras on 18-04-17.
//


class Person {
public:
    explicit Person(string name);
    virtual void Print();

private:
    string m_name;
};
