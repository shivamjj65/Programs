//Write a program to find simple interest//
#include<conio.h>
#include<stdio.h>
int main()
{
	float p,r,t,s;
	printf("Enter 3 values:");
	scanf("%f %f %f",&p,&r,&t);
	s=(p*r*t)/100;
	printf("Simple interest=%f",s);	
}