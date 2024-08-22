#include<stdio.h>
// Q1
// int main(){
//     int n ,fact=1;
//     printf("enter the s number : ");
//     scanf("%d",&n);
//     for(int i=n;i>0;i--){
//             fact=fact*i;
//     }
//     printf("%d",fact);
// }

//Q2
// int main(){
//     int n,count=0;
//     printf("enter the  number : ");
//     scanf("%d",&n);
//     int num=n;
//     while(n>0)
//     {
//        count++;
//        n=n/10;
//     }
//     printf("the digit is  %d is %d",num,count);
// }

//Q3
// int main(){
// int n,j=0;
// printf("enter the number :");
// scanf("%d",&n);
// for(int i =1;i<n;i++){
//     if(n%i==0){
//      j++;
//     }
// }
// if (j==1){
//     printf("the number is prime");
// }
// else{
//     printf("the number is not prime");
// }
// return 0;
// }

//Q4
// int main(){
//     int a,b,c,d;
//     printf("enter two numbers :");
//     scanf("%d%d",&a,&b);
//     int i= a>b?a:b;
//     for (i;i<=a*b;i++){
//         if (i%b==0 && i%a==0)
//         {
//            printf("the lcm is %d",i);
//            break;
//         } 
//     }
// }

//Q5
// int main(){
// int n,rem,sum=0;
// printf("enter the number :");
// scanf("%d",&n);
// while(n>0){
//     rem=n%10;
//     sum=sum*10+rem;
//     //!printf("%d",sum);
//     n=n/10;
// }
// printf("%d",sum);
// return 0;
// }

