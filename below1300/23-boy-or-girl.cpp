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
	set<char, greater<char> > ch_set;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		ch_set.insert(str[i]);
	}

	if (ch_set.size() % 2 != 0) {
		cout << "IGNORE HIM!";
	} else {
		cout << "CHAT WITH HER!";
	}

	return 0;
}