#include <bits/stdc++.h>
using namespace std;

#define N 212345
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, q;
	cin >> n >> q;

	int A[N];

	map <int, vector<int>> map;


	for (int i = 0; i < n; i++) {
		cin >> A[i];

		map[A[i]].push_back(i+1);
	}

	while (q--) {
		int x, k;
		cin >> x >> k;

		if (map.find(x) != map.end() && map[x].size() >= k) {
			cout << map[x][k-1] << '\n';
		}

		else {
			cout << -1 << '\n';
		}
	}	

	return 0;
}

