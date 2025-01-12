#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, height;
    cout << "Enter radius of the cylinder: ";
    cin >> radius;
    cout << "Enter height of the cylinder: ";
    cin >> height;

    const double PI = 3.141592653589793;
    cout << "Volume: " << PI * radius * radius * height << endl;
    cout << "Surface area: " << 2 * PI * radius * (radius + height) << endl;

    return 0;
}