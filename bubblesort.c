#include<stdio.h>
int main() {
  int a[7];
  int i,j;
  for(i=0;i<6;i++) {
    printf("Index %d - ",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<6;i++) {
    printf("%d ",a[i]);
  }
  printf("\n");
  for(i=6;i>=0;i--) {
    for(j=6-i-1;j>=0;j--) {
      if(a[j-1] > a[j]) {
        int temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
      }
    }
  }
  for(i=0;i<6;i++) {
    printf("%d ",a[i]);
  }
  return 0;
}