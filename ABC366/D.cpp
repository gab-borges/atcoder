#include <bits/stdc++.h>
using namespace std;

#define N 112

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n;
	cin >> n;

	int A[N+1][N+1][N+1];
	vector<vector<vector<ll>>> prefix(n+1, vector<vector<ll>>(n+1, vector<ll>(n+1, 0)));

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			for (int k = 1; k <= n; k++)
				cin >> A[i][j][k];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				prefix[i][j][k] = A[i][j][k]
						+ prefix[i-1][j][k]
						+ prefix[i][j-1][k]
						+ prefix[i][j][k-1]
						- prefix[i-1][j-1][k]
						- prefix[i-1][j][k-1]
						- prefix[i][j-1][k-1]
						+ prefix[i-1][j-1][k-1];
			}
		}
	}
	
	int q;
	cin >> q;

	while (q--) {
		int Lx, Rx, Ly, Ry, Lz, Rz;
		cin >> Lx >> Rx >> Ly >> Ry >> Lz >> Rz;

		Lx--; Ly--; Lz--;

		cout << prefix[Rx][Ry][Rz]
			- prefix[Lx][Ry][Rz]
			- prefix[Rx][Ly][Rz]
			- prefix[Rx][Ry][Lz]
			+ prefix[Lx][Ly][Rz]
			+ prefix[Lx][Ry][Lz]
			+ prefix[Rx][Ly][Lz]
			- prefix[Lx][Ly][Lz]
		<< '\n';
	}

	return 0;
}
