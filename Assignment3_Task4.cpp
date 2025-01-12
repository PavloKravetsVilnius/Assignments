#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, count = 0;
    cout << "Enter numbers (negative number to stop): ";

    while (cin >> num && num >= 0) {
        sum += num;
        count++;
    }

    if (count > 0) {
        cout << "Sum: " << sum << "\nAverage: " << sum / count << endl;
    }
    else {
        cout << "No numbers entered.\n";
    }

    return 0;
}