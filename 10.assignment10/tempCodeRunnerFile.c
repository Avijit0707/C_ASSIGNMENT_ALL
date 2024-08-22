){
     int a=1;
     printf("prass a key in keybrd :");
     scanf("%c",&a);
     if (a>96&&123>a)
     {
        printf("the crecter  is small %d",a);
     }
     else if (a>64&&91>a)
     {
       printf("the charecter is capital %d",a);
     }
     else{
    printf("the cheracter is spacilcharecter %d",a);
     }
    return 0;
}