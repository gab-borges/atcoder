#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int H, W;
	cin >> H >> W;

	vector<vi> A(H, vi(W)), B(W, vi(H));

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> A[i][j];
			B[j][i] = A[i][j];
		}
	}

	for (int i = 0; i < W; i++) {
		for (int j = 0; j < H; j++)
			cout << B[i][j] << " ";
		cout << '\n';
	}	

	return 0;
}

