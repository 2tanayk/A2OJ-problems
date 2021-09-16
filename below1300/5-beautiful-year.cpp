#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int y;
	cin >> y;

	y++;

	while (true) {
		int temp_n = y;
		int d_arr[10] = {0};
		bool flag = true;

		while (temp_n > 0) {
			int d = temp_n % 10;
			d_arr[d]++;

			if (d_arr[d] > 1) {
				flag = false;
				break;
			} else {
				temp_n /= 10;
			}
		}

		if (flag) {
			cout << y;
			break;
		}
		y++;
	}

	return 0;
}