#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	string str1, str2, str;
	unordered_map<char, int> cmap12, cmap;

	getline(cin, str1);
	getline(cin, str2);
	getline(cin, str);

	if (str.length() != str1.length() + str2.length()) {
		cout << "NO";
	} else {
		for (int i = 0; i < str1.length() + str2.length(); i++) {
			if (i < str1.length()) {
				cmap12[str1[i]]++;
			}

			if (i < str2.length()) {
				cmap12[str2[i]]++;
			}

			if (i < str.length()) {
				cmap[str[i]]++;
			}
		}

		if (cmap == cmap12) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}

	return 0;
}