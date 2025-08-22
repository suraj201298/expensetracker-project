#ifndef A1413A81_ECC0_4D12_A9E0_A08E96CB33D4
#define A1413A81_ECC0_4D12_A9E0_A08E96CB33D4
#include <iostream>
#include <string>
#include <vector>
#include "Expense.h"
#include <fstream>

class ExpenseTracker {
private:
    std::vector<Expense> expenses;

public:
    //Add a new expense to the tracker
    void addExpense(const Expense& expense){
        expenses.push_back(expense);
    }

    //Display all expenses
    void displayAll() const {
        std::cout << "Date       | Category  | Amount | Description" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
        for(const auto& exp : expenses){
            exp.print();
        }
    }

    void saveToFile(const std::string& filename) const {
        std::ofstream file(filename);
        if (!file.is_open()){
            std::cerr << "Error: could not open file for writing: " << filename << std::endl;
            return;
        }

        for (const auto& exp : expenses) {
        file << exp.getDate() << ',' 
             << exp.getCategory() << ',' 
             << exp.getAmount() << ',' 
             << exp.getDescription() << '\n';
    }

    file.close();
    std::cout << "Expenses saved to " << filename << std::endl;
}
};

#endif /* A1413A81_ECC0_4D12_A9E0_A08E96CB33D4 */
