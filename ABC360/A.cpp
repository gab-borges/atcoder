#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	if(s[2]=='R')
		cout << "No\n";
	else if((s[1]=='R' && s[2]=='M') || s[0]=='R')
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}
