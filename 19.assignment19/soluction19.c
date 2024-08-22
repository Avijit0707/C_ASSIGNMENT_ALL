#include <stdio.h>
#include <stdlib.h>
// Q1
// int main()
// {
//     int a;
//     printf("Enter the month number: ");
//     scanf("%d", &a);
//     switch (a)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//         printf("The month has 31 days\n");
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         printf("The month has 30 days\n");
//         break;
//     case 2:
//         printf("The month has 29 or 28 days\n");
//         break;
//     default:
//         printf("Invalid entry\n");
//         break;
//     }
//     return 0;
// }

// Q2

// int main()
// {
//     int a;
//     int b, c;
//     while (1)
//     {
//         printf("chosse your option :");
//         printf("1.addition\n 2.subtraction \n 3.multiplication \n 4.divition \n 5.exit");
//         scanf("%d", &a);
//         switch (a)
//         {
//         case 1:
//             printf("enter tw0 o numbers :");
//             scanf("%d%d", &b, &c);
//             printf("the addition is :%d", b + c);
//             break;
//         case 2:
//             printf("enter tw0 o numbers :");
//             scanf("%d%d", &b, &c);
//             printf("the subtraction is :%d", b > c ? b - c : c - b);
//             break;
//         case 3:
//             printf("enter tw0 o numbers :");
//             scanf("%d%d", &b, &c);
//             printf("the multiplication is :%d", b * c);
//             break;
//         case 4:
//             printf("enter tw0 o numbers :");
//             scanf("%d%d", &b, &c);
//             printf("the divition is :%d", b > c ? b / c : c / b);
//             break;
//         case 5:
//             exit(0);
//         default:
//             printf("wrong choice");
//             break;
//         }
//         }
//     }

// Q3
// int main()
// {
//     int a;
//     int b, c;
//     printf("enter the weel number :");
//     // printf("1.addition\n 2.subtraction \n 3.multiplication \n 4.divition \n");
//     scanf("%d", &a);
//     switch (a)
//     {
//     case 1:
//         printf("sunday");

//         break;
//     case 2:
//         printf("monday");

//         break;
//     case 3:
//         printf("tusda");

//         break;
//     case 4:
//         printf("wanesday");

//         break;
//     case 5:
//         printf("thasday");

//         break;
//     case 6:
//         printf("fryday");

//         break;
//     case 7:
//         printf("saterday");

//         break;
//     default:
//         printf("wrong choice");
//         break;
//     }
// }

// Q4
int main()
{
    int a;
    int b, c, d;
    while (1)
    {
        printf("chosse your option :");
        printf("\n 1.isosceles triangle or not \n 2.valid triangle or not \n 3.equilateral\n 4.exit\n");
        scanf("%d", &d);
        switch (d)
        {
        case 1:
            printf("enter three length :");
            scanf("%d%d%d", &a, &b, &c);
            if (a + b > c && b + c > a && c + a > b)
            {

                if (a == b || b == c || c == a)
                {
                    printf("it is valid isosceles triangle\n");
                }
                else
                    printf("it is not valid isosceles triangle\n");
                
            }
            else
                printf("not valid trangle\n");
                break;
        case 2:
            printf("enter tw0 o numbers :");
            scanf("%d%d%d", &a, &b, &c);
            if (a + b > c && b + c > a && c + a > b)
            {
                if ((a * a) == (b * b + c * c) || (b * b) == (a * a + c * c) || (c * c) == (b * b + a * a))
                {
                    printf("it is valid right angle  triangle\n");
                }
                else
                    printf("not valid trangle\n");
            }
            else
                printf("not valid trangle\n");
            break;
        case 3:
            printf("enter tw0 o numbers :");
            scanf("%d%d%d", &a, &b, &c);
            if (a + b > c || b + c > a || c + a > b)
            {
                if (a == b && a == c && c == b)
                {
                    printf("it is valid equilatral triangle\n");
                }
                else
                    printf("not equilateal trangle\n");
            }
            else
                printf("not valid trangle\n");
            break;
        case 4:
            exit(0);
        default:
            printf("wrong choice");
            break;
        }
    }
}

// Q5
// int main()
// {
//     int var;
//     printf("Enter the month number: ");
//     scanf("%d", &var);
//     switch (var)
//     {
//     case 1:
//     printf("good");
//         break;
//     case 2:
//     printf("better");
//         break;
//     case 3:
//     printf("best");
//         break;

//     default:
//         printf("Invalid entry\n");
//         break;
//     }
//     return 0;
// }