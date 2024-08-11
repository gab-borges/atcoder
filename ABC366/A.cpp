#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n, t, a;
	cin >> n >> t >> a;

	int s = t + a;

	int ok = 0;

	if (t > a) {
		if (t > a + n - s)
			ok = 1;
		else
			ok = 0;
	}

	else if (a > t) {
		if (a > t + n - s)
			ok = 1;
		else
			ok = 0;
	}

	else {
		if (n - s > 0)
			ok = 0;
		else
			ok = 1;
	}

	if (ok)
		cout << "Yes\n";
	else
		cout << "No\n";


	return 0;
}
