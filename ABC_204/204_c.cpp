#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, c = 0;
  cin >> n >> m;
  vector<pair<int, int> > a(m);
  int c = n + m;
  vector<vector<vector<int>>> path(n - 1, vector<vector<int>>(n, vector<int>(2)));
  for(i = 0; i < m; i++){
    cin >>path.at(0).at(i).(0) >> path.at(0).at(i).(1);
  }
  vector<vector<vector<int>>> path(n, vector<vector<int>>(n, vector<int>(2)));
  for(i = 0; i < n - 2; i++){
    if((path.at(0).at(i).(1) == path.at(0 + i).at(i).(0)) && (path.at(0).at(i).(0) != path.at(0 + i).at(i).(1))){
      path.at(1 + i).at(i).(0) = path.at(0).at(i).(0);
      path.at(1 + i).at(i).(1) = path.at(0 + i).at(i).(1);
      c++;
    }
  }
  cout << c;
  return 0;
}