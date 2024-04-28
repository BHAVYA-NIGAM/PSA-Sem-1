#include<stdio.h>
#include<stdlib.h>
int main() {
  char name[50];
  int marks,i,n;
  printf("Enter number of students: ");
  scanf("%d",&n);
  FILE *ptr=fopen("/Users/bhavyanigam/Developer/C/fileHandling.txt","a+");
  if(ptr==NULL) {
    printf("Error!");
    exit(1);
  }
  // for (i=0;i<n;++i) {
  //   printf("For student %d \n Enter name:",i+1);
  //   scanf("%s",name);
  //   printf("Enter marks: ");
  //   scanf("%d",&marks);
  //   fprintf(ptr,"Name: %s \nMarks=%d\n",name,marks);
  // }
  // printf("Student Records are added successfully.");
  // fclose(ptr);
  do{
  char c = fgetc(ptr);
  printf ("%c", c);
  }while(c != EOF);
  fclose(ptr);
  
}