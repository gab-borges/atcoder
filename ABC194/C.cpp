#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;

	vector<int> A(401, 0);
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;

		A[t+200]++;
	}

	ll sum = 0;

	for (int i = 0; i < 400; i++) {
		for (int j = i+1; j <= 400; j++) {
			if (A[i] != 0 && A[j] != 0)
				sum += (long long)A[i] * A[j] * (long long)(i-j)*(i-j);
		}
	}

	cout << sum << '\n';

	return 0;
}

