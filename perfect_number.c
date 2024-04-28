#include <stdio.h>
int perfect_number(int);
int main() {
  int a,i,count=0;
  printf("Enter a number to check if it is perfect or not : ");
  scanf("%d",&a);
  for(i = 1;i<a;i++)
    if(a%i==0) count=count+i;
    if(count==a) printf("YES");
    else printf("NO");
}