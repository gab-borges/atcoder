#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int a, b;
	cin >> a >> b;

	if (a != 1 && a != 10) {
		if (abs(a-b) <= 1)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	else if (a == 1) {
		if (b == 2 || b == 10)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	else {
		if (b == 9 || b == 1)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}
