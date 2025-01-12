#include <iostream>
using namespace std;

int main() {
    double kilometers;
    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    cout << "Miles: " << kilometers * 0.621371 << endl;
    cout << "Feet: " << kilometers * 3280.84 << endl;
    cout << "Inches: " << kilometers * 39370.1 << endl;

    return 0;
}