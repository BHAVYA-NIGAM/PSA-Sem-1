#include<stdio.h>
int main() {
  int num1,terms,numOfTerms=0;
  scanf("%d %d",&num1,&terms);
  int i,copy,reversed=0,n=0;
  copy=num1;
  while(copy>0) {
    numOfTerms++;
    copy/=10;
  }
  copy=num1;
  terms*=numOfTerms;
  while(copy>0) {
    int b=copy%10;
    reversed=reversed*10+b;
    copy/=10;
  }
  copy=reversed;
  for(i=1;i<terms;i++) {
    int b=reversed%10;
    n=n*10+b;
    reversed/=10;
    if(reversed<0){
      reversed=copy;
    }
  }
  printf("%d",n);
  return 0;
}