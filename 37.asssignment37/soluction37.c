#include <stdio.h>
// Q1
// int cvowelStr(char *str);
// int main()
// {
//     char str[] = "aeioudddddddddddddddddd";
//     printf("the number of vowel is :%d", cvowelStr(str));
//     return 0;
// }
// int cvowelStr(char *str)
// {
//     int count = 0;
//     for (int i = 0; str[i]; i++)
//     {
//         if ('A' == str[i] || 'E' == str[i] || 'I' == str[i] || 'O' == str[i] || 'U' == str[i] || 'a' == str[i] || 'e' == str[i] || 'i' == str[i] || 'o' == str[i] || 'u' == str[i])
//         {
//             count++;
//         }
//     }
//     return count;
// }

// Q2
//  int foundCha(char *str,char u);
//  int main(){
//      char u;
//      char str[]="apple";
//      printf("enter the cherecter :");
//      scanf("%c",&u);
//      int p=foundCha(str,u);
//      if (p==-1)
//      {
//          printf("the cherecter is not found");
//      }
//      else
//      printf("thr cherecter is found index is %d",p);
//  return 0;
//  }
//  int foundCha(char *str,char u){
//      for (int i = 0;str[i]; i++)
//      {
//          if (str[i]==u)
//          {
//              return i;
//          }
//      }
//      return -1;
//  }

// Q3
//  void find (char *str,char a,int b,int c);
//  int main(){
//      char a;
//      int b,c;
//      char str[]="hjdwsegfjkbvswhuiedr";
//      printf("Enter the cherecter :");
//      scanf("%c",&a);
//      printf("Enter the two index :");
//      scanf("%d%d",&b,&c);
//      find(str,a,b,c);

// return 0;
// }
// void find (char *str,char a,int b,int c){
//     for (int i = b>c?c:b; i < b>c?b:c; i++)
//     {
//        if (str[i]==a)
//        {
//         printf("the cherec is found %d",i);
//         break;
//        }
//     }
// }

// Q4
// void change (char a,int b,char *str);
// int main()
// {
//     char a;
//     int b;
//     printf("enter the chaecter :");
//     scanf("%c", &a);
//     printf("enter the index:");
//     scanf("%d", &b);
//     char str[]="gvedoueogyheriogeruyh";
//     change(a,b,str);
//     printf("%s",str);
//     return 0;
// }
// void change (char a,int b,char *str){
//     str[b]=a;
// }

//Q5
// void alphanumeric(char *str);
// int main(){
// char str[]="fhj3";
// alphanumeric(str);
//     return 0;
// }
// void alphanumeric (char *str){
//     int z=1,n=1;
//     int y=0;
//     for (int i = 0;str[i]; i++)
//     {
//         if ((str[i]>64&&str[i]<91 ||str[i]>96&&str[i]<123)&&z)
//         {
//             y++;
//             z=0;
//         }
//          if (str[i]>=48&&str[i]<=57&&n)
//         {
//             y++;
//             n=0;
//         }
//     }
//     if (y==2)
//     {
//        printf("the string is alphanumeric");
//     }
//     else
//       printf("not alpha");
// }