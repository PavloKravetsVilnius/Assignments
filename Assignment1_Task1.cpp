#include <iostream>
using namespace std;

int main() {
    double usd;
    cout << "Enter amount in US dollars: ";
    cin >> usd;

    cout << "Euros: " << usd * 0.85 << endl;
    cout << "Yen: " << usd * 109.57 << endl;
    cout << "Pounds: " << usd * 0.73 << endl;

    return 0;
}