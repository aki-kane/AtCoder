#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, counter = 0;
  bool flag = false;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a.at(i);
  while (true) {
    for (int i = 0; i < n; i++) {
      if ((a.at(i) % 2) == 1) {
        flag = true;
        break;
      }
      a.at(i) /= 2;
    }
    if (flag == true)
      break;
    counter++;
  }
  cout << counter << endl;
}