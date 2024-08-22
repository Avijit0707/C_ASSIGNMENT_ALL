#include<stdio.h>
// Q1
// *
// **
// ***
// ****
// *****
// int main(){
//    int i,j;
//    for ( i = 1; i <=5; i++)
//    {
//     for ( j = 1; j<=5; j++)
//     {
//       if (j<=i)
//       {
//         printf("* ");
//       }
//       else
//       printf(" ");  
//     }
//     printf("\n");
//    }
// }

// Q2
//     *
//    **
//   ***
//  ****
// *****
// int main(){
//    int i,j;
//    for ( i = 1; i <=5; i++)
//    {
//     for ( j = 1; j<=5; j++)
//     {
//       if (j>=6-i)
//       {
//         printf("*");

//       }
//       else
//       printf(" ");
      
//     }
//     printf("\n");
    
//    }
// }


//Q3
// *****
// ****
// ***
// **
// *
// int main(){
//    int i,j;
//    for ( i = 1; i <=5; i++)
//    {
//     for ( j = 1; j<=5; j++)
//     {
//       if (j<=6-i)
//       {
//         printf("*");

//       }
//       else
//       printf(" ");
      
//     }
//     printf("\n");
    
//    }
// }



//Q4
// *****
//  ****
//   ***
//    **
//     *
// int main(){
//    int i,j;
//    for ( i = 1; i <=5; i++)
//    {
//     for ( j = 1; j<=5; j++)
//     {
//       if (j>=i)
//       {
//         printf("*");
//       }
//       else
//       printf(" ");      
//     }
//     printf("\n");
//    }
// }


// Q5
// 1
// 12
// 123
// 1234
// 12345
// int main(){
//    int i,j;
//    for ( i = 1; i <=5; i++)
//    {
//      int a=1;
//     for ( j = 1; j<=5; j++)
//     {   
//       if (j<=i)
//       {
//         printf("%d",a);
//         a=j+1;
//       }
//       else
//       printf(" ");   
//     }
//     printf("\n");  
//    }
// }

//Q6
// 1
// 21
// 321
// 4321
// 54321

// int main(){
//    int i,j;
//    for ( i = 1; i <=5; i++)
//    {
//    int a=i;
//     for ( j = 1; j<=5; j++)
//     {
//       if (j<=i)
//       {
//         printf("%d",a);
//         a=i-j;
//       }
//       else
//       printf(" ");  
//     }
//     printf("\n");
//    }
// }

//Q7
// ABCDE
//  ABCD
//   ABC
//    AB
//     A
// int main(){
//    int i,j;
//    for ( i = 1; i <=5; i++)
//    {
//    char a='A';
//     for ( j = 1; j<=5; j++)
//     {
//       if (j>=i)
//       {
//         printf("%c",a++);
//        
//       }
//       else
//       printf(" ");  
//     }
//     printf("\n");
//    }
// }

//Q8
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// int main(){
//    int i,j;
//    int a=1;
//    for ( i = 1; i <=4; i++)
//    {
//     for ( j = 1; j<=4; j++)
//     {
//       if (j<=i)
//       {
//         printf("%d",a);
//         a++;
//       }
//       else
//       printf(" ");
      
//     }
//     printf("\n");
    
//    }
// }

// Q9
// ABCDE
//  BCDE 
//   CDE 
//    DE 
//     E
// int main(){
//    int i,j;
//     char a;
//    for ( i = 1; i <=5; i++)
//    {
//      a=64+i;
//     for ( j = 1; j<=5; j++)
//     {
//       if (j>=i)
//       {
//         printf("%c",a);
//         a++;
//       }
//       else
//       printf(" ");  
//     }
//     printf("\n");
//    }
// }


// Q10


int main(){
   int i,j;
   for ( i = 1; i <=5; i++)
   {
    for ( j = 1; j<=5; j++)
    {
      if (i==1||i==5)
      {
        printf("*");
      }
      else if (j==1||j==5)
      {
         printf("*");
      }
      
      else
      printf(" ");  
    }
    printf("\n");
   }
}



// olternet question
//    *   
//   ***
//  *****
// *******

// int main(){
//    int i,j;
//    for ( i = 1; i <=4; i++)
//    {
//     for ( j = 1; j<=7; j++)
//     {
//       if (j>=5-i&&j<=3+i)
//       {
//         printf("*");

//       }
//       else
//       printf(" ");
      
//     }
//     printf("\n");
    
//    }
// }