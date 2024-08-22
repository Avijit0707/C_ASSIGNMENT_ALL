#include <stdio.h>
// Q1
//  void primi (int a ,int b);
//  int main(){
//      int a,b;
//      printf("enter thr two numbers :");
//      scanf("%d %d",&a,&b);
//      primi(a,b);
//  }
//  void primi (int a ,int b){
//    int c=a>b?b:a;
//    int  d=a<b?b:a;
//    for (int j, i = c+1; i <d; i++)
//    {
//      for ( j = 2; j < i; j++)
//      {
//          if (i%j==0)
//          {
//             break;
//          }
//      }
//      if (j==i)
//      {
//          printf("%d\n",i);
//      }
//    }
//  }

// Q2
//  void fibo (int a);
//  int main(){
//      int a;
//      printf("enter the number :");
//      scanf("%d",&a);
//      fibo(a);
//      return 0;
//  }
//  void fibo (int a){
//      int b=-1,c=1,f,d;
//      for (int i = 1; i <=a; i++)
//      {
//          f=b+c;
//         b=c;
//          c=f;
//          printf("%d\n",f);
//      }
//  }

// Q3
// int fact(int a)
// {
//     int f = 1;
//     for (a; a; a--)
//     {
//         f = f * a;
//     }
//     return f;
// }
// int combunation(int n, int r)
// {
//     int b;
//     b = fact(n) / (fact(n - r) * fact(r));
//     return b;
// }
// int main()
// {
//     int n, r;
//     int f;
//     for (int i = 1; i <= 4; i++)
//     {
//         n = i - 1;
//         r=0;// akhane sequence paoya jabe na
//         for (int j = 1, f = 1; j <= 7; j++)
//         {
//             if (j >= 5 - i && j <= 3 + i)
//             {
//                 if (f)
//                 {
//                     printf("%d", combunation(n, r++));                 
//                 }
//                 else
//                     printf(" ");
//                 f = 1 - f;
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q4
void amstrong(int a, int b);
int main()
{
    int a, b;
    printf("enter the two number :");
    scanf("%d%d", &a, &b);
    amstrong(a,b);
}
void amstrong(int a, int b)
{
    int count, big,small, b1, rem, sum, p,count2;
    big = a > b ? a : b;
    small = a < b ? a : b;
    for (small = small + 1; small < big; small++)
    {
        sum=0;
        count = 0;
        b1 = small;
        while (b1)
        {
            count++;
            b1 = b1 / 10;
        }
        b1 = small;
        count2=count;
        while (b1)
        {
            rem = b1 % 10;
            p = 1;
            count=count2;
            while (count)
            {
                p = p * rem;
                count--;
            }
            sum=sum+p;
            b1=b1/10;
        }
        if (small==sum)
        {
            printf("%d\n",small);
        }
    }
}

// Q5
// int fact(int a);
// int serice(int a);
// int main()
// {
//     int a,result;
//     printf("enter a number :");
//     scanf("%d", &a);
//     result=serice(a);
//     printf("the result is %d",result);
// }
// int serice(int a){
//     int i,sum=0;
// for ( i =1;i<=a; i++)
// {
//     sum=sum+(fact(i)/i);
// }
// return sum;
// }
// int fact(int a)
// {
//     int f = 1;
//     for (a; a; a--)
//     {
//         f = f * a;
//     }
//     return f;
// }
