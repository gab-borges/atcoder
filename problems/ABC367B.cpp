#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	string x;
	cin >> x;

	int found = 0;

	for (int i = x.size()-1; i>=0; i--) {
		if (x[i] == '.') {
			break;
		}

		else if (x[i] == '0' && !found) {
			x.pop_back();
		}

		else if (x[i] != '0') {
			found = 1;
		}
	}

	if (x[x.size()-1] == '.')
		x.pop_back();

	cout << x << '\n';

	return 0;
}

