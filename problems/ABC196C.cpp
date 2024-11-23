#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin >> n;

	for (ll i = 1; ; i++) {
		if (stoll(to_string(i) + to_string(i)) > n) {
			cout << i - 1 << '\n';
			return 0;
		}
	}

	return 0;
}

