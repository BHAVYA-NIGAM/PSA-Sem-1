#include <stdio.h>
int reverse(int a[],int start,int end) {
  for(int i=start,j=end;i<j;i++,j--) {
    int copy = a[i];
    a[i]=a[j];
    a[j]=copy;
  }
  return 0;
}

int main() {
  int terms,i,num;
  printf("Enter the number of terms : ");
  scanf("%d",&terms);
  int a[terms];
  for(i=0;i<terms;i++) {
    printf("Enter value of index %d - ",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<terms;i++) {
    printf("%d ",a[i]);
  }
  printf("\nEnter the number of rotation : ");
  scanf("%d",&num);
  num=num%terms;
  reverse(a,0,terms-1);
  reverse(a,0,num-1);
  reverse(a,num,terms-1);
  for(i=0;i<terms;i++) {
    printf("%d ",a[i]);
  }
  return 0;
}