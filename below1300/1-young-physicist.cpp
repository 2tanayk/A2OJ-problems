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
   int x, y, z;

   int x_t = 0, y_t = 0, z_t = 0;

   cin >> n;

   while (n-- > 0) {
      cin >> x >> y >> z;
      x_t += x;
      y_t += y;
      z_t += z;
   }

   if (x_t == 0 && y_t == 0 && z_t == 0) {
      cout << "YES";
   } else {
      cout << "NO";
   }


   return 0;
}