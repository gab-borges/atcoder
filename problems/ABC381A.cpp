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

	if (n%2==0) {
		cout << "No\n";
		return 0;
	}

	int middle = (n+1)/2-1;

	if (s[middle]!='/') {
		cout << "No\n";
		return 0;
	}

	for (int i = 0; i < middle; i++) {
		if (s[i] != '1') {
			cout << "No\n";
			return 0;
		}
	}

	for (int i = middle + 1; i < n; i++) {
		if (s[i] != '2') {
			cout << "No\n";
			return 0;
		}
	}

	cout << "Yes\n";

	return 0;
}

