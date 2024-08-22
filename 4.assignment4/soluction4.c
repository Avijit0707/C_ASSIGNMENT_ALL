#include<stdio.h>
// Q1
// int main(){
//   char ch = 'a';
//  printf("%d",sizeof(ch));
//     return 0;
// }

// Q2
// int main(){
  
//  printf("%d",sizeof(3.5));
//     return 0;
// }

// Q3
// int main(){
//   char ch = 'A';
//   ch++;
//  printf("%c",ch);
//     return 0;
// }


// Q4
// int main(){
//   int g=4,i=5;
//   int l=g;
//   g=i;
//   i=l;
//   printf("%d %d",g,i);
//     return 0;
// }


// Q5
// int main(){
//    int a=5;
//    int b=6;
   
//    a=a+b;

//    b=a-b;
//    a=a-b;
//    printf("%d %d",a,b);
// }


// Q6
// int main(){
//   int a=3,b=4;
//   a=a*b;
//   b=a/b;
//   a=a/b;
//   printf("%d %d",a,b);
//     return 0;
// }


// Q7 vvi ****************************************************
// int main(){
//   int a,b;
//   scanf("%d%d",&a,&b);
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//   printf("%d  %d",a,b);
//   return 0;
// }




// Q8
int main(){
  int a=0,b=9;
 a=(a+b)-(b=a);
  printf("%d%d",a,b);
    return 0;
}
