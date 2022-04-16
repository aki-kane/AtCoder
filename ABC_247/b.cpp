#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool can1 = true, can2 = true;
  vector<string> s(n);
  vector<string> t(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i) >> t.at(i);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        if (s.at(i) == s.at(j) || s.at(i) == t.at(j)) can1 = false;
        if (t.at(i) == s.at(j) || t.at(i) == t.at(j)) can2 = false;
      }
    }
    if (!can1 && !can2) {
      cout << "No" << endl;
      return 0;
    } else {
      can1 = true;
      can2 = true;
    }
  }
  cout << "Yes" << endl;
}