#include <stdio.h>
// array passing through function
void fun(int arr[]) {
  arr[0]=10;
  return;
}

// int main() {
  // int a[5],i,sum=0,product=1;
  // for(i=0;i<5;i++) {
  //   printf("Enter the value of index value %d : ",i);
  //   scanf("%d",&a[i]);
  // }
  // for(i=0;i<5;i++) {
  //   printf("|%d| ",a[i]);
  //   sum=sum+a[i];
  //   product=product*a[i]; 
  // }
  // printf("\nSum of all elements of the array is : %d",sum);
  // printf("\nProduct of all elements of the array is : %d",product);
  // printf("\nReverse of matrix is : \n");
  // for(i=4;i>=0;i--) {
  //   printf("|%d| ",a[i]);
  // }
  // printf("\n");
  // float b[5 ]={1.2,2.3,4.2,4.5,5.1,8};
  // char c[5]={'a','g','f','c','f'};
  // printf("\n%d\n",sizeof(a));
  // printf("%d\n",sizeof(a[1]));
  // printf("\n%d\n",sizeof(b));
  // printf("%d\n",sizeof(b[1]));
  // printf("\n%d\n",sizeof(c));
  // printf("%d\n",sizeof(c[1]));
    // int arr[5]={1,2,3,4,5};
  // printf("%d\n",arr[0]);
  // fun(arr);
  // printf("%d\n",arr[0]);

//   return 0;
// }

// int main() {
//   int a[10],i;
//   for(i=0;i<10;i++) {
//     printf("Enter the marks of roll number %d : ",i+1);
//     scanf("%d",&a[i]);
//   }
//     printf("Marks entered are : \n");
//   for(i=0;i<10;i++) {
//     printf("%d ",a[i]);
//   }
//     printf("\nStudents which scored less marks are : \n");
//   for(i=0;i<10;i++) {
//     if(a[i]<35)printf("%d ",i);
//   }
//   return 0;
// }

// int main() {
//   int arr[50],i;
//   for(i =0;i<=48;i++);
//   {
//     arr[i]=i;
//     printf("\n%d",arr[i]);
//   }
//   int i,a=2,b=3;
//   int arr[2+3];
//   for(i=0;i<a+b;i++) {
//     scanf("%d",&arr[i]);
//     printf("\n%d",arr[i]);
//   }
// }

// Find out the max value in the array
int maxValue() {
  int a[8]={1,2,3,4,5,6,7,8};
  int max=a[0],i;
  for(i=0;i<8;i++) {
    if(a[i]>max) max=a[i];
  }
  printf("%d",max);
  printf("\n");
  return 0;
}
// Find out the min value in the array
int minValue() {
  int i,sum=0,product=1;
  int a[8]={1,2,3,4,5,6,7,8};
  int min=a[0];
  for(i=0;i<8;i++) {
    if(a[i]<min) min=a[i];
  }
  printf("%d",min);
  return 0;
}

// Find the second largest number in an array
int secondMax() {
  int i,max,secondMax;
  int a[]={1,2,3,4,5,6,8,8};
  // int a[]={8,7,6,5,4,3,2,1};
  max=a[0];
  for (i=1;i<8;i++) {
    if(a[i] > max) {
      secondMax=max;
      max=a[i];
    }else if(secondMax < a[i] && max!=a[i]) {
      secondMax=a[i];
    }
  }
  printf("Max value is : %d",max);
  printf("\nSecond max value is : %d",secondMax);
  return 0;
}

// Updating elements on the basis of odd even index value
int updatingElementOnOddEven()  {
  int arr[10]= {1,2,3,4,5,6,7,8,9,10},i;
  for(i=0;i<10;i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");
  for(i=0;i<10;i+=2) {
    arr[i]+=10;
  }
  for(i=1;i<10;i+=2) {
    arr[i]*=2;
  }
  for(i=0;i<10;i++) {
    printf("%d(%d) ",arr[i],i);
  }
  return 0;
}

// Find and count the elements of array greater than a specific number
int countGreaterElements() {
  int i,num,terms,count=0;
  printf("Enter the total number of terms in an Array : ");
  scanf("%d",&terms);
  int a[terms];
  printf("Enter the values of array -- \n");
  for(i=0;i<terms;i++) {
    printf("Index %d : ",i);
    scanf("%d",&a[i]);
  }
  printf("Enter the number to find greater values from the array : ");
  scanf("%d",&num);
  for(i=0;i<terms;i++) {
    if(a[i]>num) {
      count++;
      printf("%d \n",a[i]);
    }
  }
  printf("Total Count = %d",count);
  return 0;
}

// Find sum of elements of even places and odd places
int sumOfOddEvenPlace() {
  int i,sumOfEven=0,sumOfOdd=0;
  int a[7]={1,2,3,4,5,6,7};
  for(i=0;i<7;i++) {
    if(i%2==0) sumOfEven+=a[i];
    else sumOfOdd+=a[i];
  }
  printf("Sum of even elements is : %d\n",sumOfEven);
  printf("Sum of odd elements is : %d\n",sumOfOdd);
  printf("The difference of sum of odd and even elements is : %d",sumOfEven-sumOfOdd);
  return 0;
}

// Total pairs of two whose sum is equal to specific number
int doublePairs() {
  int i,num=8,sum=0,j;
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  for(i=0;i<10;i++) {
    for(j=i+1;j<10;j++) {
      sum=arr[i]+arr[j];
      if(sum==num)
      printf("%d,%d\n",arr[i],arr[j]);
    }
  }
  return 0;
}

// Total pairs of three whose sum is equal to specific number
int triplePairs() {
  int i,num=8,sum=0,j,k;
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  for(i=0;i<10;i++) {
    for(j=i+1;j<10;j++) {
      for(k=j+1;k<10;k++) {
        sum=arr[i]+arr[j]+arr[k];
        if(sum==num)
        printf("%d,%d,%d\n",arr[i],arr[j],arr[k]);
      }
    }
  }
  return 0;
}

// To add value to the position in an arrray
int addValue() {
  int arr[100]={1,2,3,4,5,6,7,8,9,10};
  int i,position,value;
  for(i=0;i<10;i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");
  printf("Enter the position where you want to add a value : ");
  scanf("%d",&position);
  printf("Enter the value which you want to add : ");
  scanf("%d",&value);
  for(i=10-1;i>=position-1;i--) {
    arr[i+1]=arr[i];
  }
  arr[position-1] = value;
  for(i=0;i<=10;i++) {
    printf("%d ",arr[i]);
  }
  return 0;
}

// To delete value from the position in an arrray
int deleteValue() {
  int arr[100]={1,2,3,4,5,6,7,8,9,10};
  int i,position;
  for(i=0;i<10;i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");
  printf("Enter the position from which you want to delete a value : ");
  scanf("%d",&position);
  for(i=position-1;i<9;i++) {
    arr[i]=arr[i+1];
  }
  for(i=0;i<9;i++) {
    printf("%d ",arr[i]);
  }
  return 0;
}

// To copy array in reverse order
int reverseArr() {
  int a[50]={1,2,3,4,5,6,7};
  int b[50],i,j;
  i=0;
  for(j=6;j>=0;j--) {
    b[i]=a[j];
    i++;
  }
  for(i=0;i<7;i++) {
    printf("%d ",a[i]);
  }
    printf("\n");
  for(i=0;i<7;i++) {
    printf("%d ",b[i]);
  }
  return 0;
}

// Reverse array without extra array
int reverse() {
  int a[50]={1,2,3,4,5,6,7};
  int i=0,j=6,temp;
  while(i<j) {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
  }
  for(i=0;i<7;i++)
  printf("%d ",a[i]);
  return 0;
}

// Palindrome
int palindrome() {
  int a[50]={1,2,3,4,3,2,1};
  // int a[50]={1,2,3,4,3,5,1};
  int i,j=6,count=0;
  for(i=0;i<7/2;i++,j--) {
    if(a[i]==a[j]) count++;
  }
  if(count == 3) printf("Palindrome");
  else printf("Not Palindrome");
  return 0;
}

// reversing part of array
int reversePartOfArray() {
  int a[50]={1,2,3,4,5,6,7};
  int i,j,start,end;
  printf("Original Array : ");
  for(i=0;i<7;i++) {
    printf("%d ",a[i]);
  }
  printf("\nEnter the starting index value of reverse array : ");
  // scanf("%d",&a);
  start=2;
  printf("\nEnter the ending index value of reverse array : ");
  // scanf("%d",&b);
  end=4;
  for(i=start,j=end;i<=j;i++,j--) {
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
  }
  printf("After reversing Array : ");
  for(i=0;i<7;i++) {
    printf("%d ",a[i]);
  }
  return 0;
}

// Rotate
int rotate() {
  int a[50]={1,2,3,4,5,6,7};
  int i,num,j;
  printf("Original Array : ");
  for(i=0;i<7;i++){ 
    printf("%d ",a[i]);
  }
  printf("\nEnter the number to rotate : ");
  scanf("%d",&num);
  num=num%7;
  if(num) {
    for(i=0,j=6;i<7/2;i++,j--) {
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
    for(i=0,j=num-1;i<j;i++,j--) {
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
    for(i=num,j=6;i<j;i++,j--) {
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
  for(i=0;i<7;i++){ 
    printf("%d ",a[i]);
  }
  return 0;
}

int search() {
  int a[99]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,18,19,20},i;
  int num=4,sum=0,sum1=0;
  // for(i=0;i<8;i++) {
  //   if(a[i]==num) {
  //     printf("Yes Number is present");
  //     return 0;
  //   }
  // }
  // printf("No Number is not present");

  for(i=1;i<=20;i++) {
    sum1=sum1+i;
  }

  for(i=0;i<19;i++) {
    sum=sum+a[i];
  }

  sum1-=sum;
  printf("%d",sum1);
  return 0;
}

int duplicate() {
  int a[7]={1,2,5,5,6,2,3};
  for(int i=0;i<7;i++) {
    for(int j=i+1;j<7;j++) {
      if(a[i]==a[j]) printf("%d ",a[i]);
    }
  }
}

int unique() {
  int a[7]={1,2,5,5,6,2,6};
  int count=0;
  for(int i=0;i<7;i++) {
    count=0;
    for(int j=i+1;j<7;j++) {
      if(a[i]==a[j]) count++;
    }
    if(count==0) {
      printf("%d ",a[i]);
      break;
    }
  }
}

// 2 pointer approach to search element
int pointer2() {
  int a[5];
  int i,j,num;
  for(i=0;i<5;i++) {
    printf("Index %d : ",i);
    scanf("%d",&a[i]);
  }
  printf("Enter the number to find : ");
  scanf("%d",&num);
  i=0;
  j=4;
  while(i<j) {
    if(a[i] + a[j] == num) {
      printf("Number Found") ;
      break;
    } else if(a[i] + a[j] > num) j--;
    else i++;
  }
  return 0;
}

int main() {
  // printf("To find max value in an array\n");
  // maxValue();
  // printf("To find min value in an array\n");
  // minValue();
  // printf("To find second max value in an array\n");
  // secondMax();
  // printf("To find and count greater elements in an array\n");
  // countGreaterElements();
  // printf("To update the elements of array at odd and even place\n");
  // updatingElementOnOddEven();
  // printf("To find the sum of even and odd places\n");
  // sumOfOddEvenPlace();
  // printf("To find pairs of two whose sum is equal to number\n");
  // doublePairs();
  // printf("To find pairs of three whose sum is equal to number\n");
  // triplePairs();
  // printf("To add a value to an array\n");
  // addValue();
  // printf("To delete a value from an array\n");
  // deleteValue();
  // printf("To copy the reverse of array\n");
  // reverseArr();
  // printf("To the reverse of array\n");
  // reverse();
  // printf("To check palindrome of array\n");
  // palindrome();
  // printf("To reverse part of an array\n");
  // reversePartOfArray();
  // printf("rotate\n");
  // rotate();
  // printf("Search missing number\n");
  // search();
  // printf("Find duplicate element\n");
  // duplicate();
  // printf("Find unique element\n");
  // unique();
  pointer2();
  return 0;
}