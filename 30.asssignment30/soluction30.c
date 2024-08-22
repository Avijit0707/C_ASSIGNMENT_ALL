#include <stdio.h>
// Q1
// int main()
// {
//     int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     int c;
//     for (int i = 1; i <= 9; i++)
//     {
//         for (int j = 0; j <= 9 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 c = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = c;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

//! time and space complex
// int main()
// {
//     int arr[10], c;
//     printf("enter the numbers :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             if (arr[i] <= arr[j])
//             {
//                 c = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = c;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// Q2
//  int main()
//  {
//      int arr[10], c=0,d=0;
//      printf("enter the numbers :");
//      for (int i = 0; i < 10; i++)
//      {
//          scanf("%d", &arr[i]);
//      }
//      for (int  i = 0; i < 10; i++)
//      {
//          if (c<arr[i])
//          {
//             c=arr[i];
//          }
//      }
//      for (int i = 0; i < 10; i++)
//      {
//         if (c != arr[i])
//         {
//          if (d<arr[i])
//          {
//             d=arr[i];
//          }
//         }
//      }
//      printf("%d",d);
//      return 0;
//  }

//! Q3
// int main()
// {
//     int arr[10], c, d;
//     printf("enter the numbers :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     c = arr[0];
//     d = arr[0];
//     for (int i = 0; i < 10; i++)
//     {
//         if (c > arr[i])
//         {
//             c = arr[i];
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         if (c < arr[i])
//         {
//             if (d > arr[i])
//             {
//                 d = arr[i];
//             }
//         }
//     }
//     printf("%d", d);
//     return 0;
// }

// Q4
//  int main()
//  {
//      int arr[10], c;
//      printf("enter the numbers :");
//      for (int i = 0; i < 10; i++)
//      {
//          scanf("%d", &arr[i]);
//      }
//      for (int i = 0; i < 10; i++)
//      {
//          for (int j = 0; j < 10; j++)
//          {
//              if (arr[i] >= arr[j])
//              {
//                  c = arr[i];
//                  arr[i] = arr[j];
//                  arr[j] = c;
//              }
//          }
//      }
//      for (int i = 0; i < 10; i++)
//      {
//          printf("%d\n", arr[i]);
//      }
//      return 0;
//  }

// Q5
// int main()
// {
//     int arr[10], arr2[10];
//     printf("enter the numbers :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//         arr2[i] = arr[i];
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", arr2[i]);
//     }
//     return 0;
// }
