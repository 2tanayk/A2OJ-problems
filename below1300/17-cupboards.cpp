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

	int l_r[n][2], l_open_ct = 0, r_open_ct = 0, t = 0;

	for (int i = 0; i < n; ++i) {
		cin >> l_r[i][0] >> l_r[i][1];

		if (l_r[i][0] == 1) {
			l_open_ct++;
		}

		if (l_r[i][1] == 1) {
			r_open_ct++;
		}
	}

	if (l_open_ct > n - l_open_ct ) {
		t += n - l_open_ct;
	} else {
		t += l_open_ct;
	}


	if (r_open_ct > n - r_open_ct ) {
		t += n - r_open_ct;
	} else {
		t += r_open_ct;
	}

	cout << t;



	return 0;
}