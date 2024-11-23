#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n;
	cin >> n;

	vector<string> A(n);

	int max_size = INT_MIN;

	for (int i = 0; i < n; i++) {
		cin >> A[i];

		if ((int) A[i].size() > max_size)
			max_size = A[i].size();
	}

	for (int j = 0; j < max_size; j++) {
		string ans = "";
		int ok = 0, c = 0;

		for (int i = n - 1; i >= 0; i--) {
			if (j < (int) A[i].size()) {
				while(c--) ans.push_back('*');

				ans.push_back(A[i][j]);
				ok = 1;
				c = 0;
			}

			else {
				if (!ok)
					ans.push_back('*');

				else
					c++;
			}
		}

		cout << ans << '\n';
	}


	return 0;
}
