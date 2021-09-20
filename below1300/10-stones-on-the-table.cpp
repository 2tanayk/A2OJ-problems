#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int n, ct_del = 0;
	stack<char> stone_stack;
	string stones_str;

	cin >> n;
	cin.ignore();
	getline(cin, stones_str);

	stone_stack.push(stones_str[0]);

	for (int i = 1; i < n; i++) {
		if (stone_stack.top() == stones_str[i]) {
			ct_del++;
		} else {
			stone_stack.push(stones_str[i]);
		}
	}

	cout << ct_del;

	return 0;
}