#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int s1, s2, s3, s4;
	set<int, greater<int> > shoe_set;

	cin >> s1 >> s2 >> s3 >> s4;

	shoe_set.insert(s1);
	shoe_set.insert(s2);
	shoe_set.insert(s3);
	shoe_set.insert(s4);

	cout << 4 - shoe_set.size();

	return 0;
}