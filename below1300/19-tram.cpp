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

	int a_b[n][2], capacity = 0, max_capacity = 0;

	for (int i = 0; i < n; i++) {
		cin >> a_b[i][0] >> a_b[i][1];
		capacity = capacity - a_b[i][0] + a_b[i][1];

		if (capacity > max_capacity) {
			max_capacity = capacity;
		}
	}

	cout << max_capacity;

	return 0;
}