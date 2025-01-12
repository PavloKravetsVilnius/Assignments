#include <iostream>
using namespace std;

int main() {
    int age;
    char citizenship;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Citizen (y/n): ";
    cin >> citizenship;

    cout << (age >= 18 && (citizenship == 'y' || citizenship == 'Y') ? "Eligible to vote" : "Not eligible") << endl;

    return 0;
}