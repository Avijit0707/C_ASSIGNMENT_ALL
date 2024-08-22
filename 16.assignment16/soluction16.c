#include <stdio.h>
// Q1
// int main(){
//     int a,b,c,d;
//     printf("enter the term:");
//     scanf("%d",&d);
//         a=-1;
//         b=1;
//     for (int i = 1; i <=d; i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     printf("the term is %d",c);
//     return 0;
// }

// Q2
// int main(){
//     int a,b,c,d;
//     printf("enter the rangre:");
//     scanf("%d",&d);
//         a=-1;
//         b=1;
//     for (int i = 1; i <= d; i++)
//     {
//         c=a+b;0,
//         a=b;
//         b=c;
//         printf("%d\n",c);
//     }
//     return 0;
// }

// Q3
// int main(){
//     int a,b,c,d;
//     printf("enter the number:");
//     scanf("%d",&d);
//         a=-1;
//         b=1;
//     for (int i = 0;; i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         if (d==c)
//         {
//             printf("the number is avalible in fibonacci serice %d",d);
//            break;
//         }
//         else if (c>d){
//         printf("the number is not avalible in fibonacci serice %d",d);
//         break;
//         }
//     }
//     return 0;
// }

// Q4
// int ain()
// {
//     int a, c = 0, d, digit = 0, p, rem, digitstor;
//     printf("Enter the number :");
//     scanf("%d", &a);
//     d = a;
//     while (a)
//     {
//         digit++;
//         a = a / 10;
//     }
//     digitstor = digit;
//     a = d;
//     while (a > 0)
//     {
//         rem = a % 10;
//         digit = digitstor;
//         p = 1;
//         while (digit > 0)
//         {
//             p = p * rem;
//             digit--;
//         }
//         c = c + p;
//         a = a / 10;
//     }
//     if (d == c)
//     {
//         printf("the number is ams6trong %d", d);
//     }
//     else
//     {
//         printf("the number is not amstrong %d", d);
//     }
// }

// Q5
int amstrong (int);
int main()
{
   int x,c;
   printf("enter the range :");
   scanf("%d",&x);
   for (int i = 1; i <= x; i++)
   {
    c=amstrong(i);
    if (c==i)
    {
        printf("the number is amstrong : %d\n",i);
    }
    
   }
   return 0;
}
int amstrong(int a)
{
    int digit=0,digitstor,rem,p=1,c=0,d = a;
    while (a)
    {
        digit++;
        a = a / 10;
    }
    digitstor = digit;
    a = d;
    while (a > 0)
    {
        rem = a % 10;
        digit = digitstor;
        p = 1;
        while (digit > 0)
        {
            p = p * rem;
            digit--;
        }
        c = c + p;
        a = a / 10;
       
    }
     return c;
}

// int main(){
//     char d;
//     scanf("%c",&d);
//     switch (d)
//     {

//     case 'A':
//        printf("abcd");
//         break;

//     default:
//         break;
//     }
// }

// #include <stdio.h>
