#include<stdio.h>
int main(){
  int a, b, i, j = 1, sum = 0;
  scanf("%d%d", &a, &b);
  for(i = 1; i < a + 1; i++){
    for(j = 1; j < b + 1; j++){
      sum += j + i * 100;
    }
  }
  printf("%d", sum);
  return 0;
}