#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;	
	cin >> n;

	unordered_map<int, int> m;

	ll c = 0;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		c += i;

		if (m.find(a) != m.end())
			c -= m[a]++;

		else
			m[a] = 1;
	}
	
	cout << c << '\n';

	return 0;
}

