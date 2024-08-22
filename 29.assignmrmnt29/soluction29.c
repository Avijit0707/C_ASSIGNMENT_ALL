#include<stdio.h>
//Q1
// int main(){
//     int arr[10],sum=0;
//     printf("enter the numbers :");
//     for (int i = 0; i < 10; i++)
//     {
//       scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         sum=sum+arr[i];
//     }
//     printf("%d",sum);
// }


//Q2
// int main(){
//     int arr[10];
//     float sum=0.00;
//     printf("enter the numbers :");
//     for (int i = 0; i < 10; i++)
//     {
//       scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         sum=sum+arr[i];
//     }
//     printf("%f",sum/10.00);
// }

//Q3
// int main(){
//     int arr[10];
//     float sumE=0.00,sumO=0;
//     printf("enter the numbers :");
//     for (int i = 0; i < 10; i++)
//     {
//       scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i]%2==0)
//         {
//             sumE=sumE+arr[i];
//         }
//         else
//         sumO=sumO+arr[i];
//     }
//     printf("%f  %f",sumE ,sumO);
// }


//Q4
// int main(){
//     int arr[10],g=0;
//     printf("enter the numbers :");
//     for (int i = 0; i < 10; i++)
//     {
//       scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         g=g>=arr[i]?g:arr[i];
//     }
//     printf("%d",g);
// }

//Q5
// main(){
//     int arr[10],g=0;
//     printf("enter the numbers :");
//     for (int i = 0; i < 10; i++)
//     {
//       scanf("%d",&arr[i]);
//     }
//     g=arr[0];
//     for (int i = 0; i < 10; i++)
//     {
//         g=g<=arr[i]?g:arr[i];
//     }
//     printf("%d",g);
// }