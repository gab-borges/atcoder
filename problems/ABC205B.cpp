#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	set<int> s;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (a > n || s.find(a) != s.end()) {
			cout << "No\n";
			return 0;
		}

		s.insert(a);
	}

	cout << "Yes\n";	

	return 0;
}

