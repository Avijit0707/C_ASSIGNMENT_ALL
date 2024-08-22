#include <stdio.h>
// Q1
//  int main(){
//      int a;
//      int arr[3][3]={1,2,3,4,5,6,7,8,9};
//      int arr2[3][3]={1,2,3,4,5,6,7,8,9};
//      int arr3[3][3];
//      for (int i = 0; i < 3; i++)
//      {
//          for (int j = 0; j < 3; j++)
//          {
//              arr3[i][j]=arr[i][j]+arr2[i][j];
//          }
//      }
//     for (int i = 0; i < 3; i++)
//      {
//          for (int j = 0; j < 3; j++)
//          {
//              printf("%d",arr3[i][j]);
//          }
//          printf("\n");
//      }
//  }

// Q2
// int main()
// {
//     int sum = 0;
//     int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int arr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int arr3[3][3];
//     int a=0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int h = 0; h<3; h++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 sum = sum + arr1[i][j] * arr2[j][h];
//             }
//              arr3[i][h]=sum;
//               sum=0;
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d   ", arr3[i][j]);
//         }
//         printf("\n");
//     }
// }

// Q3
// int main()
// {
//     int arr[3][2] = {1, 4, 2, 5, 3, 6};
//     int arr2[2][3];
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int h = 0; h < 2; h++)
//                 arr2[h][j] = arr[j][h];
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d  ",arr2[i][j]);
//         }
//         printf("\n");
//     } 
// }


//Q4



