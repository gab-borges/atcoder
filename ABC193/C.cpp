#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin >> n;

	ll count = n;

	unordered_set<ll> counted;

	for (ll a = 2; ; a++) {
		ll b = 2;

		for (b = 2; ; b++) {
			ll res = pow(a, b);
			if (res > n) break;

			if (counted.find(res) == counted.end()) {
				count--;
				counted.insert(res);
			}
		}

		if (b == 2)
			break;
	}

	cout << count << '\n';

	return 0;
}

