#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

// Function to display the scoreboard
void displayScoreboard(const vector<vector<int>> &scores, const vector<int> &totalScores, const vector<double> &averageScores) {
    cout << "\nGame Scoreboard\n";
    cout << setw(10) << "Player" << setw(10) << "Round 1" << setw(10) << "Round 2" << setw(10) << "Round 3" << setw(10) << "Round 4" << setw(10) << "Total" << setw(10) << "Average" << endl;

    for (int i = 0; i < scores.size(); i++) {
        cout << setw(10) << "Player " + to_string(i + 1);
        for (int j = 0; j < scores[i].size(); j++) {
            cout << setw(10) << scores[i][j];
        }
        cout << setw(10) << totalScores[i] << setw(10) << fixed << setprecision(2) << averageScores[i] << endl;
    }
}

// Function to calculate the highest and lowest scores in each round
void calculateRoundStats(const vector<vector<int>> &scores) {
    cout << "\nRound Statistics\n";
    for (int round = 0; round < 4; round++) {
        int highest = -1, lowest = 101;
        for (int player = 0; player < scores.size(); player++) {
            highest = max(highest, scores[player][round]);
            lowest = min(lowest, scores[player][round]);
        }
        cout << "Round " << round + 1 << ": Highest = " << highest << ", Lowest = " << lowest << endl;
    }
}

// Main function
int main() {
    const int numPlayers = 5;
    const int numRounds = 4;
    vector<vector<int>> scores(numPlayers, vector<int>(numRounds, 0));
    vector<int> totalScores(numPlayers, 0);
    vector<double> averageScores(numPlayers, 0.0);

    // Input scores
    for (int i = 0; i < numPlayers; i++) {
        cout << "Enter scores for Player " << i + 1 << " (4 rounds): ";
        for (int j = 0; j < numRounds; j++) {
            cin >> scores[i][j];
        }
    }

    // Calculate total and average scores for each player
    for (int i = 0; i < numPlayers; i++) {
        int total = 0;
        for (int j = 0; j < numRounds; j++) {
            total += scores[i][j];
        }
        totalScores[i] = total;
        averageScores[i] = static_cast<double>(total) / numRounds;
    }

    // Display scoreboard
    displayScoreboard(scores, totalScores, averageScores);

    // Display round statistics
    calculateRoundStats(scores);

    // Calculate and display rankings
    vector<pair<int, int>> rankings; // Pair of (totalScore, playerIndex)
    for (int i = 0; i < numPlayers; i++) {
        rankings.push_back({totalScores[i], i});
    }
    sort(rankings.rbegin(), rankings.rend()); // Sort by total scores in descending order

    cout << "\nPlayer Rankings:\n";
    for (int rank = 0; rank < rankings.size(); rank++) {
        cout << "Rank " << rank + 1 << ": Player " << rankings[rank].second + 1 << " (Score: " << rankings[rank].first << ")" << endl;
    }

    return 0;
}
