int main(){
  int a=1;
    for (int i = 1; i <=4; i++)
    {
      a=1;
        for (int j = 1; j<=7; j++)
        { 
           if(j>=6-i&&j<=2+i)
           {
            printf(" ");
           }
           else
           printf("%d",a);
           j<4?a++:a--;          
        }
        printf("\n");
    }
   return 0;
}