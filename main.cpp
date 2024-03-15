#include <iostream>
using namespace std;

int main() {
    double merchandiseCost, salary, rent, electricityCost, totalExpenses, desiredProfit;

    // Prompt user to enter input values
    cout << "Enter total cost of merchandise: ";
    cin >> merchandiseCost;

    cout << "Enter total salary of employees (including your own): ";
    cin >> salary;

    cout << "Enter yearly rent: ";
    cin >> rent;

    cout << "Enter estimated electricity cost: ";
    cin >> electricityCost;

    // Calculate total expenses
    totalExpenses = merchandiseCost + salary + rent + electricityCost;

    // Calculate desired profit
    desiredProfit = 0.1 * merchandiseCost;

    // Calculate total revenue needed
    double totalRevenueNeeded = totalExpenses + desiredProfit;

    // Calculate the markup percentage
    double markupPercentage = (totalRevenueNeeded / merchandiseCost) * 100;

    // Apply the 15% sale
    markupPercentage = markupPercentage / 0.85;

    cout << "Merchandise should be marked up by approximately " << markupPercentage << "%." << endl;

    return 0;
}
}
