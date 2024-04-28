#include<stdio.h>
int reverse(int num, int a) {
    if(num == 0) {
        return a;
    }
    a = a * 10 + num % 10;
    return reverse(num / 10, a);
}
int main() {
  int num,result;
  printf("Enter the number to reverse : ");
  scanf("%d",&num);
  result = reverse(num,0);
  printf("Reverse is : %d",result);
  return 0;
}