#include <iostream>
#include <fstream> // include for file handling
#include <iomanip> // for formatting decimals

using namespace std;

int main () {
    double saleAmount = 0;
    double ticketPrice;
    int ticketsSold;
    int totalTicketsSold = 0;

    ifstream inFile; // ifstream opens and reads and extract data in files, inFile is a variable
    ofstream outFile; // ofstream allows you to write data to files, outFile is a variable

    // command to open a file
    inFile.open("reading_files_1.txt");

    // Check if this file does not exist
    if (!inFile) {
        cout << "Cannot open file. Program terminates" << endl;
        return 1;
    }

    // command to open a file for writing data
    outFile.open("reading_files_2.txt");

    outFile << fixed << showpoint << setprecision(2); // set to "fixed" point notation instead of scientific notation, showpoint forces the display of the decimal point and trailing zeros, setPrecision(2) sets the number of decimals to 2

    cout << "Processing data..." << endl;

    // Read first line of data from the file
    inFile >> ticketPrice >> ticketsSold;

    while (inFile) { // loop continues as long as the input file has more data to read
        saleAmount = saleAmount + ticketPrice * ticketsSold; // update saleAmount
        totalTicketsSold = totalTicketsSold + ticketsSold; // update totalTicketSold

        inFile >> ticketPrice >> ticketsSold; // move to the next two lines of the inFile -> acts as an incrementer as it reads the next pair of values
    }

    outFile << "Number of tickets sold = $" << totalTicketsSold << endl;
    outFile << "Sale amount = $" << saleAmount << endl;

    inFile.close();
    outFile.close();

    return 0;
}