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

	int height_arr[n], min_h = 100, max_h = 1, min_h_pos = n, max_h_pos = 0;

	for (int i = 0; i < n; i++) {
		cin >> height_arr[i];

		if (min_h >= height_arr[i]) {
			min_h = height_arr[i];
			min_h_pos = i;
		}

		if (max_h < height_arr[i]) {
			max_h = height_arr[i];
			max_h_pos = i;
		}
	}

	(max_h_pos > min_h_pos) ? cout << max_h_pos + (n - 1 - min_h_pos) - 1 : cout << max_h_pos + (n - 1 - min_h_pos);


	return 0;
}