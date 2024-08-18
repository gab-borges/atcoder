#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<vector<int>> dp(N, vector<int>(3, 0));  // dp table
    // Mapping moves to indices: 'R' -> 0, 'P' -> 1, 'S' -> 2

    // Base case
    dp[0][0] = (S[0] == 'S' ? 1 : 0);  // Takahashi plays 'R'
    dp[0][1] = (S[0] == 'R' ? 1 : 0);  // Takahashi plays 'P'
    dp[0][2] = (S[0] == 'P' ? 1 : 0);  // Takahashi plays 'S'

    // DP transitions
    for (int i = 1; i < N; i++) {
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + (S[i] == 'S' ? 1 : 0); // Takahashi plays 'R'
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + (S[i] == 'R' ? 1 : 0); // Takahashi plays 'P'
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + (S[i] == 'P' ? 1 : 0); // Takahashi plays 'S'
    }

    // Result is the maximum of the last possible moves
    int result = max({dp[N-1][0], dp[N-1][1], dp[N-1][2]});
    cout << result << endl;

    return 0;
}
