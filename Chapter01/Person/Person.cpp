//
// Created by Yves Gingras on 18-04-17.
//

#include <String>
#include <iostream>

using namespace std;

#include "Person.h"

Person::Person(string name)
        : m_name(name){
    /*empty*/
}

void Person::Print() {
    cout << "Person " << m_name << endl;
}