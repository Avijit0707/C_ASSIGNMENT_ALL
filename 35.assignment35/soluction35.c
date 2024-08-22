#include <stdio.h>
// Q1
//  int main(){
//      char str[]="ERHFOVICWEHKJHSDBCVWCVGBLWK";
//      for (int i = 0;str[i]; i++)
//      {
//          str[i]=str[i]+32;
//      }
//      for (int i = 0;str[i]; i++)
//      {
//         printf("%c ",str[i]);
//      }
//  }

// Q2
//  int main(){
//      char str[]="avijit mandal";
//      char str2[15];
//      int count=0;
//      for (int i = 0; str[i]; i++)
//      {
//        count++;
//      }
//      int i;
//      for ( i=0;i<count;i++)
//      {
//          str2[i]=str[count-1-i];
//      }
//      str2[i]='\0';
//      for (int i = 0; str2[i]; i++)
//      {
//          printf("%c",str2[i]);
//      }
//  }

// Q3
//  int main(){
//  char str[]="1234567djhfl.././/";
//  int Alphaber=0,Number=0,Cherecter=0;
//  for (int i = 0;str[i]; i++)
//  {
//      if (str[i]>64&&str[i]<91 || str[i]>96&&str[i]<123)
//          Alphaber++;
//      else if (str[i]>47&&str[i]<58)
//      {
//          Number++;
//      }
//      else
//        Cherecter++;
//  }
//  printf("the total alphabet is %d \n the total number number is %d \n the total number Cherecter is %d",Alphaber,Number,Cherecter);
//      return 0;
//  }

// Q4
//  int main(){
//      char str[50]="cneuhg sdcghyt";
//      char str2[20];
//      int count=0;
//      for(int  i = 0; str[i]; i++)
//      count++;
//      int i;
//      for(i = 0; i < count; i++)
//          str2[i]=str[i];
//      str[i]='\0';
//      for(int i = 0; str2[i]; i++)
//         printf("%c",str2[i]);
//      return 0;
//  }

// Q5
// int main()
// {
//     char num;
//     printf("enter the cherecter :");
//     scanf("%c", &num);
//     char str[] = "apple";
//     for (int i = 0; str[i]; i++)
//     {
//         if (str[i] == num)
//         {
//             printf("The cherecter is avelable %c and index is %d", num, i);
//             break;
//         }
//     }
// }
