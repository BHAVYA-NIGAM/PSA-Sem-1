#include <stdio.h>
int prime_check(int);
int main() { 
  int a,b;
  printf("Enter a number to check if it is prime : ");
  scanf("%d",&a);
  b = prime_check(a);
  if(b==1)printf("YES");
  if(b==0)printf("NO");
  return 0;
}
int prime_check(int a) {
  int i,count=0;
  for(i=1;i<=a;i++) {
    if(a%i==0) count++;
  }
  if(count==2){
    return 1;
  } else {
      return 0;
  }
}