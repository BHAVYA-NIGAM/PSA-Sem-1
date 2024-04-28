#include <stdio.h>
int increasing_decreasing(int ,int);
int decreasing_increasing(int ,int);
int main() {
  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  increasing_decreasing(1,num);
  printf("decreasing_increasing \n");
  decreasing_increasing(num,1);
  return 0;
}

int increasing_decreasing(int x,int a) {
  if(x>a) return 0;
  printf("%d\n",x);
  increasing_decreasing(x+1,a);
  printf("%d\n",x);
}

int decreasing_increasing(int x,int a) {
  if(x<a) return 0;
  printf("%d\n",x);
  decreasing_increasing(x-1,a);
  printf("%d\n",x);
}