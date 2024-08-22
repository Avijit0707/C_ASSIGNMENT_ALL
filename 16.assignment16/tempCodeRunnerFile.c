int main(){
   int a,b,c=0,d;
   printf("Enter the number :");
   scanf("%d",&a);
   d=a;
   while (a>0)
   {
    b=a%10;
    c=c+b*b*b;
    a=a/10;
   }
   if (d==c)
   {
    printf("the number is amstrong");
   }
   else
   printf("the number is not amstrong");
    return 0;
}