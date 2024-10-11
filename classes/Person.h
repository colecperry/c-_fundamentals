#ifndef PERSON_EXAMPLE_PERSON_H
#define PERSON_EXAMPLE_PERSON_H

#include <string>      // Include string header for using std::string
#include <iostream>    // Include iostream for using cout and cin

using namespace std;

class Person {
public:
    // Constructors
    Person();  // Default constructor
    Person(string fn, string mn, string ln);  // Parameterized constructor

    // Destructor
    ~Person();  // Destructor to clean up resources

    // Setters
    void setFirstName(string fn);
    void setMiddleName(string mn);
    void setLastName(string ln);
    void setFullName(string fn, string mn, string ln);

    // Getters
    string getFirstName() const;
    string getMiddleName() const;
    string getLastName() const;
    string getFullName() const;

    // Output
    void print() const;

    // Static member function to get the total count of Person objects
    static int getPersonCount();

    // New functions for passing and returning objects
    void updateNameByValue(Person person);                   // Pass-by-value example
    void updateNameByReference(Person& person);              // Pass-by-reference example
    void updateNameByReference2(Person& person) const;       // Pass by reference using const
    static Person createNewPerson(string fn, string mn, string ln); // Return object

    // Function that accepts const reference
    void displayPersonDetails(const Person& person) const;  // Const reference

private:
    // Data members
    string firstName;
    string middleName;
    string lastName;

    // Static member variable to keep track of the number of Person objects created
    static int personCount;
};

#endif // PERSON_EXAMPLE_PERSON_H
