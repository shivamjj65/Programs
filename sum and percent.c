// Write a program to calculate sum of 5 subjects and show percentage //
#include<conio.h>
#include<stdio.h>
int main()
{
 float a,b,c,d,e,f=50,sum,p;
	printf("Enter 5 numbers:");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	p=(sum/f)*100;
	printf("Sum is:%f",sum);
	printf("Percentage is %f",p);
}