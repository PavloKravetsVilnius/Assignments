#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "1. Add  2. Subtract  3. Multiply  4. Divide: ";
    cin >> choice;

    switch (choice) {
    case 1: cout << num1 + num2 << endl; break;
    case 2: cout << num1 - num2 << endl; break;
    case 3: cout << num1 * num2 << endl; break;
    case 4: cout << (num2 != 0 ? num1 / num2 : "Error") << endl; break;
    default: cout << "Invalid choice" << endl;
    }

    return 0;
}