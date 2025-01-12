#include <iostream>
#include <vector>

using namespace std;

class Seating {
private:
    vector<vector<int>> seats;

public:
    Seating() {
        seats.resize(10, vector<int>(10, 0));  // 10x10 grid, 0 = available, 1 = reserved
    }

    void reserve(int row, int col) {
        if (seats[row][col] == 0) {
            seats[row][col] = 1;
            cout << "Seat reserved at (" << row << ", " << col << ").\n";
        }
        else {
            cout << "Seat already reserved.\n";
        }
    }

    void cancel(int row, int col) {
        if (seats[row][col] == 1) {
            seats[row][col] = 0;
            cout << "Reservation canceled at (" << row << ", " << col << ").\n";
        }
        else {
            cout << "No reservation at this seat.\n";
        }
    }

    void display() {
        cout << "Seating Arrangement:\n";
        for (const auto& row : seats) {
            for (int seat : row) {
                cout << seat << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Seating seating;
    int choice, row, col;

    while (true) {
        cout << "1. Reserve Seat\n2. Cancel Reservation\n3. Display Seating\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter row and column to reserve: ";
            cin >> row >> col;
            seating.reserve(row, col);
        }
        else if (choice == 2) {
            cout << "Enter row and column to cancel reservation: ";
            cin >> row >> col;
            seating.cancel(row, col);
        }
        else if (choice == 3) {
            seating.display();
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}