#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  bool can = true;
  vector<string> words(4);
  words = {"dream", "dreamer", "erase", "eraser"};
  for (int i = 0; i < 4; i++)
    reverse(words.at(i).begin(), words.at(i).end());
  for (int i = 0; i < s.size();) {
    bool can2 = false;
    for (int j = 0; j < 4; j++) {
      string tmp = words.at(j);
      if (s.substr(i, tmp.size()) == tmp) {
        can2 = true;
        i += tmp.size();
        break;
      }
    }
    if (!can2) {
      can = false;
      break;
    }
  }
  if (can)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}