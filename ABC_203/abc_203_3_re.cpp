#include <bits/stdc++.h>
using namespace std;
#define ll = long long

int main() {
  int N, i = 0;
  long long K, count = 0;
  cin >> N >> K;
  vector<pair<long long, long long> > f(N);
  for(i = 0; i < N; i++){
    cin >> f[i].first >> f[i].second;
  }
  //ここで配列の1つ目の村番号順番にソートしたい
  sort(f.begin(), f.end());
//ここから下で話の流れに沿ってカウントしようとしている、ダメな原因が不明
  while(true){
    K--;
    if(K < 0)
      break;
    count++;
    //ここで追加でお金をもらう判定とお金の受け取り
    while(count == f[i].first){
      K += f[i].second;
      i++;
    }
  }
  /*count = K;
  while(j < N && f[j].first <= count){
    count += f[j].second;
    j++;
  }*/

  cout << count << endl;
  return 0;
}
