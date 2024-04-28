#include<stdio.h>
#include<stdbool.h>
int main() {
  int num,count=0,i,j,a;
  bool wrong =false;
  printf("Enter the number to find sum of primes : ");
  scanf("%d",&num);
  for(i=1;i<=num/2;i++) {
    count=0;
    for(j=1;j<i;j++) {
      if(i%j==0) {
        count++;
      }
    }
    if(count==1) {
      count=0;
      a=num-i;
      for(j=1;j<a;j++) {
        if(a%j==0) {
          count++;
        }
      }
      if(count==1) {
        wrong=true;
        printf("%d=%d+%d\n",num,i,a);
      }
    }
  }
  if(wrong==false) {
    printf("NOT POSSIBLE");
  }
}