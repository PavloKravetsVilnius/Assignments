#include <iostream>
#include <cctype>
#include <string>

bool hasUppercase(const std::string& password) {
    for (char ch : password) {
        if (isupper(ch)) return true;
    }
    return false;
}

bool hasLowercase(const std::string& password) {
    for (char ch : password) {
        if (islower(ch)) return true;
    }
    return false;
}

bool hasDigit(const std::string& password) {
    for (char ch : password) {
        if (isdigit(ch)) return true;
    }
    return false;
}

bool hasSpecialChar(const std::string& password) {
    for (char ch : password) {
        if (ispunct(ch)) return true;
    }
    return false;
}

std::string checkStrength(const std::string& password) {
    if (password.length() < 8) return "Weak";
    if (!hasUppercase(password)) return "Weak";
    if (!hasLowercase(password)) return "Weak";
    if (!hasDigit(password)) return "Weak";
    if (!hasSpecialChar(password)) return "Weak";
    return "Strong";
}

int main() {
    std::string password;
    std::cout << "Enter password: ";
    std::cin >> password;

    std::cout << "Password strength: " << checkStrength(password) << std::endl;
    return 0;
}