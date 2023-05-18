#include<stdio.h>
#include<conio.h>
#include<string.h>
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
