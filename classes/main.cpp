#include "Person.h"  // Include the Person class header file
#include <iostream>
using namespace std;

int main() {
    // Create a Person object using the default constructor
    Person p1;
    p1.print();  // Output: Name is John Jill James
    //         Total number of persons: 1
    // Access class members
    cout << "Access first name: " << p1.getFirstName() << endl;

    // Create another Person object using the parameterized constructor
    Person p2("Sally", "Smith", "Jones");
    p2.print();  // Output: Name is Sally Smith Jones
    cout << endl;
    //         Total number of persons: 2

    // Pass class object by value demonstration
    p1.updateNameByValue(p2);
    cout << "Outside pass object by value: ";
    p2.print();  // Output: Name is Sally Smith Jones (Original object unchanged)
    cout << endl;

    // Pass class object by reference demonstration
    p1.updateNameByReference(p2);
    cout << "Outside pass object by reference: ";
    p2.print();  // Output: Name is Robert William Smith (Original object modified)
    cout << endl;

    // Returning a class object from a function
    Person p3 = Person::createNewPerson("Laura", "Elizabeth", "Brown");
    p3.print();  // Output: Name is Laura Elizabeth Brown
    cout << endl;
    //         Total number of persons: 3

    // Pass-by-const-reference demonstration
    cout << "\nCalling displayPersonDetails with const reference:\n";
    p1.displayPersonDetails(p2);  // Display details of p2 without modifying it
    cout << endl;

    // Create an array of Person objects
    cout << "\nCreating an array of Person objects:\n";
    Person people[3] = {
        Person("Alice", "Mary", "Johnson"),
        Person("Bob", "David", "Smith"),
        Person("Charlie", "Evan", "Brown")
    };

    // Print the details of each Person object in the array
    for (int i = 0; i < 3; ++i) {
        people[i].print();
    }
    cout << endl;

    // Display total number of persons created
    cout << "Total Persons Created: " << Person::getPersonCount() << endl;  // Output: Total Persons Created: 6

    // The destructors will be called automatically for each Person object when they go out of scope

    return 0;
}

