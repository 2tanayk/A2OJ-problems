#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int bm[5][5];
	int moves = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> bm[i][j];

			if (bm[i][j] == 1) {
				moves += abs(i - 2) + abs(j - 2);
			}
		}
	}

	cout << moves;

	return 0;
}