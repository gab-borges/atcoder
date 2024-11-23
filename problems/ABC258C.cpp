#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n, q;
	cin >> n >> q;

	string s;
	cin >> s;

	ll start = 0;

	while (q--) {
		char c; ll x;
		cin >> c >> x;

		if (c == '1') {
			start -= x;

			if (start < 0)
				start += n;
		}

		else {
			ll ans = start + x - 1;

			if (ans >= n)
				ans -= n;

			cout << s[ans] << '\n';
		}
	}

	return 0;
}
