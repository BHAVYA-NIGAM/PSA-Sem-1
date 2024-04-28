#include <stdio.h>
int digit_multiple_number(int);
int main() {
  int num;
  char result;
  printf("Enter a number : ");
  scanf("%d",&num);
  result=digit_multiple_number(num);
  printf("%c",result);
}
int digit_multiple_number(int a) {
  int b,count=0;
  while(a>0) {
  b=a%10;
  if(a%b==0) {
    count++;
  }
  a=a/10;
  }
  if(count>=2) return "YES";
  return "NO";
}