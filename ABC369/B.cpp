#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> A(n);
	vector<char> S(n);

	int firstL = -1, firstR = -1;

	for (int i = 0; i < n; i++) {
		cin >> A[i] >> S[i];

		if (firstL == -1 && S[i] == 'L')
			firstL = A[i];

		else if (firstR == -1 && S[i] == 'R')
			firstR = A[i];
	}

	int lastL = firstL, lastR = firstR;

	ll fatigue = 0;
	for (int i = 0; i < n; i++) {
		if (S[i] == 'L') {
			fatigue += abs(A[i] - lastL);
			lastL = A[i];
		}
		else {
			fatigue += abs(A[i] - lastR);
			lastR = A[i];
		}
	}	

	cout << fatigue << '\n';

	return 0;
}

