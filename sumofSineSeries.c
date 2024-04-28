#include<stdio.h>
#include<math.h>
int main() {
  int i,j,k=1;
  float a,b,numerator,sum=0,denominator=1;
  printf("Enter the value of x : ");
  scanf("%f",&a);
  printf("Enter the number of terms : ");
  scanf("%f",&b);
  for(i=1;i<=b;i++){
    numerator=(float)pow(a,k);
    denominator=1;
    for(j=1;j<=k;j++) {
      denominator*=j;
    }
      sum = sum +  (numerator / denominator * pow(-1,i+1));
      k+=2;
  }
  printf("Sum is : %f",sum);
}