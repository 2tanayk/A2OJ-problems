#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	unsigned long long int num;
	int lucky_ct = 0;

	cin >> num;

	while (num > 0) {
		int d = num % 10;

		if (d == 4 or d == 7) {
			lucky_ct++;
		}

		if (lucky_ct > 7) {
			break;
		}

		num /= 10;
	}

	if (lucky_ct == 4 || lucky_ct == 7) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}