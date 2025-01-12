#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    const int numPlayers = 5;
    const int numRounds = 4;
    vector<vector<int>> scores(numPlayers, vector<int>(numRounds));
    vector<int> totalScores(numPlayers);

    // Input scores
    cout << "Enter scores for 5 players across 4 rounds:\n";
    for (int i = 0; i < numPlayers; i++) {
        cout << "Player " << i + 1 << ":\n";
        for (int j = 0; j < numRounds; j++) {
            cout << "Round " << j + 1 << ": ";
            cin >> scores[i][j];
        }
    }

    // Calculate total scores
    for (int i = 0; i < numPlayers; i++) {
        totalScores[i] = 0;
        for (int j = 0; j < numRounds; j++) {
            totalScores[i] += scores[i][j];
        }
    }

    // Output scoreboard
    cout << "\nGame Scoreboard:\n";
    for (int i = 0; i < numPlayers; i++) {
        cout << "Player " << i + 1 << ": Total Score: " << totalScores[i] << endl;
    }

    return 0;
}