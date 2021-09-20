#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int n, m;

	cin >> n >> m;

	for (int i = n + 1; i <= m; i++) {
		bool not_a_prime_flag = false;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				not_a_prime_flag = true;
				break;
			}
		}
		if (!not_a_prime_flag && i != m) {
			cout << "NO";
			break;
		} else if (!not_a_prime_flag && i == m) {
			cout << "YES";
		} else if (not_a_prime_flag && i == m) {
			cout << "NO";
		}
	}

	return 0;
}