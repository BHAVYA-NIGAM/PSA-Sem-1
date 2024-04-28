#include <stdio.h>
int stair(int a) {
  if(a==1) return 1;
  if(a==2)return 2;
  if(a==3)return 3;
  return stair(a-1) + stair(a-2) + stair(a-3);
}

int main() {
  int num,res;
  printf("Enter the number of Stairs : ");
  scanf("%d",&num);
  res  = stair(num);
  printf("There are total %d ways to climb %d stairs",res,num);
}