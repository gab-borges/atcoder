#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> A(n);
	
	for (int i = 0; i < n; i++)
		cin >> A[i];

	sort (A.rbegin(), A.rend());

	ll cont = 0;

	while (A[0] > 0 && A[1] > 0) {
		A[0]--;
		A[1]--;
		cont++;

		sort (A.rbegin(), A.rend());
	}

	cout << cont << '\n';	

	return 0;
}

