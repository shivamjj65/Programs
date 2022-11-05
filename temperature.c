#include<conio.h>
#include<stdio.h>
int main()
{
	float temp,c;
	printf("Enter Temperature in Celsius:");
	scanf("%f",&c);
	temp=(c*9/5)+32;
	printf("Temperature in Fahrenheit is:%f",temp);
	
}