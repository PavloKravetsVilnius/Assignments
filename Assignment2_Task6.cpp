#include <iostream>
using namespace std;

int main() {
    double price;
    cout << "Enter price: ";
    cin >> price;

    double discount = (price > 100) ? 0.1 * price : 0;
    cout << "Discount: $" << discount << ", Final price: $" << (price - discount) << endl;

    return 0;
}