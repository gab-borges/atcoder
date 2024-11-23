#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	int maior, menor;
	if (a > b) {
		maior = a;
		menor = b;
	}
	else {
		maior = b;
		menor = a;
	}

	int dist = maior - menor;
	int count = 0;

	vector<int> A(3);

	for (int i = menor - dist - 5; i <= maior + dist + 5; i++) {
		A[0] = menor; A[1] = maior;
		A[2] = i;
		
		sort(A.begin(), A.end());

		if (A[2] - A[1] == A[1] - A[0])
			count++;
	}

	cout << count << '\n';	

	return 0;
}

