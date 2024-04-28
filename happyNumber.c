#include<stdio.h>
#include<math.h>
int main() {
  int num;
  printf("Enter the number to check it is happy number or not : " );
  scanf("%d",&num);
  int copy=num;
  int sum=0;
  while(sum!=1&&sum!=4) {
    sum=0;
    while(copy>0) {
      int b=copy%10;
      sum=sum+pow(b,2);
      copy/=10;
    }
    copy=sum;
  }
  if(sum==1) {
    printf("The number %d is happy number",num);
  } else {
    printf("The number %d is not happy number",num);
  }
  return 0;
}