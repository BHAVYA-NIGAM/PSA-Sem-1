#include<stdio.h>
int main() {
  char a[100];
  // scanf("%s",a);
  gets(a);
  int vowel=0,consonant=0;
  int i=0;
  while (a[i]!='\0')
  {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U') {
      vowel++;
    } else if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z') ) {
      consonant++;
    }
    i++;
  }
  printf("Number of vowels in %s are : %d\n",a,vowel);
  printf("Number of consonants in %s are : %d",a,consonant);
  return 0;
}