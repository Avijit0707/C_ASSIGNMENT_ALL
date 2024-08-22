#include<stdio.h>
// Q1
// int main(){
//     int num ;
//     printf("enter the number :");
//     scanf("%d",&num);
//?    if(num/100==0){//logic2num>99&&num<100
//         printf("the number is not three digits");
//     }
//     else{
//         printf("the number is three digits");
//     }
//     return 0;
// }



// Q2
// int main(){
//     int num1 , num2;
//     printf("enter the two numbers");
//     scanf("%d %d",&num1,&num2);
//     if (num1>num2)
//    printf("the capita number is %d",num1);
//    else if(num1 == num2)
//    printf("both number is same %d",num1);
//    else
//    printf("the capital number is %d",num2);
//     return 0;
// }


// Q3
// int main(){
// int a,b,c,x;
// printf("enter the qudratic eqution root b = ");
// scanf("%d",&b);
// printf("enter the qudratic eqution root a= ");
// scanf("%d",&a);
// printf("enter the qudratic eqution root c = ");
// scanf("%d",&c);
// if(b*b - 4*a*c ==0 )
//   printf("real & equal");
//   else if(b*b - 4*a*c >0 )
//   printf("real & distinct");
//   else
//   printf("imaginary roots");
//  return 0;
// }



// Q4
// int main(){
// int year;
// printf("enter year :");
// scanf("%d",&year);
// if (year%100==0){
//     if(year%400==0){
//         printf("the year is leapyear");
//     }
//     else
//     printf("the year is not leapyear_");
// }
// else if(year%4==0){
//     printf("thr year is leapyear");
// }
// else{
//     printf("the year is not leapyear");
// }
//     return 0;
// }

   

// Q5
int main(){
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    //?logic a>b? a>c?a:c : b>c?b:c ;
    if (a>b&&a>c)
    {
       printf("large %d",a); 
    }
    else if (b>c)
    {
       printf("large %d",b);
    }
    else
    printf("large %d",c);   
}
