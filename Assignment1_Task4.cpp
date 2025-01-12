#include <iostream>
using namespace std;

int main() {
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    cout << "Celsius: " << (fahrenheit - 32) * 5.0 / 9.0 << endl;
    cout << "Kelvin: " << (fahrenheit - 32) * 5.0 / 9.0 + 273.15 << endl;

    return 0;
}