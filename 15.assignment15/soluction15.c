#include<stdio.h>
// Q1
// int main (){
//   int a,x,count;
//   printf("Enter a limit to print odd numbers :");
//   scanf("%d",&a);
//   for (int i = 1; i<=a; i++)
//   { 
//         count=0;
//         for(x=1;x<i;x++){
//           if (i%x==0)
//           {
//             count++;
//           }  
//         }
//         if (count==1)
//             {
//                printf("Prime number :%d\n",i);
//             }
//   }
//     return 0;
// }

// Q2
// int main (){
//   int a,x,b,count;
//   printf("Send two numbers in which you want to print prime number :");
//   scanf("%d %d",&a,&b);
//   int m= a>b?a:b;
//   int n = a+b-m;
//   for (int i = n; i<=m; i++)
//   { 
//         count=0;
//         for(x=1;x<i;x++){
//           if (i%x==0)
//           {
//             count++;
//           }  
//         }
//         if (count==1)
//             {
//                printf("Prime number :%d\n",i);
//             }
//   }
//     return 0;
// }

// Q3
// int main (){
//   int a,x,count;
//   printf("Enter a number :");
//   scanf("%d",&a);
//   for (int i = a+1; ; i++)
//   { 
//         count=0;
//         for(x=2;x<i;x++){
//           if (i%x==0)
//           {
//             break;
//           }  
//         }
//         if (i==x)
//             {
//                printf("Prime number :%d\n",i);
//                break;
//             }
//   }
//     return 0;
// }


// Q4
// int main(){
//     int a ,b;
//     printf("enter two numbers :");
//     scanf("%d %d",&a,&b);
//     int num = a>b?b:a;
//     for(num; num>0;num--)
//     {
//         if (a%num==0 && b%num==0)
//         {
//             printf("the gcd is %d",num);
//             break;
//         }
//     }
// }

//Q5
// int main(){
//     int a ,b,count=0;
//     printf("enter two numbers :");
//     scanf("%d %d",&a,&b);
//     int num = a>b?b:a;
//     for(num; num>0;num--)
//     {
//         if (a%num==0 && b%num==0)
//         {
//             count++;
//         }
//     }
//     if (count == 1)
//     {
//         printf("the numbers are co prime %d %d",a,b);
//     }
//     else
//     printf("the numbers are not co prime %d,%d",a,b);
// }


