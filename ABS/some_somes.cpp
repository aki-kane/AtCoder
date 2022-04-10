#include <bits/stdc++.h>
using namespace std;

int sum_each_digit (int n) {
  int sum = 0;
  while (true) {
    if (n == 0)
      break;
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int n, a, b, sum = 0;
  cin >> n >> a >> b;
  for (int i = 1; i <= n; i++) {
    if (a <= sum_each_digit(i) && sum_each_digit(i) <= b)
      sum += i;
  }
  cout << sum << endl;
}