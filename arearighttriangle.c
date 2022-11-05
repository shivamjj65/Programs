//Write a program to find area of right angled triangle//
#include<stdio.h>
int main()
{
	float b,h,a;
	printf("Enter base and height");
	scanf("%f %f",&b,&h);
	a=0.5*b*h;
	printf("Area is=%f",a);
	
}