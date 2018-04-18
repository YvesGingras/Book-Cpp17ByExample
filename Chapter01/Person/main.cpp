#include <String>
#include <iostream>
using namespace std;

#include "Person.h"
#include "Student.h"
#include "Employee.h"

int main() {
    std::cout << "Hello, Person!" << std::endl;

    Person person("Monica");
//    person.Print();

    Student student("Joseph","MIT");
//    student.Print();

    Employee employee("Charles","Microsoft");
//    employee.Print();

    Person *personPtr;
    personPtr = &person;
    personPtr->Print();

    personPtr = &student;
    personPtr->Print();

    personPtr = &employee;
    personPtr->Print();

    return 0;
}
