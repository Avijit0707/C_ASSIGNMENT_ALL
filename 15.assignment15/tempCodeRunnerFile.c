int main (){
  int a,x,count;
  printf("Enter a number :");
  scanf("%d",&a);
  for (int i = a+1; ; i++)
  { 
        count=0;
        for(x=1;x<i;x++){
          if (i%x==0)
          {
            break;
          }  
        }
        if (i==x)
            {
               printf("Prime number :%d\n",i);
               break;
            }
  }
    return 0;
}