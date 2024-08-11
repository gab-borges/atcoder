#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, t, p;
	cin >> n >> t >> p;

	vector<int> L(n);

	for (int i = 0; i < n; i++)
		cin >> L[i];

	int finished = 0, days = 0;

	while (true) {
		int count = 0;

		for (int i : L)
			if (i >= t)
				count++;

		if (count >= p)
			break;

		for (int i = 0; i < n; i++)
			L[i]++;

		days++;
	}

	cout << days << '\n';

	return 0;
}
