#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int n, mg, mh;
vector<vi> G(12, vi(12, 0)), H(12, vi(12, 0)), A(12, vi(12, 0));
vi P;
ll ans;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> mg;

	for (int i = 0; i < mg; i++) {
		int u, v;
		cin >> u >> v;

		G[u][v] = 1;
		G[v][u] = 1;
	}

	cin >> mh;

	for (int i = 0; i < mh; i++) {
		int u, v;
		cin >> u >> v;

		H[u][v] = 1;
		H[v][u] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			cin >> A[i][j];
			A[j][i] = A[i][j];
		}
	}

	ll ans = INT_MAX;
	
	for (int i = 0; i <= n; i++)
		P.push_back(i);

	do {
		ll c = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if (G[i][j] && !H[P[i]][P[j]])
						c += A[P[i]][P[j]];

				else if (!G[i][j] && H[P[i]][P[j]])
						c += A[P[i]][P[j]];
			}
		}
		
		ans = min(ans, c);

	} while (next_permutation((++P.begin()), P.end()));

	cout << ans << '\n';

	return 0;
}

