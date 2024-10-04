#ifndef PERSON_EXAMPLE_PERSON_H
#define PERSON_EXAMPLE_PERSON_H

# include <string>
# include <iostream>

using namespace std;

class Person {
    friend ostream& operator<<(ostream& os, const Person&);
    friend istream& operator>>(istream& is, Person&);

public:
    Person();
    Person(string fn, string mn, string ln);

    // Destructor
    ~Person();

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

private:
    string firstName;
    string middleName;
    string lastName;
};

#endif //PERSON_EXAMPLE_PERSON_H
