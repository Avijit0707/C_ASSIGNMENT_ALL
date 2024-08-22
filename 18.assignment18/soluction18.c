#include <stdio.h>
// Q1
// int main(){
//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1; j<=7; j++)
//         {
//            if (j>=5-i&&j<=3+i)
//            {
//             printf("*");
//            }
//            else
//            printf(" ");
//         }
//         printf("\n");
//     }
//    return 0;
// }

// Q2
// int main(){
//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1; j<=7; j++)
//         {
//            if (j>=i&&j<=8-i)
//            {
//             printf("*");
//            }
//            else
//            printf(" ");
//         }
//         printf("\n");
//     }
//    return 0;
// }

//! Q3
//?     *
//?    *  *
//?   *  *  *
//? *   *  *  *
// int main(){
//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1; j<=7; j++)
//         {
//             if (i%2){
//                 if (j>=5-i&&j<=3+i&&j%2==0)
//                 printf("*");
//                 else
//                 printf(" ");}
//             else if (i%2==0)
//             {
//                 if (j>=5-i&&j<=3+i&&j%2)
//                 printf("*");
//                 else
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//    return 0;
// }

//?same question sir logic

// int main(){
//   int f;
//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1,f=1; j<=7; j++)
//         {
//            if (j>=5-i&&j<=3+i)
//            {
//             if (f)
//             {
//               printf("*");
//             }
//             else
//             printf(" ");
//             f=1-f;
//            }
//            else
//            printf(" ");
//         }
//         printf("\n");
//     }
//    return 0;
// }

//! Q4 *********************************************************************
// int main(){
//   int c;
//     for (int i = 1; i <=4; i++)
//     {
//       c=1;
//         for (int j = 1; j<=7; j++)
//         {
//            if (j>=5-i&&j<=3+i)
//            {
//             printf("%d",c);
//             j<4?c++:c--;
//            }
//            else
//            printf(" ");
//         }
//         printf("\n");
//     }
//    return 0;
// }

// Q5
//  int main(){
//    char a='A';
//      for (int i = 1; i <=4; i++)
//      {
//        a='A';
//          for (int j = 1; j<=7; j++)
//          {
//             if (j>=i&&j<=8-i)
//             {
//              printf("%c",a);
//              a++;
//             }
//             else
//             printf(" ");
//          }
//          printf("\n");
//      }
//     return 0;
//  }

// Q6
//  int main(){
//    char a='A';
//      for (int i = 1; i <=4; i++)
//      {
//        a='A';
//          for (int j = 1; j<=7; j++)
//          {
//             if (j>=i&&j<=8-i)
//             {
//              printf("%c",a);
//              j<4?a++:a--;
//             }
//             else
//             printf(" ");
//          }
//          printf("\n");
//      }
//     return 0;
//  }

// Q7
//! most tuffest
// int main()
// {
//   int f, a;
//   for (int i = 1; i <= 5; i++)
//   {
//     a = 1;
//     for (int j = 1, f = 1; j <= 9; j++)
//     {
//       if (j >= 6 - i && j <= 4 + i)
//       {
//         if (f)
//         {
//           printf("%d", a);
//           j < 5 ? a++ : a--;
//         }  
//         else
//         {
//           printf(" ");
//           if (j == 5)
//             a--;
//         }
//         f = 1 - f;
//       }
//       else
//         printf(" ");
//     }
//     printf("\n");
//   }
//   return 0;
// }

//Q8
// int main(){
//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1; j<=7; j++)
//         {
//           if (i==1)
//           {
//             printf("*");
//           }         
//           else if(j>=6-i&&j<=2+i)
//            {
//             printf(" ");
//            }
//            else
//            printf("*");
//         }
//         printf("\n");
//     }
//    return 0;
// }


//Q9

// int main(){
//   int a=1;
//     for (int i = 1; i <=4; i++)
//     {
//       a=1;
//         for (int j = 1; j<=7; j++)
//         { 
//            if(j>=6-i&&j<=2+i)
//            {
//             printf(" ");
//            }
//            else
//            printf("%d",a);
//            j<4?a++:a--;          
//         }
//         printf("\n");
//     }
//    return 0;
// }

//Q10
// int main(){
//   char a;
//     for (int i = 1; i <=4; i++)
//     {
//       a='A';
//         for (int j = 1; j<=7; j++)
//         { 
//            if(j>=6-i&&j<=2+i)
//            {
//             printf(" ");
//            }
//            else
//            printf("%c",a);
//            j<4?a++:a--;          
//         }
//         printf("\n");
//     }
//    return 0;
// }


//Q8
// int main(){
//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1; j<=7; j++)
//         {                  
//            if(j<=5-i||j>=3+i)
//            {
//             printf("*");
//            }
//            else
//            printf(" ");
//         }
//         printf("\n");
//     }
//    return 0;
// }

//Q9
int main(){
  int a;
    for (int i = 1; i <=4; i++)
    {
      a=1;
        for (int j = 1; j<=7; j++)
        {                  
           if(j<=5-i||j>=3+i)
           {
            printf("%d",a);
            j<4?a++:a--;
           }
           else{
            printf(" ");
            if (j==4)
            {
              a--;
            }
            
           }
           
           
        }
        printf("\n");
    }
   return 0;
}