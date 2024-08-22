#include <stdio.h>
// Q1
// void even(int a);
// int main()
// {
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     even(a);
//     return 0;
// }
// void even(int a)
// {
//     if (a > 0)
//     {

//         printf("%d", a * 2);
//          even(a - 1);
//     }
// }

// Q2
//  void squre (int a){
//      if (a>0)
//      {
//          squre(a-1);
//          printf("%d",a*a);
//      }
//  }
//  int main(){
//  int a;
//  printf("enter the number :");
//  scanf("%d",&a);
//  squre(a);
//      return 0;
//  }

// Q3
//  void binary (int a){
//      if (a>0)
//      {
//          binary(a/2);
//          printf("%d",a%2);
//      }
//  }
//  int main(){
//  int a;
//  printf("enter the number :");
//  scanf("%d",&a);
//  binary(a);
//      return 0;
//  }

// Q4
// void octal(int a)
// {
//     if (a > 0)
//     {
//         octal(a / 8);
//         printf("%d", a % 8);
//     }
// }
// int main()
// {
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     octal(a);
//     return 0;
// }

// Q5
 void reverse (int a){
     if (a>0)
     {
         printf("%d",a%10);
         reverse(a/10);
     }
 }
 int main(){
 int a;
 printf("enter the number :");
 scanf("%d",&a);
 reverse(a);
     return 0;
 }
