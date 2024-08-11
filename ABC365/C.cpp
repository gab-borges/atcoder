#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	ll n, m;
	cin >> n >> m;

	vector<int> A(n);

	ll soma = 0, maior = INT_MIN;

	for(int i = 0; i < n; i++) {
		cin >> A[i];
		soma += A[i];

		if (A[i] > maior)
			maior = A[i];
	}

	if (soma <= m) {
		cout << "infinite" << '\n';
		return 0;
	}

	ll lo = 0, hi = maior;

	auto f = [=](ll x) -> bool {
		ll sum = 0;

		for (ll i : A)
			sum += min(i, x);

		return sum <= m;
	};

	while (hi - lo > 1) {
		ll mid = (hi + lo) / 2;

		if (f(mid)) lo = mid;
		else hi = mid;
	}

	cout << lo << '\n';

	return 0;
}
