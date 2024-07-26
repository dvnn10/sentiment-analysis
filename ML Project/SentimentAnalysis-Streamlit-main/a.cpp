#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getScoreDifference(vector<int> numseq) {
    int player1_Score = 0, player2_score = 0;

    for (int i = 0; i < numseq.size(); i++) {
        if (i % 2 != 0) {
            // Player 1's turn
            if (numseq[i] % 2 == 0) {
                // If the number is even, reverse the sequence
                reverse(numseq.begin(), numseq.end());
            }
            player1_Score += numseq[i];
        } else {
            // Player 2's turn
            if (numseq[i] % 2 == 0) {
                // If the number is even, reverse the sequence
                reverse(numseq.begin(), numseq.end());
            }
            player2_score += numseq[i];
        }
    }

    // Calculate the score difference
    int scoreDifference = player1_Score - player2_score;

    return scoreDifference;
}

int main() {
    // Example usage
    vector<int> numSequence = {};

    int difference = getScoreDifference(numSequence);

    cout << "Score Difference: " << difference << endl;

    return 0;
}
