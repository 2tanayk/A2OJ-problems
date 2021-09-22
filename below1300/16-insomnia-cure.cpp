#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int k, l, m, n, d, i = 1;
	set<int, greater<int> > m_set;
	bool k_flag = true, l_flag = true, m_flag = true, n_flag = true;

	cin >> k >> l >> m >> n >> d;


	while (k_flag || l_flag || m_flag || n_flag) {
		if (k * i <= d) {
			m_set.insert(k * i);
		} else {
			k_flag = false;
		}

		if (l * i <= d) {
			m_set.insert(l * i);
		} else {
			l_flag = false;
		}

		if (m * i <= d) {
			m_set.insert(m * i);
		} else {
			m_flag = false;
		}

		if (n * i <= d) {
			m_set.insert(n * i);
		} else {
			n_flag = false;
		}

		i++;
	}

	cout << m_set.size();

	return 0;
}