#include <iostream>
#include <vector>
#include <string>

class Account {
public:
    std::string name;
    int accountNumber;
    double balance;

    Account(std::string n, int accNum, double bal) : name(n), accountNumber(accNum), balance(bal) {}
};

class Bank {
private:
    std::vector<Account> accounts;

public:
    void createAccount(std::string name, int accNum, double balance) {
        accounts.push_back(Account(name, accNum, balance));
        std::cout << "Account created!" << std::endl;
    }

    void deposit(int accNum, double amount) {
        for (auto& acc : accounts) {
            if (acc.accountNumber == accNum) {
                acc.balance += amount;
                std::cout << "Deposited " << amount << std::endl;
                return;
            }
        }
        std::cout << "Account not found!" << std::endl;
    }

    void withdraw(int accNum, double amount) {
        for (auto& acc : accounts) {
            if (acc.accountNumber == accNum) {
                if (acc.balance >= amount) {
                    acc.balance -= amount;
                    std::cout << "Withdrew " << amount << std::endl;
                }
                else {
                    std::cout << "Insufficient balance!" << std::endl;
                }
                return;
            }
        }
        std::cout << "Account not found!" << std::endl;
    }

    void checkBalance(int accNum) {
        for (auto& acc : accounts) {
            if (acc.accountNumber == accNum) {
                std::cout << "Balance: " << acc.balance << std::endl;
                return;
            }
        }
        std::cout << "Account not found!" << std::endl;
    }
};

int main() {
    Bank bank;
    int choice, accNum;
    double amount;
    std::string name;

    while (true) {
        std::cout << "1. Create Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Exit\nEnter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter initial deposit: ";
            std::cin >> amount;
            bank.createAccount(name, accNum, amount);
        }
        else if (choice == 2) {
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            bank.deposit(accNum, amount);
        }
        else if (choice == 3) {
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            bank.withdraw(accNum, amount);
        }
        else if (choice == 4) {
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            bank.checkBalance(accNum);
        }
        else if (choice == 5) {
            break;
        }
    }
    return 0;
}