#include <iostream>
#include "Expense.h"
#include "ExpenseTracker.h"

int main(){
    ExpenseTracker tracker;

     // Add some sample expenses
    tracker.addExpense(Expense("2025-08-21", "Food", 12.50, "Lunch at cafe"));
    tracker.addExpense(Expense("2025-08-21", "Travel", 30.00, "Taxi fare"));
    tracker.addExpense(Expense("2025-08-22", "Books", 45.99, "Programming book"));

    // Display all expenses
    tracker.displayAll();

    // Save expenses to a file
    tracker.saveToFile("expenses.csv");


    return 0;
}
