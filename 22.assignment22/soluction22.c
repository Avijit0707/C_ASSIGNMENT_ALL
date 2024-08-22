#include <stdio.h>
// Q1
//  int fact (int );
//  int main(){
//     int n,f;
//     printf("enter the number :");
//     scanf("%d",&n);
//     f=fact(n);
//     printf("the factorial of number is %d",f);
//  }
//  int fact (int n){
//      int f=1;
//      for (int i = 1; i <=n; i++)
//      {
//          f=f*i;
//      }
//      return f;
//  }

// Q2
//  n!/r!*(n-r)!
// int combination(int n, int r);
// int main()
// {
//     int a, b, c;
//     printf("enter the number and combination :");
//     scanf("%d%d", &a, &b);
//     c = combination(a, b);
//     printf("the combimation are %d", c);
// }
// int combination(int n, int r)
// {
//     int fn = 1, fr = 1, fc = 1, c;
//     c = n - r;
//     while (n > 0)
//     {
//         fn = fn * n;
//         n--;
//     }
//     while (r)
//     {
//         fr = fr * r;
//         r--;
//     }
//     while (c)
//     {
//         fc = fc * c;
//         c--;
//     }
//     return fn / (fr * fc);
// }

// Q3
//   n!/(n-r)!
//  int arrangement(int n, int r);
//  int main()
//  {
//      int a, b, c;
//      printf("enter the number and combination :");
//      scanf("%d%d", &a, &b);
//      c = arrangement(a, b);
//      printf("the arrangement are %d", c);
//  }
//  int arrangement(int n, int r)
//  {
//      int fn = 1, fc = 1, c;
//      c = n - r;
//      while (n > 0)
//      {
//          fn = fn * n;
//          n--;
//      }
//      while (c)
//      {
//          fc = fc * c;
//          c--;
//      }
//      return fn / fc;
//  }

// Q4
// int f1(int ,int );
// int main()
// {
//     int a, b, f;
//     printf("enter the number and digit :\n");
//     scanf("%d%d", &a, &b);
//     f = f1(a, b);
//     if (f == 1)
//         printf("the digit is avelable");
//     else
//         printf("the digit is not avelable");
//     return 0;
// }
// int f1(int a,int b){
//     int rem;
//     while(a)
//     {
//        rem=a%10;
//        a=a/10;
//        if (rem==b)
//        {
//         return 1;
//        }
//     }
// }

// Q5
void primefact(int);
void primefactors (int a);
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    primefactors(num);
}
void primefact(int num)
{
    int j;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
            }
            if (i == j)
            {
                printf("the prime factor is %d\n", i);
                num = num / i;
                i = 1;
            }
        }
    }
}

//in other way
void primefactors (int a){
    int i ;
    for ( i = 2;a; i++)
    {
        while(a%i==0){
            printf("%d\n",i);
            a=a/i;
        }
    }

}