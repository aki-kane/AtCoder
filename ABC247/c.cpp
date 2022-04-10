#include <bits/stdc++.h>
using namespace std;

string saiki (int n) {
  if (n == 1)
    return "1";
  
  return saiki(n - 1) + " " + to_string(n) + " " + saiki(n - 1);
}

int main() {
  int n;
  cin >> n;
  cout << saiki(n) << endl;
}