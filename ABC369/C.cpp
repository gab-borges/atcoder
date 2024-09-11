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
	for (int i = 0; i < n; i++) cin >> A[i];

	ll count = n;

	for (int l = 0; l < n - 1; l++) {
		int r = l + 1;
		int dist = A[r] - A[l];

		for (r = l + 1; r < n; r++) {
			if (A[r] - A[r-1] == dist) {
				count++;
			}

			else break;
		}
	}

	cout << count << '\n';

	return 0;
}

