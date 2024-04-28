#include<stdio.h>

int main() {
  int b[4][4]={1,2,3,3,2,1,1,2,3,2,5,9,7,3,8,6};
  int a[4][4]={1,2,3,3,2,1,1,2,3,6,3,8,4,1,9,0};
  int c[4][4];
  int sum=0,count=0;
  int i,j;
  for(i=0;i<4;i++) {
    for(j=0;j<4;j++) {
      a[i][j] = a[i][j] + b[i][j];
      // c[i][j] = a[i][j] + b[i][j];
    }
  }
  int max=a[0][0],iMax,jMax;
  int min=a[0][0],iMin,jMin;
  for(i=0;i<4;i++) {
    for(j=0;j<4;j++) {
      // printf("%d ",a[i][j]);
      sum+=a[i][j];
      if(max<a[i][j]) {
        max=a[i][j];
        iMax=i;
        jMax=j;
      }
      if(min>a[i][j]) min=a[i][j];
    }
    // printf("\n");
  }
    // printf("\n");
    // printf("Sum - %d ",sum);
    // printf("Max - %d (%d,%d) ",max,iMax,jMax);
    // printf("Min - %d (%d,%d) ",min,iMin,jMin);
    // printf("\n");

    // To find out sum of rectangle form from 2 points
    // (0,1) to (2,4)
    sum=0;
    for(i=0;i<=2;i++) {
      for(j=1;j<=4;j++) {
        sum+=a[i][j];
      }
    }
    // printf("Sum of rectangle - %d ",sum);
     
    // To print row having greatest sum
    int sumArray[4]={0,0,0,0}; // array will store sum of all diff rows in diff index
    for(i=0;i<4;i++) {
      for(j=0;j<4;j++) {
        sumArray[i]+=a[i][j];
      }
    }
    // printf("\n");
    for(i=0;i<4;i++) {
      // printf("%d ",sumArray[i]);
    }
    int maxSum=0;
    for(i=0;i<4;i++) {
      if(maxSum<sumArray[i])maxSum=i; // This will check the value of array and store the index of max value in a variable
    }
    // printf("\nRow with max sum is : %d\n",maxSum);
  for(j=0;j<4;j++) {
    // printf("%d ",a[maxSum][j]);
  }
  // To find row with maximum number of 1s
  int arr[3][4]={1,0,1,1,0,1,0,1,1,1,1,1}; 
  for(i=0;i<3;i++) {
    for(j=0;j<4;j++) {
      printf("%d",a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  count=0;
  int maxCount,maxIndex;
  for(i=0;i<3;i++) {
    for(j=0;j<4;j++) {
      if(a[i][j]==1)
        count++;
    }
    if(maxCount<count) {
      maxCount=count;
      maxIndex=i;
    }
  }
  printf("%d");
}