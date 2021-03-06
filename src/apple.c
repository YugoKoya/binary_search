#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int y = n-1;
    int z = k;
    while (y >= 0) {
        if (A[y]%x == 0) {
            z = z-A[y]/x;
            y = y-1;
        }
        else {
            z = z-A[y]/x-1;
            y = y-1;
        }
    }
    return z >= 0;
}


int main(){
  int  i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
      scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  while (ub-lb > 1) {
        int m = (lb+ub)/2;
        if (p(m)) {
            ub = m;
        }
        else {
            lb = m;
        }
  }
  printf("%d\n",ub);
  return 0;
}
