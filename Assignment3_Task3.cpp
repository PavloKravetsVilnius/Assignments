#include <iostream>
using namespace std;

int main() {
    int number, count;
    cout << "Enter a number: ";
    cin >> number;
    cout << "How many multiples: ";
    cin >> count;

    for (int i = 1; i <= count; ++i) {
        cout << number * i << " ";
    }
    cout << endl;

    return 0;
}