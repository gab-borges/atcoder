#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int H, W;	
	cin >> H >> W;

	int Si, Sj;
	cin >> Si >> Sj;
	Si--; Sj--;

	vector<string> grid(H);

	for (int i = 0; i < H; i++)
		cin >> grid[i];

	string inst;
	cin >> inst;

	for (int i = 0; i < inst.size(); i++) {
		if (inst[i] == 'L' && Sj > 0 && grid[Si][Sj-1] == '.')
			Sj--;

		else if (inst[i] == 'R' && Sj < W-1 && grid[Si][Sj+1] == '.')
			Sj++;

		else if (inst[i] == 'U' && Si > 0 && grid[Si-1][Sj] == '.')
			Si--;

		else if (inst[i] == 'D' && Si < H-1 && grid[Si+1][Sj] == '.')
			Si++;
	}

	cout << Si+1 << " " << Sj+1 << '\n';

	return 0;
}
