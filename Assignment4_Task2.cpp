#include <iostream>
#include <vector>
#include <map>

struct Expense {
    std::string type;
    double amount;
};

void addExpense(std::vector<Expense>& expenses) {
    Expense expense;
    std::cout << "Enter expense type: ";
    std::cin >> expense.type;
    std::cout << "Enter expense amount: ";
    std::cin >> expense.amount;
    expenses.push_back(expense);
}

double calculateTotal(const std::vector<Expense>& expenses) {
    double total = 0;
    for (const auto& expense : expenses) {
        total += expense.amount;
    }
    return total;
}

void categorizeExpenses(const std::vector<Expense>& expenses) {
    std::map<std::string, double> categorized;
    for (const auto& expense : expenses) {
        categorized[expense.type] += expense.amount;
    }
    for (const auto& entry : categorized) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
}

int main() {
    std::vector<Expense> expenses;
    int choice;
    do {
        std::cout << "1. Add Expense\n2. Calculate Total\n3. Categorize Expenses\n4. Exit\nEnter choice: ";
        std::cin >> choice;
        if (choice == 1) {
            addExpense(expenses);
        }
        else if (choice == 2) {
            std::cout << "Total: " << calculateTotal(expenses) << std::endl;
        }
        else if (choice == 3) {
            categorizeExpenses(expenses);
        }
    } while (choice != 4);
    return 0;
}