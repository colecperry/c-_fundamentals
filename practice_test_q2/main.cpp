#include <iomanip>
#include <iostream>
using namespace std;

const int SIZE = 3; // Number of coffee sizes
const string SIZE_NAMES[SIZE] = {"Small (9oz)", "Medium (12oz)", "Large (15oz)"}; // Coffee size names
const double COSTS[SIZE] = {1.75, 1.90, 2.00}; // Coffee size costs

// Structure to hold coffee size and cost
struct Coffee {
    string size;
    double cost;
};

Coffee menuList[SIZE]; // Declare an array of Coffee structs for the menu

// Function to initialize the menu with coffee sizes and costs
void getData(Coffee menuList[]) {
    for (int i = 0; i < SIZE; i++) {
        // Assign size and cost to the menuList array
        menuList[i] = {SIZE_NAMES[i], COSTS[i]};
    }
}

// Function to display the coffee menu
void printMenu() {
    for (int i = 0; i < SIZE; i++) {
        // Print each coffee size with its corresponding cost
        cout << setprecision(2) << fixed << "Select " << i+1 << ": "
             << menuList[i].size << " $" << menuList[i].cost << endl;
    }
}

// Function to calculate the total cost of selected coffee
double calculateTotal(int selectionCounter[]) {
    double total = 0; // Initialize total cost
    for (int i = 0; i < SIZE; i++) {
        // Add the cost of each selected coffee size
        total += selectionCounter[i] * menuList[i].cost;
    }
    return total; // Return the total cost
}

// Function to show instructions for using the menu program
void showInstructions() {
    // Print instructions on how to use the program
    cout << "Welcome to Jason's Coffee Shop!" << endl;
    cout << "1: Buy Coffee" << endl;
    cout << "2: Display total cost of the coffee bought" << endl;
    cout << "3: Show total money made by the shop owner" << endl;
    cout << "4: Exit" << endl;
}

int main() {
    int menuSelection; // User's menu selection
    int selection; // User's coffee selection
    int selectionCounter[SIZE] = {0}; // Array to track number of coffees bought
    double totalMoneyMade = 0; // Track total money made by the shop owner

    getData(menuList); // Initialize the menu with coffee data

    while (true) {
        showInstructions(); // Show menu options to the user
        cin >> menuSelection; // Get user input

        if (menuSelection == 1) {
            // Option to buy coffee
            printMenu(); // Display the coffee menu
            while (true) {
                cout << "Please enter your selection (1-3, or -999 to exit): ";
                cin >> selection; // Get the user's coffee selection
                if (selection == -999) {
                    // Exit coffee selection loop
                    break;
                }
                if (selection > 0 && selection <= SIZE) {
                    // Increment the count of the selected coffee size
                    selectionCounter[selection - 1]++;
                } else {
                    cout << "Invalid selection. Try again." << endl;
                }
            }
        }

        else if (menuSelection == 2) {
            // Option to display total cost of coffee bought
            double total = calculateTotal(selectionCounter); // Calculate total cost
            cout << fixed << setprecision(2) << "Your total cost is $" << total << endl;
            totalMoneyMade += total;  // Add this transaction's total to total money made
            // Reset selection counter after purchase
            for (int i = 0; i < SIZE; i++) {
                selectionCounter[i] = 0;
            }
        }

        else if (menuSelection == 3) {
            // Option to show the total money made by the shop owner
            cout << fixed << setprecision(2) << "Total money made by the shop: $" << totalMoneyMade << endl;
        }

        else if (menuSelection == 4) {
            // Exit the program
            cout << "Thank you for visiting Jason's Coffee Shop!" << endl;
            break;
        }

        else {
            // Handle invalid menu selections
            cout << "Invalid selection. Please try again." << endl;
        }
    }

    return 0;
}
