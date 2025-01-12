#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cout << i << "\t" << i * i << "\t" << i * i * i << endl;
    }

    return 0;
}