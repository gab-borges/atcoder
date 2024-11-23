#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vi s;

	for (int i = 1; i <= n; i++) {
		vi ant = s;
		s.push_back(i);
		s.insert(s.end(), ant.begin(), ant.end());
	}

	for (ll i = 0; i < (ll) s.size(); i++)
		cout << s[i] << " ";
	cout << '\n';

	return 0;
}

