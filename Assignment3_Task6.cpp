#include <iostream>
#include <string>
using namespace std;

bool isValidPassword(const string& password) {
    if (password.length() < 8) return false;
    bool hasUpper = false, hasLower = false, hasDigit = false;
    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        if (islower(ch)) hasLower = true;
        if (isdigit(ch)) hasDigit = true;
    }
    return hasUpper && hasLower && hasDigit;
}
int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    cout << (isValidPassword(password) ? "Valid" : "Invalid") << endl;
    return 0;
}