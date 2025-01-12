#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1, guess, attempts = 0;
    cout << "Guess a number between 1 and 100: ";

    do {
        cin >> guess;
        attempts++;
        if (guess > number) cout << "Too high! Try again.\n";
        else if (guess < number) cout << "Too low! Try again.\n";
    } while (guess != number);

    cout << "Correct! You guessed the number in " << attempts << " tries.\n";
    return 0;
}