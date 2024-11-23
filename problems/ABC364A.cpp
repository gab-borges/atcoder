#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	int n;
	cin >> n;

	vector<string> S(n);

	for (int i = 0; i < n; i++) cin >> S[i];
	
	int ok = 0;
	for (int i = 1; i < n; i++) {
		if (S[i-1] == "sweet" && S[i] == "sweet" && i != n-1) {
			ok = 1;
			break;
		}
	}

	if (ok)
		cout << "No\n";
	else
		cout << "Yes\n";


	return 0;
}
