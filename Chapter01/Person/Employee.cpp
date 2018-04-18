//
// Created by Yves Gingras on 18-04-17.
//

#include <String>
#include <iostream>

using namespace std;

#include"Person.h"
#include "Employee.h"


Employee::Employee(string name, string company)
    : Person(name),
      m_company(company){
    /*Empty*/
}

void Employee::Print() {
    cout << endl;
    Person::Print();
    cout << "Company " << m_company << endl;
}

