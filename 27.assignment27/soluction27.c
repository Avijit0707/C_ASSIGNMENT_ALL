#include <stdio.h>
// Q1
// int nsum(int a);
// int main()
// {
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     printf("%d", nsum(a));
//     return 0;
// }
// int nsum(int a)
// {
//     if (a > 0)
//     {
//         return (a + nsum(a - 1));
//     }
//     else
//         return 0;
// }

// Q2
// int nsum(int a);
// int main()
// {
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     printf("%d", nsum(a));
//     return 0;
// }
// int nsum(int a)            
// {
//     if (a > 0)
//     {
//         return ((a*2-1) + nsum(a - 1));
//     }
//     else
//         return 0;
// }

// Q3
//  int nsum(int a);
//  int main()
//  {
//      int a;
//      printf("enter the number :");
//      scanf("%d", &a);
//      printf("%d", nsum(a));
//      return 0;
//  }
//  int nsum(int a)
//  {
//      if (a > 0)
//      {
//          return ((a*2) + nsum(a - 1));
//      }
//      else
//          return 0;
//  }

//  int sum2(int a){
//     if(a==1){
//         return 2;
//     }
//     return 2*a+sum2(a-1);
//  }

// Q4
// int nsum(int a);
// int main()
// {
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     printf("%d", nsum(a));
//     return 0;
// }
// int nsum(int a)
// {
//     if (a > 0)
//     {
//         return (a*a + nsum(a - 1));
//     }
//     else
//         return 0;
// }

// Q5
// int nsum(int a);
// int main()
// {
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     printf("%d", nsum(a));
//     return 0;
// }
// int nsum(int a)
// {
//     if (a > 0)
//     {
//         return (a%10 + nsum(a/10));
//     }
//     else
//         return 0;
// }