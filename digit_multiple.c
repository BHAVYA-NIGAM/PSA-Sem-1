#include <stdio.h>
int digit_multiple_number(int);
int main() {
  int num;
  int result;
  printf("Enter a number : ");
  scanf("%d",&num);
  result=digit_multiple_number(num);
  printf("%d",result);
}
int digit_multiple_number(int a) {
  int b,count=0,org;
  org=a;
  while(a>0) {
  b=a%10;
  if(org%b==0) {
    count++;
  }
  a=a/10;
  }
  if(count>=2) 
  return 1;
  else
  return 0;
  
}