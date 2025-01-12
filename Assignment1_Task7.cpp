#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, annual_interest_rate, loan_term_years;
    cout << "Enter loan principal: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> annual_interest_rate;
    cout << "Enter loan term in years: ";
    cin >> loan_term_years;

    double monthly_interest_rate = (annual_interest_rate / 100) / 12;
    int num_payments = loan_term_years * 12;

    cout << "Monthly payment: " << (principal * monthly_interest_rate * pow(1 + monthly_interest_rate, num_payments)) / (pow(1 + monthly_interest_rate, num_payments) - 1) << endl;

    return 0;
}