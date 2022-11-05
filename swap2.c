//Write program to swap 2 variables using a 3rd variable//
#include<conio.h>
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers:");
	scanf("%d %d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nNumbers after swapping is:%d %d",x ,y);
}