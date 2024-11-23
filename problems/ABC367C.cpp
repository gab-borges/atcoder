#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> K;
vector<vector<int>> A;

typedef long long ll;

void fun(vector<int>& curr, int val) {
	for (int j = 1; j <= val; j++) {
		curr.push_back(j);
		fun(curr, val+1);
		A.
		curr.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	cin >> n >> k;
	
	R.assign(n);

	for (int i = 0; i < n; i++)
		cin >> R[i];

	vector<int> curr;

	for (int i = 0; i < n; i++) {
		fun(curr, R[i]);
	}

	sort (A.begin(), A.end());

	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < n; j++)
			cout << A[i][j];
		cout << '\n';
	}

	return 0;
}
