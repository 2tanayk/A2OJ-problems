#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	bool lights_matrix[3][3] = {{true, true, true}, {true, true, true}, {true, true, true}};
	int input_matrix[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> input_matrix[i][j];

			int adjv_1 = i + 1;
			int adjv_2 = i - 1;
			int adjh_1 = j + 1;
			int adjh_2 = j - 1;

			bool odd_check = input_matrix[i][j] % 2 != 0;

			if (odd_check) {
				lights_matrix[i][j] = !lights_matrix[i][j];
			}

			if (adjv_1 < 3) {
				if (odd_check) {
					lights_matrix[adjv_1][j] = !lights_matrix[adjv_1][j];
				}
			}

			if (adjv_2 >= 0) {
				if (odd_check) {
					lights_matrix[adjv_2][j] = !lights_matrix[adjv_2][j];
				}
			}

			if (adjh_1 < 3) {
				if (odd_check) {
					lights_matrix[i][adjh_1] = !lights_matrix[i][adjh_1];
				}
			}

			if (adjh_2 >= 0) {
				if (odd_check) {
					lights_matrix[i][adjh_2] = !lights_matrix[i][adjh_2];
				}
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			lights_matrix[i][j] ? cout << "1" : cout << "0";
		}
		cout << endl;
	}

	return 0;
}