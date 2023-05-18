#include<stdio.h>
#include<conio.h>
#include<string.h>
// int revstr(char *str1){
//     int i, len, temp;
//     len=strlen(str1);
//     for(i=0;i<len/2;i++){
//         temp=str1[i];
//         str1[i]=str1[len-i-1];
//         str1[len-i-1]=temp;
//     }
//     return 0;
// }
void main(){
    int i, len, temp;
    char str[50];
    char str2;
    printf("enter the string=");
    gets(str);
    printf("\nbefore reversing the stirng=%s",str);
    // str2=revstr(str);
    len=strlen(str);
    for(i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("\nafter reversing the string=%s\n",str);
    
}