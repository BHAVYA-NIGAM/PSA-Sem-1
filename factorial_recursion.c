#include<stdio.h>

int fact(int);

int main() {
  int num,factorial;
  printf("Enter a number to find factorial : ");
  scanf("%d",&num);
  factorial = fact(num);
  printf("%d",factorial);
  return 0;
}

int fact(int a) {
  if(a==1 || a==0) {
    return 1;
  }
  return a*fact(a-1);
}