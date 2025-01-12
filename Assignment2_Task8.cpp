#include <iostream>
using namespace std;

int main() {
    double homework, midterm, final_exam;
    cout << "Enter Homework, Midterm, and Final Exam scores: ";
    cin >> homework >> midterm >> final_exam;

    double final_grade = homework * 0.4 + midterm * 0.3 + final_exam * 0.3;
    cout << "Final Grade: " << final_grade << endl;
    cout << (final_grade >= 60 ? "Passed" : "Failed") << endl;

    return 0;
}