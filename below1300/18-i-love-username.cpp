#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int n;

	cin >> n;

	int scores[n], best_p = 0, worst_p = 10000, amz_ct = 0;

	for (int i = 0; i < n; ++i) {
		cin >> scores[i];

		if (i == 0) {
			best_p = scores[i];
			worst_p = scores[i];
		}

		if (best_p < scores[i] && i != 0) {
			best_p = scores[i];
			amz_ct++;
		}

		if (worst_p > scores[i] && i != 0) {
			worst_p = scores[i];
			amz_ct++;
		}
	}

	cout << amz_ct;

	return 0;
}