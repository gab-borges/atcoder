#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	string s; cin >> s;

	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == '/') {
			int k = 1;
			while ((i-k>=0&&i+k<n) && (s[i-k]=='1'&&s[i+k]=='2')) {
				k++;
			}
			ans = max(ans, k-1);
		}
	}

	cout << 2*ans+1 << '\n';

	return 0;
}

