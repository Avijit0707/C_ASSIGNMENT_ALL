#include <stdio.h>
// Q1
//  int fact(int a){
//      if (a>1)
//      {
//         return a*fact(a-1);
//      }
//      else
//      return 1;
//  }
//  int main(){
//      int a;
//      printf("enter the number :");
//      scanf("%d",&a);
//      printf("%d",fact(a));
//  }

// Q2
// int hcf(int a, int b);
// int main()
// {
//     int a, b, c, d;
//     printf("enter the number :");
//     scanf("%d%d", &a, &b);
//     printf("%d", hcf(a, b));
// }
// int hcf(int a, int b)
// {
//     if (a > b)
//     {
//         if (a % b == 0)
//             return b;
//         return hcf(a % b, b);
//     }
//     else
//     {
//         if (b % a == 0)
//             return a;
//         return hcf(a, b % a);
//     }
// }

// Q3
// void printFibo(int n);
// int fibo(int n);
// int main()
// {
//     int a;
//     printf("enter th enumber :");
//     scanf("%d", &a);
//     printFibo(a);
// }
// void printFibo(int n)
// {
//     if (n >= 0)
//     {
//         printFibo(n - 1);
//         printf("%d ", fibo(n));
//     }
// }
// int fibo(int n)
// {
//     if (n == 1 || n == 0)
//         return n;
//     return fibo(n - 1) + fibo(n - 2);
// }


// Q4
// int f(int a);
// int main()
// {
//     int a, b;
//     printf("enter the number :");
//     scanf("%d", &a);
//     b = f(a);
//     printf("the digit is %d", b);
//     return 0;
// }
// int f(int a)
// {
//     if (a==0)
//     {
//         return 0;
//     }
//      return f(a/10)+1;
// }

// Q5
//  double f1(double a,double b);
//  int main(){
//      printf("%lf",f1(2,-2));
//  }
//  double f1(double a,double b)
//  {
//          if(b==0){
//       return 1;
//   }
//      if (b>0)
//      {
//      return f1(a,b-1)*a;
//       }
//      else
//      return 1/a*f1(a,b+1);
//      // return 1/(f1(a,b+1)*a);  problem ache opeter precidency a
//      }
