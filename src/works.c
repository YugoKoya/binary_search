#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m) {
  int i, sum, x;
  sum = 0;
  x = 1;
  for(i=0; i<n; i++) {
    if (A[i] > m) return 0;
    if (sum + A[i] <= m) {
      sum = sum + A[i];
    }
    else {
      x++;
      sum = A[i];
    }
  }
  return x <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
    while (ub-lb > 1){
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
