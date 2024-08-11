#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int r;
	cin >> r;

	if (r >= 200)
		cout << 300 - r << '\n';

	else if (r >= 100)
		cout << 200 - r << '\n';

	else
		cout << 100 - r << '\n';

	return 0;
}
