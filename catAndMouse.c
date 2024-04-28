#include<stdio.h>
#include<stdlib.h>
int main() {
  int a,b,c,d;
  scanf("%d",&d);
  for(int i=1;i<=d;i++) {
    scanf("%d %d %d",&a,&b,&c);
    if(abs(c-a)<abs(c-b)) {
      printf("Cat A");
    }
    if(abs(c-a)>abs(c-b)) {
      printf("Cat B");
    }
    if(abs(c-a)==abs(c-b)) {
      printf("Mouse C");
    }
    printf("\n");
  }
  return 0;
}