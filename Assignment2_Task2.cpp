#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    cout << (isLeap ? "Leap year" : "Not a leap year") << endl;

    return 0;
}