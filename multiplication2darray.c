#include<stdio.h>
int main() {
  int A[100][100],B[100][100],Multiply[100][100];
  int termsARow,termsACols;
  int termsBRow,termsBCols;
  printf("Enter number of rows and columns of first matrix");
  scanf("%d %d",&termsARow,&termsACols);
  int i,j,k,sum=0;
  for(i=0;i<termsARow;i++) {
    for(j=0;j<termsACols;j++) {
      scanf("%d",&A[i][j]);
    }
  }
  printf("Enter number of rows and columns of second matrix");
  scanf("%d %d",&termsBRow,&termsBCols);
  if(termsACols!=termsBRow) {
    printf("Multiplication of these two matrix is not possible");
    return 0;
  }
  for(i=0;i<termsBRow;i++) {
    for(j=0;j<termsBCols;j++) {
      scanf("%d",&B[i][j]);
    }
  }
  for(i=0;i<termsARow;i++) {
    for(j=0;j<termsACols;j++){
      for(k=0;k<termsBRow;k++) {
        sum=sum+A[i][k]*B[k][j];
      }
      Multiply[i][j]=sum;
      sum=0;
    }
  }
  printf("Product of matrix\n");
  for(i=0;i<termsARow;i++) {
    for(j=0;j<termsBCols;j++) {
      printf("%d ",Multiply[i][j]);
    }
    printf("\n");
  }
  return 0;
}