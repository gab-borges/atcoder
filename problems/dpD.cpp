#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int N, W;
	cin >> N >> W;

	vector<int> weights(N+1), values(N+1);

	for (int i = 0; i < N; i++)
		cin >> weights[i] >> values[i];

	vector<ll> dp(W+1, 0);

	for (int i = 0; i < N; i++)
		for (int j = W; j >= weights[i]; j--)
			dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);

	cout << dp[W] << '\n';

	return 0;
}
