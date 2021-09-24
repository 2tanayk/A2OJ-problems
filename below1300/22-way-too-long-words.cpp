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
	cin.ignore();

	while (n-- > 0) {
		string str;
		getline(cin, str);

		if (str.length() > 10) {
			cout << str[0] << str.substr(1).length() - 1 << str[str.length() - 1] << "\n";
		} else {
			cout << str << "\n";
		}
	}

	return 0;
}