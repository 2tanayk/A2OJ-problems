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

	int p[n];
	double p_sum = 0.0;

	for (int i = 0; i < n; i++) {
		cin >> p[i];
		p_sum += (p[i] / 100.0);
	}

	cout << (p_sum / n * 1.0) * 100;

	return 0;
}