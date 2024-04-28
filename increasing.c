#include <stdio.h>
void increasing(int,int);
int main() {
  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  increasing(1,num);
}

void increasing(int a,int num) {
  if(a>num) 
    return;
  printf("%d\n",a);
  increasing(a+1,num);
  return;
}