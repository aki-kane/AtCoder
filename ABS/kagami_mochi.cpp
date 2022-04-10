#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, count = 0, tmp = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end(), greater<int>());
  for (int i = 0; i < n; i++) {
    if (a.at(i) == tmp)
      continue;
    count++;
    tmp = a.at(i);
  }
  cout << count << endl;
}