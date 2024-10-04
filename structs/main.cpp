#include <iostream>
#include <string>
using namespace std;

// Declaration of a struct outside of main so it can be used outside main scope
struct Person {
    string firstName;
    string lastName;
    int age;
};

// Declaration of another struct (nested struct)
struct Employee {
    Person personalInfo;  // Struct within a struct
    double salary;
    string department;
};

// Function to print a Person struct (passed by value)
void printPerson(Person p) {
    cout << "Name: " << p.firstName << " " << p.lastName << endl;
    cout << "Age: " << p.age << endl;
}

// Function to modify a Person struct (passed by reference)
void modifyPerson(Person &p) {
    p.firstName = "Modified";
    p.lastName = "Person";
    p.age = 99;
}

int main() {
    // Declare and initialize a struct
    Person person1;
    person1.firstName = "John";
    person1.lastName = "Doe";
    person1.age = 30;

    // Access and assign members
    cout << "Accessing and assigning members:" << endl;
    cout << "First Name: " << person1.firstName << endl;
    cout << "Last Name: " << person1.lastName << endl;
    cout << "Age: " << person1.age << endl;

    // Copying a struct
    Person person2 = person1;  // Copying person1 to person2

    cout << "\nCopied struct (person2):" << endl;
    printPerson(person2);

    // Modify members of person2
    person2.firstName = "Jane";
    person2.lastName = "Smith";
    person2.age = 25;

    cout << "\nModified copied struct (person2):" << endl;
    printPerson(person2);

    // Compare structs (manually comparing members)
    if (person1.firstName == person2.firstName &&
        person1.lastName == person2.lastName &&
        person1.age == person2.age) {
        cout << "\nPerson1 and Person2 are the same." << endl;
    } else {
        cout << "\nPerson1 and Person2 are different." << endl;
    }

    // Pass struct by value - for some reason it's not
    // letting me pass person1 into modifyPerson by value
    cout << "\nPassing struct by value (person1):" << endl;
    printPerson(person1);

    // Pass struct by reference (modify person1)
    modifyPerson(person1);
    cout << "\nStruct after being modified (by reference):" << endl;
    printPerson(person1);

    // Using struct within an array:
    // Person is the struct type, personArray is an array of Person structs, which holds multiple instances of the person struct
    Person personArray[2] = {{"Alice", "Johnson", 20}, {"Bob", "Williams", 40}};

    cout << "\nArray of structs:" << endl;
    for (int i = 0; i < 2; i++) {
        printPerson(personArray[i]); // Pass the struct into a print function
    }

    // Using struct within another struct
    Employee emp1; // Create an Employee instance emp1
    emp1.personalInfo.firstName = "Carl"; // personalInfo variable in the employee struct is a struct itself with variables firstName, lastName, and age
    emp1.personalInfo.lastName = "Brown";
    emp1.personalInfo.age = 45;
    emp1.salary = 75000;
    emp1.department = "Engineering";

    cout << "\nEmployee details (struct within struct):" << endl;
    cout << "Name: " << emp1.personalInfo.firstName << " " << emp1.personalInfo.lastName << endl;
    cout << "Age: " << emp1.personalInfo.age << endl;
    cout << "Salary: " << emp1.salary << endl;
    cout << "Department: " << emp1.department << endl;

    return 0;
}

