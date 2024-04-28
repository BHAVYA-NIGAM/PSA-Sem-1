#include<stdio.h>
int main() {
  int i,count=0,j;
  char a[100];
  printf("Enter the string : ");
  gets(a);
  i=0;
  while(a[i]!='\0'){
    count++;
    i++;
  } 
  printf("%d\n",count);
  for(i=0;i<=count;i++) {
    // for(j=i+1;j<count;j++) {
      if(a[i]>a[i+1]) {
        int terms=a[i];
        a[i]=a[i+1];
        a[i+1]=terms;
      }
    // }
  }
  printf("Sorted string : %s",a);
  return 0;
}