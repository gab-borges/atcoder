#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n, k;
	cin >> n >> k;

	vector<int> h(n+1);

	for (int i = 1; i <= n; i++)
		cin >> h[i];

	vector<int> dp(n+1, INT_MAX);

	dp[1] = 0;
	dp[2] = abs(h[1] - h[2]);

	for (int i = 3; i <= n; i++)
		for (int j = 1; j <= k; j++)
			if (i - j > 0)
				dp[i] = min (dp[i], dp[i-j] + abs(h[i] - h[i-j]));

	cout << dp[n] << '\n';

	return 0;
}
