#include<stdio.h>
# include <stdio.h>
# include <string.h>
int main()
{
char ch[]="yellow";
     int len=strlen(ch);
     //printf("\n %d",len);
     for(int i=5;i>=0;i--)
     {
for(int b=1;b<=len-i-1;b++)
         {
printf(" ");
}
for(int j=0;j<=i;j++)
         {
printf("%c",ch[j]);
}
printf("\n");
     }
     return 0;
}

