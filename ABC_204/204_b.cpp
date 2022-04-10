#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, i, nut = 0;
  cin >> n;
  vector<int> a(n);
  for(i = 0; i < n; i++){
    cin >> a.at(i);
    if(a.at(i) < 11)
      continue;
    else
      nut += (a.at(i) - 10);
  }
  cout << nut;
  return 0;
}