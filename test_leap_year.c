#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a;
  scanf("%d", &a);
  if(a>=1700 && a<=100000) {
    if(a%4 == 0) {
      printf("YES");
    } else {
      printf("NO");
    }
  }
}