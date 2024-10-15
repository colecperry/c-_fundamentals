#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double merchandiseCost, salary, rent, electricityCost;
    double expenses, desiredProfit, totalRevenue, markupFactor;

    // Prompt Jill to enter the necessary information
    cout << "Enter the total cost of the merchandise: ";
    cin >> merchandiseCost;

    cout << "Enter the total salary of employees (including Jill's salary): ";
    cin >> salary;

    cout << "Enter the yearly rent of the store: ";
    cin >> rent;

    cout << "Enter the estimated electricity cost: ";
    cin >> electricityCost;

    // Calculate total expenses and desired profit
    expenses = salary + rent + electricityCost;
    cout << "Expenses: " << expenses << endl;
    desiredProfit = 0.10 * (merchandiseCost + expenses);  // 10% of total costs
    cout << "DesiredProfit: " << desiredProfit << endl;
    totalRevenue = merchandiseCost + expenses + desiredProfit; // Total revenue needed to achieve 10% net profit
    cout << "Total revenue: " << totalRevenue << endl;

    // Calculate the markup factor needed
    markupFactor = totalRevenue / (0.85 * merchandiseCost);  // Considering 15% sale
    cout << "MarkupFactor: " << markupFactor << endl;

    // Output the required markup percentage
    cout << fixed << showpoint << setprecision(2);
    cout << "To achieve a 10% net profit after a 15% sale, "
         << "the merchandise should be marked up by "
         << (markupFactor - 1) * 100 << "%" << endl;

    return 0;
}
