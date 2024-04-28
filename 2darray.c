#include<stdio.h>

int main() {
  // int a[4][3]={1,67,89,2,53,46,3,32,53,4,53,76};
  // for(int i=0;i<2;i++) {
  //   for(int j=0;j<2;j++) {
  //     scanf("%d",&a[i][j]);
  //   }
  // // }
  // for(int i=0;i<4;i++) {
  //   for(int j=0;j<3;j++) {
  //     printf("%d ",a[i][j]);
  //   }
  //   printf("\n");
  // }
  int b[5][5];
  for(int i=0;i<5;i++) {
    for(int j=0;j<5;j++) {
      b[i][j]=10;
    }
  }
  for(int i=0;i<5;i++) {
    for(int j=0;j<5;j++) {
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
}