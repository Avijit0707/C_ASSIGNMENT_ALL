#include <stdio.h>
#include<string.h>
//Q1
// int strLength(char *str)
// {
//     int i;
//     for (i = 0; str[i]; i++)
//         ;
//     return i;
// }
// int main(){
// char str[20]="akojsfhs";
// printf("the length is %d",strLength(str));
//     return 0;
// }

//Q2
// void reverseStr(char *str)
// {
//     int length = strlen(str) - 1;
//     char temp;
//     for (int i = 0; i < length / 2; i++, length--)
//     {
//         temp = str[i];
//         str[i] = str[length];
//         str[length] = temp;
//     }
//      printf("%s", str);
// }
// int main()
// {
//     char str[] = "apple";
//     reverseStr(str);
//     return 0;
// }

//Q3
// int cStr(char *str1,char *str2);
// int main(){
//     char str1[]="a";
//     char str2[]="acoiwuoii ed";
//     if (cStr(str1,str2)==-1)
//     {
//         printf("first is big");
//     }
//     else if (cStr(str1,str2)==1)
//     {
//        printf("last is big");
//     }
//     else
//     printf("both same");
//     return 0;
// }
// int cStr(char *str1,char *str2){
//     for (int i = 0;str1[i] || str2[i]; i++)
//     {
//         if (str1[i]<str2[i])
//         {
//             return -1;
//         }
//         else if(str1[i]>str2[i]){
//             return 1;
//         }
//     }
//     return 0;
// }


//Q4--5
// void toupperCase(char *str);
// int main(){
// char str[]="cedfwuh";
// toupperCase(str);
// for (int i = 0; str[i]; i++)
// {
//     printf("%c",str[i]);
// }

//     return 0;
// }
// void toupperCase(char *str){
//     for (int i = 0;str[i]; i++)
//     {
//         str[i]=str[i]-32;
//     }
// }
// void tolowerCase(char *str){
//     for (int i = 0;str[i]; i++)
//     {
//         str[i]=str[i]+32;
//     }
// }


