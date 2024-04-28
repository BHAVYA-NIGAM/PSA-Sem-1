#include<stdio.h>
#include<string.h>
typedef struct player{
  char name[20];
  int age;
  int number;
  char job[20];
} player;

int main() {
  player;
  int numOfPlayer,i;
  printf("Enter the number of players : ");
  scanf("%d",&numOfPlayer);
  player arr[numOfPlayer];
  for(i=0;i<numOfPlayer;i++) {
    printf("\nEnter the name of the player %d : ",i);
    scanf("%s",arr[i].name);
    printf("\nEnter the age of the player %d : ",i);
    scanf("%d",&arr[i].age);
    printf("\nEnter the number of the player %d : ",i);
    scanf("%d",&arr[i].number);
    printf("\nEnter the job of the player %d : ",i);
    scanf("%s",arr[i].job);
  }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~");
  for(i=0;i<numOfPlayer;i++) {
    printf("\nThe name of the player %d : ",i);
    printf("%s",arr[i].name);
    printf("\nThe age of the player %d : ",i);
    printf("%d",arr[i].age);
    printf("\nThe number of the player %d : ",i);
    printf("%d",arr[i].number);
    printf("\nThe job of the player %d : ",i);
    printf("%s",arr[i].job);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~");
  }
  return 0;
}