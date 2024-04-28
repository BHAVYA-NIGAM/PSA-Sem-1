#include<stdio.h>

int main() {
  int a[9],sum=0,max=0,y,x;
  for(int i=0;i<9;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<9;i++) {
    printf("%d ",a[i]);
  }
  for(int i=0;i<9;i++) {
    sum=0;
    for(int j=i;j<9;j++) {
      sum=sum+a[j];
      if(max<sum) {
        max=sum;
        x=i;
        y=j;
      } else {
        continue;
      }
    }
    // if(max<sum)
    // max=sum;
  }
  printf("\nMax sum : %d\n",max);
  for(int i=x;i<=y;i++) {
    printf("%d ",a[i]);
  }
  return 0;
}

// int main() {
//   int a[9],sum=0,max,b[8],k=1;
//   for(int i=0;i<9;i++){
//     scanf("%d",&a[i]);
//   }
//   for(int i=0;i<9;i++) {
//     printf("%d ",a[i]);
//   }
//   max=0;
//   for(int i=0;i<9;i++) {
//     sum=a[i];
//     b[0]=a[i];
//     for(int j=i+1;j<9;j++) {
//       if(sum<(sum+a[j]))
//       b[1]=a[j];
//       sum+=a[j];
//       if(max<sum) max=sum;
// k++;
//     }
//     // if(max<sum)
//     // max=sum;
//   }
//   printf("\nMax sum : %d\n",max);
//   int terms=sizeof(b)/sizeof(b[0]);
//   printf("%d\n",terms);
//   for(int i=0;i<terms;i++) {
//     printf("%d ",b[i]);
//   }
//   return 0;
// }