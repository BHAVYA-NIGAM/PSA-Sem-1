#include <stdio.h>
int power(int a,int b) {
  // if(a==0)return 1;
  // return b*power(a-1,b);
  if(a==0) return 1;
  int c= power(a/2,b);
  if (b%2==0) {
    return c*c;
  } else  {
    return c*c*b;
  }
}

int main(){
  int num,pow,res;
  printf("Enter a number : ");
  scanf("%d",&num);
  printf("Enter value of power");
  scanf("%d",&pow);
  res = power(pow,num);
  printf("%d raised to the power of %d is %d",num,pow,res);
  return 0;
}