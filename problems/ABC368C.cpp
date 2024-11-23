#include <bits/stdc++.h>
using namespace std;

#define N 212345
typedef long long ll;

ll H[N];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin >> n;

	for (ll i = 0; i < n; i++)
		cin >> H[i];


	ll curr = 0;
	ll T = 1;

	while (curr < n) {
		while (H[curr] > 0) {
			if (T % 3 == 0)
				H[curr] -= 3;

			else
				H[curr]--;

			T++;		
		}

		curr++;
	}
	
	cout << T << '\n';

	return 0;
}

