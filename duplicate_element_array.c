#include <stdio.h>
int main()
{
  int a[5],i,b,j,k;
  for(i=0;i<5;i++)
  {
    printf("Enter the %d index value of array : ", i);
    scanf("%d",&a[i]);
  }
  printf("\n");
  for(i=0;i<5;i++)
  {
    printf("%d",a[i]);
  }
  printf("\n");
  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
      if(a[i]==a[j])
      {
        printf("\nDuplicate Value : %d",a[i]);
      }
    }
  }
  return 0;
}