#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vi A(n);
	for (int i = 0 ; i < n; i++) cin >> A[i];

	if (n == 1) {
		cout << 0 << '\n';
		return 0;
	}

	int ans = 0;
	int left = 0;
	int k = 0;
	int dx = 1;

	map<int, int> map;

	for (int i = 1; i < n; i += dx) {
		if (A[i] == A[i - 1]) {
			if (map.find(A[i]) == map.end()) map[A[i]] = 2;
			else map[A[i]] += 2;

			if (map[A[i]] > 2) {
				while (map[A[i]] > 2) {
					map[A[left++]]--;
					k--;
				}
			}

			if (k == 0)
				left = i - 1;

			k += 2;
			ans = max(ans, k);
			dx = 2;
		}

		else if (k > 0) {
			k = 0;
			map.clear();
			i -= 2;
			dx = 1;
		}
	}

	cout << ans << '\n';

	return 0;
}

