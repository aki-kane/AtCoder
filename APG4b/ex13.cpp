#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
    sum += a.at(i);
  }
  int e = sum / a.size();
  for (int i = 0; i < N; i++)
    cout << abs(a.at(i) - e) << endl;
}