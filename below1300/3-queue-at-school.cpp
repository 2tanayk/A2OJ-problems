#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int n, t;
	string s;

	cin >> n >> t;

	cin.ignore();
	getline(cin, s);

	for (int i = 1; i <= t; i++) {
		int s_arr[n] = {0};
		for (int j = 1; j < n; j++) {
			if (s[j] == 'G' && s[j - 1] == 'B' && s_arr[j - 1] != 1) {
				s[j] = 'B';
				s[j - 1] = 'G';
				s_arr[j] = 1;
			}
		}
	}

	cout << s;

	return 0;
}