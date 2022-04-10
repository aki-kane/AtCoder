#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  vector<long long> cylinder_num, cylinder_big;
  cin >> q;
  for (int i = 0; i < q; i++) {
    long long sum = 0;
    int type;
    cin >> type;
    if (type == 1) {
      int x, c;
      cin >> x >> c;
      cylinder_big.push_back(x);
      cylinder_num.push_back(c);
    } else {
      int c;
      cin >> c;
      while (c > 0) {
        if (c >= cylinder_num.at(0)) {
          c -= cylinder_num.at(0);
          sum += cylinder_num.at(0) * cylinder_big.at(0);
          cylinder_num.erase(cylinder_num.begin());
          cylinder_big.erase(cylinder_big.begin());
        } else {
          sum += c * cylinder_big.at(0);
          cylinder_num.at(0) -= c;
          break;
        }
      }
      if (sum != 0) cout << sum << endl;
    }
  }
}