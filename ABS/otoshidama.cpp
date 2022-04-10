#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, y, y_count = -1, h_count = -1, n_count = -1;
  cin >> n >> y;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j + i <= n; j++) {
      int k = n - i - j;
      if (10000 * i + 5000 * j + 1000 * k == y) {
        y_count = i;
        h_count = j;
        n_count = k;
      }
    }
  }
  cout << y_count << ' ' << h_count << ' ' << n_count << endl;
}