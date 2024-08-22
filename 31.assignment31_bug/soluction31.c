#include <stdio.h>
// Q1
//  int big(int arr[], int b);
//  int main()
//  {
//      int arr[10],b;
//      printf("Enter the array :");
//      for (int  i = 0; i < 10; i++)
//      {
//          scanf("%d",&arr[i]);
//      }
//      b=big(arr,10);
//      printf("the number is %d ",b);
//      return 0;
//  }

// int big(int arr[], int b)
// {
//     int great=0;
//     for (int i = 0; i < b; i++)
//     {
//       great = great<arr[i]?arr[i]:great;
//     }
//     return great;
// }

// Q2
// int small (int arr[],int b);
// int main(){
//     int arr[10];
//     printf("enter the number :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int b=small(arr,10);
//     printf("thr small element is %d",b);
// }
// int small (int arr[],int b)
// {
//     int s =arr[0];
//     for (int i = 0; i < b; i++)
//     {
//         if (s>arr[i])
//         {
//             s=arr[i];
//         }
//     }
//     return s;
// }
// Q3
// void shot2(int arr[], int b);
// int main()
// {
//     int arr[10];
//     printf("Enter the array :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     shot2(arr, 10);
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// //? mysirg style

// void shot2 (int arr[],int b){
//     int flag;
//     for (int  i = 1; i < b; i++)
//     {
//         for (int j = 0; j<=b-1-i; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 flag=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=flag;
//             }
//         }
//     }
// }

// void shot(int arr[], int b)
// {
//     int c;
//     for (int i = 0; i < b; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             if (arr[i] <= arr[j]) // ulat
//             {
//                 c = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = c;
//             }
//         }
//     }
// }

// Q4
// int rotetion(int arr[], int size);
// int main()
// {
//     int arr[10];
//     printf("enter the asrray element :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     rotetion(arr, 10);
//     for (int  i = 0; i < 10; i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }
// int rotetion(int arr[], int size)
// {
//     int a,b,flag;
//      printf("\n enter the rotetion value :");
//     scanf("%d",&b);
//     printf("enter the rotetion 1.left 2.right :");
//     scanf("%d",&a);
//     if (a == 1)
//     {
//         while (b)
//         {
//              flag=arr[size-1];
//             for (int  i = 1; i < size ; i++)
//             {
//                 arr[size-i]=arr[size-i-1];
//             }
//             arr[0]=flag;
//             b--;
//         }
//     }
//     else if (a == 2)
//     {
//          while (b)
//         {
//             flag=arr[0];
//             for (int  i = 1; i < size ; i++)
//             {
//                 arr[i-1]=arr[i];
//             }
//             arr[size-1]=flag;
//             b--;
//         }
//     }
//     else
//     printf("invalid entry !");
// }

// Q5
// int find(int arr[], int b);
// int main()
// {
//     int arr[10];
//     printf("enter the  elemenrt : ");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int b = find(arr, 10);
//     printf("the element is %d", b);
//     return 0;
// }
// int find(int arr[], int b)
// {
//     for (int i = 0; i < b-1; i++)
//     {
//        for (int j = 0; j<b; j++)
//        {
//             if (arr[j]==arr[j+1])
//             {
//                return arr[j];
//             }
//        }
//     }
//     return -1;
// }

// Q4
//  void Exchange(int arr[], int b);
//  int main()
//  {
//      int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//      for (int i = 0; i < 10; i++)
//      {
//          printf("%d ", arr[i]);
//      }
//      Exchange(arr, 10);
//      for (int i = 0; i < 10; i++)
//      {
//          printf("%d\n", arr[i]);
//      }
//  }

// void Exchange(int arr[], int b)
// {
//     int a, c, flag;

//    printf("enter the direction \n 1.L \n 2.R\n");
//     scanf("%d", &a);
//     printf("enter the swpa ammount :");
//     scanf("%d", &c);
//     b--;
//     switch (a)
//     {

//     default:
//     printf("wrong choice");
//         break;
//     case 1:
//     {
//         while (c)
//         {
//              flag = arr[b];
//                  arr[b] = arr[0];
//             for (int i = 0;; i++)
//             {

//                 if (i == b - 1)
//                 {
//                     arr[b - 1] = flag;
//                     break;
//                 }
//                 arr[i] = arr[i + 1];
//             }
//             c = c - 1;
//         }

//     }
//     break;
//     case 2:
//     {
//          while (c)
//         {
//              flag = arr[0];
//                  arr[0] = arr[b];
//             for (int i = 0;; i++)
//             {

//                 if (b-i==1)
//                 {
//                     arr[b -i] = flag;
//                     break;
//                 }
//                 arr[b-i] = arr[b-1-i];
//             }
//             c = c - 1;
//         }
//     }
//     break;
//     }
//     }
