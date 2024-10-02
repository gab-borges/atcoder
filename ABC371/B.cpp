#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	vi A(n+1);

	for (int i = 0; i < m; i++) {
		int a; char b;
		cin >> a >> b;

		if (A[a] == 0 && b == 'M') {
			cout << "Yes\n";
			A[a] = 1;
		}

		else cout << "No\n";
	}

	return 0;
}

