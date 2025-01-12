#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the score (0-100): ";
    cin >> score;

    char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : (score >= 60) ? 'D' : 'F';
    cout << "Grade: " << grade << endl;

    switch (grade) {
    case 'A': cout << "Excellent!" << endl; break;
    case 'B': cout << "Good!" << endl; break;
    case 'C': cout << "Average." << endl; break;
    case 'D': cout << "Below average." << endl; break;
    default: cout << "Fail." << endl;
    }

    return 0;
}