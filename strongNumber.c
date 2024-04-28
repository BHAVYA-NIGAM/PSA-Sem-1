#include<stdio.h>
int main() {
  int limit,num,rem,sum=0,multiply,copy,i,j;
  printf("Enter the number : ");
  scanf("%d",&limit);
  for(j=1;j<limit;j++) {
    num=j;
    copy=num;
    sum=0;
    while(copy>0) {
      rem=copy%10;
      multiply=1;
      for(i=1;i<=rem;i++) {
        multiply*=i;
      }
      sum=sum+multiply;
      copy/=10;
    }
    if(sum==num) {
      printf("%d " ,num);
    } 
  }
  return 0;
}