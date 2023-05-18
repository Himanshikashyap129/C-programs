#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    char a,b,c;
    printf("\nenter the number of disk=");
    scanf("\n%d",&n);
    printf("tower of hanoi of %d disc\n",n);
    tower(n,'a','b','c');
}
void tower(int n,char a,char b,char c){
    if(n<=0)
    printf("\nillegal entry\n");
    else if(n==1)
    printf("\nmove disc from %c to %c\n",a,c);
    else{
        tower(n-1,a,c,b);
        tower(1,a,b,c);
        tower(n-1,b,a,c);
    }
}