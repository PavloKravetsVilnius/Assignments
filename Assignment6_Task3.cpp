#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter Matrix A dimensions (rows cols): ";
    cin >> rowsA >> colsA;

    int** A = new int* [rowsA];
    for (int i = 0; i < rowsA; i++) A[i] = new int[colsA];
    cout << "Enter Matrix A elements:\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter Matrix B dimensions (rows cols): ";
    cin >> rowsB >> colsB;
    if (colsA != rowsB) {
        cout << "Matrix multiplication not possible.\n";
        return 0;
    }

    int** B = new int* [rowsB];
    for (int i = 0; i < rowsB; i++) B[i] = new int[colsB];
    cout << "Enter Matrix B elements:\n";
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> B[i][j];
        }
    }

    int** result = new int* [rowsA];
    for (int i = 0; i < rowsA; i++) {
        result[i] = new int[colsB]();
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resulting Matrix:\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rowsA; i++) delete[] A[i];
    delete[] A;
    for (int i = 0; i < rowsB; i++) delete[] B[i];
    delete[] B;
    for (int i = 0; i < rowsA; i++) delete[] result[i];
    delete[] result;

    return 0;
}