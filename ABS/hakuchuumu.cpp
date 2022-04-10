#include <bits/stdc++.h>
using namespace std;

bool greedy_find (string s) {
  //ベースステップ
  if (s == "dream" || s == "dreamer" || s == "erase" || s == "eraser") 
    return true;

  //再帰ステップ
  if (s.substr(0, 5) == "dream") {
    if (greedy_find(s.substr(5)))
      return true;
  }
  if (s.substr(0, 7) == "dreamer") {
    if (greedy_find(s.substr(7)))
      return true;
  }
  if (s.substr(0, 5) == "erase") {
    if (greedy_find(s.substr(5)))
      return true;
  }
  if (s.substr(0, 6) == "eraser") {
    if (greedy_find(s.substr(6)))
      return true;
  }
  return false;
}

int main() {
  string s;
  cin >> s;
  if (greedy_find(s))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}