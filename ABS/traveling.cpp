#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  vector<int> x(n);
  vector<int> y(n);
  for (int i = 0; i < n; i++) cin >> t.at(i) >> x.at(i) >> y.at(i);
  bool can = true;
  int time = 0, wx = 0, wy = 0;
  for (int i = 0; i < n; i++) {
    if (t.at(i) - time >= (abs(x.at(i) - wx)) + (abs(y.at(i) - wy)) && (abs((t.at(i) - time) - ((abs(x.at(i) - wx)) + (abs(y.at(i) - wy))))) % 2 == 0) {
      time = t.at(i);
      wx = x.at(i);
      wy = y.at(i);
      continue;
    } else {
      can = false;
      break;
    }
  }
  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;
}