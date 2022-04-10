#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum = 0, d = 0;
  cin >> n;
  vector<int> a(n);
  vector<int> c(n+1, 0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
    sum += a[i];
  }
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < n; j++){
      if(i == a[j]){
        c[i]++;
      }
    }
  }
  for(int i = 1; i <= n; i++){
    if(c[i] != 1)
      d = 1;
  }
  if((sum == ((1+n)*n)/2) && d == 0) cout << "Yes";
  else cout << "No";
  return 0;
}
