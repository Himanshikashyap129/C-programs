#include<stdio.h>
#include<conio.h>
void main(){
    int n,f;
    printf("\nenter the number=");
    scanf("%d",&n);
    f=fact(n);
    printf("\nFactorial of the number is=%d\n",f);
   
}
int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}