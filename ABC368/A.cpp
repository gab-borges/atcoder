#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	vector<int> A(n);

	for (int i = 0; i < n; i++)
		cin >> A[i];

	for (int i = n - k; i < n; i++)
		cout << A[i] << " ";

	for (int i = 0; i < n - k; i++)
		cout << A[i] << " ";

	cout << '\n';

	return 0;
}

