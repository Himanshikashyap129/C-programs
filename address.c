#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    int R,C,N,M;
    int datasize;
    int ba, ad, ad2;
    printf("\nEnter the dimensions of the given array:");
    scanf("%d%d",&R,&C);
    printf("\nEnter the dimensions of array whose address to be find:");
    scanf("%d%d",&N,&M);
    printf("\nEnter the base address:");
    scanf("%d",&ba);
    printf("\nEnter data size:");
    scanf("%d",&datasize);
    printf("\nAddress of the array by the row major implementations:");
    ad=ba+datasize*(N*C+M);
    printf("\nAddress:%d",ad);
    printf("\nAddress of the array by the column major implementations:");
    ad2=ba+datasize*(R*M+N);
    printf("\nAddress:%d",ad2);
}