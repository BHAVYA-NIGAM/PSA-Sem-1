#include<stdio.h>
int main() {
  int terms,i,j=0,t;
  printf("Enter the number of items : ");
  scanf("%d",&terms);
  int a[terms],brr[terms];
  printf("Enter the array : ");
  for(i=0;i<terms;i++) {
    scanf("%d",&a[i]);
  }
  for(i=0;i<terms-1;i++) {
    for(j=0;j<terms - i - 1;j++) {
      if(a[j] > a[j+1]) {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  for(i=0;i<terms;i++) {
    printf("%d ",a[i]);
  }
}