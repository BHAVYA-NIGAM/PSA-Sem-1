#include <stdio.h>
int main()
{
  int a[6],i,lb,ub,b,m;
  for(i=0;i<6;i++)
  {
    // printf("Enter the value of %d index of an array : ",i);
    scanf("%d",&a[i]);
  }
  b=19;
  ub=6-1;
  lb=0;
  while(lb<=ub){
    m=lb + (ub-lb)/2;
    if(a[m]==b)
    {
      printf("The element is %d",m+1);
      break;
    }
    else if(a[m]<b){
      lb=m+1;
      continue;
    }
    else {
      ub=m-1;
      continue;
    }
    printf("Element not found");
  }
}