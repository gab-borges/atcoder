#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);	

	int n, q;
	cin >> n >> q;
	
	vector<int> A(n);

	for (int i = 0; i < n; i++)
		cin >> A[i];

	sort(A.begin(), A.end());

	while (q--) {
		int b, k;
		cin >> b >> k;

		auto f = [=](int x) -> bool {
			auto lb = lower_bound (A.begin(), A.end(), b - x);
			auto ub = upper_bound (A.begin(), A.end(), b + x);

			return ub - lb >= k;
		};

		int lo = -1, hi = 212345678;
		while (hi - lo > 1) {
			int mid = (hi + lo) / 2;

			if (f(mid)) hi = mid;
			else lo = mid;
		}

		cout << hi << '\n';
	}

	return 0;
}
