#include <stdio.h>
#include <string.h>

// Q1
//  void palindromStr(char *str);
//  int main(){
//      char str[]="madam";
//      palindromStr(str);
//      return 0;
//  }
//  void palindromStr(char *str){
//      char str2[50];
//      strcpy(str2,str);
//      int a=strlen(str);
//      for (int i = 0;i<=a/2; i++)
//      {
//        char temp =str[i];
//        str[i]=str[a-i-1];
//        str[a-i-1]=temp;
//      }
//      int i;
//      for (i = 0;str[i]; i++)
//      {
//         if (str[i]!=str2[i])
//         {
//          break;
//         }
//      }
//      if (i==a)
//      {
//          printf("the string is pelindrm !");
//      }
//      else
//      printf("the string is not pelindrm !");
//  }

// Q2
// void trimStr(char *str);
// int main()
// {
//     char str[] = "                       Hello, World!                                      ";
//     trimStr(str);
//     return 0;
// }
// void trimStr(char *str)
// {
//     int length = strlen(str) - 1;
//     char str2[50];
//     int index = 0;
//     int lastLength = length;
//     for (    ; lastLength>=0; lastLength--)
//     {
//         if (str[lastLength] != ' ')
//         {
//             break;
//         }
//     }
//     int firstLength;
//     for(firstLength = 0;firstLength<=lastLength;firstLength++)
//     {
//         if (str[firstLength] != ' ')
//         {
//            break;
//         }
//     }
//     for (int i =firstLength; i <=lastLength; i++,index++)
//     {
//         str2[index]=str[i];
//     }
//     str2[index]='\0';
//     for (int i = 0; str2[i]; i++)
//     {
//         printf("%c",str2[i]);
//     }
// }

// Q3
//  int strDigit(char *str);
//  int main(){
//      char str[]="sudip maity";
//     printf("the digit of str is %d",strDigit(str));
//  }
//  int strDigit(char *str){
//      int count=0;
//      for (int i = 0;str[i]; i++)
//      {
//         if (str[i]>=65&&str[i]<=90 || str[i]>=97&&str[i]<=122)
//         {
//              count++;
//         }
//      }
//      return count;
//  }



// Q4
 void reverseStr(char *str);
 int main(){
     char str[]="hellow gyes wellcome to my youtube chenel";
     reverseStr(str);
     return 0;
 }
 void reverseStr(char *str){
    char str2[50];
    int length=stelen(str)-1;
    int i;
    for (i=length;i>=0; i--)
    {
        if (str[i]==' ')
        {
            break;
        }
    }
}
