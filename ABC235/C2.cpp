#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, q;
	cin >> n >> q;

	unordered_map<int, vi> map;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (map.find(a) == map.end())
			map[a] = {i+1};

		else
			map[a].push_back(i+1);
	}

	for (int i = 0; i < q; i++) {
		int x, k;
		cin >> x >> k;

		if (map.find(x) == map.end() || map[x].size() < k) {
			cout << -1 << '\n';
			continue;
		}

		cout << map[x][k-1] << '\n';
	}

	return 0;
}

