#include <stdio.h>
#include <stdlib.h>
// Q1
// int main()
// {
//     int a;
//     printf("enter the marks :");
//     scanf("%d", &a);
//     switch (a)
//     {
//     case 90 ... 100:
//         printf("A");
//         break;
//     case 80 ... 89:
//         printf("b");
//         break;
//     case 70 ... 79:
//         printf("c");
//         break;
//     case 60 ... 69:
//         printf("d");
//         break;
//     case 50 ... 59:
//         printf("e");
//         break;
//     case 0 ... 49:
//         printf("fail");
//         break;
//     default:
//     printf("invalid marks");
//         break;
//     }
// }

// Q2
// int main()
// {
//     while (1)
//     {
//         int a;
//         printf("\nenter your choice :");
//         printf("\n1 factorial number :");
//         printf("\n2 check even or odd :");
//         printf("\n4 area of a circle :");
//         printf("\n5 sum of n matural number :");
//         printf("\n6 exit :");
//         scanf("%d", &a);
//         switch (a)
//         {
//         case 1:
//         {
//             int num, fact = 1;
//             printf("\n enter the number :");
//             scanf("%d", &num);
//             for (int i = 1; i <= num; i++)
//             {
//                 fact = fact * i;
//             }
//             printf("thr factorial is %d", fact);
//         }
//         break;
//         case 2:
//         {
//             int num;
//             printf("enter the number: ");
//             scanf("%d", &num);
//             if (num % 2)
//             {
//                 printf("the number is odd");
//             }
//             else
//                 printf("the number is even");
//         }
//         break;
//         case 4:
//         {
//             int r;
//             printf("enter the radius :");
//             scanf("%d", &r);
//             printf("the area of a circle is %f", 3.14 * r * r);
//         }
//         break;
//         case 5:
//         {
//             int num, sum = 0;
//             printf("enter the number :");
//             scanf("%d", &num);
//             for (int i = 1; i <= num; i++)
//             {
//                 sum = sum + i;
//             }
//             printf("the sum of %d natural number is %d", num, sum);
//         }
//         break;
//         case 6:
//             exit(0);
//         default:
//             printf("wrong choice\n");
//             break;
//         }
//     }
//     return 0;
// }

//? abhabeo lekha jay printf(n%2?"odd":"even");

// Q3
// int main()
// {
//     char a;
//     printf("enter the charecter");
//     scanf("%c", &a);
//     switch (a)
//     {
//     case 65 ... 91:
//         printf("the charecter is uppercase");
//         break;
//     case 97 ... 123:
//         printf("the charecter is lowercase");
//         break;
//     default:
// printf("some other spacial cherecter");
//         break;
//     }
// }

// Q4
// int main()
// {
//     char a;
//     printf("enter the charecter");
//     scanf("%c", &a);
//     switch (a)
//     {
//     case 'A':
//     case 'E':
//     case 'I':
//     case 'O':
//     case 'U':
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//         printf("the cherecter is vowal");
//         break;
//     case 1 ... 64:
//     case 91 ... 96:
//     case 123 ... 255:
//         printf("some other spacial cherecter");
//         break;
//     default:
//         printf("consonent");
//     }
// }

// Q5
int main()
{
    while (1)
    {
        int a;
        printf("\nenter your choice :");
        printf("\n1 calculate lcm of two numbers :");
        printf("\n2 calculate sum of digit of a number :");
        printf("\n3 voloum of a cuboid :");
        printf("\n4 check a given number is prime or not:");
        printf("\n6 exit :");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
        {
            int num1, num2, large;
            printf("\n enter two numbers :");
            scanf("%d%d", &num1, &num2);
            large = num1 > num2 ? num1 : num2;
            for (int i = large; i <= num1 * num2; i++)
            {
                if (i % num1 == 0 && i % num2 == 0)
                {
                    printf("thr lcm is %d", i);
                    break;
                }
            }
        }
        break;
        case 2:
        {
            int num, rem, sum = 0;
            printf("enter the number: ");
            scanf("%d", &num);
            while (num)
            {
                rem = num % 10;
                sum = sum + rem;
                num = num / 10;
            }
            printf("the sum of digit is %d", sum);
        }
        break;
        case 3:
        {
            int a, b, c;
            printf("enter the hight width length :");
            scanf("%d%d%d", &a, &b, &c);
            printf("the volum of a cuboied is %d", a * b * c);
        }
        break;
        case 4:
        {
            int num, i;
            printf("enter the number :");
            scanf("%d", &num);
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    break;
                }
            }
            if (i == num)
                printf("the %d number is prim", num);
            else
                printf("the number is not prime");
        }
        break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}