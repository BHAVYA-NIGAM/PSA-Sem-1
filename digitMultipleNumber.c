#include<stdio.h>
int main() {
  int a,b,copy,count=0,digits=0;
  printf("Enter a number : ");
  scanf("%d",&a);
  copy=a;
  while(a!=0) {
    b=a%10;
    if(copy%b==0 && b!=0) {
      count++;
    } else if(b==0){
        count+=1;
    }
    digits++;
    a/=10;
  }
  if(count==digits) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
