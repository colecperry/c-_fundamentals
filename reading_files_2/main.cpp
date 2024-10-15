#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string first_name;
    string last_name;
    double current_salary;
    int percent_increase;
    double updated_salary;

    ifstream inFile;
    ofstream outFile;

    system("pwd");

    inFile.open("company.txt");

    // check if file exists
    if (!inFile) {
        cout << "File does not exist" << endl;
        return 1;
    }

    // Open a new file for writing
    outFile.open("company_output.txt");

    // Set possible data types to two decimals in the outFile
    outFile << fixed << showpoint << setprecision(2);

    cout << "Processing data..." << endl;

    // Read and process each line
    while (inFile >> last_name >> first_name >> current_salary >> percent_increase) {
        updated_salary = current_salary * (1 + (percent_increase / 100.0));
        outFile << first_name << " " << last_name << " " << updated_salary << endl;
    }

    inFile.close();
    outFile.close();


    return 0;
}