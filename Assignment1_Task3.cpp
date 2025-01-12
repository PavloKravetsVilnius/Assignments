#include <iostream>
using namespace std;

int main() {
    double weight_pounds, height_inches;
    cout << "Enter weight in pounds: ";
    cin >> weight_pounds;
    cout << "Enter height in inches: ";
    cin >> height_inches;

    double bmi = (weight_pounds * 0.453592) / ((height_inches * 0.0254) * (height_inches * 0.0254));

    cout << "BMI: " << bmi << endl;
    if (bmi < 18.5) cout << "Underweight" << endl;
    else if (bmi < 24.9) cout << "Normal weight" << endl;
    else if (bmi < 29.9) cout << "Overweight" << endl;
    else cout << "Obese" << endl;

    return 0;
}