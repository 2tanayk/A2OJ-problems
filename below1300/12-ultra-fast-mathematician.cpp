#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	string num_1, num_2, ans = "";
	int len;

	cin >> num_1;
	cin >> num_2;

	len = num_1.length();

	for (int i = 0; i < len; i++) {
		int d_1 = num_1[i] - '0';
		int d_2 = num_2[i] - '0';

		ans.append(to_string(d_1 ^ d_2));
	}

	cout << ans;

	return 0;
}