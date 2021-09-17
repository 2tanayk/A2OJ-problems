#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	string str;
	int u_ct = 0;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i])) {
			u_ct++;
		}
	}

	if (u_ct > str.length() - u_ct) {
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		cout << str;
	} else {
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		cout << str;
	}


	return 0;
}