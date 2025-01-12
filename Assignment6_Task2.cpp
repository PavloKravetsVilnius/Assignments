#include <iostream>
using namespace std;

int main() {
    int numArrays;
    cout << "Number of arrays: ";
    cin >> numArrays;

    int** arrays = new int* [numArrays];

    for (int i = 0; i < numArrays; i++) {
        int size;
        cout << "Size of array " << i + 1 << ": ";
        cin >> size;
        arrays[i] = new int[size];
        int sum = 0;
        cout << "Enter elements: ";
        for (int j = 0; j < size; j++) {
            cin >> arrays[i][j];
            sum += arrays[i][j];
        }

        cout << "Array " << i + 1 << ": ";
        for (int j = 0; j < size; j++) {
            cout << arrays[i][j] << " ";
        }
        cout << "\nSum: " << sum << endl;
    }

    for (int i = 0; i < numArrays; i++) {
        delete[] arrays[i];
    }
    delete[] arrays;

    return 0;
}