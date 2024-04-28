#include<stdio.h>
int maze(int sr,int sc,int er,int ec) {
  int rightWays = 0;
  int downWays = 0;
  if(sr==er && sc==ec) return 1;
  if(sr == er) {
    rightWays += maze(sr,sc+1,er,ec);
  }
  if(sc==ec) {
    downWays += maze(sr+1,sc,er,ec);
  }
  if(sr<er && sc<ec) {
    rightWays += maze(sr,sc+1,er,ec);
    downWays += maze(sr+1,sc,er,ec);
  }
  return rightWays + downWays;
}

int main() {
  int endC,endR;
  printf("Enter the number of rows : ");
  scanf("%d",&endR);
  printf("Enter the number of columns : ");
  scanf("%d",&endC);
  int res = maze(1,1,endR,endC);
  printf("There are total %d ways to reach to target", res);
  return 0;
}