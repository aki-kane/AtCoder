#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q, i, c, j, f = 0;
  cin >> n >> q;
  vector<int> a(n);
  for(i = 0; i < n; i++)
    cin >> a[i];
  vector<int> k(q);
  for(i = 0; i < q; i++)
    cin >> k[i];
  for(i = 0; i < q; i++){
    c = 1;
    f = 0;
    for(j = 1; j <= k[i]; j++){
      if(j == a[f]){
        f++;
        c += 2;
        continue;
      }
      c++;
    }
    cout << c << endl;
  }
  return 0;
}
