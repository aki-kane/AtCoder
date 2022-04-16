#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a.at(i);
  int q;
  cin >> q;
  vector<int> l(q), r(q), x(q);
  for (int i = 0; i < q; i++) cin >> l.at(i) >> r.at(i) >> x.at(i);
  for (int i = 0; i < q; i++) {
    int count = 0;
    for (int j = l.at(i); j <= r.at(i); j++) {
      if (a.at(j - 1) == x.at(i)) count++;
    }
    cout << count << endl;
  }
}