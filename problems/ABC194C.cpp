#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> A(n);
	vector<ll> v(401);

	for (int i = 0; i < n; i++) {
		cin >> A[i];
		v[A[i]+200]++;
	}

	ll ans = 0;
	for (int i = 0; i < 401; i++) {
		for (int j = i + 1; j < 401; j++) {
			ans += v[i] * v[j] * pow((i-j), 2);
		}
	}

	cout << ans << '\n';

	return 0;
}

