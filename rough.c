#include <stdio.h> 
// void fun(int *p) 
// { 
//   int q = 10; 
//   p = &q;
//   *p=25; 
// }    
   
// int main() 
// { 
//   int r = 20; 
//   int *p = &r; 
//   fun(p); 
//   printf("%d", *p); 
//   return 0; 
// }
// #include <stdio.h>
// int main(){
//     int n,i,a,c,d;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         scanf("%d",&a);
//         d=0,c=1;
//         while(a>0){
//             a=a-(c++);
//             if(a>=0){
//                 d=d+1;
//             }
//         }
//         printf("%d\n",d);
//     }
// }

// #include<stdio.h>
// int main(){
//   int a=0,b=0,c=0,d=0,sum=0,i=0;
//   scanf("%d %d %d %d",&a,&b,&c,&d);
//   sum+=a*100;
//   printf("%d ",sum);
//   sum+=b*10;
//   printf("%d ",sum);
//   sum+=c*1;
//   printf("%d ",sum);
//   i=d/sum;
//   printf("%d ",i);
//   return 0;
// }

// int main()
// {  
//         int arr[4] = {1, 2, 3, 4};
//         int *p;
//         p = arr;
//         printf("%d", p[1]);
//         return 0;
// }


// #include<math.h>
// int main() {
//     float a, b, c;
//     // if(-1000<=a && a<=1000 && -1000<=b && b<=1000 && -1000<=c && c<=1000) {
//         scanf("%f %f %f",&a,&b,&c);
//         float d = (b*b) - (4*a*c);
//         float r = -b / (2*a);
//         float r1 = (-b+ sqrt(d))/(2*a);
//         float r2 = (-b- sqrt(d))/(2*a);
//         float r3 = -b / (2*a);
//         float r4 = sqrt(fabs(d)) / (2*a);
//         if(d>0){
//             printf("REAL AND DISTINCT\n");
//             printf("%.2f %.2f", r1, r2);
//         } else if(d == 0) {
//             printf("REAL AND EQUAL\n");
//             printf("%.2f %.2f", r, r);
//         } else {
//             printf("IMAGINARY ROOTS\n");
//             printf("%.2f+%.2fi %.2f-%.2fi", r3, r4,r3,r4);
//         }
//     // }

//     return 0;
// }

// #include<stdio.h>
// int main() {
//   int a=5;
//   int *b;
//   b=&a;
//   printf("%d",*b);
//   return 0;
// }

// #include <stdio.h>
// int fun()
// {
//   static int num = 16;
//   return num--;
// }
 
// int main()
// {
//   for(fun(); fun(); fun())
//     printf("%d ", fun());
//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//    int a=8,b=25;
//    a=a-2;
//    {
//       // int 
//       a++;
//       b=b+5;
//      }
//    printf("%d %d", a,b);
//    return 0;
// }

// #include<stdio.h>
// int main() {
//    printf("%d",'9');
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int fact(int n)
// {
//     int i,f=1;
//     for(i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     return f;
// }
// int main()
// {
//     float sum=0,x;
//     int n,i,k=1;
//     scanf("%f",&x);
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         sum=sum+(float)pow(x,k)/fact(k)*pow(-1,i+1);
//         k=k+2;
//     }
//     printf("%0.6f",sum);
//     return 0;
// }

// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//     int o=m+n,i,j,k,count=0;
//     int a[o];
//     for(i=0;i<m;i++) {
//         // if(nums1[i]!=0) {
//             a[i]=nums1[i];
//             count++;
//         // }
//     }
//     i=count;
//     for(j=0;j<n;i++,j++) {
//         if(nums2[j]!=0)
//             a[i]=nums2[j];
//     }
//     for(k=0;k<o;k++) {
//         printf("%d ",a[k]);
//     }
// }

// int main() {
//     int a[]={1,2,3,0,0,0}
//     merge
// }

//  #include <stdio.h>
//  #include <string.h>
//  #include <math.h>
//  #include <stdlib.h>

//  int main()
//  {  
//      int a,n,c,i,sum=0,digit=0,org,copy;
//      scanf("%d %d",&c,&n);
//      for(i=c;i<n;i++)
//      {
//          sum=0;
//          digit=0;
//          org=i;
//          copy=i;
//     if(i/10==0)printf("%d ",i);
//         else{
//          while(copy!=0)
//          {      
//              digit++;
//              copy=copy/10;
//          }
//          copy=i;
//          while(copy!=0)
//          {
//              a=copy%10;
//              sum=sum+(int)pow(a,digit);
//              copy=copy/10;
//          }
//              if(sum==org)
//              {
//                  printf("%d ",sum);
//              }  
//              }
//          }
//  return 0;
//  }
//  #include <stdio.h>
// #include <math.h>
// int main() {
//     int a,b,c=0,copy,d,sum=0,copy2,copy3;
//     scanf("%d %d", &a,&b);
//     for(int i=a;i<=b;i++) {
//         copy=i;
//         copy2=i;
//         copy3=i;
//         sum=0;
//         c=0;
//         if(i/10==0)printf("%d ",i);
//         else{
//         while(copy>0){
//             c++;
//             copy/=10;
//         }
//         while(copy2>0){
//             d=copy2%10;
//             sum=sum+pow(d,c);
//             copy2/=10;
//         } 
//         if(copy3==sum) {
//             printf("%d ",sum);
//         }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() 
// {
//     int arr[100],n,i,j,count=1;
//     printf("Enter the number of packets : ");
//     scanf("%d",&n);
//     printf("Enter the number of chocolate in every packet :\n");
//     for(i=0;i<n;i++) 
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++) 
//     {
//         for(j=i+1;j<n;j++) 
//         {
//             if(arr[i]==0)
//             {
//                 count++;
//                 break;
//             }
//         }
//     }
//     printf("Number of empty packets - %d", count);
//     return 0;
// }

// #include<string.h>
// typedef int No;
// int main() {
//     // int str[100];
//     // int a=sizeof(str);
//     // int b=strlen(str);
//     // printf("%d %D ",a,b);
//     No a,b;
//     int c,d;
//     a=b=c=d=10;
//     printf("%d %d %d %d",a,b,c,d);
// }

// #include <stdio.h>
// // #define WINDOWS 10
// int main(int argc, char *argv[] )
// {
// printf("Number of Arguments are: %d\n", argc);
// printf("Program name is: %s\n", argv[0]);
// if(argc < 2)
// {
// printf("No argument passed through command line.\n");
// }
// else
// {
// printf("First argument is: %s\n", argv[1]);
// printf("Second argument is: %s\n", argv[2]);
// }
// #if WINDOWS
// printf("Windows ");
// #endif
// printf("based software.\n");
// }

// #include<stdio.h>
// #include<string.h>
// int gcd(int x,int y) {
//     if(y!=0) return gcd(y,x%y);
//     return x;
// }
// int main() {
//     int a,b;
//     // scanf("%d %d",&a,&b);
//     int res = gcd(a,b);
//     // printf("%d",res);
//     printf("\\ \? \' \" \a");
//     char arr[10] = "hello";
//     printf("%d %d ",sizeof(arr),strlen(arr));
// }

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char a[]="abcdef";
//     int i,j=strlen(a)-1;
//     char b[strlen(a)];
//     for(i=0;i<j;i++,j--) {
//         if(a[i]!=a[j]) {
//             printf("Not palindrome\n");
//             return 0;
//         }
//     }
//     printf("Palindrome\n");
//     j=0;
//     for(i=strlen(a)-1;i>=0;i--,j++) {
//         b[j]=a[i];
//     }
//     printf("%s",b);
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     char str[100];
//     int freq[256];
//     // gets(str);
//     scanf("%s",str);
//     for(int i=0;i<256;i++)
//         freq[i]=0;
//     for(int i=0;str[i]!='\0';i++) {
//         int value=(int)str[i];
//         freq[value]++;
//     }
//     int max=0;
//     char maxChar;
//     for(int i=0;i<256;i++) {
//         if(max<freq[i]) {
//             max=freq[i];
//             maxChar=(char)i;
//         }
//     }
//     printf("\n%c %d",maxChar,max);
// }

//
// char a[100];
// printf
// scanf("%s",a)
// gets(a);
// strcpy(arr[i].name,a);
// printf-- Roll 
// scanf("%d",arr[i].roll)

// #include<stdio.h>
// int main()
// {
// 	int i,j,n;
// 	for(i=1;i<=4;i++)
// 	{
// 		for(j=1;j<=i;j++)
// 		{
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	for(i=8,n=5;i>=1;n+2,i--)
// 	{
// 		for(j=i-n;j>=1;j--)
// 		{
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// }

// #include<stdio.h>
// int main() {
//     int a=12;
//     void *ptr=(int*)&a;
//     printf("%d",*ptr);
//     getchar();
//     return 0;
// }

// #include<stdio.h>
// int fib(int,int,int);
// int main() {
//     int a,b,n;
//     scanf("%d",&n);
//     a=0;
//     b=1;
//     if(n==1) {
//         printf("%d",a);
//     }
//     if(n>=2) {
//         printf("%d %d ",a,b);
//     }
//     fib(a,b,n-2);
//     return 0;
// }

// int fib(int a,int b,int n) {
//     if(n<=0) return 0;
//     int c=a+b;
//     printf("%d ",c);
//     return fib(b,c,n-1);
// }

// #include<stdio.h>
// void main ()
// {
// 	int a,b;
// 	for(a=6,b=4;a<=24;a=a+6)
// 	{
// 		if(a%b==0)
// 		break;
// 	}
// 	printf("%d",a);
	
// }

// #include <stdio.h>
// int main() {
//    int i, space, rows, k = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i, k = 0) {
//       for (space = 1; space <= rows - i; ++space) {
//          printf("  ");
//       }
//       while (k != 2 * i - 1) {
//          printf("* ");
//          ++k;
//       }
//       printf("\n");
//    }
//    return 0;
// }


// #include<stdio.h>
// int main() {
//    int arr[]={16,18,3,4,5,2};
//    int max=arr[1];
//    int b[6]={0},k=0;
//    for(int i=0;i<6;i++){
//       for(int j=i+1;i<5;j++) {
//          if(arr[j]>arr[j+1]) {
//             max=arr[j];
//          }
//       }
//    if(b[k-1]==max)continue;
//    b[k++]=max;
//    }
//    for(int i=0;i<6;i++){
//       printf("%d ",b[i]);
//    }
// }

// #include <stdio.h>

// void find_leader(int arr[], int n)
// {
//     int max_from_right = arr[n-1];

//     for (int i = n-2; i >= 0; i--)
//     {
//         if (arr[i] > max_from_right)
//         {
//             max_from_right = arr[i];
//             printf("%d ", arr[i]);
//         }
//     }
// }

// int main()
// {
//     int arr[] = {16,18,3,4,5,2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     find_leader(arr, n);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// void printLeaders(int arr[],int size) {
//    int *SK=(int*)malloc(sizeof(int));
//    int top=-1;
//    SK[++top]=arr[size-1];
//    for(int i=size-2;i>=0;i--) {
//       if(arr[i]>SK[top])
//       SK[++top]=arr[i];
//    }
//    while(top!=-1) {
//       printf("%d ",SK[top--]);
//    }
//    free(SK);
// }
// int main() {
//    int arr[] = {16, 18, 3, 4, 5, 2};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    printLeaders(arr,n); 
//    // int b[6] = {0}, k = 0,leader,a;

//    // for (int i = 0; i < n; i++) {
//    //   leader = arr[i];
//    //   a = 1;
//    //   for (int j = i + 1; j < n; j++) {
//    //    if (arr[j] > leader) {
//    //    a = 0;
//    //    break;
//    //    }
//    //   }
//    //   if (a) {
//    //    b[k++] = leader;
//    //   }
//    // }
//    // printf("leaders: ");
//    // for (int i = 0; i < k; i++) {
//    //   printf("%d ", b[i]);
//    // }
//    return 0;
// }
 
// #include <stdio.h>
// void RevArr(int arr[],int start,int end){
//     if(end-start>0){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         RevArr(arr,start+1,end-1);
//     }
// }
// void printArray(int arr[],int size){
//     for (int i=0;i<size;i++){
//         printf(" %d",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[]={6,36,9,34,6,3,83};
//     int size=sizeof(arr)/sizeof(arr[0]);
    
//     printf("Array before reversal:");
//     printArray(arr,size);
//     RevArr(arr,0,size-1);
//     printf("Array after reversal:");
//     printArray(arr,size);
// }

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char a[5]="ABCD";
//     printf("%d %d",sizeof(a),strlen(a));
// }

// int main() {
//   int a[6] = {16, 18, 3, 4, 5, 2};
//   int leaders[6];
//   int i, j, k = 0;

//   for (i = 0; i < 6; i++) {
//     int isLeader = 1;
//     for (j = i + 1; j < 6; j++) {
//       if (a[i] <= a[j]) {
//         isLeader = 0;
//         break;
//       }
//     }
//     if (isLeader) {
//       leaders[k++] = a[i];
//     }
//   }

//   printf("Leaders of the array are: ");
//   for (i = 0; i < k; i++) {
//     printf("%d ", leaders[i]);
//   }
//   printf("\n");

//   return 0;
// }

#include <stdio.h>
#include <string.h>
#include <limits.h>

int myAtoi(char* s) {
    int len = strlen(s);
    int  neg = 0, i, num;
    int max = INT_MAX;
    long long sum=0;

    for (i = 0; i < len; i++) {
        if (s[i] == ' ') continue;
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            break;
        }
        if (s[i] == '-') {
            neg = 1;
            continue;
        }
        num = s[i] - '0';
        sum = sum * 10 + num;
    }
    if (neg) {
        sum = -sum;
    }
    if(sum>INT_MAX) {
        return INT_MAX;
    } else if(sum<INT_MIN) {
        return INT_MIN;
    }
    return sum;
}

int main() {
    char str[] = "3.14";
    printf("Converted integer: %d\n", myAtoi(str));
    return 0;
}
