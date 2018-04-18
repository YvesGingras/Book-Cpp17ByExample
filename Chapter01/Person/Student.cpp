//
// Created by Yves Gingras on 18-04-17.
//

#include <String>
#include <iostream>

using namespace std;
#include "Person.h"
#include "Student.h"


Student::Student(string name, string university)
    : Person(name),
      m_university(university) {
    /*Empty*/
}

void Student::Print() {
    cout << endl;
    Person::Print();
    cout << "University " << m_university << endl;
}