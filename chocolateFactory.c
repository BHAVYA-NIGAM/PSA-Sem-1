#include<stdio.h>
int main() {
  int terms,i,j=0;
  printf("Enter the number of chocolates : ");
  scanf("%d",&terms);
  int t=terms;
  int arr[terms],brr[terms];
  printf("Enter the array : ");
  for(i=0;i<terms;i++) {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<terms;i++) {
    if(arr[i]==0) {
      for(j=i;j<terms-1;j++) {
        arr[j]=arr[j+1];
      }
      arr[terms-1]=0;
      terms--;
      i--;
    }
  }
  for(i=0;i<t;i++) {
    printf("%d ",arr[i]);
  }
  return 0;
}