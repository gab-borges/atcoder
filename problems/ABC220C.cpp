#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vi A(n);

	ll s = 0;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
		s += A[i];
	}

	ll x;
	cin >> x;

	ll p = x / s;
	ll r = x % s;

	ll lSum = 0;

	for (int i = 0; i < n; i++) {
		lSum += A[i];
		if (lSum > r) {
			cout << p*n + (i + 1) << '\n';
			return 0;
		}
	}


	return 0;
}

