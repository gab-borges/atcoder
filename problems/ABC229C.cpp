#include <bits/stdc++.h>
using namespace std;

#define N 312345

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n, w;
	cin >> n >> w;

	vector<pair<ll, int>> C(n+1);

	for (ll i=0; i < n; i++) {
		ll a; int b;
		cin >> a >> b;

		C[i] = {a, b};
	}

	sort (C.begin(), C.end());

	ll sum = 0, sumW = 0;

	for (ll i = C.size()-1; i >= 0; i--) {
		if (sumW + C[i].second > w) {
			sum += C[i].first * (w - sumW);
			break;
		}

		sum += C[i].first * C[i].second;
		sumW += C[i].second;
	}

	cout << sum << '\n';
	

	return 0;
}

