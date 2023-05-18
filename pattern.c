#include<stdio.h>
// int main(){
//     int i, j, k=1, n;
//     printf("\nEnter the number of lines:");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++){
//         for(j=1; j<=i; j++, k++){
//             printf("%4c",(char)(k+96));
//         }
//         printf("\n");
//     }
//     return 0;
// }
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

