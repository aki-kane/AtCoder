#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  long a, b, c;
  cin >> a >> b >> c;
  double an = a/1000000;
  double bn = b/1000000;
  if(pow(an, c) < pow(bn, c)) cout << "<";
  else if(pow(an, c) > pow(bn, c)) cout << ">";
  else cout << "=";
  return 0;
}
