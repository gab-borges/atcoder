#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	

	if (c > b) {
		if (a >= c) {
			cout << "Yes\n";
		}
		else if (a >= b)
			cout << "No\n";

		else
			cout << "Yes\n";
	}
	
	else if (c < b) {
		if ((b <= a && a <= 24) || (0 <= a && a <= c))
			cout << "No\n";

		else
			cout << "Yes\n";
	}

	else {
		cout << "Yes\n";
	}


	return 0;
}
