#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	unordered_map<int, int> map;

	int Q;
	cin >> Q;

	for (int i = 0; i < Q; i++) {
		string s;
		cin >> s;

		if (s == "1") {
			int a;
			cin >> a;

			if (map.find(a) == map.end())
				map[a] = 1;

			else
				map[a]++;
		}

		else if (s == "2") {
			int a;
			cin >> a;

			map[a]--;

			if (map[a] == 0)
				map.erase(a);
		}

		else {
			cout << map.size() << '\n';
		}
	}

	return 0;
}
