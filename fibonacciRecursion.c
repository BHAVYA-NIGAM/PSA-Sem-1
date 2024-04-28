#include <stdio.h>
int fib(int a) {
  if(a==1 || a==2) return 1;
  return fib(a-1) +fib(a-2);
}
int main() {
  int a, res;
  printf("Enter the term value of fibonacci series : ");
  scanf("%d",&a);
  res = fib(a);
  printf("%d",res);
}