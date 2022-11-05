//Write a program to find to area of equilateral triangle//
#include<stdio.h>
#include<math.h>
int main()
{
	
	float a,b;
	printf("\n Enter side:");
	scanf("%f %f",&a);
	b=a*a*1.73/4;
	printf("\n Area is=%f",b);
}