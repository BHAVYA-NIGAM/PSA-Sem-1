#include<stdio.h>
int main() {
  int a[10]={0,1,1,1,0,1,0,1,0,1};
  int i,count=0,max=0,n=0;
  for(i=0;i<10;i++) {
    if(a[i]==1){
      count++;
      continue;
    }
    if(count>max) {
      max=count;
    }
    count=0;
  }
  printf("%d ",max);
  return 0;
}