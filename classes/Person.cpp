#include "Person.h"  // Include the Person header file
#include <iostream>
#include <string>

using namespace std;

// Define a static member variable using class scope
int Person::personCount = 0;

// Default constructor
Person::Person() {
    firstName = "John";
    middleName = "Jill";
    lastName = "James";
    Person::personCount++;
    cout << "Default Constructor called for: " << getFullName() << endl;
}

// Parameterized constructor
Person::Person(string fn, string mn, string ln) {
    firstName = fn;
    middleName = mn;
    lastName = ln;
    Person::personCount++;
    cout << "Parameterized Constructor called for: " << getFullName() << endl;
}

// Destructor: Print a message when the destructor is called
Person::~Person() {
    cout << "Destructor called for: " << getFullName() << endl;
    Person::personCount--;  // Decrement the person count when an object is destroyed
}

// Setters
void Person::setFirstName(string fn) { firstName = fn; }
void Person::setMiddleName(string mn) { middleName = mn; }
void Person::setLastName(string ln) { lastName = ln; }
void Person::setFullName(string fn, string mn, string ln) {
    firstName = fn;
    middleName = mn;
    lastName = ln;
}

// Getters
string Person::getFirstName() const { return firstName; }
string Person::getMiddleName() const { return middleName; }
string Person::getLastName() const { return lastName; }
string Person::getFullName() const { return firstName + " " + middleName + " " + lastName; }

// Print function
void Person::print() const {
    cout << "Name is " << getFullName() << endl;
    cout << "Total number of persons: " << Person::personCount << endl;
}

// Static function to get the total person count
int Person::getPersonCount() {
    return Person::personCount;
}

// Function to demonstrate passing object by value
void Person::updateNameByValue(Person person) {
    person.setFullName("Alice", "Marie", "Johnson");  // Modify the copied object
    cout << "Inside updateNameByValue (Modified Copy): " << person.getFullName() << endl;
}

// Function to demonstrate passing object by reference
void Person::updateNameByReference(Person& person) {
    person.setFullName("Robert", "William", "Smith");  // Modify the original object
    cout << "Inside updateNameByReference (Modified Original): " << person.getFullName() << endl;
}

// Static function that returns a new Person object
Person Person::createNewPerson(string fn, string mn, string ln) {
    return Person(fn, mn, ln);  // Return a new Person object
}

// Function that accepts a Person object by const reference and displays its details
void Person::displayPersonDetails(const Person& person) const {
    cout << "Displaying Person Details (const reference):" << endl;
    cout << "First Name: " << person.getFirstName() << endl;
    cout << "Middle Name: " << person.getMiddleName() << endl;
    cout << "Last Name: " << person.getLastName() << endl;
    cout << "Full Name: " << person.getFullName() << endl;
}
