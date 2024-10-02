#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	char a, b, c;
	cin >> a >> b >> c;

	vi A(3);

	if (a == '>') A[0]++;
	else A[1]++;

	if (b == '>') A[0]++;
	else A[2]++;

	if (c == '>') A[1]++;
	else A[2]++;

	for (int i = 0; i < 3; i++) {
		if (A[i] == 1) {
			cout << char('A' + i) << '\n';
			break;
		}
	}

	return 0;
}

