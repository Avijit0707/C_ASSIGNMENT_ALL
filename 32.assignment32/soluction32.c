#include <stdio.h>
// Q1
// void swap(int arr[],  int c, int d);
// int main()
// {
//     int arr[10], b;
//     printf("enter the number :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     swap(arr ,6,8);
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }
// void swap(int arr[], int c, int d)
// {
//     int flag = arr[c];
//     arr[c] = arr[d];
//     arr[d] = flag;
// }

// Q4
// void marge(int arr[], int b, int crr[], int d);
// int main()
// {
//     int arr[10], brr[9];
//     printf("enter the number :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the number :");
//     for (int i = 0; i < 9; i++)
//     {
//         scanf("%d", &brr[i]);
//     }
//     marge(arr, 10, brr, 9);
//     return 0;
// }
// void marge(int arr[], int b, int crr[], int d)
// {
//     int marge[b + d], j=0,addition;
//     addition=b+d;
//     for (int i = 0; i < b; i++)
//     {
//           marge[i] = arr[i];
//     }
//     for (int i = 0; i < d; i++)
//     {
//           marge[b+i] = crr[i];
//     }
//     for (int i = 0; i < addition; i++)
//     {
//         for ( j = 0; j <addition-i; j++)
//         {
//             if (marge[j]<marge[j+1])
//             {
//                 int flag =marge[j];
//                 marge[j]=marge[j+1];
//                 marge[j+1]=flag;
//             }
//         }
//     }
//     for (int i = 0; i <addition; i++)
//     {
//         printf("%d\n",marge[i]);
//     }
// }

// Q2
// int duplicateElement(int arr[], int b);
// void sort(int arr[], int b);
// int main()
// {
//     int arr[10];
//     printf("enter the number :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     b = duplicateElement(arr, 10);
//     printf("the total duplicate element is %d",b);
//     return 0;
// }
// void sort(int arr[], int b)
// {
//     for (int i = 1; i < b; i++)
//     {
//         for (int j = 0; j < b - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int flag;
//                 flag = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = flag;
//             }
//         }
//     }
// }
// int duplicateElement(int arr[], int b){
//     int d=0,i,j;
//     for ( i = 0; i <b-1;)
//     {
//         if (arr[i]==arr[i+1])
//         {
//            d++;
//            for (j=i; arr[j]==arr[i] && i<b; i++);
//         }
//         else
//             i++;
//     }
//     return d;
// }
//? another concept but 1 issew
// int duplicateElement(int arr[], int b)
// {
//     int d = 0, j=arr[b+1];
//     sort(arr, b);
//     for (int i = 0; i < b-1; i++)
//     {
//         if (j != arr[i])
//         {
//             if (arr[i] == arr[i + 1])
//             {
//                 d++;
//                 j = arr[i + 1];
//             }
//         }
//     }
//     return d;
// }

// Q3
// void uniqueElement(int arr[], int b);
// void sort(int arr[], int b);
// int main()
// {
//     int arr[10], b = 10;
//     printf("enter the number :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     uniqueElement(arr, b);
// }
// void sort(int arr[], int b)
// {
//     for (int i = 1; i < b; i++)
//     {
//         for (int j = 0; j < b-i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int flag;
//                 flag = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = flag;
//             }
//         }
//     }
// }
// void uniqueElement(int arr[], int b)
// {
//     sort(arr,b);
//     int d = 0, i, j;
//     for (i = 0; i < b;)
//     {
//          printf("%d ", arr[i]);
// if (i==b-1)
// {
//     break;
// }
//         if (arr[i] == arr[i + 1])
//         {
//             for (j = i; arr[j] == arr[i] && i < b; i++);
//
//         }
//         else
//             i++;
//     }
//
// }

// Q4
// void marge(int arr[], int b, int crr[], int d);
// int main()
// {
//     int arr[10], brr[9];
//     printf("enter the number :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the number :");
//     for (int i = 0; i < 9; i++)
//     {
//         scanf("%d", &brr[i]);
//     }
//     marge(arr, 10, brr, 9);
//     return 0;
// }
// void marge(int arr[], int b, int crr[], int d)
// {
//     int marge[b + d], j = 0, addition;
//     addition = b + d;
//     for (int i = 0; i < b; i++)
//     {
//         marge[i] = arr[i];
//     }
//     for (int i = 0; i < d; i++)
//     {
//         marge[b + i] = crr[i];
//     }
//     for (int i = 0; i < addition; i++)
//     {
//         for (j = 0; j < addition - i; j++)
//         {
//             if (marge[j] < marge[j + 1])
//             {
//                 int flag = marge[j];
//                 marge[j] = marge[j + 1];
//                 marge[j + 1] = flag;
//             }
//         }
//     }
//     for (int i = 0; i < addition; i++)
//     {
//         printf("%d\n", marge[i]);
//     }
// }

// Q5
// void sort(int arr[], int b)
// {
//     for (int i = 1; i < b; i++)
//     {
//         for (int j = 0; j < b - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int flag;
//                 flag = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = flag;
//             }
//         }
//     }
// }

// void friquency(int arr[], int b)
// {
//     sort(arr, b);
//     int i, j;
//     int count = 0;
//     for (int i = 0; i < b;)
//     {
//         for (count = 0, j = i; arr[i] == arr[j] && i<b; i++)
//             count++;
//         printf("%d - %d\n", arr[j], count);
//     }
// }
// int main()
// {
//     int arr[10];
//     printf("enter the number :");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     friquency(arr, 10);
//     return 0;
// }
