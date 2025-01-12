#include <iostream>
using namespace std;

int main() {
    int initialSize, newSize;
    cout << "Enter initial size: ";
    cin >> initialSize;

    int* arr = new int[initialSize];
    cout << "Enter elements: ";
    for (int i = 0; i < initialSize; i++) {
        cin >> arr[i];
    }

    cout << "Enter new size: ";
    cin >> newSize;
    int* newArr = new int[newSize];
    for (int i = 0; i < initialSize; i++) newArr[i] = arr[i];
    cout << "Enter additional elements: ";
    for (int i = initialSize; i < newSize; i++) {
        cin >> newArr[i];
    }

    cout << "Original Array: ";
    for (int i = 0; i < initialSize; i++) cout << arr[i] << " ";
    cout << "\nResized Array: ";
    for (int i = 0; i < newSize; i++) cout << newArr[i] << " ";
    cout << endl;

    delete[] arr;
    delete[] newArr;

    return 0;
}