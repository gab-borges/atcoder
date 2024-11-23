#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;

	if (s.size() % 2) {
		cout << "No\n";
		return 0;
	}

	unordered_map<char, int> map;

	for (int i = 0; i < s.size(); i += 2) {
		if(map.find(s[i]) == map.end()) map[s[i]] = 1;
		else map[s[i]]++;

		if(map.find(s[i+1]) == map.end()) map[s[i+1]] = 1;
		else map[s[i+1]]++;
		
		if (s[i] != s[i+1]) {
			cout << "No\n";
			return 0;
		}
	}

	for (auto x : map) {
		if (x.second != 2) {
			cout << "No\n";
			return 0;
		}
	}

	cout << "Yes\n";

	return 0;
}

