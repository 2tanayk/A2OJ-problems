#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	string zero = ".", one = "-.", two = "--";
	string bcode_str = "";
	string decoded_str = "";

	getline(cin, bcode_str);

	for (int i = 0; i < bcode_str.length(); ) {
		if (i + 1 <= bcode_str.length() && bcode_str.substr(i, 2) == one) {
			decoded_str.append("1");
			i += 2;
		} else if (i + 1 <= bcode_str.length() && bcode_str.substr(i, 2) == two) {
			decoded_str.append("2");
			i += 2;
		} else {
			decoded_str.append("0");
			i++;
		}
	}

	cout << decoded_str;

	return 0;
}