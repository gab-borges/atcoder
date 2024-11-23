#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool cmpX (pair<int, int> a, pair<int, int> b) {	
	if (a.first > b.first)
		return true;

	return false;
}

bool cmpY (pair<int, int> a, pair<int, int> b) {
	if (a.second >= b.second)
		return true;

	return false;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int n; ll x, y;
	cin >> n >> x >> y;

	vector<pair<int, int>> dishes(n);

	for(int i = 0; i < n; i++)	
		cin >> dishes[i].first;

	for(int i = 0; i < n; i++)	
		cin >> dishes[i].second;

	sort(dishes.begin(), dishes.end(), cmpX);

	ll countX = 0, sumX = 0;

	for (int i = 0; i < n; i++) {
		if (sumX > x)
			break;

		countX++;
		sumX += dishes[i].first;
	}

	sort(dishes.begin(), dishes.end(), cmpY);

	ll countY = 0, sumY = 0;

	for (int i = 0; i < n; i++) {
		if (sumY > y)
			break;

		countY++;
		sumY += dishes[i].second;
	}

	ll ans = min(countY, countX);

	cout << ans << '\n';

	return 0;
}
