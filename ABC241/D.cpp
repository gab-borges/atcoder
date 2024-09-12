#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int q;
	cin >> q;

	multiset<ll> A;

	while (q--) {
		int n;
		cin >> n;
		ll x;
		cin >> x;

		if (n == 1) {
			A.insert(x);
		}

		else if (n == 2) {
			int k;
			cin >> k;

			auto it = A.upper_bound(x);

			int c = 0;
			while (it != A.begin() && c < k) {
				--it;
				c++;
			}

			if (c < k)
				cout << -1 << '\n';

			else
				cout << *it << '\n';
		}

		else if (n == 3) {
			int k;
			cin >> k;

			auto it = A.lower_bound(x);

			int c = 0;
			while (it != A.end() && c < k) {
				c++;
				++it;
			}

			if (c < k)
				cout << -1 << '\n';

			else
				cout << *(--it) << '\n';
		}
	}

	return 0;
}

