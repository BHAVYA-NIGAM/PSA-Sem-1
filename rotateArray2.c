#include<stdio.h>
int main() {
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  int rotation=3,i,j;
  for(int j=1;j<=rotation;j++) {
    int copy = a[9];
    for(i=9;i>=0;i--) {
      a[i]=a[i-1];
    }
    a[0]=copy;
  }
    for(i=0;i<10;i++) {
    printf("%d ",a[i]);
  }    
  return 0;
}