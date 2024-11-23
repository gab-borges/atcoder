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

	vi p(n+1), q(n+1);

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
		q[p[i]] = i;
	}

	for (int i = 1; i <= n; i++)
		cout << q[i] << " ";
	cout << '\n';

	return 0;
}

