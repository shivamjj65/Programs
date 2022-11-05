#include<stdio.h>
int main()
{
    int bin,dec=0;
    printf("Enter binary number: ");
    scanf("%d",&bin);
    int rem,num=bin,base=1;
    while (num>0)
    {
        rem=num%2;
        dec=dec+(rem*base);
        num=num/10;
        base=base*2;
    }
    printf("%d ---> %d",bin,dec);
}