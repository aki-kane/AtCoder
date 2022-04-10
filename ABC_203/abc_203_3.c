#include<stdio.h>
#include <stdlib.h>
int main(){
  int n, m, i, vc = 0;
  int *vi, *fr;
  scanf("%d%d", &n, &m);
  vi = (int *)malloc(n * sizeof(int));
  fr = (int *)malloc(n * sizeof(int));
  for(i = 0; i < n; i++){
    scanf("%d%d", &vi[i], &fr[i]);
  }
  while(1){
    m -= 1;
    if(m < 0)
      break;
    vc += 1;
    for(i = 0; i < n; i++){
      if(vi[i] == vc){
        m += fr[i];
        break;
      }
    }
  }
  printf("%d", vc);
  free(vi);
  free(fr);
  return 0;
}