#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  int s = 45;
  for (int i = 0; i < 9; i++) {
    char tmp = n[i];
    s -= int(tmp - '0');
  }
  cout << s << endl;
}