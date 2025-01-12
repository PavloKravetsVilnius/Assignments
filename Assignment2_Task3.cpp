#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 12) cout << "Child" << endl;
    else if (age <= 19) cout << "Teenager" << endl;
    else if (age <= 64) cout << "Adult" << endl;
    else cout << "Senior" << endl;

    return 0;
}