#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x,int A[]){
    int i;
    for(i = 0; i < n; i++){
    int y = n;
    while (y > 0) {
        if (A[y]%x == 0) {
            k = k-A[y]/x;
            y = y-1;
        }
        else {
            k = k-A[y]/x-1;
            y = y-1;
        }
    }
    }
    return (int) k >= 0;
}

int main(){
  int  i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
      scanf("%d", &A[i]);
  }
    lb = 0;
    ub = n;
    while (ub-lb > 1) {
        int m = (lb+ub)/2;
        if (p(A[m],A)) {
            ub = m;
        }
        else {
            lb = m;
        }
    }
    printf("%d\n",ub);
  return 0;
}
