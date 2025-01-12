#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char buffer[100];

    cout << "Enter a string: ";
    cin.getline(buffer, 100);
    char* str1 = new char[strlen(buffer) + 1];
    strcpy(str1, buffer);

    cout << "Enter a string to append: ";
    cin.getline(buffer, 100);
    char* str2 = new char[strlen(buffer) + 1];
    strcpy(str2, buffer);

    char* modifiedStr = new char[strlen(str1) + strlen(str2) + 1];
    strcpy(modifiedStr, str1);
    strcat(modifiedStr, str2);

    for (int i = 0; modifiedStr[i]; i++) {
        modifiedStr[i] = toupper(modifiedStr[i]);
    }

    cout << "Modified String: " << modifiedStr << endl;
    cout << "Length: " << strlen(modifiedStr) << endl;

    delete[] str1;
    delete[] str2;
    delete[] modifiedStr;

    return 0;
}
