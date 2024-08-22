#include<stdio.h>
//! Q1
// int main (){
//    float costp,sellp;
//    float percentage;
//    printf("Enter the cost price & sell price :");
//    scanf("%d %d",&costp,&sellp);
//    float profit =sellp-costp;
//    if(sellp>=costp){
//     percentage=profit/costp*100;
//     printf("your profit is  %0.2f %%",percentage);
//    }
//    else{
//    percentage=profit/costp*100;
//     printf("your loss is  %0.2f %%",percentage);
//    }
//     return 0;
// }


//!Q2
// int main (){
//    int result;
//    printf("enter your math merks : ");
//    scanf("%d",&result);
//    int x = result>=33;
//    printf("enter your english merks : ");
//    scanf("%d",&result);
//    int y = result>=33;
//    printf("enter your bengali merks : ");
//    scanf("%d",&result);
//    int z = result>=33;
//    printf("enter your computer merks : ");
//    scanf("%d",&result);
//    int g = result>=33;
//    printf("enter your science merks : ");
//    scanf("%d",&result);
//    int h = result>=33?1:0;
//    if(x&&y&&z&&g&&h)
//     printf("you are passed");
//    else
//     printf("you are fali");
//     return 0;
// }

//! Q3
// int main(){
//     char a;
//     printf("Enter the alphAabate :");
//     scanf("%c",&a);
//     printf("%d",a);
//     if(a<91&&a>64)
    
//        printf(" big %c",a);
    
//     else if(a<123&&a>96)
//        printf("the alphabet  small : %c",a); 
//     else
//     printf("it is not a alphabat");
// }

//!Q3
// int main(){
//     char a;
//     printf("Enter the alphAabate :");
//     scanf("%c",&a);
//     printf("%d",a);
//     if(a>='A'&& a<='Z')
//        printf(" big %c",a);
//     else if(a>='a'&& a<='z')
//        printf("the alphabet  small : %c",a); 
//     else
//     printf("it is not a alphabat");
// }

//! Q4

// int main(){
//     int x;
//     printf("enter the number :");
//     scanf("%d",&x);
   //  if(x%3==0 && x%2==0){//? 3*2=6  6 diye check lorleo thik
//       printf("the number is divisible by 3 & 2  --%d",x);

//     }
//     else
//      printf("the number is not divisible by 3 & 2 --%d",x);
// }


//!Q5

// int main(){
//     int x;
//     printf("enter the number :");
//     scanf("%d",&x);
//     if(x%3==0 || x%7==0){
//       printf("the number is divisible by 3 or 7  --%d",x);

//     }
//     else
//      printf("the number is not divisible by 7 & 3 --%d",x);
// }
 

//! game
int main (){
   int a,b=0;
   printf("wellcome enter even number chance 3 ! \n");
   for(int i=1;i<4;i++){
   printf("enter the even number : ");
   scanf("%d",&a);
   if (a%2==0)
   {
      printf("you win !");
      break;

   }
   else{
printf(" wrong! \n");
printf("your chance is %d \n",3-i);
b++;
   }
   
   }
   if(b>0)
   printf("you loss the game");
   
}











