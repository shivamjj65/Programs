#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER 2 NUMBERS");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping numbers are: a=%d,b=%d",a,b);
}