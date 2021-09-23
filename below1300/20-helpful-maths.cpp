#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	string sum_str;

	getline(cin, sum_str);

	char sum_str_arr[sum_str.length() + 1];

	strcpy(sum_str_arr, sum_str.c_str());

	sort(sum_str_arr, sum_str_arr + sum_str.length());


	for (int i = 0; i < sum_str.length(); i++) {
		if (isdigit(sum_str_arr[i])) {
			cout << sum_str_arr[i];

			if (i != sum_str.length() - 1) {
				cout << "+";
			}
		}

	}

	return 0;
}