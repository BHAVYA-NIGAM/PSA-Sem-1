#include<stdio.h>
struct name{
  char fname[20];
  char lname[20];
};

struct person{
  struct name personName;
  int age;
  int salary;
};

int main() {
  struct person person;
  printf("Enter the first name of the person: ");
  scanf("%s", person.personName.fname);
  printf("Enter the last name of the person: ");
  scanf("%s", person.personName.lname);
  printf("\nEnter the age of the person : ");
  scanf("%d",&person.age);
  printf("\nEnter the salary of the person : ");
  scanf("%d",&person.salary);
  printf("\n--------------------------------------");
  printf("\nName of the person is %s %s",person.personName.fname,person.personName.lname);
  return 0;
}