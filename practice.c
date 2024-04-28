#include<stdio.h>
int main() {
  FILE* fp=fopen("/Users/bhavyanigam/Developer/C/practice.txt","w");
  char c;
  for(c='D';c<='S';c++) {
    putc(c,fp);
  }
  fclose(fp);
  return 0;
}