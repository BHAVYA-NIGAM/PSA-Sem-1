#include<stdio.h>
#include <math.h>
int main() {
  int a,i=0,sum=0;
  printf("Enter the number : ");
  scanf("%d",&a);
  int arr[10];
  while(a>0) {
    arr[i]=a%2;
    a=a/2;
    i++;
  }
  for(int j=i-1;j>=0;j--) {
    printf("%d",arr[j]);
    arr[j]=(arr[j]==0) ? 1 : 0;
  }
  printf("\n");
}