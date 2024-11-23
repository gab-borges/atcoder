#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n;
	cin >> n;

	vector<int> A(n);

	for(int i = 0; i < n; i++)
		cin >> A[i];

	int maior = 0;

	for (int i = 0; i < n; i++)
		if (A[i] > A[maior])
			maior = i;

	int segundoMaior = INT_MIN;
	int segundoMaiorIdx = 0;

	for (int i = 0; i < n; i++) {
		if (i != maior && A[i] > segundoMaior) {
			segundoMaior = A[i];
			segundoMaiorIdx = i;
		}
	}

	cout << segundoMaiorIdx + 1 << '\n';

	return 0;
}
