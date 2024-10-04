#include "Person (4).h"
#include <iostream>
#include <string>

using namespace std;

Person::Person() {
    firstName = "John";
    middleName = "Jill";
    lastName = "James";
}

Person::Person(string fn, string mn, string ln) {
    firstName = fn;
    middleName = mn;
    lastName = ln;
}

// Destructor
Person::~Person(){}

void Person::setFirstName(string fn) {
    firstName = fn;
}

void Person::setMiddleName(string mn) {
    middleName = mn;
}

void Person::setLastName(string ln) {
    lastName = ln;
}

void Person::setFullName(string fn, string mn, string ln) {
    firstName = fn;
    middleName = mn;
    lastName = ln;
}

string Person::getFirstName() const {
    return firstName;
}

string Person::getMiddleName() const {
    return middleName;
}

string Person::getLastName() const {
    return lastName;
}

string Person::getFullName() const {
    return firstName + " " + middleName + " " + lastName;
}

void Person::print() const {
    cout << "Name is " << firstName + " " + middleName + " " + lastName << endl;

}

// ostream operator: We are going to overload the operator by passing it the ostream object
// and an instance from the person class -> We are printing the object similar to toString
// because we would have to print the object each time using dot notation
ostream& operator<<(ostream& osObject, const Person& p1) {
    osObject << p1.firstName << " " << p1.middleName << " " << p1.lastName;
    return osObject;
}

istream& operator>>(istream& isObject, Person& p1) {
    isObject >> p1.firstName >> p1.middleName >> p1.lastName;
    return isObject;
}
