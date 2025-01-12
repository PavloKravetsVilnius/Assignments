#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    const int numStudents = 10;
    const int numSubjects = 4;
    vector<vector<int>> grades(numStudents, vector<int>(numSubjects));
    vector<double> studentAverages(numStudents);
    vector<double> subjectAverages(numSubjects);

    // Input grades
    cout << "Enter grades for 10 students across 4 subjects:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ":\n";
        for (int j = 0; j < numSubjects; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    // Calculate averages
    for (int i = 0; i < numStudents; i++) {
        double total = 0;
        for (int j = 0; j < numSubjects; j++) {
            total += grades[i][j];
        }
        studentAverages[i] = total / numSubjects;
    }

    // Calculate subject averages
    for (int j = 0; j < numSubjects; j++) {
        double total = 0;
        for (int i = 0; i < numStudents; i++) {
            total += grades[i][j];
        }
        subjectAverages[j] = total / numStudents;
    }

    // Output results
    cout << "\nStudent Performance:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ": Average: " << fixed << setprecision(2) << studentAverages[i] << endl;
    }

    cout << "\nSubject Averages:\n";
    for (int j = 0; j < numSubjects; j++) {
        cout << "Subject " << j + 1 << ": " << subjectAverages[j] << endl;
    }

    return 0;
}