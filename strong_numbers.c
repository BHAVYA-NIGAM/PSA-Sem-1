#include <stdio.h>
int main() {
  int start_value=1,end_value,i,j,copy,a,sum=1;
  scanf("%d",&end_value);
  for(i=start_value;i<=end_value;i++){
    copy=i;
    sum=0;
    while(copy>0) {
      a=copy%10;
      for(j=1;j<=a;j++) {
        sum=sum*j;
      }
      copy/=10;
    }
    if(sum==i) {
      printf("%d ",sum);
    }
  }
}