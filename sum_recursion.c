#include <stdio.h>

int sum(int);

int main() {
  int num;
  printf("Enter a number to find sum : ");
  scanf("%d",&num);
  int res = sum(num);
  printf("The sum of %d is %d",num,res);
  return 0;
}

int sum(int a) {
  int res=0;
  if(a==0) {
    return res;
  }
  return a + sum(a-1);
}