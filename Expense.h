#ifndef EXPENSE_H
#define EXPENSE_H
#include <iostream>
#include <string>


class Expense{
private:
   std::string date;
   std::string category;
   double amount;
   std::string description;

public:
   Expense(const std::string& date,
           const std::string& category,
           double amount,
           const std::string& description)
           : date(date), category(category), amount(amount), description(description){}

    //Getters - to access privately held values
    std::string getDate() const {return date;}
    std::string getCategory() const {return category;}
    double getAmount() const {return amount;}
    std::string getDescription() const {return description;}
    
    void print() const{

        std::cout << date << " | " << category << "   | $" << amount << " | " << description << std::endl;
    }

    };
    #endif // EXPENSE_H