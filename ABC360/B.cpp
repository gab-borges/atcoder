#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s, t;
	cin >> s >> t;

	for (int w = 1; w < (int)s.size(); ++w) {
		for (int c = 0; c < w; c++) {
			string ans = "";
			
			for(int i = c; i < (int)s.size(); i += w)
				ans += s[i];

			if (ans == t) {
				cout << "Yes\n";
				return 0;
			}
		}
	}
	
	cout << "No\n";

	return 0;
}
