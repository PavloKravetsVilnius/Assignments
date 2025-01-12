#include <iostream>
using namespace std;

int main() {
    double weight, height;
    cout << "Enter weight (kg) and height (m): ";
    cin >> weight >> height;

    double bmi = weight / (height * height);
    cout << "BMI: " << bmi << endl;
    cout << (bmi < 18.5 ? "Underweight" : (bmi < 24.9 ? "Normal" : (bmi < 29.9 ? "Overweight" : "Obese"))) << endl;

    return 0;
}