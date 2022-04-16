#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string tmp = s;
  s.at(0) = '0';
  for (int i = 0; i < 3; i++) s.at(i + 1) = tmp.at(i);

  cout << s << endl;
}