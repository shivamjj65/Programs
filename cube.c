//Write program to find cube of a number//
#include<math.h>
#include<stdio.h>
int main()
{
	int a,cube;
	printf("Enter any number");
	scanf("%d",&a);
	cube=pow(a,3);
	printf("Cube of given number is:%d",cube);
}