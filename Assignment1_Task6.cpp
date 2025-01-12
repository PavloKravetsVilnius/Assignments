#include <iostream>
using namespace std;

int main() {
    int total_minutes;
    cout << "Enter time in minutes: ";
    cin >> total_minutes;

    cout << total_minutes / 1440 << " days, "
        << (total_minutes % 1440) / 60 << " hours, "
        << total_minutes % 60 << " minutes." << endl;

    return 0;
}