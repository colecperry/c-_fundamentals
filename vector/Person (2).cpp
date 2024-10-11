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

// Operator overloading ostream and istream: allows you to define how an object of the
// Person class is printed or read using output cout and cin streams. Instead of calling a print
// function each time, you can just use cout << personObject

// Overloading output operator: allows you to print a person object using cout. Inside the overloaded
// function you define how the Person object's data members are displayed
// cout << p1 should output "John Jill James"
ostream& operator<<(ostream& osObject, const Person& p1) {
    osObject << p1.firstName << " " << p1.middleName << " " << p1.lastName;
    return osObject;
}

// Overloading input operator: this allows you to read data into a person object using cin >> personObject
// Inside the overloaded function you specify how input from the stream is assigned to the data members
istream& operator>>(istream& isObject, Person& p1) {
    isObject >> p1.firstName >> p1.middleName >> p1.lastName;
    return isObject;
}
