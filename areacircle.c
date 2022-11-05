//Write a program to find area and circumference of circle//
#include<stdio.h>
int main()
{
	
	float r,area,c;
	printf("ENTER RADIUS OF CIRCLE");
	scanf("%f",&r);
	area=3.14*r*r;
	c=2*3.14*r;
	printf("AREA IS=%f",area);
	printf("CIRCUMFERENCE IS=%f",c);
}