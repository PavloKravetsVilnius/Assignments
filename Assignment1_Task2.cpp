#include <iostream>
using namespace std;

int main() {
    double mpg;
    cout << "Enter fuel efficiency in MPG: ";
    cin >> mpg;

    cout << "Fuel efficiency in L/100km: " << 235.215 / mpg << endl;
    return 0;
}