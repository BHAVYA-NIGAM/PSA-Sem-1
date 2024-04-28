#include <stdio.h>
int reversePrint(int);
int main() {
  int a;
  printf("Enter the start number to print till 1 : ");
  scanf("%d",&a);
  reversePrint(a);
  return 0;
}

int reversePrint(int num) {
  printf("%d \n",num);
  if(num>1) reversePrint(num-1);
  return 0;
}