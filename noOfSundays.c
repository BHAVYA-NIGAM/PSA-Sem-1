#include<stdio.h>
int main() {
  char day[20];
  printf("Enter the day : ");
  scanf("%s",day);
  int num,count=0;
  printf("Enter the num of days : ");
  scanf("%d",&num);
  if(day!='Sun' && num<7) {
    count=0;
  } else {
      while(num>0) {
        count++;
        num-=7;
      }
    }
  printf("There are total %d of Sundays ",count);
}


// #include<stdio.h>
// #include<string.h>
// #define MAX_LENGTH 4
// int main()
// {
//     char s[MAX_LENGTH];
//     scanf("%s", s);
//     int a, ans = 0;
//     scanf("%d", &a);
//     char weekdays[][MAX_LENGTH] = {
//         "mon", "tue", "wed", "thu", "fri", "sat", "sun"
//     };
//     int values[] = {6, 5, 4, 3, 2, 1, 0};
//     int mapSize = sizeof(weekdays) / sizeof(weekdays[0]);
//     int m = -1;
//     for (int i = 0; i < mapSize; i++) 
//     { 
//       if (strcmp(s, weekdays[i]) == 0) 
//       { 
//         m = values[i]; 
//         break; 
//       } 
//     } 
//     if (m != -1) {
//             ans = 1 + (a - m) / 7;
//         }
    
//     printf("%d", ans);

//     return 0;
// }