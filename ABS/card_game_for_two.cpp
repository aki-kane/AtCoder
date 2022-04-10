#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a_sum = 0, b_sum = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end(), greater<int>());
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      a_sum += a.at(i);
    else
      b_sum += a.at(i);
  }
  cout << a_sum - b_sum << endl;
}