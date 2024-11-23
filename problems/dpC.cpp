#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n;
	cin >> n;

	vector<vector<int>> activ(n, vector<int>(3, 0));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> activ[i][j];

	vector<vector<int>> dp(n, vector<int>(3, 0));

	dp[0][0] = activ[0][0];
	dp[0][1] = activ[0][1];
	dp[0][2] = activ[0][2];

	for (int i = 1; i < n; i++) {
		dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + activ[i][0];
		dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + activ[i][1];
		dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + activ[i][2];
	}

	ll ans = max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});

	cout << ans << '\n';

	return 0;
}
