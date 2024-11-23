#include <bits/stdc++.h>
using namespace std;

#define N 1123

typedef long long ll;

int n;
int A[N];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> A[i];

	ll sum = 0;

	for (int i = 0; i < n; i++)
		if (A[i] > 10) sum += A[i]-10;

	cout << sum << '\n';


	return 0;
}
