#include <stdio.h>
// Q1
//  int lcm (int a,int b);
//  int main(){
//  int a,b,c;
//  printf("enter the number :");
//  scanf("%d%d",&a,&b);
//  c=lcm(a,b);
//  printf("thr lcm is %d",c);
//      return 0;
//  }
//  int lcm (int a,int b)
//  {
//      int c;
//      c=a>b?a:b;
//      for (int i = c; i <=a*b; i++)
//      {
//          if (i%a==0&&i%b==0)
//          {
//              return i;
//          }
//      }
//  }

// Q2
//  int gcd (int a,int b);
//  int main(){
//  int a,b,c;
//  printf("enter the number :");
//  scanf("%d%d",&a,&b);
//  c=gcd(a,b);
//  printf("thr gcd is %d",c);
//      return 0;
//  }
//  int gcd (int a,int b)
//  {
//      int c;
//     c=a>b?b:a;
//     for (int i = c; i>0; i--)
//     {
//       if(a%i==0&&b%i==0){
//          return i;
//       }
//     }
//  }

// Q3
// int prima(int a);
// int main()
// {
//     printf("enter the number :");
//     int a, b;
//     scanf("%d",&a);
//     b = prima(a);
//     if (b == 1)
//     {
//         printf("the number prime %d", a);
//     }
//     else
//         printf("the number is not prime%d",a);
// }
// int prima(int a)
// {
//     int i;
//     for ( i = 2; i < a; i++)
//     {
//         if (a % i ==0)
//         {
//          break;
//         }
//     }
//     if (i==a)
//     {
//        return 1;
//     }
//     else
//     return 0;
// }

// Q4
// int prime(int a);
// int main()
// {
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     printf("the next prime number is %d", prime(a));
//     return 0;
// }
// int prime(int a)
// {
// if(a<2)
// return 0;
//     int  j;
// for (int i = a + 1;; i++)
// {
//     for ( j = 2; j < i; j++)
//     {
//         if (i % j == 0)
//         {
//             break;
//         }
//     }
//     if (j == i)
//     {
//         return i;
//     }
//     }
// }

// ? other way
// int p (int a){
//     while(!prima(++a));
//     return a;
// }

// Q5
// void pr(int a);
// int main()
// {
//     int a;
//     printf("enter the number :");
//     scanf("%d", &a);
//     pr(a);
//     return 0;
// }
// void pr(int a)
// {
//     int c,g=0;
//         for (int i = 1;; i++)
//         {
//             for (c = 2; c < i; c++)
//             {
//                 if (i % c == 0)
//                 {
//                     break;
//                 }
//             }
//             if (c == i)
//             {
//                 printf("%d\n", i);
//                 g++;
//             }
//             if (g==a)
//             {
//                break;
//             }
//         }
// }
